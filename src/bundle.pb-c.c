/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "bundle.pb-c.h"
void   metric__init
                     (Metric         *message)
{
  static Metric init_value = METRIC__INIT;
  *message = init_value;
}
size_t metric__get_packed_size
                     (const Metric *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &metric__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t metric__pack
                     (const Metric *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &metric__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t metric__pack_to_buffer
                     (const Metric *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &metric__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Metric *
       metric__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Metric *)
     protobuf_c_message_unpack (&metric__descriptor,
                                allocator, len, data);
}
void   metric__free_unpacked
                     (Metric *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &metric__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   bundle__init
                     (Bundle         *message)
{
  static Bundle init_value = BUNDLE__INIT;
  *message = init_value;
}
size_t bundle__get_packed_size
                     (const Bundle *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &bundle__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t bundle__pack
                     (const Bundle *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &bundle__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t bundle__pack_to_buffer
                     (const Bundle *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &bundle__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Bundle *
       bundle__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Bundle *)
     protobuf_c_message_unpack (&bundle__descriptor,
                                allocator, len, data);
}
void   bundle__free_unpacked
                     (Bundle *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &bundle__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor metric__field_descriptors[8] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Metric, name),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "metricType",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Metric, metrictype),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "valueDbl",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_DOUBLE,
    PROTOBUF_C_OFFSETOF(Metric, has_valuedbl),
    PROTOBUF_C_OFFSETOF(Metric, valuedbl),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "valueI64",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    PROTOBUF_C_OFFSETOF(Metric, has_valuei64),
    PROTOBUF_C_OFFSETOF(Metric, valuei64),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "valueUI64",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(Metric, has_valueui64),
    PROTOBUF_C_OFFSETOF(Metric, valueui64),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "valueI32",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Metric, has_valuei32),
    PROTOBUF_C_OFFSETOF(Metric, valuei32),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "valueUI32",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Metric, has_valueui32),
    PROTOBUF_C_OFFSETOF(Metric, valueui32),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "valueStr",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Metric, valuestr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned metric__field_indices_by_name[] = {
  1,   /* field[1] = metricType */
  0,   /* field[0] = name */
  2,   /* field[2] = valueDbl */
  5,   /* field[5] = valueI32 */
  3,   /* field[3] = valueI64 */
  7,   /* field[7] = valueStr */
  6,   /* field[6] = valueUI32 */
  4,   /* field[4] = valueUI64 */
};
static const ProtobufCIntRange metric__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor metric__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Metric",
  "Metric",
  "Metric",
  "",
  sizeof(Metric),
  8,
  metric__field_descriptors,
  metric__field_indices_by_name,
  1,  metric__number_ranges,
  (ProtobufCMessageInit) metric__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor bundle__field_descriptors[5] =
{
  {
    "available",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Bundle, available),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "state",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Bundle, state),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "duration",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Bundle, duration),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "status",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Bundle, status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "metrics",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(Bundle, n_metrics),
    PROTOBUF_C_OFFSETOF(Bundle, metrics),
    &metric__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned bundle__field_indices_by_name[] = {
  0,   /* field[0] = available */
  2,   /* field[2] = duration */
  4,   /* field[4] = metrics */
  1,   /* field[1] = state */
  3,   /* field[3] = status */
};
static const ProtobufCIntRange bundle__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor bundle__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Bundle",
  "Bundle",
  "Bundle",
  "",
  sizeof(Bundle),
  5,
  bundle__field_descriptors,
  bundle__field_indices_by_name,
  1,  bundle__number_ranges,
  (ProtobufCMessageInit) bundle__init,
  NULL,NULL,NULL    /* reserved[123] */
};
