/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: cs_pkg.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "cs_pkg.pb-c.h"
void   login__pkg__init
                     (LoginPkg         *message)
{
  static LoginPkg init_value = LOGIN__PKG__INIT;
  *message = init_value;
}
size_t login__pkg__get_packed_size
                     (const LoginPkg *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &login__pkg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t login__pkg__pack
                     (const LoginPkg *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &login__pkg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t login__pkg__pack_to_buffer
                     (const LoginPkg *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &login__pkg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
LoginPkg *
       login__pkg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (LoginPkg *)
     protobuf_c_message_unpack (&login__pkg__descriptor,
                                allocator, len, data);
}
void   login__pkg__free_unpacked
                     (LoginPkg *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &login__pkg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   loc__report__pkg__init
                     (LocReportPkg         *message)
{
  static LocReportPkg init_value = LOC__REPORT__PKG__INIT;
  *message = init_value;
}
size_t loc__report__pkg__get_packed_size
                     (const LocReportPkg *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &loc__report__pkg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t loc__report__pkg__pack
                     (const LocReportPkg *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &loc__report__pkg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t loc__report__pkg__pack_to_buffer
                     (const LocReportPkg *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &loc__report__pkg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
LocReportPkg *
       loc__report__pkg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (LocReportPkg *)
     protobuf_c_message_unpack (&loc__report__pkg__descriptor,
                                allocator, len, data);
}
void   loc__report__pkg__free_unpacked
                     (LocReportPkg *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &loc__report__pkg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   head__pkg__init
                     (HeadPkg         *message)
{
  static HeadPkg init_value = HEAD__PKG__INIT;
  *message = init_value;
}
size_t head__pkg__get_packed_size
                     (const HeadPkg *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &head__pkg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t head__pkg__pack
                     (const HeadPkg *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &head__pkg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t head__pkg__pack_to_buffer
                     (const HeadPkg *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &head__pkg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
HeadPkg *
       head__pkg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (HeadPkg *)
     protobuf_c_message_unpack (&head__pkg__descriptor,
                                allocator, len, data);
}
void   head__pkg__free_unpacked
                     (HeadPkg *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &head__pkg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   body__pkg__init
                     (BodyPkg         *message)
{
  static BodyPkg init_value = BODY__PKG__INIT;
  *message = init_value;
}
size_t body__pkg__get_packed_size
                     (const BodyPkg *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &body__pkg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t body__pkg__pack
                     (const BodyPkg *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &body__pkg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t body__pkg__pack_to_buffer
                     (const BodyPkg *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &body__pkg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
BodyPkg *
       body__pkg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (BodyPkg *)
     protobuf_c_message_unpack (&body__pkg__descriptor,
                                allocator, len, data);
}
void   body__pkg__free_unpacked
                     (BodyPkg *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &body__pkg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   cs__pkg__init
                     (CsPkg         *message)
{
  static CsPkg init_value = CS__PKG__INIT;
  *message = init_value;
}
size_t cs__pkg__get_packed_size
                     (const CsPkg *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &cs__pkg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cs__pkg__pack
                     (const CsPkg *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &cs__pkg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cs__pkg__pack_to_buffer
                     (const CsPkg *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &cs__pkg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CsPkg *
       cs__pkg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CsPkg *)
     protobuf_c_message_unpack (&cs__pkg__descriptor,
                                allocator, len, data);
}
void   cs__pkg__free_unpacked
                     (CsPkg *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &cs__pkg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor login__pkg__field_descriptors[3] =
{
  {
    "msg_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(LoginPkg, msg_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "username",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(LoginPkg, username),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "password",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(LoginPkg, password),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned login__pkg__field_indices_by_name[] = {
  0,   /* field[0] = msg_id */
  2,   /* field[2] = password */
  1,   /* field[1] = username */
};
static const ProtobufCIntRange login__pkg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor login__pkg__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Login_Pkg",
  "LoginPkg",
  "LoginPkg",
  "",
  sizeof(LoginPkg),
  3,
  login__pkg__field_descriptors,
  login__pkg__field_indices_by_name,
  1,  login__pkg__number_ranges,
  (ProtobufCMessageInit) login__pkg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor loc__report__pkg__field_descriptors[3] =
{
  {
    "msg_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(LocReportPkg, msg_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "x_loc",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(LocReportPkg, x_loc),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "y_loc",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(LocReportPkg, y_loc),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned loc__report__pkg__field_indices_by_name[] = {
  0,   /* field[0] = msg_id */
  1,   /* field[1] = x_loc */
  2,   /* field[2] = y_loc */
};
static const ProtobufCIntRange loc__report__pkg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor loc__report__pkg__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Loc_Report_Pkg",
  "LocReportPkg",
  "LocReportPkg",
  "",
  sizeof(LocReportPkg),
  3,
  loc__report__pkg__field_descriptors,
  loc__report__pkg__field_indices_by_name,
  1,  loc__report__pkg__number_ranges,
  (ProtobufCMessageInit) loc__report__pkg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor head__pkg__field_descriptors[1] =
{
  {
    "msg_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(HeadPkg, msg_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned head__pkg__field_indices_by_name[] = {
  0,   /* field[0] = msg_id */
};
static const ProtobufCIntRange head__pkg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor head__pkg__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Head_Pkg",
  "HeadPkg",
  "HeadPkg",
  "",
  sizeof(HeadPkg),
  1,
  head__pkg__field_descriptors,
  head__pkg__field_indices_by_name,
  1,  head__pkg__number_ranges,
  (ProtobufCMessageInit) head__pkg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor body__pkg__field_descriptors[2] =
{
  {
    "login_pkg",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(BodyPkg, login_pkg),
    &login__pkg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "loc_report_pkg",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(BodyPkg, loc_report_pkg),
    &loc__report__pkg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned body__pkg__field_indices_by_name[] = {
  1,   /* field[1] = loc_report_pkg */
  0,   /* field[0] = login_pkg */
};
static const ProtobufCIntRange body__pkg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor body__pkg__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Body_Pkg",
  "BodyPkg",
  "BodyPkg",
  "",
  sizeof(BodyPkg),
  2,
  body__pkg__field_descriptors,
  body__pkg__field_indices_by_name,
  1,  body__pkg__number_ranges,
  (ProtobufCMessageInit) body__pkg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor cs__pkg__field_descriptors[2] =
{
  {
    "head_pkg",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(CsPkg, head_pkg),
    &head__pkg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "body_pkg",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(CsPkg, body_pkg),
    &body__pkg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cs__pkg__field_indices_by_name[] = {
  1,   /* field[1] = body_pkg */
  0,   /* field[0] = head_pkg */
};
static const ProtobufCIntRange cs__pkg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor cs__pkg__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Cs_Pkg",
  "CsPkg",
  "CsPkg",
  "",
  sizeof(CsPkg),
  2,
  cs__pkg__field_descriptors,
  cs__pkg__field_indices_by_name,
  1,  cs__pkg__number_ranges,
  (ProtobufCMessageInit) cs__pkg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
