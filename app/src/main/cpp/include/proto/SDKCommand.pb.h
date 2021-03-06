// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SDKCommand.proto

#ifndef PROTOBUF_SDKCommand_2eproto__INCLUDED
#define PROTOBUF_SDKCommand_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace sdk {
class SDKCommand;
class SDKCommandDefaultTypeInternal;
extern SDKCommandDefaultTypeInternal _SDKCommand_default_instance_;
}  // namespace sdk

namespace sdk {

namespace protobuf_SDKCommand_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_SDKCommand_2eproto

enum SDKCommand_CommandType {
  SDKCommand_CommandType_CONNECT_SUCCESS = 0,
  SDKCommand_CommandType_TEST_MESSAGE_RESULT = 1,
  SDKCommand_CommandType_SDKCommand_CommandType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SDKCommand_CommandType_SDKCommand_CommandType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SDKCommand_CommandType_IsValid(int value);
const SDKCommand_CommandType SDKCommand_CommandType_CommandType_MIN = SDKCommand_CommandType_CONNECT_SUCCESS;
const SDKCommand_CommandType SDKCommand_CommandType_CommandType_MAX = SDKCommand_CommandType_TEST_MESSAGE_RESULT;
const int SDKCommand_CommandType_CommandType_ARRAYSIZE = SDKCommand_CommandType_CommandType_MAX + 1;

const ::google::protobuf::EnumDescriptor* SDKCommand_CommandType_descriptor();
inline const ::std::string& SDKCommand_CommandType_Name(SDKCommand_CommandType value) {
  return ::google::protobuf::internal::NameOfEnum(
    SDKCommand_CommandType_descriptor(), value);
}
inline bool SDKCommand_CommandType_Parse(
    const ::std::string& name, SDKCommand_CommandType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SDKCommand_CommandType>(
    SDKCommand_CommandType_descriptor(), name, value);
}
enum SDKCommand_Status {
  SDKCommand_Status_SUCCESS = 0,
  SDKCommand_Status_FAILED = 1,
  SDKCommand_Status_LOADING = 2,
  SDKCommand_Status_SDKCommand_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SDKCommand_Status_SDKCommand_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SDKCommand_Status_IsValid(int value);
const SDKCommand_Status SDKCommand_Status_Status_MIN = SDKCommand_Status_SUCCESS;
const SDKCommand_Status SDKCommand_Status_Status_MAX = SDKCommand_Status_LOADING;
const int SDKCommand_Status_Status_ARRAYSIZE = SDKCommand_Status_Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* SDKCommand_Status_descriptor();
inline const ::std::string& SDKCommand_Status_Name(SDKCommand_Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    SDKCommand_Status_descriptor(), value);
}
inline bool SDKCommand_Status_Parse(
    const ::std::string& name, SDKCommand_Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SDKCommand_Status>(
    SDKCommand_Status_descriptor(), name, value);
}
// ===================================================================

class SDKCommand : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sdk.SDKCommand) */ {
 public:
  SDKCommand();
  virtual ~SDKCommand();

  SDKCommand(const SDKCommand& from);

  inline SDKCommand& operator=(const SDKCommand& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SDKCommand& default_instance();

  static inline const SDKCommand* internal_default_instance() {
    return reinterpret_cast<const SDKCommand*>(
               &_SDKCommand_default_instance_);
  }

  void Swap(SDKCommand* other);

  // implements Message ----------------------------------------------

  inline SDKCommand* New() const PROTOBUF_FINAL { return New(NULL); }

  SDKCommand* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SDKCommand& from);
  void MergeFrom(const SDKCommand& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SDKCommand* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef SDKCommand_CommandType CommandType;
  static const CommandType CONNECT_SUCCESS =
    SDKCommand_CommandType_CONNECT_SUCCESS;
  static const CommandType TEST_MESSAGE_RESULT =
    SDKCommand_CommandType_TEST_MESSAGE_RESULT;
  static inline bool CommandType_IsValid(int value) {
    return SDKCommand_CommandType_IsValid(value);
  }
  static const CommandType CommandType_MIN =
    SDKCommand_CommandType_CommandType_MIN;
  static const CommandType CommandType_MAX =
    SDKCommand_CommandType_CommandType_MAX;
  static const int CommandType_ARRAYSIZE =
    SDKCommand_CommandType_CommandType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CommandType_descriptor() {
    return SDKCommand_CommandType_descriptor();
  }
  static inline const ::std::string& CommandType_Name(CommandType value) {
    return SDKCommand_CommandType_Name(value);
  }
  static inline bool CommandType_Parse(const ::std::string& name,
      CommandType* value) {
    return SDKCommand_CommandType_Parse(name, value);
  }

  typedef SDKCommand_Status Status;
  static const Status SUCCESS =
    SDKCommand_Status_SUCCESS;
  static const Status FAILED =
    SDKCommand_Status_FAILED;
  static const Status LOADING =
    SDKCommand_Status_LOADING;
  static inline bool Status_IsValid(int value) {
    return SDKCommand_Status_IsValid(value);
  }
  static const Status Status_MIN =
    SDKCommand_Status_Status_MIN;
  static const Status Status_MAX =
    SDKCommand_Status_Status_MAX;
  static const int Status_ARRAYSIZE =
    SDKCommand_Status_Status_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Status_descriptor() {
    return SDKCommand_Status_descriptor();
  }
  static inline const ::std::string& Status_Name(Status value) {
    return SDKCommand_Status_Name(value);
  }
  static inline bool Status_Parse(const ::std::string& name,
      Status* value) {
    return SDKCommand_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // int32 value = 10;
  void clear_value();
  static const int kValueFieldNumber = 10;
  ::google::protobuf::int32 value() const;
  void set_value(::google::protobuf::int32 value);

  // .sdk.SDKCommand.CommandType commandType = 1;
  void clear_commandtype();
  static const int kCommandTypeFieldNumber = 1;
  ::sdk::SDKCommand_CommandType commandtype() const;
  void set_commandtype(::sdk::SDKCommand_CommandType value);

  // @@protoc_insertion_point(class_scope:sdk.SDKCommand)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 value_;
  int commandtype_;
  mutable int _cached_size_;
  friend struct  protobuf_SDKCommand_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SDKCommand

// int32 value = 10;
inline void SDKCommand::clear_value() {
  value_ = 0;
}
inline ::google::protobuf::int32 SDKCommand::value() const {
  // @@protoc_insertion_point(field_get:sdk.SDKCommand.value)
  return value_;
}
inline void SDKCommand::set_value(::google::protobuf::int32 value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:sdk.SDKCommand.value)
}

// .sdk.SDKCommand.CommandType commandType = 1;
inline void SDKCommand::clear_commandtype() {
  commandtype_ = 0;
}
inline ::sdk::SDKCommand_CommandType SDKCommand::commandtype() const {
  // @@protoc_insertion_point(field_get:sdk.SDKCommand.commandType)
  return static_cast< ::sdk::SDKCommand_CommandType >(commandtype_);
}
inline void SDKCommand::set_commandtype(::sdk::SDKCommand_CommandType value) {
  
  commandtype_ = value;
  // @@protoc_insertion_point(field_set:sdk.SDKCommand.commandType)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace sdk

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::sdk::SDKCommand_CommandType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::sdk::SDKCommand_CommandType>() {
  return ::sdk::SDKCommand_CommandType_descriptor();
}
template <> struct is_proto_enum< ::sdk::SDKCommand_Status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::sdk::SDKCommand_Status>() {
  return ::sdk::SDKCommand_Status_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SDKCommand_2eproto__INCLUDED
