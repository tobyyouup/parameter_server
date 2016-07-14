// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data/proto/data.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "data/proto/data.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace PS {

namespace {

const ::google::protobuf::Descriptor* DataConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DataConfig_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* DataConfig_DataFormat_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DataConfig_TextFormat_descriptor_ = NULL;
const ::google::protobuf::Descriptor* HDFSConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HDFSConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_data_2fproto_2fdata_2eproto() {
  protobuf_AddDesc_data_2fproto_2fdata_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "data/proto/data.proto");
  GOOGLE_CHECK(file != NULL);
  DataConfig_descriptor_ = file->message_type(0);
  static const int DataConfig_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, format_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, text_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, file_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, hdfs_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, ignore_feature_group_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, max_num_files_per_worker_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, max_num_lines_per_file_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, shuffle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, replica_),
  };
  DataConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DataConfig_descriptor_,
      DataConfig::default_instance_,
      DataConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DataConfig));
  DataConfig_DataFormat_descriptor_ = DataConfig_descriptor_->enum_type(0);
  DataConfig_TextFormat_descriptor_ = DataConfig_descriptor_->enum_type(1);
  HDFSConfig_descriptor_ = file->message_type(1);
  static const int HDFSConfig_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HDFSConfig, home_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HDFSConfig, ugi_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HDFSConfig, namenode_),
  };
  HDFSConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HDFSConfig_descriptor_,
      HDFSConfig::default_instance_,
      HDFSConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HDFSConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HDFSConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HDFSConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_data_2fproto_2fdata_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DataConfig_descriptor_, &DataConfig::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HDFSConfig_descriptor_, &HDFSConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_data_2fproto_2fdata_2eproto() {
  delete DataConfig::default_instance_;
  delete DataConfig_reflection_;
  delete HDFSConfig::default_instance_;
  delete HDFSConfig_reflection_;
}

void protobuf_AddDesc_data_2fproto_2fdata_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::PS::protobuf_AddDesc_util_2fproto_2frange_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025data/proto/data.proto\022\002PS\032\026util/proto/"
    "range.proto\"\330\003\n\nDataConfig\022)\n\006format\030\001 \002"
    "(\0162\031.PS.DataConfig.DataFormat\022\'\n\004text\030\002 "
    "\001(\0162\031.PS.DataConfig.TextFormat\022\014\n\004file\030\003"
    " \003(\t\022\034\n\004hdfs\030\005 \001(\0132\016.PS.HDFSConfig\022\034\n\024ig"
    "nore_feature_group\030\006 \001(\010\022$\n\030max_num_file"
    "s_per_worker\030\007 \001(\005:\002-1\022\"\n\026max_num_lines_"
    "per_file\030\010 \001(\005:\002-1\022\026\n\007shuffle\030\t \001(\010:\005fal"
    "se\022\032\n\005range\030\004 \001(\0132\013.PS.PbRange\022\022\n\007replic"
    "a\030\n \001(\005:\0011\"*\n\nDataFormat\022\007\n\003BIN\020\001\022\t\n\005PRO"
    "TO\020\002\022\010\n\004TEXT\020\003\"n\n\nTextFormat\022\t\n\005DENSE\020\001\022"
    "\n\n\006SPARSE\020\002\022\021\n\rSPARSE_BINARY\020\003\022\t\n\005ADFEA\020"
    "\004\022\n\n\006LIBSVM\020\005\022\013\n\007TERAFEA\020\006\022\006\n\002VW\020\007\022\n\n\006CR"
    "ITEO\020\t\"9\n\nHDFSConfig\022\014\n\004home\030\001 \001(\t\022\013\n\003ug"
    "i\030\002 \001(\t\022\020\n\010namenode\030\004 \001(\t", 585);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "data/proto/data.proto", &protobuf_RegisterTypes);
  DataConfig::default_instance_ = new DataConfig();
  HDFSConfig::default_instance_ = new HDFSConfig();
  DataConfig::default_instance_->InitAsDefaultInstance();
  HDFSConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_data_2fproto_2fdata_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_data_2fproto_2fdata_2eproto {
  StaticDescriptorInitializer_data_2fproto_2fdata_2eproto() {
    protobuf_AddDesc_data_2fproto_2fdata_2eproto();
  }
} static_descriptor_initializer_data_2fproto_2fdata_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* DataConfig_DataFormat_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DataConfig_DataFormat_descriptor_;
}
bool DataConfig_DataFormat_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const DataConfig_DataFormat DataConfig::BIN;
const DataConfig_DataFormat DataConfig::PROTO;
const DataConfig_DataFormat DataConfig::TEXT;
const DataConfig_DataFormat DataConfig::DataFormat_MIN;
const DataConfig_DataFormat DataConfig::DataFormat_MAX;
const int DataConfig::DataFormat_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* DataConfig_TextFormat_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DataConfig_TextFormat_descriptor_;
}
bool DataConfig_TextFormat_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const DataConfig_TextFormat DataConfig::DENSE;
const DataConfig_TextFormat DataConfig::SPARSE;
const DataConfig_TextFormat DataConfig::SPARSE_BINARY;
const DataConfig_TextFormat DataConfig::ADFEA;
const DataConfig_TextFormat DataConfig::LIBSVM;
const DataConfig_TextFormat DataConfig::TERAFEA;
const DataConfig_TextFormat DataConfig::VW;
const DataConfig_TextFormat DataConfig::CRITEO;
const DataConfig_TextFormat DataConfig::TextFormat_MIN;
const DataConfig_TextFormat DataConfig::TextFormat_MAX;
const int DataConfig::TextFormat_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int DataConfig::kFormatFieldNumber;
const int DataConfig::kTextFieldNumber;
const int DataConfig::kFileFieldNumber;
const int DataConfig::kHdfsFieldNumber;
const int DataConfig::kIgnoreFeatureGroupFieldNumber;
const int DataConfig::kMaxNumFilesPerWorkerFieldNumber;
const int DataConfig::kMaxNumLinesPerFileFieldNumber;
const int DataConfig::kShuffleFieldNumber;
const int DataConfig::kRangeFieldNumber;
const int DataConfig::kReplicaFieldNumber;
#endif  // !_MSC_VER

