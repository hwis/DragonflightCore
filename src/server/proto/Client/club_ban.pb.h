// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: club_ban.proto

#ifndef PROTOBUF_club_5fban_2eproto__INCLUDED
#define PROTOBUF_club_5fban_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "global_extensions/field_options.pb.h"
#include "club_member.pb.h"
#include "api/client/v2/attribute_types.pb.h"
#include "Define.h" // for TC_PROTO_API
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {
namespace club {
namespace v1 {

// Internal implementation detail -- do not call these.
void TC_PROTO_API protobuf_AddDesc_club_5fban_2eproto();
void protobuf_AssignDesc_club_5fban_2eproto();
void protobuf_ShutdownFile_club_5fban_2eproto();

class AddBanOptions;
class ClubBan;

// ===================================================================

class TC_PROTO_API AddBanOptions : public ::google::protobuf::Message {
 public:
  AddBanOptions();
  virtual ~AddBanOptions();

  AddBanOptions(const AddBanOptions& from);

  inline AddBanOptions& operator=(const AddBanOptions& from) {
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
  static const AddBanOptions& default_instance();

  void Swap(AddBanOptions* other);

  // implements Message ----------------------------------------------

  AddBanOptions* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .bgs.protocol.club.v1.MemberId target_id = 1;
  inline bool has_target_id() const;
  inline void clear_target_id();
  static const int kTargetIdFieldNumber = 1;
  inline const ::bgs::protocol::club::v1::MemberId& target_id() const;
  inline ::bgs::protocol::club::v1::MemberId* mutable_target_id();
  inline ::bgs::protocol::club::v1::MemberId* release_target_id();
  inline void set_allocated_target_id(::bgs::protocol::club::v1::MemberId* target_id);

  // repeated .bgs.protocol.v2.Attribute attribute = 2;
  inline int attribute_size() const;
  inline void clear_attribute();
  static const int kAttributeFieldNumber = 2;
  inline const ::bgs::protocol::v2::Attribute& attribute(int index) const;
  inline ::bgs::protocol::v2::Attribute* mutable_attribute(int index);
  inline ::bgs::protocol::v2::Attribute* add_attribute();
  inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >&
      attribute() const;
  inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >*
      mutable_attribute();

  // optional string reason = 3;
  inline bool has_reason() const;
  inline void clear_reason();
  static const int kReasonFieldNumber = 3;
  inline const ::std::string& reason() const;
  inline void set_reason(const ::std::string& value);
  inline void set_reason(const char* value);
  inline void set_reason(const char* value, size_t size);
  inline ::std::string* mutable_reason();
  inline ::std::string* release_reason();
  inline void set_allocated_reason(::std::string* reason);

  // @@protoc_insertion_point(class_scope:bgs.protocol.club.v1.AddBanOptions)
 private:
  inline void set_has_target_id();
  inline void clear_has_target_id();
  inline void set_has_reason();
  inline void clear_has_reason();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::bgs::protocol::club::v1::MemberId* target_id_;
  ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute > attribute_;
  ::std::string* reason_;
  friend void TC_PROTO_API protobuf_AddDesc_club_5fban_2eproto();
  friend void protobuf_AssignDesc_club_5fban_2eproto();
  friend void protobuf_ShutdownFile_club_5fban_2eproto();

  void InitAsDefaultInstance();
  static AddBanOptions* default_instance_;
};
// -------------------------------------------------------------------

class TC_PROTO_API ClubBan : public ::google::protobuf::Message {
 public:
  ClubBan();
  virtual ~ClubBan();

  ClubBan(const ClubBan& from);

  inline ClubBan& operator=(const ClubBan& from) {
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
  static const ClubBan& default_instance();

  void Swap(ClubBan* other);

  // implements Message ----------------------------------------------

  ClubBan* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .bgs.protocol.club.v1.MemberId id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::bgs::protocol::club::v1::MemberId& id() const;
  inline ::bgs::protocol::club::v1::MemberId* mutable_id();
  inline ::bgs::protocol::club::v1::MemberId* release_id();
  inline void set_allocated_id(::bgs::protocol::club::v1::MemberId* id);

  // optional string battle_tag = 2;
  inline bool has_battle_tag() const;
  inline void clear_battle_tag();
  static const int kBattleTagFieldNumber = 2;
  inline const ::std::string& battle_tag() const;
  inline void set_battle_tag(const ::std::string& value);
  inline void set_battle_tag(const char* value);
  inline void set_battle_tag(const char* value, size_t size);
  inline ::std::string* mutable_battle_tag();
  inline ::std::string* release_battle_tag();
  inline void set_allocated_battle_tag(::std::string* battle_tag);

  // optional .bgs.protocol.club.v1.MemberDescription creator = 3;
  inline bool has_creator() const;
  inline void clear_creator();
  static const int kCreatorFieldNumber = 3;
  inline const ::bgs::protocol::club::v1::MemberDescription& creator() const;
  inline ::bgs::protocol::club::v1::MemberDescription* mutable_creator();
  inline ::bgs::protocol::club::v1::MemberDescription* release_creator();
  inline void set_allocated_creator(::bgs::protocol::club::v1::MemberDescription* creator);

  // repeated .bgs.protocol.v2.Attribute attribute = 4;
  inline int attribute_size() const;
  inline void clear_attribute();
  static const int kAttributeFieldNumber = 4;
  inline const ::bgs::protocol::v2::Attribute& attribute(int index) const;
  inline ::bgs::protocol::v2::Attribute* mutable_attribute(int index);
  inline ::bgs::protocol::v2::Attribute* add_attribute();
  inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >&
      attribute() const;
  inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >*
      mutable_attribute();

  // optional string reason = 5;
  inline bool has_reason() const;
  inline void clear_reason();
  static const int kReasonFieldNumber = 5;
  inline const ::std::string& reason() const;
  inline void set_reason(const ::std::string& value);
  inline void set_reason(const char* value);
  inline void set_reason(const char* value, size_t size);
  inline ::std::string* mutable_reason();
  inline ::std::string* release_reason();
  inline void set_allocated_reason(::std::string* reason);

  // optional uint64 creation_time = 6;
  inline bool has_creation_time() const;
  inline void clear_creation_time();
  static const int kCreationTimeFieldNumber = 6;
  inline ::google::protobuf::uint64 creation_time() const;
  inline void set_creation_time(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:bgs.protocol.club.v1.ClubBan)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_battle_tag();
  inline void clear_has_battle_tag();
  inline void set_has_creator();
  inline void clear_has_creator();
  inline void set_has_reason();
  inline void clear_has_reason();
  inline void set_has_creation_time();
  inline void clear_has_creation_time();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::bgs::protocol::club::v1::MemberId* id_;
  ::std::string* battle_tag_;
  ::bgs::protocol::club::v1::MemberDescription* creator_;
  ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute > attribute_;
  ::std::string* reason_;
  ::google::protobuf::uint64 creation_time_;
  friend void TC_PROTO_API protobuf_AddDesc_club_5fban_2eproto();
  friend void protobuf_AssignDesc_club_5fban_2eproto();
  friend void protobuf_ShutdownFile_club_5fban_2eproto();

  void InitAsDefaultInstance();
  static ClubBan* default_instance_;
};
// ===================================================================

// ===================================================================

// ===================================================================

// AddBanOptions

// optional .bgs.protocol.club.v1.MemberId target_id = 1;
inline bool AddBanOptions::has_target_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AddBanOptions::set_has_target_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AddBanOptions::clear_has_target_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AddBanOptions::clear_target_id() {
  if (target_id_ != NULL) target_id_->::bgs::protocol::club::v1::MemberId::Clear();
  clear_has_target_id();
}
inline const ::bgs::protocol::club::v1::MemberId& AddBanOptions::target_id() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.AddBanOptions.target_id)
  return target_id_ != NULL ? *target_id_ : *default_instance_->target_id_;
}
inline ::bgs::protocol::club::v1::MemberId* AddBanOptions::mutable_target_id() {
  set_has_target_id();
  if (target_id_ == NULL) target_id_ = new ::bgs::protocol::club::v1::MemberId;
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.AddBanOptions.target_id)
  return target_id_;
}
inline ::bgs::protocol::club::v1::MemberId* AddBanOptions::release_target_id() {
  clear_has_target_id();
  ::bgs::protocol::club::v1::MemberId* temp = target_id_;
  target_id_ = NULL;
  return temp;
}
inline void AddBanOptions::set_allocated_target_id(::bgs::protocol::club::v1::MemberId* target_id) {
  delete target_id_;
  target_id_ = target_id;
  if (target_id) {
    set_has_target_id();
  } else {
    clear_has_target_id();
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.AddBanOptions.target_id)
}

// repeated .bgs.protocol.v2.Attribute attribute = 2;
inline int AddBanOptions::attribute_size() const {
  return attribute_.size();
}
inline void AddBanOptions::clear_attribute() {
  attribute_.Clear();
}
inline const ::bgs::protocol::v2::Attribute& AddBanOptions::attribute(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.AddBanOptions.attribute)
  return attribute_.Get(index);
}
inline ::bgs::protocol::v2::Attribute* AddBanOptions::mutable_attribute(int index) {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.AddBanOptions.attribute)
  return attribute_.Mutable(index);
}
inline ::bgs::protocol::v2::Attribute* AddBanOptions::add_attribute() {
  // @@protoc_insertion_point(field_add:bgs.protocol.club.v1.AddBanOptions.attribute)
  return attribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >&
AddBanOptions::attribute() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.club.v1.AddBanOptions.attribute)
  return attribute_;
}
inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >*
AddBanOptions::mutable_attribute() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.club.v1.AddBanOptions.attribute)
  return &attribute_;
}

