// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: learner/proto/sgd.proto

#ifndef PROTOBUF_learner_2fproto_2fsgd_2eproto__INCLUDED
#define PROTOBUF_learner_2fproto_2fsgd_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "data/proto/data.pb.h"
#include "learner/proto/workload.pb.h"
// @@protoc_insertion_point(includes)

namespace PS {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_learner_2fproto_2fsgd_2eproto();
void protobuf_AssignDesc_learner_2fproto_2fsgd_2eproto();
void protobuf_ShutdownFile_learner_2fproto_2fsgd_2eproto();

class SGDProgress;
class SGDCall;

enum SGDCall_Command {
  SGDCall_Command_REQUEST_WORKLOAD = 6,
  SGDCall_Command_UPDATE_MODEL = 1,
  SGDCall_Command_REPORT_PROGRESS = 2,
  SGDCall_Command_SAVE_MODEL = 3,
  SGDCall_Command_RECOVER = 4,
  SGDCall_Command_COMPUTE_VALIDATION_AUC = 5
};
bool SGDCall_Command_IsValid(int value);
const SGDCall_Command SGDCall_Command_Command_MIN = SGDCall_Command_UPDATE_MODEL;
const SGDCall_Command SGDCall_Command_Command_MAX = SGDCall_Command_REQUEST_WORKLOAD;
const int SGDCall_Command_Command_ARRAYSIZE = SGDCall_Command_Command_MAX + 1;

const ::google::protobuf::EnumDescriptor* SGDCall_Command_descriptor();
inline const ::std::string& SGDCall_Command_Name(SGDCall_Command value) {
  return ::google::protobuf::internal::NameOfEnum(
    SGDCall_Command_descriptor(), value);
}
inline bool SGDCall_Command_Parse(
    const ::std::string& name, SGDCall_Command* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SGDCall_Command>(
    SGDCall_Command_descriptor(), name, value);
}
// ===================================================================

class SGDProgress : public ::google::protobuf::Message {
 public:
  SGDProgress();
  virtual ~SGDProgress();

  SGDProgress(const SGDProgress& from);

