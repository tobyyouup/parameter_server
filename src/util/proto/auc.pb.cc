// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: util/proto/auc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "util/proto/auc.pb.h"

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

const ::google::protobuf::Descriptor* AUCData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AUCData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_util_2fproto_2fauc_2eproto() {
  protobuf_AddDesc_util_2fproto_2fauc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "util/proto/auc.proto");
  GOOGLE_CHECK(file != NULL);
  AUCData_descriptor_ = file->message_type(0);
  static const int AUCData_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AUCData, tp_key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AUCData, tp_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AUCData, fp_key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AUCData, fp_count_),
  };
  AUCData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AUCData_descriptor_,
      AUCData::default_instance_,
      AUCData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AUCData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AUCData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AUCData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_util_2fproto_2fauc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AUCData_descriptor_, &AUCData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_util_2fproto_2fauc_2eproto() {
  delete AUCData::default_instance_;
  delete AUCData_reflection_;
}

void protobuf_AddDesc_util_2fproto_2fauc_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024util/proto/auc.proto\022\002PS\"M\n\007AUCData\022\016\n"
    "\006tp_key\030\001 \003(\003\022\020\n\010tp_count\030\002 \003(\004\022\016\n\006fp_ke"
    "y\030\003 \003(\003\022\020\n\010fp_count\030\004 \003(\004", 105);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "util/proto/auc.proto", &protobuf_RegisterTypes);
  AUCData::default_instance_ = new AUCData();
  AUCData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_util_2fproto_2fauc_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_util_2fproto_2fauc_2eproto {
  StaticDescriptorInitializer_util_2fproto_2fauc_2eproto() {
    protobuf_AddDesc_util_2fproto_2fauc_2eproto();
  }
} static_descriptor_initializer_util_2fproto_2fauc_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int AUCData::kTpKeyFieldNumber;
const int AUCData::kTpCountFieldNumber;
const int AUCData::kFpKeyFieldNumber;
const int AUCData::kFpCountFieldNumber;
#endif  // !_MSC_VER

AUCData::AUCData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AUCData::InitAsDefaultInstance() {
}

AUCData::AUCData(const AUCData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AUCData::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AUCData::~AUCData() {
  SharedDtor();
}

void AUCData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AUCData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AUCData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AUCData_descriptor_;
}

const AUCData& AUCData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_util_2fproto_2fauc_2eproto();
  return *default_instance_;
}

AUCData* AUCData::default_instance_ = NULL;

AUCData* AUCData::New() const {
  return new AUCData;
}

void AUCData::Clear() {
  tp_key_.Clear();
  tp_count_.Clear();
  fp_key_.Clear();
  fp_count_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AUCData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int64 tp_key = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_tp_key:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 8, input, this->mutable_tp_key())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_tp_key())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(8)) goto parse_tp_key;
        if (input->ExpectTag(16)) goto parse_tp_count;
        break;
      }

      // repeated uint64 tp_count = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_tp_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 16, input, this->mutable_tp_count())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_tp_count())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_tp_count;
        if (input->ExpectTag(24)) goto parse_fp_key;
        break;
      }

      // repeated int64 fp_key = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_fp_key:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 24, input, this->mutable_fp_key())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_fp_key())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_fp_key;
        if (input->ExpectTag(32)) goto parse_fp_count;
        break;
      }

      // repeated uint64 fp_count = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_fp_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 32, input, this->mutable_fp_count())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_fp_count())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_fp_count;
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

void AUCData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated int64 tp_key = 1;
  for (int i = 0; i < this->tp_key_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(
      1, this->tp_key(i), output);
  }

  // repeated uint64 tp_count = 2;
  for (int i = 0; i < this->tp_count_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(
      2, this->tp_count(i), output);
  }

  // repeated int64 fp_key = 3;
  for (int i = 0; i < this->fp_key_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(
      3, this->fp_key(i), output);
  }

  // repeated uint64 fp_count = 4;
  for (int i = 0; i < this->fp_count_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(
      4, this->fp_count(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AUCData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated int64 tp_key = 1;
  for (int i = 0; i < this->tp_key_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt64ToArray(1, this->tp_key(i), target);
  }

  // repeated uint64 tp_count = 2;
  for (int i = 0; i < this->tp_count_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64ToArray(2, this->tp_count(i), target);
  }

  // repeated int64 fp_key = 3;
  for (int i = 0; i < this->fp_key_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt64ToArray(3, this->fp_key(i), target);
  }

  // repeated uint64 fp_count = 4;
  for (int i = 0; i < this->fp_count_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64ToArray(4, this->fp_count(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AUCData::ByteSize() const {
  int total_size = 0;

  // repeated int64 tp_key = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->tp_key_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int64Size(this->tp_key(i));
    }
    total_size += 1 * this->tp_key_size() + data_size;
  }

  // repeated uint64 tp_count = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->tp_count_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt64Size(this->tp_count(i));
    }
    total_size += 1 * this->tp_count_size() + data_size;
  }

  // repeated int64 fp_key = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->fp_key_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int64Size(this->fp_key(i));
    }
    total_size += 1 * this->fp_key_size() + data_size;
  }

  // repeated uint64 fp_count = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->fp_count_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt64Size(this->fp_count(i));
    }
    total_size += 1 * this->fp_count_size() + data_size;
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

void AUCData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AUCData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AUCData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AUCData::MergeFrom(const AUCData& from) {
  GOOGLE_CHECK_NE(&from, this);
  tp_key_.MergeFrom(from.tp_key_);
  tp_count_.MergeFrom(from.tp_count_);
  fp_key_.MergeFrom(from.fp_key_);
  fp_count_.MergeFrom(from.fp_count_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AUCData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AUCData::CopyFrom(const AUCData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AUCData::IsInitialized() const {

  return true;
}

void AUCData::Swap(AUCData* other) {
  if (other != this) {
    tp_key_.Swap(&other->tp_key_);
    tp_count_.Swap(&other->tp_count_);
    fp_key_.Swap(&other->fp_key_);
    fp_count_.Swap(&other->fp_count_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AUCData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AUCData_descriptor_;
  metadata.reflection = AUCData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

// @@protoc_insertion_point(global_scope)