DataConfig::DataConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DataConfig::InitAsDefaultInstance() {
  hdfs_ = const_cast< ::PS::HDFSConfig*>(&::PS::HDFSConfig::default_instance());
  range_ = const_cast< ::PS::PbRange*>(&::PS::PbRange::default_instance());
}

DataConfig::DataConfig(const DataConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DataConfig::SharedCtor() {
  _cached_size_ = 0;
  format_ = 1;
  text_ = 1;
  hdfs_ = NULL;
  ignore_feature_group_ = false;
  max_num_files_per_worker_ = -1;
  max_num_lines_per_file_ = -1;
  shuffle_ = false;
  range_ = NULL;
  replica_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DataConfig::~DataConfig() {
  SharedDtor();
}

void DataConfig::SharedDtor() {
  if (this != default_instance_) {
    delete hdfs_;
    delete range_;
  }
}

void DataConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DataConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DataConfig_descriptor_;
}

const DataConfig& DataConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_data_2fproto_2fdata_2eproto();
  return *default_instance_;
}

DataConfig* DataConfig::default_instance_ = NULL;

DataConfig* DataConfig::New() const {
  return new DataConfig;
}

void DataConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    format_ = 1;
    text_ = 1;
    if (has_hdfs()) {
      if (hdfs_ != NULL) hdfs_->::PS::HDFSConfig::Clear();
    }
    ignore_feature_group_ = false;
    max_num_files_per_worker_ = -1;
    max_num_lines_per_file_ = -1;
    shuffle_ = false;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (has_range()) {
      if (range_ != NULL) range_->::PS::PbRange::Clear();
    }
    replica_ = 1;
  }
  file_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DataConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .PS.DataConfig.DataFormat format = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::PS::DataConfig_DataFormat_IsValid(value)) {
            set_format(static_cast< ::PS::DataConfig_DataFormat >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_text;
        break;
      }

      // optional .PS.DataConfig.TextFormat text = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_text:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::PS::DataConfig_TextFormat_IsValid(value)) {
            set_text(static_cast< ::PS::DataConfig_TextFormat >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_file;
        break;
      }

      // repeated string file = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_file:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_file()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->file(this->file_size() - 1).data(),
            this->file(this->file_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_file;
        if (input->ExpectTag(34)) goto parse_range;
        break;
      }

      // optional .PS.PbRange range = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_range:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_range()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_hdfs;
        break;
      }

      // optional .PS.HDFSConfig hdfs = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_hdfs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_hdfs()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_ignore_feature_group;
        break;
      }

      // optional bool ignore_feature_group = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ignore_feature_group:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &ignore_feature_group_)));
          set_has_ignore_feature_group();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_max_num_files_per_worker;
        break;
      }

      // optional int32 max_num_files_per_worker = 7 [default = -1];
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_max_num_files_per_worker:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_num_files_per_worker_)));
          set_has_max_num_files_per_worker();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_max_num_lines_per_file;
        break;
      }

      // optional int32 max_num_lines_per_file = 8 [default = -1];
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_max_num_lines_per_file:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_num_lines_per_file_)));
          set_has_max_num_lines_per_file();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_shuffle;
        break;
      }

      // optional bool shuffle = 9 [default = false];
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_shuffle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &shuffle_)));
          set_has_shuffle();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_replica;
        break;
      }

      // optional int32 replica = 10 [default = 1];
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_replica:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &replica_)));
          set_has_replica();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DataConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .PS.DataConfig.DataFormat format = 1;
  if (has_format()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->format(), output);
  }

  // optional .PS.DataConfig.TextFormat text = 2;
  if (has_text()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->text(), output);
  }

  // repeated string file = 3;
  for (int i = 0; i < this->file_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->file(i).data(), this->file(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->file(i), output);
  }

  // optional .PS.PbRange range = 4;
  if (has_range()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->range(), output);
  }

  // optional .PS.HDFSConfig hdfs = 5;
  if (has_hdfs()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->hdfs(), output);
  }

  // optional bool ignore_feature_group = 6;
  if (has_ignore_feature_group()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->ignore_feature_group(), output);
  }

  // optional int32 max_num_files_per_worker = 7 [default = -1];
  if (has_max_num_files_per_worker()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->max_num_files_per_worker(), output);
  }

  // optional int32 max_num_lines_per_file = 8 [default = -1];
  if (has_max_num_lines_per_file()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->max_num_lines_per_file(), output);
  }

  // optional bool shuffle = 9 [default = false];
  if (has_shuffle()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->shuffle(), output);
  }

  // optional int32 replica = 10 [default = 1];
  if (has_replica()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->replica(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DataConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .PS.DataConfig.DataFormat format = 1;
  if (has_format()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->format(), target);
  }

  // optional .PS.DataConfig.TextFormat text = 2;
  if (has_text()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->text(), target);
  }

  // repeated string file = 3;
  for (int i = 0; i < this->file_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->file(i).data(), this->file(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->file(i), target);
  }

  // optional .PS.PbRange range = 4;
  if (has_range()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->range(), target);
  }

  // optional .PS.HDFSConfig hdfs = 5;
  if (has_hdfs()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->hdfs(), target);
  }

  // optional bool ignore_feature_group = 6;
  if (has_ignore_feature_group()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->ignore_feature_group(), target);
  }

  // optional int32 max_num_files_per_worker = 7 [default = -1];
  if (has_max_num_files_per_worker()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->max_num_files_per_worker(), target);
  }

  // optional int32 max_num_lines_per_file = 8 [default = -1];
  if (has_max_num_lines_per_file()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->max_num_lines_per_file(), target);
  }

  // optional bool shuffle = 9 [default = false];
  if (has_shuffle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->shuffle(), target);
  }

  // optional int32 replica = 10 [default = 1];
  if (has_replica()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->replica(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DataConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .PS.DataConfig.DataFormat format = 1;
    if (has_format()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->format());
    }

    // optional .PS.DataConfig.TextFormat text = 2;
    if (has_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->text());
    }

    // optional .PS.HDFSConfig hdfs = 5;
    if (has_hdfs()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->hdfs());
    }

    // optional bool ignore_feature_group = 6;
    if (has_ignore_feature_group()) {
      total_size += 1 + 1;
    }

    // optional int32 max_num_files_per_worker = 7 [default = -1];
    if (has_max_num_files_per_worker()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_num_files_per_worker());
    }

    // optional int32 max_num_lines_per_file = 8 [default = -1];
    if (has_max_num_lines_per_file()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_num_lines_per_file());
    }

    // optional bool shuffle = 9 [default = false];
    if (has_shuffle()) {
      total_size += 1 + 1;
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional .PS.PbRange range = 4;
    if (has_range()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->range());
    }

    // optional int32 replica = 10 [default = 1];
    if (has_replica()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->replica());
    }

  }
  // repeated string file = 3;
  total_size += 1 * this->file_size();
  for (int i = 0; i < this->file_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->file(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DataConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DataConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DataConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DataConfig::MergeFrom(const DataConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  file_.MergeFrom(from.file_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_format()) {
      set_format(from.format());
    }
    if (from.has_text()) {
      set_text(from.text());
    }
    if (from.has_hdfs()) {
      mutable_hdfs()->::PS::HDFSConfig::MergeFrom(from.hdfs());
    }
    if (from.has_ignore_feature_group()) {
      set_ignore_feature_group(from.ignore_feature_group());
    }
    if (from.has_max_num_files_per_worker()) {
      set_max_num_files_per_worker(from.max_num_files_per_worker());
    }
    if (from.has_max_num_lines_per_file()) {
      set_max_num_lines_per_file(from.max_num_lines_per_file());
    }
    if (from.has_shuffle()) {
      set_shuffle(from.shuffle());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_range()) {
      mutable_range()->::PS::PbRange::MergeFrom(from.range());
    }
    if (from.has_replica()) {
      set_replica(from.replica());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DataConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DataConfig::CopyFrom(const DataConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataConfig::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_range()) {
    if (!this->range().IsInitialized()) return false;
  }
  return true;
}

void DataConfig::Swap(DataConfig* other) {
  if (other != this) {
    std::swap(format_, other->format_);
    std::swap(text_, other->text_);
    file_.Swap(&other->file_);
    std::swap(hdfs_, other->hdfs_);
    std::swap(ignore_feature_group_, other->ignore_feature_group_);
    std::swap(max_num_files_per_worker_, other->max_num_files_per_worker_);
    std::swap(max_num_lines_per_file_, other->max_num_lines_per_file_);
    std::swap(shuffle_, other->shuffle_);
    std::swap(range_, other->range_);
    std::swap(replica_, other->replica_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DataConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DataConfig_descriptor_;
  metadata.reflection = DataConfig_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int HDFSConfig::kHomeFieldNumber;
const int HDFSConfig::kUgiFieldNumber;
const int HDFSConfig::kNamenodeFieldNumber;
#endif  // !_MSC_VER

HDFSConfig::HDFSConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void HDFSConfig::InitAsDefaultInstance() {
}

HDFSConfig::HDFSConfig(const HDFSConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void HDFSConfig::SharedCtor() {
  _cached_size_ = 0;
  home_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ugi_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  namenode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HDFSConfig::~HDFSConfig() {
  SharedDtor();
}

void HDFSConfig::SharedDtor() {
  if (home_ != &::google::protobuf::internal::kEmptyString) {
    delete home_;
  }
  if (ugi_ != &::google::protobuf::internal::kEmptyString) {
    delete ugi_;
  }
  if (namenode_ != &::google::protobuf::internal::kEmptyString) {
    delete namenode_;
  }
  if (this != default_instance_) {
  }
}

void HDFSConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HDFSConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HDFSConfig_descriptor_;
}

const HDFSConfig& HDFSConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_data_2fproto_2fdata_2eproto();
  return *default_instance_;
}

HDFSConfig* HDFSConfig::default_instance_ = NULL;

HDFSConfig* HDFSConfig::New() const {
  return new HDFSConfig;
}

void HDFSConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_home()) {
      if (home_ != &::google::protobuf::internal::kEmptyString) {
        home_->clear();
      }
    }
    if (has_ugi()) {
      if (ugi_ != &::google::protobuf::internal::kEmptyString) {
        ugi_->clear();
      }
    }
    if (has_namenode()) {
      if (namenode_ != &::google::protobuf::internal::kEmptyString) {
        namenode_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HDFSConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string home = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_home()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->home().data(), this->home().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_ugi;
        break;
      }

      // optional string ugi = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ugi:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ugi()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->ugi().data(), this->ugi().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_namenode;
        break;
      }

      // optional string namenode = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_namenode:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_namenode()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->namenode().data(), this->namenode().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void HDFSConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string home = 1;
  if (has_home()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->home().data(), this->home().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->home(), output);
  }

  // optional string ugi = 2;
  if (has_ugi()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ugi().data(), this->ugi().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->ugi(), output);
  }

  // optional string namenode = 4;
  if (has_namenode()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->namenode().data(), this->namenode().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->namenode(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* HDFSConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string home = 1;
  if (has_home()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->home().data(), this->home().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->home(), target);
  }

  // optional string ugi = 2;
  if (has_ugi()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ugi().data(), this->ugi().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->ugi(), target);
  }

  // optional string namenode = 4;
  if (has_namenode()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->namenode().data(), this->namenode().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->namenode(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int HDFSConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string home = 1;
    if (has_home()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->home());
    }

    // optional string ugi = 2;
    if (has_ugi()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ugi());
    }

    // optional string namenode = 4;
    if (has_namenode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->namenode());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HDFSConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HDFSConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HDFSConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HDFSConfig::MergeFrom(const HDFSConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_home()) {
      set_home(from.home());
    }
    if (from.has_ugi()) {
      set_ugi(from.ugi());
    }
    if (from.has_namenode()) {
      set_namenode(from.namenode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HDFSConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HDFSConfig::CopyFrom(const HDFSConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HDFSConfig::IsInitialized() const {

  return true;
}

void HDFSConfig::Swap(HDFSConfig* other) {
  if (other != this) {
    std::swap(home_, other->home_);
    std::swap(ugi_, other->ugi_);
    std::swap(namenode_, other->namenode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HDFSConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HDFSConfig_descriptor_;
  metadata.reflection = HDFSConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

// @@protoc_insertion_point(global_scope)
