// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: filter/proto/filter.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "filter/proto/filter.pb.h"

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

const ::google::protobuf::Descriptor* FilterConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FilterConfig_reflection_ = NULL;
const ::google::protobuf::Descriptor* FilterConfig_FixedFloatConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FilterConfig_FixedFloatConfig_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* FilterConfig_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_filter_2fproto_2ffilter_2eproto() {
  protobuf_AddDesc_filter_2fproto_2ffilter_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "filter/proto/filter.proto");
  GOOGLE_CHECK(file != NULL);
  FilterConfig_descriptor_ = file->message_type(0);
  static const int FilterConfig_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig, clear_cache_if_done_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig, num_bytes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig, fixed_point_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig, mean_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig, std_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig, signature_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig, uncompressed_size_),
  };
  FilterConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FilterConfig_descriptor_,
      FilterConfig::default_instance_,
      FilterConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FilterConfig));
  FilterConfig_FixedFloatConfig_descriptor_ = FilterConfig_descriptor_->nested_type(0);
  static const int FilterConfig_FixedFloatConfig_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig_FixedFloatConfig, min_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig_FixedFloatConfig, max_value_),
  };
  FilterConfig_FixedFloatConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FilterConfig_FixedFloatConfig_descriptor_,
      FilterConfig_FixedFloatConfig::default_instance_,
      FilterConfig_FixedFloatConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig_FixedFloatConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FilterConfig_FixedFloatConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FilterConfig_FixedFloatConfig));
  FilterConfig_Type_descriptor_ = FilterConfig_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_filter_2fproto_2ffilter_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FilterConfig_descriptor_, &FilterConfig::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FilterConfig_FixedFloatConfig_descriptor_, &FilterConfig_FixedFloatConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_filter_2fproto_2ffilter_2eproto() {
  delete FilterConfig::default_instance_;
  delete FilterConfig_reflection_;
  delete FilterConfig_FixedFloatConfig::default_instance_;
  delete FilterConfig_FixedFloatConfig_reflection_;
}

void protobuf_AddDesc_filter_2fproto_2ffilter_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031filter/proto/filter.proto\022\002PS\"\366\002\n\014Filt"
    "erConfig\022#\n\004type\030\001 \002(\0162\025.PS.FilterConfig"
    ".Type\022\"\n\023clear_cache_if_done\030\024 \001(\010:\005fals"
    "e\022\024\n\tnum_bytes\030\005 \001(\005:\0013\0226\n\013fixed_point\030\004"
    " \003(\0132!.PS.FilterConfig.FixedFloatConfig\022"
    "\014\n\004mean\030\006 \001(\002\022\013\n\003std\030\007 \001(\002\022\021\n\tsignature\030"
    "\002 \001(\r\022\031\n\021uncompressed_size\030\003 \003(\004\032\?\n\020Fixe"
    "dFloatConfig\022\025\n\tmin_value\030\001 \001(\002:\002-1\022\024\n\tm"
    "ax_value\030\002 \001(\002:\0011\"E\n\004Type\022\017\n\013KEY_CACHING"
    "\020\001\022\017\n\013COMPRESSING\020\002\022\020\n\014FIXING_FLOAT\020\003\022\t\n"
    "\005NOISE\020\004", 408);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "filter/proto/filter.proto", &protobuf_RegisterTypes);
  FilterConfig::default_instance_ = new FilterConfig();
  FilterConfig_FixedFloatConfig::default_instance_ = new FilterConfig_FixedFloatConfig();
  FilterConfig::default_instance_->InitAsDefaultInstance();
  FilterConfig_FixedFloatConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_filter_2fproto_2ffilter_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_filter_2fproto_2ffilter_2eproto {
  StaticDescriptorInitializer_filter_2fproto_2ffilter_2eproto() {
    protobuf_AddDesc_filter_2fproto_2ffilter_2eproto();
  }
} static_descriptor_initializer_filter_2fproto_2ffilter_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* FilterConfig_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FilterConfig_Type_descriptor_;
}
bool FilterConfig_Type_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const FilterConfig_Type FilterConfig::KEY_CACHING;
const FilterConfig_Type FilterConfig::COMPRESSING;
const FilterConfig_Type FilterConfig::FIXING_FLOAT;
const FilterConfig_Type FilterConfig::NOISE;
const FilterConfig_Type FilterConfig::Type_MIN;
const FilterConfig_Type FilterConfig::Type_MAX;
const int FilterConfig::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int FilterConfig_FixedFloatConfig::kMinValueFieldNumber;
const int FilterConfig_FixedFloatConfig::kMaxValueFieldNumber;
#endif  // !_MSC_VER

FilterConfig_FixedFloatConfig::FilterConfig_FixedFloatConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FilterConfig_FixedFloatConfig::InitAsDefaultInstance() {
}

