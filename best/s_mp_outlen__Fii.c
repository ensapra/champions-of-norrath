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

s32 dpdiv(s32, s32);                                /* extern */
s32 dpmul(s64, s32);                                /* extern */
M2C_UNK dptoli(s32);                                /* extern */
s64 litodp(s32);                                    /* extern */
s32 log(s64);                                       /* extern */

void s_mp_outlen__Fii(s32 arg0, s32 arg1) {
    s32 temp_17;
    s32 temp_18;
    s64 temp_16;

    temp_18 = log(0x8000 << 0x2F);
    temp_17 = log(litodp(arg1));
    temp_16 = litodp(arg0);
    dptoli(dpmul(temp_16, dpdiv(temp_18, temp_17)));
}
