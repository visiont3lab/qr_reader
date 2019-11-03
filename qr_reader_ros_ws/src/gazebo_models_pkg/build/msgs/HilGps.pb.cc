// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HilGps.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "HilGps.pb.h"

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

namespace mavlink {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* HilGps_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HilGps_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_HilGps_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_HilGps_2eproto() {
  protobuf_AddDesc_HilGps_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "HilGps.proto");
  GOOGLE_CHECK(file != NULL);
  HilGps_descriptor_ = file->message_type(0);
  static const int HilGps_offsets_[13] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, time_usec_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, fix_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, lat_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, lon_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, alt_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, eph_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, epv_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, vel_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, vn_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, ve_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, vd_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, cog_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, satellites_visible_),
  };
  HilGps_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      HilGps_descriptor_,
      HilGps::default_instance_,
      HilGps_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, _has_bits_[0]),
      -1,
      -1,
      sizeof(HilGps),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HilGps, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_HilGps_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      HilGps_descriptor_, &HilGps::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_HilGps_2eproto() {
  delete HilGps::default_instance_;
  delete HilGps_reflection_;
}

void protobuf_AddDesc_HilGps_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_HilGps_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014HilGps.proto\022\014mavlink.msgs\"\310\001\n\006HilGps\022"
    "\021\n\ttime_usec\030\001 \002(\004\022\020\n\010fix_type\030\002 \002(\005\022\013\n\003"
    "lat\030\003 \002(\005\022\013\n\003lon\030\004 \002(\005\022\013\n\003alt\030\005 \002(\005\022\013\n\003e"
    "ph\030\006 \002(\r\022\013\n\003epv\030\007 \002(\r\022\013\n\003vel\030\010 \002(\r\022\n\n\002vn"
    "\030\t \002(\005\022\n\n\002ve\030\n \002(\005\022\n\n\002vd\030\013 \002(\005\022\013\n\003cog\030\014 "
    "\002(\r\022\032\n\022satellites_visible\030\r \001(\r", 231);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "HilGps.proto", &protobuf_RegisterTypes);
  HilGps::default_instance_ = new HilGps();
  HilGps::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_HilGps_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_HilGps_2eproto {
  StaticDescriptorInitializer_HilGps_2eproto() {
    protobuf_AddDesc_HilGps_2eproto();
  }
} static_descriptor_initializer_HilGps_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HilGps::kTimeUsecFieldNumber;
const int HilGps::kFixTypeFieldNumber;
const int HilGps::kLatFieldNumber;
const int HilGps::kLonFieldNumber;
const int HilGps::kAltFieldNumber;
const int HilGps::kEphFieldNumber;
const int HilGps::kEpvFieldNumber;
const int HilGps::kVelFieldNumber;
const int HilGps::kVnFieldNumber;
const int HilGps::kVeFieldNumber;
const int HilGps::kVdFieldNumber;
const int HilGps::kCogFieldNumber;
const int HilGps::kSatellitesVisibleFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HilGps::HilGps()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mavlink.msgs.HilGps)
}

void HilGps::InitAsDefaultInstance() {
}

HilGps::HilGps(const HilGps& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:mavlink.msgs.HilGps)
}

void HilGps::SharedCtor() {
  _cached_size_ = 0;
  time_usec_ = GOOGLE_ULONGLONG(0);
  fix_type_ = 0;
  lat_ = 0;
  lon_ = 0;
  alt_ = 0;
  eph_ = 0u;
  epv_ = 0u;
  vel_ = 0u;
  vn_ = 0;
  ve_ = 0;
  vd_ = 0;
  cog_ = 0u;
  satellites_visible_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HilGps::~HilGps() {
  // @@protoc_insertion_point(destructor:mavlink.msgs.HilGps)
  SharedDtor();
}

void HilGps::SharedDtor() {
  if (this != default_instance_) {
  }
}

void HilGps::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HilGps::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HilGps_descriptor_;
}

const HilGps& HilGps::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_HilGps_2eproto();
  return *default_instance_;
}

HilGps* HilGps::default_instance_ = NULL;