FilterConfig_FixedFloatConfig::FilterConfig_FixedFloatConfig(const FilterConfig_FixedFloatConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FilterConfig_FixedFloatConfig::SharedCtor() {
  _cached_size_ = 0;
  min_value_ = -1;
  max_value_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FilterConfig_FixedFloatConfig::~FilterConfig_FixedFloatConfig() {
  SharedDtor();
}

void FilterConfig_FixedFloatConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FilterConfig_FixedFloatConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FilterConfig_FixedFloatConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FilterConfig_FixedFloatConfig_descriptor_;
}

const FilterConfig_FixedFloatConfig& FilterConfig_FixedFloatConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_filter_2fproto_2ffilter_2eproto();
  return *default_instance_;
}

FilterConfig_FixedFloatConfig* FilterConfig_FixedFloatConfig::default_instance_ = NULL;

FilterConfig_FixedFloatConfig* FilterConfig_FixedFloatConfig::New() const {
  return new FilterConfig_FixedFloatConfig;
}

void FilterConfig_FixedFloatConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    min_value_ = -1;
    max_value_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FilterConfig_FixedFloatConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float min_value = 1 [default = -1];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &min_value_)));
          set_has_min_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_max_value;
        break;
      }

      // optional float max_value = 2 [default = 1];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_max_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_value_)));
          set_has_max_value();
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

void FilterConfig_FixedFloatConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional float min_value = 1 [default = -1];
  if (has_min_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->min_value(), output);
  }

  // optional float max_value = 2 [default = 1];
  if (has_max_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->max_value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FilterConfig_FixedFloatConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional float min_value = 1 [default = -1];
  if (has_min_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->min_value(), target);
  }

  // optional float max_value = 2 [default = 1];
  if (has_max_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->max_value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FilterConfig_FixedFloatConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional float min_value = 1 [default = -1];
    if (has_min_value()) {
      total_size += 1 + 4;
    }

    // optional float max_value = 2 [default = 1];
    if (has_max_value()) {
      total_size += 1 + 4;
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

void FilterConfig_FixedFloatConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FilterConfig_FixedFloatConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FilterConfig_FixedFloatConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FilterConfig_FixedFloatConfig::MergeFrom(const FilterConfig_FixedFloatConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_min_value()) {
      set_min_value(from.min_value());
    }
    if (from.has_max_value()) {
      set_max_value(from.max_value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FilterConfig_FixedFloatConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FilterConfig_FixedFloatConfig::CopyFrom(const FilterConfig_FixedFloatConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FilterConfig_FixedFloatConfig::IsInitialized() const {

  return true;
}

void FilterConfig_FixedFloatConfig::Swap(FilterConfig_FixedFloatConfig* other) {
  if (other != this) {
    std::swap(min_value_, other->min_value_);
    std::swap(max_value_, other->max_value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FilterConfig_FixedFloatConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FilterConfig_FixedFloatConfig_descriptor_;
  metadata.reflection = FilterConfig_FixedFloatConfig_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int FilterConfig::kTypeFieldNumber;
const int FilterConfig::kClearCacheIfDoneFieldNumber;
const int FilterConfig::kNumBytesFieldNumber;
const int FilterConfig::kFixedPointFieldNumber;
const int FilterConfig::kMeanFieldNumber;
const int FilterConfig::kStdFieldNumber;
const int FilterConfig::kSignatureFieldNumber;
const int FilterConfig::kUncompressedSizeFieldNumber;
#endif  // !_MSC_VER

FilterConfig::FilterConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FilterConfig::InitAsDefaultInstance() {
}

FilterConfig::FilterConfig(const FilterConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FilterConfig::SharedCtor() {
  _cached_size_ = 0;
  type_ = 1;
  clear_cache_if_done_ = false;
  num_bytes_ = 3;
  mean_ = 0;
  std_ = 0;
  signature_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FilterConfig::~FilterConfig() {
  SharedDtor();
}

void FilterConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FilterConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FilterConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FilterConfig_descriptor_;
}

const FilterConfig& FilterConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_filter_2fproto_2ffilter_2eproto();
  return *default_instance_;
}

FilterConfig* FilterConfig::default_instance_ = NULL;

FilterConfig* FilterConfig::New() const {
  return new FilterConfig;
}

void FilterConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 1;
    clear_cache_if_done_ = false;
    num_bytes_ = 3;
    mean_ = 0;
    std_ = 0;
    signature_ = 0u;
  }
  fixed_point_.Clear();
  uncompressed_size_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FilterConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .PS.FilterConfig.Type type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::PS::FilterConfig_Type_IsValid(value)) {
            set_type(static_cast< ::PS::FilterConfig_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_signature;
        break;
      }

      // optional uint32 signature = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_signature:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &signature_)));
          set_has_signature();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_uncompressed_size;
        break;
      }

      // repeated uint64 uncompressed_size = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_uncompressed_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 24, input, this->mutable_uncompressed_size())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_uncompressed_size())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_uncompressed_size;
        if (input->ExpectTag(34)) goto parse_fixed_point;
        break;
      }

      // repeated .PS.FilterConfig.FixedFloatConfig fixed_point = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_fixed_point:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_fixed_point()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_fixed_point;
        if (input->ExpectTag(40)) goto parse_num_bytes;
        break;
      }

      // optional int32 num_bytes = 5 [default = 3];
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_num_bytes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_bytes_)));
          set_has_num_bytes();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(53)) goto parse_mean;
        break;
      }

      // optional float mean = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_mean:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &mean_)));
          set_has_mean();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(61)) goto parse_std;
        break;
      }

      // optional float std = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_std:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &std_)));
          set_has_std();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(160)) goto parse_clear_cache_if_done;
        break;
      }

      // optional bool clear_cache_if_done = 20 [default = false];
      case 20: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_clear_cache_if_done:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &clear_cache_if_done_)));
          set_has_clear_cache_if_done();
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

void FilterConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .PS.FilterConfig.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional uint32 signature = 2;
  if (has_signature()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->signature(), output);
  }

  // repeated uint64 uncompressed_size = 3;
  for (int i = 0; i < this->uncompressed_size_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(
      3, this->uncompressed_size(i), output);
  }

  // repeated .PS.FilterConfig.FixedFloatConfig fixed_point = 4;
  for (int i = 0; i < this->fixed_point_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->fixed_point(i), output);
  }

  // optional int32 num_bytes = 5 [default = 3];
  if (has_num_bytes()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->num_bytes(), output);
  }

  // optional float mean = 6;
  if (has_mean()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->mean(), output);
  }

  // optional float std = 7;
  if (has_std()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->std(), output);
  }

  // optional bool clear_cache_if_done = 20 [default = false];
  if (has_clear_cache_if_done()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(20, this->clear_cache_if_done(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FilterConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .PS.FilterConfig.Type type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional uint32 signature = 2;
  if (has_signature()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->signature(), target);
  }

  // repeated uint64 uncompressed_size = 3;
  for (int i = 0; i < this->uncompressed_size_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64ToArray(3, this->uncompressed_size(i), target);
  }

  // repeated .PS.FilterConfig.FixedFloatConfig fixed_point = 4;
  for (int i = 0; i < this->fixed_point_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->fixed_point(i), target);
  }

  // optional int32 num_bytes = 5 [default = 3];
  if (has_num_bytes()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->num_bytes(), target);
  }

  // optional float mean = 6;
  if (has_mean()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->mean(), target);
  }

  // optional float std = 7;
  if (has_std()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->std(), target);
  }

  // optional bool clear_cache_if_done = 20 [default = false];
  if (has_clear_cache_if_done()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(20, this->clear_cache_if_done(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FilterConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .PS.FilterConfig.Type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional bool clear_cache_if_done = 20 [default = false];
    if (has_clear_cache_if_done()) {
      total_size += 2 + 1;
    }

    // optional int32 num_bytes = 5 [default = 3];
    if (has_num_bytes()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->num_bytes());
    }

    // optional float mean = 6;
    if (has_mean()) {
      total_size += 1 + 4;
    }

    // optional float std = 7;
    if (has_std()) {
      total_size += 1 + 4;
    }

    // optional uint32 signature = 2;
    if (has_signature()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->signature());
    }

  }
  // repeated .PS.FilterConfig.FixedFloatConfig fixed_point = 4;
  total_size += 1 * this->fixed_point_size();
  for (int i = 0; i < this->fixed_point_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->fixed_point(i));
  }

  // repeated uint64 uncompressed_size = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->uncompressed_size_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt64Size(this->uncompressed_size(i));
    }
    total_size += 1 * this->uncompressed_size_size() + data_size;
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

void FilterConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FilterConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FilterConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FilterConfig::MergeFrom(const FilterConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  fixed_point_.MergeFrom(from.fixed_point_);
  uncompressed_size_.MergeFrom(from.uncompressed_size_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_clear_cache_if_done()) {
      set_clear_cache_if_done(from.clear_cache_if_done());
    }
    if (from.has_num_bytes()) {
      set_num_bytes(from.num_bytes());
    }
    if (from.has_mean()) {
      set_mean(from.mean());
    }
    if (from.has_std()) {
      set_std(from.std());
    }
    if (from.has_signature()) {
      set_signature(from.signature());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FilterConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FilterConfig::CopyFrom(const FilterConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FilterConfig::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void FilterConfig::Swap(FilterConfig* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(clear_cache_if_done_, other->clear_cache_if_done_);
    std::swap(num_bytes_, other->num_bytes_);
    fixed_point_.Swap(&other->fixed_point_);
    std::swap(mean_, other->mean_);
    std::swap(std_, other->std_);
    std::swap(signature_, other->signature_);
    uncompressed_size_.Swap(&other->uncompressed_size_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FilterConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FilterConfig_descriptor_;
  metadata.reflection = FilterConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

// @@protoc_insertion_point(global_scope)
