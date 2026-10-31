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

s32 message_get_flush__FPC9message_t(s32, s32);     /* extern */
s32 message_get_time__FPC9message_t(s32);           /* extern */

s32 connection_message_get_desired_flush_time__FP12connection_tP9message_t(void *arg0, s32 arg1) {
    s32 temp_5;
    s32 var_18;
    u16 temp_16;

    temp_5 = M2C_FIELD(arg0, u16 *, 0x1120) & 0x10;
    var_18 = message_get_time__FPC9message_t(arg1) + M2C_FIELD(arg0, u16 *, 0x1124) + 0x64;
    if (temp_5 != 0) {
        temp_16 = M2C_FIELD(arg0, u16 *, 0x114A);
        if (((temp_16 - message_get_flush__FPC9message_t(arg1, temp_5)) << 0x10) > 0) {
            var_18 = message_get_time__FPC9message_t(arg1);
        }
    }
    return var_18;
}