HilGps* HilGps::New(::google::protobuf::Arena* arena) const {
  HilGps* n = new HilGps;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HilGps::Clear() {
// @@protoc_insertion_point(message_clear_start:mavlink.msgs.HilGps)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(HilGps, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<HilGps*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 255u) {
    ZR_(time_usec_, vel_);
  }
  if (_has_bits_[8 / 32] & 7936u) {
    ZR_(vn_, satellites_visible_);
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool HilGps::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mavlink.msgs.HilGps)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 time_usec = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &time_usec_)));
          set_has_time_usec();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_fix_type;
        break;
      }

      // required int32 fix_type = 2;
      case 2: {
        if (tag == 16) {
         parse_fix_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fix_type_)));
          set_has_fix_type();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_lat;
        break;
      }

      // required int32 lat = 3;
      case 3: {
        if (tag == 24) {
         parse_lat:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &lat_)));
          set_has_lat();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_lon;
        break;
      }

      // required int32 lon = 4;
      case 4: {
        if (tag == 32) {
         parse_lon:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &lon_)));
          set_has_lon();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_alt;
        break;
      }

      // required int32 alt = 5;
      case 5: {
        if (tag == 40) {
         parse_alt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &alt_)));
          set_has_alt();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_eph;
        break;
      }

      // required uint32 eph = 6;
      case 6: {
        if (tag == 48) {
         parse_eph:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &eph_)));
          set_has_eph();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_epv;
        break;
      }

      // required uint32 epv = 7;
      case 7: {
        if (tag == 56) {
         parse_epv:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &epv_)));
          set_has_epv();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_vel;
        break;
      }

      // required uint32 vel = 8;
      case 8: {
        if (tag == 64) {
         parse_vel:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &vel_)));
          set_has_vel();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_vn;
        break;
      }

      // required int32 vn = 9;
      case 9: {
        if (tag == 72) {
         parse_vn:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &vn_)));
          set_has_vn();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(80)) goto parse_ve;
        break;
      }

      // required int32 ve = 10;
      case 10: {
        if (tag == 80) {
         parse_ve:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ve_)));
          set_has_ve();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(88)) goto parse_vd;
        break;
      }

      // required int32 vd = 11;
      case 11: {
        if (tag == 88) {
         parse_vd:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &vd_)));
          set_has_vd();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(96)) goto parse_cog;
        break;
      }

      // required uint32 cog = 12;
      case 12: {
        if (tag == 96) {
         parse_cog:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cog_)));
          set_has_cog();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(104)) goto parse_satellites_visible;
        break;
      }

      // optional uint32 satellites_visible = 13;
      case 13: {
        if (tag == 104) {
         parse_satellites_visible:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &satellites_visible_)));
          set_has_satellites_visible();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mavlink.msgs.HilGps)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mavlink.msgs.HilGps)
  return false;
#undef DO_
}

void HilGps::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mavlink.msgs.HilGps)
  // required uint64 time_usec = 1;
  if (has_time_usec()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->time_usec(), output);
  }

  // required int32 fix_type = 2;
  if (has_fix_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->fix_type(), output);
  }

  // required int32 lat = 3;
  if (has_lat()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->lat(), output);
  }

  // required int32 lon = 4;
  if (has_lon()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->lon(), output);
  }

  // required int32 alt = 5;
  if (has_alt()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->alt(), output);
  }

  // required uint32 eph = 6;
  if (has_eph()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->eph(), output);
  }

  // required uint32 epv = 7;
  if (has_epv()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->epv(), output);
  }

  // required uint32 vel = 8;
  if (has_vel()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->vel(), output);
  }

  // required int32 vn = 9;
  if (has_vn()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->vn(), output);
  }

  // required int32 ve = 10;
  if (has_ve()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->ve(), output);
  }

  // required int32 vd = 11;
  if (has_vd()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->vd(), output);
  }

  // required uint32 cog = 12;
  if (has_cog()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->cog(), output);
  }

  // optional uint32 satellites_visible = 13;
  if (has_satellites_visible()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->satellites_visible(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mavlink.msgs.HilGps)
}