// optional string reason = 3;
inline bool AddBanOptions::has_reason() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AddBanOptions::set_has_reason() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AddBanOptions::clear_has_reason() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AddBanOptions::clear_reason() {
  if (reason_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_->clear();
  }
  clear_has_reason();
}
inline const ::std::string& AddBanOptions::reason() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.AddBanOptions.reason)
  return *reason_;
}
inline void AddBanOptions::set_reason(const ::std::string& value) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  reason_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.AddBanOptions.reason)
}
inline void AddBanOptions::set_reason(const char* value) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  reason_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.club.v1.AddBanOptions.reason)
}
inline void AddBanOptions::set_reason(const char* value, size_t size) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  reason_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.club.v1.AddBanOptions.reason)
}
inline ::std::string* AddBanOptions::mutable_reason() {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.AddBanOptions.reason)
  return reason_;
}
inline ::std::string* AddBanOptions::release_reason() {
  clear_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = reason_;
    reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AddBanOptions::set_allocated_reason(::std::string* reason) {
  if (reason_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete reason_;
  }
  if (reason) {
    set_has_reason();
    reason_ = reason;
  } else {
    clear_has_reason();
    reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.AddBanOptions.reason)
}

// -------------------------------------------------------------------

// ClubBan

// optional .bgs.protocol.club.v1.MemberId id = 1;
inline bool ClubBan::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClubBan::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClubBan::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClubBan::clear_id() {
  if (id_ != NULL) id_->::bgs::protocol::club::v1::MemberId::Clear();
  clear_has_id();
}
inline const ::bgs::protocol::club::v1::MemberId& ClubBan::id() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubBan.id)
  return id_ != NULL ? *id_ : *default_instance_->id_;
}
inline ::bgs::protocol::club::v1::MemberId* ClubBan::mutable_id() {
  set_has_id();
  if (id_ == NULL) id_ = new ::bgs::protocol::club::v1::MemberId;
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubBan.id)
  return id_;
}
inline ::bgs::protocol::club::v1::MemberId* ClubBan::release_id() {
  clear_has_id();
  ::bgs::protocol::club::v1::MemberId* temp = id_;
  id_ = NULL;
  return temp;
}
inline void ClubBan::set_allocated_id(::bgs::protocol::club::v1::MemberId* id) {
  delete id_;
  id_ = id;
  if (id) {
    set_has_id();
  } else {
    clear_has_id();
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.ClubBan.id)
}