  inline SGDProgress& operator=(const SGDProgress& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SGDProgress& default_instance();

  void Swap(SGDProgress* other);

  // implements Message ----------------------------------------------

  SGDProgress* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SGDProgress& from);
  void MergeFrom(const SGDProgress& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated double objective = 1;
  inline int objective_size() const;
  inline void clear_objective();
  static const int kObjectiveFieldNumber = 1;
  inline double objective(int index) const;
  inline void set_objective(int index, double value);
  inline void add_objective(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      objective() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_objective();

  // optional uint64 num_examples_processed = 2;
  inline bool has_num_examples_processed() const;
  inline void clear_num_examples_processed();
  static const int kNumExamplesProcessedFieldNumber = 2;
  inline ::google::protobuf::uint64 num_examples_processed() const;
  inline void set_num_examples_processed(::google::protobuf::uint64 value);

  // repeated double accuracy = 3;
  inline int accuracy_size() const;
  inline void clear_accuracy();
  static const int kAccuracyFieldNumber = 3;
  inline double accuracy(int index) const;
  inline void set_accuracy(int index, double value);
  inline void add_accuracy(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      accuracy() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_accuracy();

  // repeated double auc = 4;
  inline int auc_size() const;
  inline void clear_auc();
  static const int kAucFieldNumber = 4;
  inline double auc(int index) const;
  inline void set_auc(int index, double value);
  inline void add_auc(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      auc() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_auc();

  // optional uint64 nnz = 5;
  inline bool has_nnz() const;
  inline void clear_nnz();
  static const int kNnzFieldNumber = 5;
  inline ::google::protobuf::uint64 nnz() const;
  inline void set_nnz(::google::protobuf::uint64 value);

  // optional double weight_sum = 6;
  inline bool has_weight_sum() const;
  inline void clear_weight_sum();
  static const int kWeightSumFieldNumber = 6;
  inline double weight_sum() const;
  inline void set_weight_sum(double value);

  // optional double delta_sum = 7;
  inline bool has_delta_sum() const;
  inline void clear_delta_sum();
  static const int kDeltaSumFieldNumber = 7;
  inline double delta_sum() const;
  inline void set_delta_sum(double value);

  // @@protoc_insertion_point(class_scope:PS.SGDProgress)
 private:
  inline void set_has_num_examples_processed();
  inline void clear_has_num_examples_processed();
  inline void set_has_nnz();
  inline void clear_has_nnz();
  inline void set_has_weight_sum();
  inline void clear_has_weight_sum();
  inline void set_has_delta_sum();
  inline void clear_has_delta_sum();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< double > objective_;
  ::google::protobuf::uint64 num_examples_processed_;
  ::google::protobuf::RepeatedField< double > accuracy_;
  ::google::protobuf::RepeatedField< double > auc_;
  ::google::protobuf::uint64 nnz_;
  double weight_sum_;
  double delta_sum_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_learner_2fproto_2fsgd_2eproto();
  friend void protobuf_AssignDesc_learner_2fproto_2fsgd_2eproto();
  friend void protobuf_ShutdownFile_learner_2fproto_2fsgd_2eproto();

  void InitAsDefaultInstance();
  static SGDProgress* default_instance_;
};
// -------------------------------------------------------------------

class SGDCall : public ::google::protobuf::Message {
 public:
  SGDCall();
  virtual ~SGDCall();

  SGDCall(const SGDCall& from);

  inline SGDCall& operator=(const SGDCall& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SGDCall& default_instance();

  void Swap(SGDCall* other);

  // implements Message ----------------------------------------------

  SGDCall* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SGDCall& from);
  void MergeFrom(const SGDCall& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef SGDCall_Command Command;
  static const Command REQUEST_WORKLOAD = SGDCall_Command_REQUEST_WORKLOAD;
  static const Command UPDATE_MODEL = SGDCall_Command_UPDATE_MODEL;
  static const Command REPORT_PROGRESS = SGDCall_Command_REPORT_PROGRESS;
  static const Command SAVE_MODEL = SGDCall_Command_SAVE_MODEL;
  static const Command RECOVER = SGDCall_Command_RECOVER;
  static const Command COMPUTE_VALIDATION_AUC = SGDCall_Command_COMPUTE_VALIDATION_AUC;
  static inline bool Command_IsValid(int value) {
    return SGDCall_Command_IsValid(value);
  }
  static const Command Command_MIN =
    SGDCall_Command_Command_MIN;
  static const Command Command_MAX =
    SGDCall_Command_Command_MAX;
  static const int Command_ARRAYSIZE =
    SGDCall_Command_Command_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Command_descriptor() {
    return SGDCall_Command_descriptor();
  }
  static inline const ::std::string& Command_Name(Command value) {
    return SGDCall_Command_Name(value);
  }
  static inline bool Command_Parse(const ::std::string& name,
      Command* value) {
    return SGDCall_Command_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .PS.SGDCall.Command cmd = 1;
  inline bool has_cmd() const;
  inline void clear_cmd();
  static const int kCmdFieldNumber = 1;
  inline ::PS::SGDCall_Command cmd() const;
  inline void set_cmd(::PS::SGDCall_Command value);

  // optional .PS.Workload load = 2;
  inline bool has_load() const;
  inline void clear_load();
  static const int kLoadFieldNumber = 2;
  inline const ::PS::Workload& load() const;
  inline ::PS::Workload* mutable_load();
  inline ::PS::Workload* release_load();
  inline void set_allocated_load(::PS::Workload* load);

  // @@protoc_insertion_point(class_scope:PS.SGDCall)
 private:
  inline void set_has_cmd();
  inline void clear_has_cmd();
  inline void set_has_load();
  inline void clear_has_load();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::PS::Workload* load_;
  int cmd_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_learner_2fproto_2fsgd_2eproto();
  friend void protobuf_AssignDesc_learner_2fproto_2fsgd_2eproto();
  friend void protobuf_ShutdownFile_learner_2fproto_2fsgd_2eproto();

  void InitAsDefaultInstance();
  static SGDCall* default_instance_;
};
// ===================================================================


// ===================================================================

// SGDProgress

// repeated double objective = 1;
inline int SGDProgress::objective_size() const {
  return objective_.size();
}
inline void SGDProgress::clear_objective() {
  objective_.Clear();
}
inline double SGDProgress::objective(int index) const {
  return objective_.Get(index);
}
inline void SGDProgress::set_objective(int index, double value) {
  objective_.Set(index, value);
}
inline void SGDProgress::add_objective(double value) {
  objective_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
SGDProgress::objective() const {
  return objective_;
}
inline ::google::protobuf::RepeatedField< double >*
SGDProgress::mutable_objective() {
  return &objective_;
}

// optional uint64 num_examples_processed = 2;
inline bool SGDProgress::has_num_examples_processed() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SGDProgress::set_has_num_examples_processed() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SGDProgress::clear_has_num_examples_processed() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SGDProgress::clear_num_examples_processed() {
  num_examples_processed_ = GOOGLE_ULONGLONG(0);
  clear_has_num_examples_processed();
}
inline ::google::protobuf::uint64 SGDProgress::num_examples_processed() const {
  return num_examples_processed_;
}
inline void SGDProgress::set_num_examples_processed(::google::protobuf::uint64 value) {
  set_has_num_examples_processed();
  num_examples_processed_ = value;
}

// repeated double accuracy = 3;
inline int SGDProgress::accuracy_size() const {
  return accuracy_.size();
}
inline void SGDProgress::clear_accuracy() {
  accuracy_.Clear();
}
inline double SGDProgress::accuracy(int index) const {
  return accuracy_.Get(index);
}
inline void SGDProgress::set_accuracy(int index, double value) {
  accuracy_.Set(index, value);
}
inline void SGDProgress::add_accuracy(double value) {
  accuracy_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
SGDProgress::accuracy() const {
  return accuracy_;
}
inline ::google::protobuf::RepeatedField< double >*
SGDProgress::mutable_accuracy() {
  return &accuracy_;
}

// repeated double auc = 4;
inline int SGDProgress::auc_size() const {
  return auc_.size();
}
inline void SGDProgress::clear_auc() {
  auc_.Clear();
}
inline double SGDProgress::auc(int index) const {
  return auc_.Get(index);
}
inline void SGDProgress::set_auc(int index, double value) {
  auc_.Set(index, value);
}
inline void SGDProgress::add_auc(double value) {
  auc_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
SGDProgress::auc() const {
  return auc_;
}
inline ::google::protobuf::RepeatedField< double >*
SGDProgress::mutable_auc() {
  return &auc_;
}

// optional uint64 nnz = 5;
inline bool SGDProgress::has_nnz() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SGDProgress::set_has_nnz() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SGDProgress::clear_has_nnz() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SGDProgress::clear_nnz() {
  nnz_ = GOOGLE_ULONGLONG(0);
  clear_has_nnz();
}
inline ::google::protobuf::uint64 SGDProgress::nnz() const {
  return nnz_;
}
inline void SGDProgress::set_nnz(::google::protobuf::uint64 value) {
  set_has_nnz();
  nnz_ = value;
}

// optional double weight_sum = 6;
inline bool SGDProgress::has_weight_sum() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SGDProgress::set_has_weight_sum() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SGDProgress::clear_has_weight_sum() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SGDProgress::clear_weight_sum() {
  weight_sum_ = 0;
  clear_has_weight_sum();
}
inline double SGDProgress::weight_sum() const {
  return weight_sum_;
}
inline void SGDProgress::set_weight_sum(double value) {
  set_has_weight_sum();
  weight_sum_ = value;
}

// optional double delta_sum = 7;
inline bool SGDProgress::has_delta_sum() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SGDProgress::set_has_delta_sum() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SGDProgress::clear_has_delta_sum() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SGDProgress::clear_delta_sum() {
  delta_sum_ = 0;
  clear_has_delta_sum();
}
inline double SGDProgress::delta_sum() const {
  return delta_sum_;
}
inline void SGDProgress::set_delta_sum(double value) {
  set_has_delta_sum();
  delta_sum_ = value;
}

// -------------------------------------------------------------------

// SGDCall

// required .PS.SGDCall.Command cmd = 1;
inline bool SGDCall::has_cmd() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SGDCall::set_has_cmd() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SGDCall::clear_has_cmd() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SGDCall::clear_cmd() {
  cmd_ = 6;
  clear_has_cmd();
}
inline ::PS::SGDCall_Command SGDCall::cmd() const {
  return static_cast< ::PS::SGDCall_Command >(cmd_);
}
inline void SGDCall::set_cmd(::PS::SGDCall_Command value) {
  assert(::PS::SGDCall_Command_IsValid(value));
  set_has_cmd();
  cmd_ = value;
}

// optional .PS.Workload load = 2;
inline bool SGDCall::has_load() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SGDCall::set_has_load() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SGDCall::clear_has_load() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SGDCall::clear_load() {
  if (load_ != NULL) load_->::PS::Workload::Clear();
  clear_has_load();
}
inline const ::PS::Workload& SGDCall::load() const {
  return load_ != NULL ? *load_ : *default_instance_->load_;
}
inline ::PS::Workload* SGDCall::mutable_load() {
  set_has_load();
  if (load_ == NULL) load_ = new ::PS::Workload;
  return load_;
}
inline ::PS::Workload* SGDCall::release_load() {
  clear_has_load();
  ::PS::Workload* temp = load_;
  load_ = NULL;
  return temp;
}
inline void SGDCall::set_allocated_load(::PS::Workload* load) {
  delete load_;
  load_ = load;
  if (load) {
    set_has_load();
  } else {
    clear_has_load();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PS::SGDCall_Command>() {
  return ::PS::SGDCall_Command_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_learner_2fproto_2fsgd_2eproto__INCLUDED