::google::protobuf::uint8* HilGps::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:mavlink.msgs.HilGps)
  // required uint64 time_usec = 1;
  if (has_time_usec()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->time_usec(), target);
  }

  // required int32 fix_type = 2;
  if (has_fix_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->fix_type(), target);
  }

  // required int32 lat = 3;
  if (has_lat()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->lat(), target);
  }

  // required int32 lon = 4;
  if (has_lon()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->lon(), target);
  }

  // required int32 alt = 5;
  if (has_alt()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->alt(), target);
  }

  // required uint32 eph = 6;
  if (has_eph()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->eph(), target);
  }

  // required uint32 epv = 7;
  if (has_epv()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->epv(), target);
  }

  // required uint32 vel = 8;
  if (has_vel()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->vel(), target);
  }

  // required int32 vn = 9;
  if (has_vn()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->vn(), target);
  }

  // required int32 ve = 10;
  if (has_ve()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->ve(), target);
  }

  // required int32 vd = 11;
  if (has_vd()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->vd(), target);
  }

  // required uint32 cog = 12;
  if (has_cog()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->cog(), target);
  }

  // optional uint32 satellites_visible = 13;
  if (has_satellites_visible()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->satellites_visible(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mavlink.msgs.HilGps)
  return target;
}

int HilGps::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:mavlink.msgs.HilGps)
  int total_size = 0;

  if (has_time_usec()) {
    // required uint64 time_usec = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->time_usec());
  }

  if (has_fix_type()) {
    // required int32 fix_type = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->fix_type());
  }

  if (has_lat()) {
    // required int32 lat = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->lat());
  }

  if (has_lon()) {
    // required int32 lon = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->lon());
  }

  if (has_alt()) {
    // required int32 alt = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->alt());
  }

  if (has_eph()) {
    // required uint32 eph = 6;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->eph());
  }

  if (has_epv()) {
    // required uint32 epv = 7;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->epv());
  }

  if (has_vel()) {
    // required uint32 vel = 8;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->vel());
  }

  if (has_vn()) {
    // required int32 vn = 9;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->vn());
  }

  if (has_ve()) {
    // required int32 ve = 10;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ve());
  }

  if (has_vd()) {
    // required int32 vd = 11;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->vd());
  }

  if (has_cog()) {
    // required uint32 cog = 12;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cog());
  }

  return total_size;
}
int HilGps::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:mavlink.msgs.HilGps)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000fff) ^ 0x00000fff) == 0) {  // All required fields are present.
    // required uint64 time_usec = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->time_usec());

    // required int32 fix_type = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->fix_type());

    // required int32 lat = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->lat());

    // required int32 lon = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->lon());

    // required int32 alt = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->alt());

    // required uint32 eph = 6;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->eph());

    // required uint32 epv = 7;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->epv());

    // required uint32 vel = 8;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->vel());

    // required int32 vn = 9;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->vn());

    // required int32 ve = 10;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ve());

    // required int32 vd = 11;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->vd());

    // required uint32 cog = 12;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cog());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional uint32 satellites_visible = 13;
  if (has_satellites_visible()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->satellites_visible());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HilGps::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mavlink.msgs.HilGps)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const HilGps* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const HilGps>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mavlink.msgs.HilGps)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mavlink.msgs.HilGps)
    MergeFrom(*source);
  }
}

void HilGps::MergeFrom(const HilGps& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mavlink.msgs.HilGps)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time_usec()) {
      set_time_usec(from.time_usec());
    }
    if (from.has_fix_type()) {
      set_fix_type(from.fix_type());
    }
    if (from.has_lat()) {
      set_lat(from.lat());
    }
    if (from.has_lon()) {
      set_lon(from.lon());
    }
    if (from.has_alt()) {
      set_alt(from.alt());
    }
    if (from.has_eph()) {
      set_eph(from.eph());
    }
    if (from.has_epv()) {
      set_epv(from.epv());
    }
    if (from.has_vel()) {
      set_vel(from.vel());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_vn()) {
      set_vn(from.vn());
    }
    if (from.has_ve()) {
      set_ve(from.ve());
    }
    if (from.has_vd()) {
      set_vd(from.vd());
    }
    if (from.has_cog()) {
      set_cog(from.cog());
    }
    if (from.has_satellites_visible()) {
      set_satellites_visible(from.satellites_visible());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void HilGps::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mavlink.msgs.HilGps)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HilGps::CopyFrom(const HilGps& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mavlink.msgs.HilGps)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HilGps::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000fff) != 0x00000fff) return false;

  return true;
}

