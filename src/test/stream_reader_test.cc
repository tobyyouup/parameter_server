#include "gtest/gtest.h"
#include "ps.h"
#include "data/stream_reader.h"

using namespace PS;

// TEST(StreamReader, read_proto) {
//   DataConfig dc;
//   // load adfea
//   dc.set_format(DataConfig::PROTO);
//   dc.add_file("../output/parsa_.*");

//   DataConfig dc2 = searchFiles(dc);
//   StreamReader<double> reader; reader.init(dc2);

//   MatrixPtrList<double> X;
//   while (reader.readMatrices(10000, &X)) {
//     CHECK_EQ(X.size(), 2);
//   }
// }

namespace PS {

// FixMe by Jun:
//  There is dependency between Manager and App::Create(),
//and since App::Create() is a application-specific stuffs,
//we also have to provide this dummy one for unit test binary
//,simply as a placeholder.
App* App::Create(const std::string& conf) {
  return NULL;
}

}

TEST(StreamReader, readWithSampleWeight) {
  DataConfig dc;
  // load adfea
  dc.set_format(DataConfig::TEXT);
  dc.set_ignore_feature_group(true);
  // load libsvm
  dc.set_text(DataConfig::LIBSVM);
  dc.add_file("./test_data/stream_reader_test/part-0001");

  DataConfig dc2 = searchFiles(dc);
  StreamReader<double> reader; reader.init(dc2);

  MatrixPtrList<double> X;
  reader.readMatrices(100, &X);
  CHECK_EQ(X.size(), 2);
  CHECK_EQ(X[0]->cols(), 2);
  CHECK_EQ(X[0]->safeColBlock(SizeR(0, 1))->cols(), 1);
  CHECK_EQ(X[0]->safeColBlock(SizeR(1, 2))->cols(), 1);
  CHECK_EQ(X[0]->safeColBlock(SizeR(0, 1))->rows(), 
           X[0]->safeColBlock(SizeR(1, 2))->rows());
  auto lbl = X[0]->safeColBlock(SizeR(0, 1))->value();
  auto lbl_w = X[0]->safeColBlock(SizeR(1, 2))->value();
  CHECK_EQ(lbl.size(), lbl_w.size());
  CHECK_EQ(lbl_w.size(), 10); 
  double exp_lbl[10] = {1, 1, 1, -1, -1, 1, 1, -1, -1, -1}; 
  double exp_lbl_w[10] = {1, 1, 0, 0, 0, 1, 1, 1, 1, 1}; 
  for (size_t i = 0; i < lbl.size(); ++i) {
    CHECK_DOUBLE_EQ(lbl[i], exp_lbl[i]);
    CHECK_DOUBLE_EQ(lbl_w[i], exp_lbl_w[i]);
  }
}

TEST(StreamReader, readWithoutSampleWeight) {
  DataConfig dc;
  // load adfea
  dc.set_format(DataConfig::TEXT);
  dc.set_ignore_feature_group(true);
  // load libsvm
  dc.set_text(DataConfig::LIBSVM);
  dc.add_file("./test_data/stream_reader_test/part-0002");

  DataConfig dc2 = searchFiles(dc);
  StreamReader<double> reader; reader.init(dc2);

  MatrixPtrList<double> X;
  reader.readMatrices(100, &X);
  CHECK_EQ(X.size(), 2);
  CHECK_EQ(X[0]->cols(), 1);
  auto lbl = X[0]->value();
  CHECK_EQ(lbl.size(), 10);
  double exp_lbl[10] = {1, 1, 1, -1, -1, 1, 1, -1, -1, -1};
  for (size_t i = 0; i < lbl.size(); ++i) {
    CHECK_DOUBLE_EQ(lbl[i], exp_lbl[i]);
  }
}

TEST(StreamReader, readWithOddsSampleWeight) {
  DataConfig dc;
  // load adfea
  dc.set_format(DataConfig::TEXT);
  dc.set_ignore_feature_group(true);
  // load libsvm
  dc.set_text(DataConfig::LIBSVM);
  dc.add_file("./test_data/stream_reader_test/part-0003");

  DataConfig dc2 = searchFiles(dc);
  StreamReader<double> reader; reader.init(dc2);

  MatrixPtrList<double> X;
  reader.readMatrices(100, &X);
  CHECK_EQ(X.size(), 2);
  CHECK_EQ(X[0]->cols(), 2);
  CHECK_EQ(X[0]->value().size(), 18);
}

// TEST(StreamReader, convert) {
//   DataConfig dc;
//   dc.set_format(DataConfig::TEXT);
//   dc.set_text(DataConfig::TERAFEA);
//   dc.add_file("../data/toutiao/data.txt");
//   dc.set_ignore_feature_group(true);

//   DataConfig dc2 = searchFiles(dc);
//   StreamReader<double> reader; reader.init(dc2);

//   MatrixPtrList<double> X;
//   reader.readMatrices(1000000, &X);
//   // CHECK_EQ(X.size(), 2);

//   X[0]->writeToBinFile("toutiao.Y");

//   for (int i = 1; i < X.size(); ++i) {
//     Localizer<Key, double> localizer;
//     SArray<Key> key;
//     localizer.countUniqIndex(X[i], &key);
//     key.writeToFile("toutiao.key."+std::to_string(X[i]->info().id()));
//     auto Z = localizer.remapIndex(key);
//     Z->writeToBinFile("toutiao.X."+std::to_string(X[i]->info().id()));
//   }
// }