// optional string battle_tag = 2;
inline bool ClubBan::has_battle_tag() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClubBan::set_has_battle_tag() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ClubBan::clear_has_battle_tag() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ClubBan::clear_battle_tag() {
  if (battle_tag_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    battle_tag_->clear();
  }
  clear_has_battle_tag();
}
inline const ::std::string& ClubBan::battle_tag() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubBan.battle_tag)
  return *battle_tag_;
}
inline void ClubBan::set_battle_tag(const ::std::string& value) {
  set_has_battle_tag();
  if (battle_tag_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    battle_tag_ = new ::std::string;
  }
  battle_tag_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubBan.battle_tag)
}
inline void ClubBan::set_battle_tag(const char* value) {
  set_has_battle_tag();
  if (battle_tag_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    battle_tag_ = new ::std::string;
  }
  battle_tag_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.club.v1.ClubBan.battle_tag)
}
inline void ClubBan::set_battle_tag(const char* value, size_t size) {
  set_has_battle_tag();
  if (battle_tag_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    battle_tag_ = new ::std::string;
  }
  battle_tag_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.club.v1.ClubBan.battle_tag)
}
inline ::std::string* ClubBan::mutable_battle_tag() {
  set_has_battle_tag();
  if (battle_tag_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    battle_tag_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubBan.battle_tag)
  return battle_tag_;
}
inline ::std::string* ClubBan::release_battle_tag() {
  clear_has_battle_tag();
  if (battle_tag_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = battle_tag_;
    battle_tag_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClubBan::set_allocated_battle_tag(::std::string* battle_tag) {
  if (battle_tag_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete battle_tag_;
  }
  if (battle_tag) {
    set_has_battle_tag();
    battle_tag_ = battle_tag;
  } else {
    clear_has_battle_tag();
    battle_tag_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.ClubBan.battle_tag)
}

// optional .bgs.protocol.club.v1.MemberDescription creator = 3;
inline bool ClubBan::has_creator() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ClubBan::set_has_creator() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ClubBan::clear_has_creator() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ClubBan::clear_creator() {
  if (creator_ != NULL) creator_->::bgs::protocol::club::v1::MemberDescription::Clear();
  clear_has_creator();
}
inline const ::bgs::protocol::club::v1::MemberDescription& ClubBan::creator() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubBan.creator)
  return creator_ != NULL ? *creator_ : *default_instance_->creator_;
}
inline ::bgs::protocol::club::v1::MemberDescription* ClubBan::mutable_creator() {
  set_has_creator();
  if (creator_ == NULL) creator_ = new ::bgs::protocol::club::v1::MemberDescription;
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubBan.creator)
  return creator_;
}
inline ::bgs::protocol::club::v1::MemberDescription* ClubBan::release_creator() {
  clear_has_creator();
  ::bgs::protocol::club::v1::MemberDescription* temp = creator_;
  creator_ = NULL;
  return temp;
}
inline void ClubBan::set_allocated_creator(::bgs::protocol::club::v1::MemberDescription* creator) {
  delete creator_;
  creator_ = creator;
  if (creator) {
    set_has_creator();
  } else {
    clear_has_creator();
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.ClubBan.creator)
}