void HilGps::Swap(HilGps* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HilGps::InternalSwap(HilGps* other) {
  std::swap(time_usec_, other->time_usec_);
  std::swap(fix_type_, other->fix_type_);
  std::swap(lat_, other->lat_);
  std::swap(lon_, other->lon_);
  std::swap(alt_, other->alt_);
  std::swap(eph_, other->eph_);
  std::swap(epv_, other->epv_);
  std::swap(vel_, other->vel_);
  std::swap(vn_, other->vn_);
  std::swap(ve_, other->ve_);
  std::swap(vd_, other->vd_);
  std::swap(cog_, other->cog_);
  std::swap(satellites_visible_, other->satellites_visible_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HilGps::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HilGps_descriptor_;
  metadata.reflection = HilGps_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HilGps

// required uint64 time_usec = 1;
bool HilGps::has_time_usec() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void HilGps::set_has_time_usec() {
  _has_bits_[0] |= 0x00000001u;
}
void HilGps::clear_has_time_usec() {
  _has_bits_[0] &= ~0x00000001u;
}
void HilGps::clear_time_usec() {
  time_usec_ = GOOGLE_ULONGLONG(0);
  clear_has_time_usec();
}
 ::google::protobuf::uint64 HilGps::time_usec() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.time_usec)
  return time_usec_;
}
 void HilGps::set_time_usec(::google::protobuf::uint64 value) {
  set_has_time_usec();
  time_usec_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.time_usec)
}

// required int32 fix_type = 2;
bool HilGps::has_fix_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void HilGps::set_has_fix_type() {
  _has_bits_[0] |= 0x00000002u;
}
void HilGps::clear_has_fix_type() {
  _has_bits_[0] &= ~0x00000002u;
}
void HilGps::clear_fix_type() {
  fix_type_ = 0;
  clear_has_fix_type();
}
 ::google::protobuf::int32 HilGps::fix_type() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.fix_type)
  return fix_type_;
}
 void HilGps::set_fix_type(::google::protobuf::int32 value) {
  set_has_fix_type();
  fix_type_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.fix_type)
}

// required int32 lat = 3;
bool HilGps::has_lat() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void HilGps::set_has_lat() {
  _has_bits_[0] |= 0x00000004u;
}
void HilGps::clear_has_lat() {
  _has_bits_[0] &= ~0x00000004u;
}
void HilGps::clear_lat() {
  lat_ = 0;
  clear_has_lat();
}
 ::google::protobuf::int32 HilGps::lat() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.lat)
  return lat_;
}
 void HilGps::set_lat(::google::protobuf::int32 value) {
  set_has_lat();
  lat_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.lat)
}

// required int32 lon = 4;
bool HilGps::has_lon() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void HilGps::set_has_lon() {
  _has_bits_[0] |= 0x00000008u;
}
void HilGps::clear_has_lon() {
  _has_bits_[0] &= ~0x00000008u;
}
void HilGps::clear_lon() {
  lon_ = 0;
  clear_has_lon();
}
 ::google::protobuf::int32 HilGps::lon() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.lon)
  return lon_;
}
 void HilGps::set_lon(::google::protobuf::int32 value) {
  set_has_lon();
  lon_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.lon)
}

// required int32 alt = 5;
bool HilGps::has_alt() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void HilGps::set_has_alt() {
  _has_bits_[0] |= 0x00000010u;
}
void HilGps::clear_has_alt() {
  _has_bits_[0] &= ~0x00000010u;
}
void HilGps::clear_alt() {
  alt_ = 0;
  clear_has_alt();
}
 ::google::protobuf::int32 HilGps::alt() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.alt)
  return alt_;
}
 void HilGps::set_alt(::google::protobuf::int32 value) {
  set_has_alt();
  alt_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.alt)
}

// required uint32 eph = 6;
bool HilGps::has_eph() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void HilGps::set_has_eph() {
  _has_bits_[0] |= 0x00000020u;
}
void HilGps::clear_has_eph() {
  _has_bits_[0] &= ~0x00000020u;
}
void HilGps::clear_eph() {
  eph_ = 0u;
  clear_has_eph();
}
 ::google::protobuf::uint32 HilGps::eph() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.eph)
  return eph_;
}
 void HilGps::set_eph(::google::protobuf::uint32 value) {
  set_has_eph();
  eph_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.eph)
}

