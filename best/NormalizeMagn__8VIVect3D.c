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

s64 dpadd(s64, s64);                                /* extern */
s32 dpcmp(s64, M2C_UNK);                            /* extern */
s64 dpdiv(s64, s64);                                /* extern */
s64 dpmul(s64, s64);                                /* extern */
s64 sqrt(s64);                                      /* extern */

s64 NormalizeMagn__8VIVect3D(void *arg0) {
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_4;
    s64 temp_4_2;
    s64 temp_4_3;
    s64 var_18;

    temp_4 = M2C_FIELD(arg0, s64 *, 0);
    temp_4_2 = M2C_FIELD(arg0, s64 *, 8);
    temp_16 = dpmul(temp_4, temp_4);
    temp_4_3 = M2C_FIELD(arg0, s64 *, 0x10);
    temp_16_2 = dpadd(temp_16, dpmul(temp_4_2, temp_4_2));
    var_18 = dpadd(temp_16_2, dpmul(temp_4_3, temp_4_3));
    if (dpcmp(var_18, 0) != 0) {
        temp_2 = sqrt(var_18);
        var_18 = temp_2;
        temp_2_2 = dpdiv(0xFFC0 << 0x2E, temp_2);
        M2C_FIELD(arg0, s64 *, 0) = dpmul(M2C_FIELD(arg0, s64 *, 0), temp_2_2);
        M2C_FIELD(arg0, s64 *, 8) = dpmul(M2C_FIELD(arg0, s64 *, 8), temp_2_2);
        M2C_FIELD(arg0, s64 *, 0x10) = dpmul(M2C_FIELD(arg0, s64 *, 0x10), temp_2_2);
    }
    return var_18;
}
