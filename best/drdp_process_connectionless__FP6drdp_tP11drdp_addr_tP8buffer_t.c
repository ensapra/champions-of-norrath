/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 buffer_bytes_remaining__FP8buffer_t(s32);       /* extern */
s32 buffer_get_position_ptr__FP8buffer_t(s32);      /* extern */
M2C_UNK drdp_address_to_endpoint__FPCUcUsUsPUl(void *, u16, M2C_UNK, s64 *); /* extern */
M2C_UNK drdp_arrival_enqueue__FP6drdp_tP9message_t(s32, s32); /* extern */
s32 drdp_get_time__FPC6drdp_t(s32);                 /* extern */
s32 message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(s32 *, M2C_UNK, M2C_UNK, s64, M2C_UNK, s32, s32, M2C_UNK, s32, s32); /* extern */

s32 drdp_process_connectionless__FP6drdp_tP11drdp_addr_tP8buffer_t(s32 arg0, void *arg1, s32 arg2) {
    s32 sp10;
    s64 sp18;
    s32 temp_16;
    s32 temp_17;
    s32 var_2;

    drdp_address_to_endpoint__FPCUcUsUsPUl(arg1, M2C_FIELD(arg1, u16 *, 4), 0xFFFF, &sp18);
    temp_17 = buffer_get_position_ptr__FP8buffer_t(arg2);
    temp_16 = buffer_bytes_remaining__FP8buffer_t(arg2);
    var_2 = message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(&sp10, 0, 0, sp18, -1, temp_17, temp_16, 0xF8, 0, drdp_get_time__FPC6drdp_t(arg0));
    if (var_2 == 0) {
        drdp_arrival_enqueue__FP6drdp_tP9message_t(arg0, sp10);
        var_2 = 0;
    }
    return var_2;
}