// required uint32 epv = 7;
bool HilGps::has_epv() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void HilGps::set_has_epv() {
  _has_bits_[0] |= 0x00000040u;
}
void HilGps::clear_has_epv() {
  _has_bits_[0] &= ~0x00000040u;
}
void HilGps::clear_epv() {
  epv_ = 0u;
  clear_has_epv();
}
 ::google::protobuf::uint32 HilGps::epv() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.epv)
  return epv_;
}
 void HilGps::set_epv(::google::protobuf::uint32 value) {
  set_has_epv();
  epv_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.epv)
}

// required uint32 vel = 8;
bool HilGps::has_vel() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void HilGps::set_has_vel() {
  _has_bits_[0] |= 0x00000080u;
}
void HilGps::clear_has_vel() {
  _has_bits_[0] &= ~0x00000080u;
}
void HilGps::clear_vel() {
  vel_ = 0u;
  clear_has_vel();
}
 ::google::protobuf::uint32 HilGps::vel() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.vel)
  return vel_;
}
 void HilGps::set_vel(::google::protobuf::uint32 value) {
  set_has_vel();
  vel_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.vel)
}

// required int32 vn = 9;
bool HilGps::has_vn() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
void HilGps::set_has_vn() {
  _has_bits_[0] |= 0x00000100u;
}
void HilGps::clear_has_vn() {
  _has_bits_[0] &= ~0x00000100u;
}
void HilGps::clear_vn() {
  vn_ = 0;
  clear_has_vn();
}
 ::google::protobuf::int32 HilGps::vn() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.vn)
  return vn_;
}
 void HilGps::set_vn(::google::protobuf::int32 value) {
  set_has_vn();
  vn_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.vn)
}

// required int32 ve = 10;
bool HilGps::has_ve() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
void HilGps::set_has_ve() {
  _has_bits_[0] |= 0x00000200u;
}
void HilGps::clear_has_ve() {
  _has_bits_[0] &= ~0x00000200u;
}
void HilGps::clear_ve() {
  ve_ = 0;
  clear_has_ve();
}
 ::google::protobuf::int32 HilGps::ve() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.ve)
  return ve_;
}
 void HilGps::set_ve(::google::protobuf::int32 value) {
  set_has_ve();
  ve_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.ve)
}

// required int32 vd = 11;
bool HilGps::has_vd() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
void HilGps::set_has_vd() {
  _has_bits_[0] |= 0x00000400u;
}
void HilGps::clear_has_vd() {
  _has_bits_[0] &= ~0x00000400u;
}
void HilGps::clear_vd() {
  vd_ = 0;
  clear_has_vd();
}
 ::google::protobuf::int32 HilGps::vd() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.vd)
  return vd_;
}
 void HilGps::set_vd(::google::protobuf::int32 value) {
  set_has_vd();
  vd_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.vd)
}

// required uint32 cog = 12;
bool HilGps::has_cog() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
void HilGps::set_has_cog() {
  _has_bits_[0] |= 0x00000800u;
}
void HilGps::clear_has_cog() {
  _has_bits_[0] &= ~0x00000800u;
}
void HilGps::clear_cog() {
  cog_ = 0u;
  clear_has_cog();
}
 ::google::protobuf::uint32 HilGps::cog() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.cog)
  return cog_;
}
 void HilGps::set_cog(::google::protobuf::uint32 value) {
  set_has_cog();
  cog_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.cog)
}

// optional uint32 satellites_visible = 13;
bool HilGps::has_satellites_visible() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
void HilGps::set_has_satellites_visible() {
  _has_bits_[0] |= 0x00001000u;
}
void HilGps::clear_has_satellites_visible() {
  _has_bits_[0] &= ~0x00001000u;
}
void HilGps::clear_satellites_visible() {
  satellites_visible_ = 0u;
  clear_has_satellites_visible();
}
 ::google::protobuf::uint32 HilGps::satellites_visible() const {
  // @@protoc_insertion_point(field_get:mavlink.msgs.HilGps.satellites_visible)
  return satellites_visible_;
}
 void HilGps::set_satellites_visible(::google::protobuf::uint32 value) {
  set_has_satellites_visible();
  satellites_visible_ = value;
  // @@protoc_insertion_point(field_set:mavlink.msgs.HilGps.satellites_visible)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace mavlink

// @@protoc_insertion_point(global_scope)