// repeated .bgs.protocol.v2.Attribute attribute = 4;
inline int ClubBan::attribute_size() const {
  return attribute_.size();
}
inline void ClubBan::clear_attribute() {
  attribute_.Clear();
}
inline const ::bgs::protocol::v2::Attribute& ClubBan::attribute(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubBan.attribute)
  return attribute_.Get(index);
}
inline ::bgs::protocol::v2::Attribute* ClubBan::mutable_attribute(int index) {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubBan.attribute)
  return attribute_.Mutable(index);
}
inline ::bgs::protocol::v2::Attribute* ClubBan::add_attribute() {
  // @@protoc_insertion_point(field_add:bgs.protocol.club.v1.ClubBan.attribute)
  return attribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >&
ClubBan::attribute() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.club.v1.ClubBan.attribute)
  return attribute_;
}
inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >*
ClubBan::mutable_attribute() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.club.v1.ClubBan.attribute)
  return &attribute_;
}

// optional string reason = 5;
inline bool ClubBan::has_reason() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ClubBan::set_has_reason() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ClubBan::clear_has_reason() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ClubBan::clear_reason() {
  if (reason_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_->clear();
  }
  clear_has_reason();
}
inline const ::std::string& ClubBan::reason() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubBan.reason)
  return *reason_;
}
inline void ClubBan::set_reason(const ::std::string& value) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  reason_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubBan.reason)
}
inline void ClubBan::set_reason(const char* value) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  reason_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.club.v1.ClubBan.reason)
}
inline void ClubBan::set_reason(const char* value, size_t size) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  reason_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.club.v1.ClubBan.reason)
}
inline ::std::string* ClubBan::mutable_reason() {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubBan.reason)
  return reason_;
}
inline ::std::string* ClubBan::release_reason() {
  clear_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = reason_;
    reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClubBan::set_allocated_reason(::std::string* reason) {
  if (reason_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete reason_;
  }
  if (reason) {
    set_has_reason();
    reason_ = reason;
  } else {
    clear_has_reason();
    reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.ClubBan.reason)
}

// optional uint64 creation_time = 6;
inline bool ClubBan::has_creation_time() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ClubBan::set_has_creation_time() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ClubBan::clear_has_creation_time() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ClubBan::clear_creation_time() {
  creation_time_ = GOOGLE_ULONGLONG(0);
  clear_has_creation_time();
}
inline ::google::protobuf::uint64 ClubBan::creation_time() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubBan.creation_time)
  return creation_time_;
}
inline void ClubBan::set_creation_time(::google::protobuf::uint64 value) {
  set_has_creation_time();
  creation_time_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubBan.creation_time)
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace club
}  // namespace protocol
}  // namespace bgs

#ifndef SWIG
namespace google {
namespace protobuf {
}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_club_5fban_2eproto__INCLUDED
