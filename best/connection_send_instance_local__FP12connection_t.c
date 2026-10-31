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

s32 drdp_is_software_endpoint__FUl(s64);            /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32);         /* extern */

s32 connection_send_instance_local__FP12connection_t(void *arg0) {
    s32 temp_18;
    s32 var_17;
    s32 var_2;

    var_17 = 0;
    temp_18 = M2C_FIELD(arg0, s32 *, 0xA0) + 0x1D4C0;
    if (drdp_is_software_endpoint__FUl(M2C_FIELD(arg0, s64 *, 0x48)) != 0) {
        var_17 = drdp_is_software_endpoint__FUl(M2C_FIELD(arg0, s64 *, 0x50)) != 0;
    }
    if ((var_17 != 0) || !(M2C_FIELD(arg0, u16 *, 0x1120) & 0x40) || (var_2 = 0, ((temp_18 - endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34))) > 0))) {
        var_2 = 1;
    }
    return var_2;
}
