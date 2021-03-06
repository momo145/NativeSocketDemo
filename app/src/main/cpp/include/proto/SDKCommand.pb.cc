// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SDKCommand.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SDKCommand.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace sdk {
class SDKCommandDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SDKCommand> {
} _SDKCommand_default_instance_;

namespace protobuf_SDKCommand_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SDKCommand, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SDKCommand, value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SDKCommand, commandtype_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(SDKCommand)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SDKCommand_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "SDKCommand.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _SDKCommand_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _SDKCommand_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\020SDKCommand.proto\022\003sdk\"\272\001\n\nSDKCommand\022\r"
      "\n\005value\030\n \001(\005\0220\n\013commandType\030\001 \001(\0162\033.sdk"
      ".SDKCommand.CommandType\";\n\013CommandType\022\023"
      "\n\017CONNECT_SUCCESS\020\000\022\027\n\023TEST_MESSAGE_RESU"
      "LT\020\001\".\n\006Status\022\013\n\007SUCCESS\020\000\022\n\n\006FAILED\020\001\022"
      "\013\n\007LOADING\020\002B8\n%com.sinkinchan.nativesoc"
      "ketdemo.protoB\017SDKCommandProtob\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 278);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SDKCommand.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_SDKCommand_2eproto

const ::google::protobuf::EnumDescriptor* SDKCommand_CommandType_descriptor() {
  protobuf_SDKCommand_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SDKCommand_2eproto::file_level_enum_descriptors[0];
}
bool SDKCommand_CommandType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SDKCommand_CommandType SDKCommand::CONNECT_SUCCESS;
const SDKCommand_CommandType SDKCommand::TEST_MESSAGE_RESULT;
const SDKCommand_CommandType SDKCommand::CommandType_MIN;
const SDKCommand_CommandType SDKCommand::CommandType_MAX;
const int SDKCommand::CommandType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* SDKCommand_Status_descriptor() {
  protobuf_SDKCommand_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SDKCommand_2eproto::file_level_enum_descriptors[1];
}
bool SDKCommand_Status_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SDKCommand_Status SDKCommand::SUCCESS;
const SDKCommand_Status SDKCommand::FAILED;
const SDKCommand_Status SDKCommand::LOADING;
const SDKCommand_Status SDKCommand::Status_MIN;
const SDKCommand_Status SDKCommand::Status_MAX;
const int SDKCommand::Status_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SDKCommand::kValueFieldNumber;
const int SDKCommand::kCommandTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SDKCommand::SDKCommand()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_SDKCommand_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sdk.SDKCommand)
}
SDKCommand::SDKCommand(const SDKCommand& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&value_, &from.value_,
    reinterpret_cast<char*>(&commandtype_) -
    reinterpret_cast<char*>(&value_) + sizeof(commandtype_));
  // @@protoc_insertion_point(copy_constructor:sdk.SDKCommand)
}

void SDKCommand::SharedCtor() {
  ::memset(&value_, 0, reinterpret_cast<char*>(&commandtype_) -
    reinterpret_cast<char*>(&value_) + sizeof(commandtype_));
  _cached_size_ = 0;
}

SDKCommand::~SDKCommand() {
  // @@protoc_insertion_point(destructor:sdk.SDKCommand)
  SharedDtor();
}

void SDKCommand::SharedDtor() {
}

void SDKCommand::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SDKCommand::descriptor() {
  protobuf_SDKCommand_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SDKCommand_2eproto::file_level_metadata[0].descriptor;
}

const SDKCommand& SDKCommand::default_instance() {
  protobuf_SDKCommand_2eproto::InitDefaults();
  return *internal_default_instance();
}

SDKCommand* SDKCommand::New(::google::protobuf::Arena* arena) const {
  SDKCommand* n = new SDKCommand;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SDKCommand::Clear() {
// @@protoc_insertion_point(message_clear_start:sdk.SDKCommand)
  ::memset(&value_, 0, reinterpret_cast<char*>(&commandtype_) -
    reinterpret_cast<char*>(&value_) + sizeof(commandtype_));
}

bool SDKCommand::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sdk.SDKCommand)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .sdk.SDKCommand.CommandType commandType = 1;
      case 1: {
        if (tag == 8u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_commandtype(static_cast< ::sdk::SDKCommand_CommandType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 value = 10;
      case 10: {
        if (tag == 80u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sdk.SDKCommand)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sdk.SDKCommand)
  return false;
#undef DO_
}

void SDKCommand::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sdk.SDKCommand)
  // .sdk.SDKCommand.CommandType commandType = 1;
  if (this->commandtype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->commandtype(), output);
  }

  // int32 value = 10;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:sdk.SDKCommand)
}

::google::protobuf::uint8* SDKCommand::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:sdk.SDKCommand)
  // .sdk.SDKCommand.CommandType commandType = 1;
  if (this->commandtype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->commandtype(), target);
  }

  // int32 value = 10;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:sdk.SDKCommand)
  return target;
}

size_t SDKCommand::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sdk.SDKCommand)
  size_t total_size = 0;

  // int32 value = 10;
  if (this->value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->value());
  }

  // .sdk.SDKCommand.CommandType commandType = 1;
  if (this->commandtype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->commandtype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SDKCommand::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sdk.SDKCommand)
  GOOGLE_DCHECK_NE(&from, this);
  const SDKCommand* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SDKCommand>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sdk.SDKCommand)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sdk.SDKCommand)
    MergeFrom(*source);
  }
}

void SDKCommand::MergeFrom(const SDKCommand& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sdk.SDKCommand)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.value() != 0) {
    set_value(from.value());
  }
  if (from.commandtype() != 0) {
    set_commandtype(from.commandtype());
  }
}

void SDKCommand::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sdk.SDKCommand)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SDKCommand::CopyFrom(const SDKCommand& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sdk.SDKCommand)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SDKCommand::IsInitialized() const {
  return true;
}

void SDKCommand::Swap(SDKCommand* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SDKCommand::InternalSwap(SDKCommand* other) {
  std::swap(value_, other->value_);
  std::swap(commandtype_, other->commandtype_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SDKCommand::GetMetadata() const {
  protobuf_SDKCommand_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SDKCommand_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SDKCommand

// int32 value = 10;
void SDKCommand::clear_value() {
  value_ = 0;
}
::google::protobuf::int32 SDKCommand::value() const {
  // @@protoc_insertion_point(field_get:sdk.SDKCommand.value)
  return value_;
}
void SDKCommand::set_value(::google::protobuf::int32 value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:sdk.SDKCommand.value)
}

// .sdk.SDKCommand.CommandType commandType = 1;
void SDKCommand::clear_commandtype() {
  commandtype_ = 0;
}
::sdk::SDKCommand_CommandType SDKCommand::commandtype() const {
  // @@protoc_insertion_point(field_get:sdk.SDKCommand.commandType)
  return static_cast< ::sdk::SDKCommand_CommandType >(commandtype_);
}
void SDKCommand::set_commandtype(::sdk::SDKCommand_CommandType value) {
  
  commandtype_ = value;
  // @@protoc_insertion_point(field_set:sdk.SDKCommand.commandType)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sdk

// @@protoc_insertion_point(global_scope)
