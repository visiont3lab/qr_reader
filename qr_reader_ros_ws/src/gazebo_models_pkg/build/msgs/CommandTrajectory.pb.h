// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommandTrajectory.proto

#ifndef PROTOBUF_CommandTrajectory_2eproto__INCLUDED
#define PROTOBUF_CommandTrajectory_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "vector3d.pb.h"
// @@protoc_insertion_point(includes)

namespace mav_msgs {
namespace msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_CommandTrajectory_2eproto();
void protobuf_AssignDesc_CommandTrajectory_2eproto();
void protobuf_ShutdownFile_CommandTrajectory_2eproto();

class CommandTrajectory;

// ===================================================================

class CommandTrajectory : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mav_msgs.msgs.CommandTrajectory) */ {
 public:
  CommandTrajectory();
  virtual ~CommandTrajectory();

  CommandTrajectory(const CommandTrajectory& from);

  inline CommandTrajectory& operator=(const CommandTrajectory& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CommandTrajectory& default_instance();

  void Swap(CommandTrajectory* other);

  // implements Message ----------------------------------------------

  inline CommandTrajectory* New() const { return New(NULL); }

  CommandTrajectory* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CommandTrajectory& from);
  void MergeFrom(const CommandTrajectory& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CommandTrajectory* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .gazebo.msgs.Vector3d position = 1;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 1;
  const ::gazebo::msgs::Vector3d& position() const;
  ::gazebo::msgs::Vector3d* mutable_position();
  ::gazebo::msgs::Vector3d* release_position();
  void set_allocated_position(::gazebo::msgs::Vector3d* position);

  // required .gazebo.msgs.Vector3d velocity = 2;
  bool has_velocity() const;
  void clear_velocity();
  static const int kVelocityFieldNumber = 2;
  const ::gazebo::msgs::Vector3d& velocity() const;
  ::gazebo::msgs::Vector3d* mutable_velocity();
  ::gazebo::msgs::Vector3d* release_velocity();
  void set_allocated_velocity(::gazebo::msgs::Vector3d* velocity);

  // required .gazebo.msgs.Vector3d acceleration = 3;
  bool has_acceleration() const;
  void clear_acceleration();
  static const int kAccelerationFieldNumber = 3;
  const ::gazebo::msgs::Vector3d& acceleration() const;
  ::gazebo::msgs::Vector3d* mutable_acceleration();
  ::gazebo::msgs::Vector3d* release_acceleration();
  void set_allocated_acceleration(::gazebo::msgs::Vector3d* acceleration);

  // required .gazebo.msgs.Vector3d jerk = 4;
  bool has_jerk() const;
  void clear_jerk();
  static const int kJerkFieldNumber = 4;
  const ::gazebo::msgs::Vector3d& jerk() const;
  ::gazebo::msgs::Vector3d* mutable_jerk();
  ::gazebo::msgs::Vector3d* release_jerk();
  void set_allocated_jerk(::gazebo::msgs::Vector3d* jerk);

  // required .gazebo.msgs.Vector3d snap = 5;
  bool has_snap() const;
  void clear_snap();
  static const int kSnapFieldNumber = 5;
  const ::gazebo::msgs::Vector3d& snap() const;
  ::gazebo::msgs::Vector3d* mutable_snap();
  ::gazebo::msgs::Vector3d* release_snap();
  void set_allocated_snap(::gazebo::msgs::Vector3d* snap);

  // required float yaw = 6;
  bool has_yaw() const;
  void clear_yaw();
  static const int kYawFieldNumber = 6;
  float yaw() const;
  void set_yaw(float value);

  // required float yaw_rate = 7;
  bool has_yaw_rate() const;
  void clear_yaw_rate();
  static const int kYawRateFieldNumber = 7;
  float yaw_rate() const;
  void set_yaw_rate(float value);

  // @@protoc_insertion_point(class_scope:mav_msgs.msgs.CommandTrajectory)
 private:
  inline void set_has_position();
  inline void clear_has_position();
  inline void set_has_velocity();
  inline void clear_has_velocity();
  inline void set_has_acceleration();
  inline void clear_has_acceleration();
  inline void set_has_jerk();
  inline void clear_has_jerk();
  inline void set_has_snap();
  inline void clear_has_snap();
  inline void set_has_yaw();
  inline void clear_has_yaw();
  inline void set_has_yaw_rate();
  inline void clear_has_yaw_rate();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gazebo::msgs::Vector3d* position_;
  ::gazebo::msgs::Vector3d* velocity_;
  ::gazebo::msgs::Vector3d* acceleration_;
  ::gazebo::msgs::Vector3d* jerk_;
  ::gazebo::msgs::Vector3d* snap_;
  float yaw_;
  float yaw_rate_;
  friend void  protobuf_AddDesc_CommandTrajectory_2eproto();
  friend void protobuf_AssignDesc_CommandTrajectory_2eproto();
  friend void protobuf_ShutdownFile_CommandTrajectory_2eproto();

  void InitAsDefaultInstance();
  static CommandTrajectory* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CommandTrajectory

// required .gazebo.msgs.Vector3d position = 1;
inline bool CommandTrajectory::has_position() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CommandTrajectory::set_has_position() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CommandTrajectory::clear_has_position() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CommandTrajectory::clear_position() {
  if (position_ != NULL) position_->::gazebo::msgs::Vector3d::Clear();
  clear_has_position();
}
inline const ::gazebo::msgs::Vector3d& CommandTrajectory::position() const {
  // @@protoc_insertion_point(field_get:mav_msgs.msgs.CommandTrajectory.position)
  return position_ != NULL ? *position_ : *default_instance_->position_;
}
inline ::gazebo::msgs::Vector3d* CommandTrajectory::mutable_position() {
  set_has_position();
  if (position_ == NULL) {
    position_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:mav_msgs.msgs.CommandTrajectory.position)
  return position_;
}
inline ::gazebo::msgs::Vector3d* CommandTrajectory::release_position() {
  // @@protoc_insertion_point(field_release:mav_msgs.msgs.CommandTrajectory.position)
  clear_has_position();
  ::gazebo::msgs::Vector3d* temp = position_;
  position_ = NULL;
  return temp;
}
inline void CommandTrajectory::set_allocated_position(::gazebo::msgs::Vector3d* position) {
  delete position_;
  position_ = position;
  if (position) {
    set_has_position();
  } else {
    clear_has_position();
  }
  // @@protoc_insertion_point(field_set_allocated:mav_msgs.msgs.CommandTrajectory.position)
}

// required .gazebo.msgs.Vector3d velocity = 2;
inline bool CommandTrajectory::has_velocity() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CommandTrajectory::set_has_velocity() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CommandTrajectory::clear_has_velocity() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CommandTrajectory::clear_velocity() {
  if (velocity_ != NULL) velocity_->::gazebo::msgs::Vector3d::Clear();
  clear_has_velocity();
}
inline const ::gazebo::msgs::Vector3d& CommandTrajectory::velocity() const {
  // @@protoc_insertion_point(field_get:mav_msgs.msgs.CommandTrajectory.velocity)
  return velocity_ != NULL ? *velocity_ : *default_instance_->velocity_;
}
inline ::gazebo::msgs::Vector3d* CommandTrajectory::mutable_velocity() {
  set_has_velocity();
  if (velocity_ == NULL) {
    velocity_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:mav_msgs.msgs.CommandTrajectory.velocity)
  return velocity_;
}
inline ::gazebo::msgs::Vector3d* CommandTrajectory::release_velocity() {
  // @@protoc_insertion_point(field_release:mav_msgs.msgs.CommandTrajectory.velocity)
  clear_has_velocity();
  ::gazebo::msgs::Vector3d* temp = velocity_;
  velocity_ = NULL;
  return temp;
}
inline void CommandTrajectory::set_allocated_velocity(::gazebo::msgs::Vector3d* velocity) {
  delete velocity_;
  velocity_ = velocity;
  if (velocity) {
    set_has_velocity();
  } else {
    clear_has_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:mav_msgs.msgs.CommandTrajectory.velocity)
}

// required .gazebo.msgs.Vector3d acceleration = 3;
inline bool CommandTrajectory::has_acceleration() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CommandTrajectory::set_has_acceleration() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CommandTrajectory::clear_has_acceleration() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CommandTrajectory::clear_acceleration() {
  if (acceleration_ != NULL) acceleration_->::gazebo::msgs::Vector3d::Clear();
  clear_has_acceleration();
}
inline const ::gazebo::msgs::Vector3d& CommandTrajectory::acceleration() const {
  // @@protoc_insertion_point(field_get:mav_msgs.msgs.CommandTrajectory.acceleration)
  return acceleration_ != NULL ? *acceleration_ : *default_instance_->acceleration_;
}
inline ::gazebo::msgs::Vector3d* CommandTrajectory::mutable_acceleration() {
  set_has_acceleration();
  if (acceleration_ == NULL) {
    acceleration_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:mav_msgs.msgs.CommandTrajectory.acceleration)
  return acceleration_;
}
inline ::gazebo::msgs::Vector3d* CommandTrajectory::release_acceleration() {
  // @@protoc_insertion_point(field_release:mav_msgs.msgs.CommandTrajectory.acceleration)
  clear_has_acceleration();
  ::gazebo::msgs::Vector3d* temp = acceleration_;
  acceleration_ = NULL;
  return temp;
}
inline void CommandTrajectory::set_allocated_acceleration(::gazebo::msgs::Vector3d* acceleration) {
  delete acceleration_;
  acceleration_ = acceleration;
  if (acceleration) {
    set_has_acceleration();
  } else {
    clear_has_acceleration();
  }
  // @@protoc_insertion_point(field_set_allocated:mav_msgs.msgs.CommandTrajectory.acceleration)
}

// required .gazebo.msgs.Vector3d jerk = 4;
inline bool CommandTrajectory::has_jerk() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CommandTrajectory::set_has_jerk() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CommandTrajectory::clear_has_jerk() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CommandTrajectory::clear_jerk() {
  if (jerk_ != NULL) jerk_->::gazebo::msgs::Vector3d::Clear();
  clear_has_jerk();
}
inline const ::gazebo::msgs::Vector3d& CommandTrajectory::jerk() const {
  // @@protoc_insertion_point(field_get:mav_msgs.msgs.CommandTrajectory.jerk)
  return jerk_ != NULL ? *jerk_ : *default_instance_->jerk_;
}
inline ::gazebo::msgs::Vector3d* CommandTrajectory::mutable_jerk() {
  set_has_jerk();
  if (jerk_ == NULL) {
    jerk_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:mav_msgs.msgs.CommandTrajectory.jerk)
  return jerk_;
}
inline ::gazebo::msgs::Vector3d* CommandTrajectory::release_jerk() {
  // @@protoc_insertion_point(field_release:mav_msgs.msgs.CommandTrajectory.jerk)
  clear_has_jerk();
  ::gazebo::msgs::Vector3d* temp = jerk_;
  jerk_ = NULL;
  return temp;
}
inline void CommandTrajectory::set_allocated_jerk(::gazebo::msgs::Vector3d* jerk) {
  delete jerk_;
  jerk_ = jerk;
  if (jerk) {
    set_has_jerk();
  } else {
    clear_has_jerk();
  }
  // @@protoc_insertion_point(field_set_allocated:mav_msgs.msgs.CommandTrajectory.jerk)
}

// required .gazebo.msgs.Vector3d snap = 5;
inline bool CommandTrajectory::has_snap() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CommandTrajectory::set_has_snap() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CommandTrajectory::clear_has_snap() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CommandTrajectory::clear_snap() {
  if (snap_ != NULL) snap_->::gazebo::msgs::Vector3d::Clear();
  clear_has_snap();
}
inline const ::gazebo::msgs::Vector3d& CommandTrajectory::snap() const {
  // @@protoc_insertion_point(field_get:mav_msgs.msgs.CommandTrajectory.snap)
  return snap_ != NULL ? *snap_ : *default_instance_->snap_;
}
inline ::gazebo::msgs::Vector3d* CommandTrajectory::mutable_snap() {
  set_has_snap();
  if (snap_ == NULL) {
    snap_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:mav_msgs.msgs.CommandTrajectory.snap)
  return snap_;
}
inline ::gazebo::msgs::Vector3d* CommandTrajectory::release_snap() {
  // @@protoc_insertion_point(field_release:mav_msgs.msgs.CommandTrajectory.snap)
  clear_has_snap();
  ::gazebo::msgs::Vector3d* temp = snap_;
  snap_ = NULL;
  return temp;
}
inline void CommandTrajectory::set_allocated_snap(::gazebo::msgs::Vector3d* snap) {
  delete snap_;
  snap_ = snap;
  if (snap) {
    set_has_snap();
  } else {
    clear_has_snap();
  }
  // @@protoc_insertion_point(field_set_allocated:mav_msgs.msgs.CommandTrajectory.snap)
}

// required float yaw = 6;
inline bool CommandTrajectory::has_yaw() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CommandTrajectory::set_has_yaw() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CommandTrajectory::clear_has_yaw() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CommandTrajectory::clear_yaw() {
  yaw_ = 0;
  clear_has_yaw();
}
inline float CommandTrajectory::yaw() const {
  // @@protoc_insertion_point(field_get:mav_msgs.msgs.CommandTrajectory.yaw)
  return yaw_;
}
inline void CommandTrajectory::set_yaw(float value) {
  set_has_yaw();
  yaw_ = value;
  // @@protoc_insertion_point(field_set:mav_msgs.msgs.CommandTrajectory.yaw)
}

// required float yaw_rate = 7;
inline bool CommandTrajectory::has_yaw_rate() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CommandTrajectory::set_has_yaw_rate() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CommandTrajectory::clear_has_yaw_rate() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CommandTrajectory::clear_yaw_rate() {
  yaw_rate_ = 0;
  clear_has_yaw_rate();
}
inline float CommandTrajectory::yaw_rate() const {
  // @@protoc_insertion_point(field_get:mav_msgs.msgs.CommandTrajectory.yaw_rate)
  return yaw_rate_;
}
inline void CommandTrajectory::set_yaw_rate(float value) {
  set_has_yaw_rate();
  yaw_rate_ = value;
  // @@protoc_insertion_point(field_set:mav_msgs.msgs.CommandTrajectory.yaw_rate)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace mav_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CommandTrajectory_2eproto__INCLUDED