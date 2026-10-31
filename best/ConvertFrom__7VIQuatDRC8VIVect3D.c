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

s64 cos(s64);                                       /* extern */
s64 dpadd(s64, s64);                                /* extern */
s64 dpmul(s64, s64);                                /* extern */
s64 dpsub(M2C_UNK, s64);                            /* extern */
s64 sin(s64);                                       /* extern */

void ConvertFrom__7VIQuatDRC8VIVect3D(void *arg0, void *arg1) {
    void *sp0;
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_16_3;
    s64 temp_17;
    s64 temp_17_2;
    s64 temp_18;
    s64 temp_19;
    s64 temp_20;
    s64 temp_21;
    s64 temp_23;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_30;

    sp0 = arg0;
    temp_17 = 0xFF80 << 0x2E;
    temp_30 = sin(dpmul(M2C_FIELD(arg1, s64 *, 0), temp_17));
    temp_21 = cos(dpmul(M2C_FIELD(arg1, s64 *, 0), temp_17));
    temp_20 = sin(dpmul(M2C_FIELD(arg1, s64 *, 8), temp_17));
    temp_23 = cos(dpmul(M2C_FIELD(arg1, s64 *, 8), temp_17));
    temp_19 = sin(dpmul(M2C_FIELD(arg1, s64 *, 0x10), temp_17));
    temp_18 = cos(dpmul(M2C_FIELD(arg1, s64 *, 0x10), temp_17));
    temp_2 = dpmul(temp_30, temp_23);
    temp_16 = dpmul(temp_2, temp_19);
    M2C_FIELD(sp0, s64 *, 0) = dpadd(temp_16, dpmul(dpmul(temp_21, temp_20), temp_18));
    temp_16_2 = dpmul(dpmul(dpsub(0, temp_21), temp_20), temp_19);
    M2C_FIELD(sp0, s64 *, 8) = dpadd(temp_16_2, dpmul(temp_2, temp_18));
    temp_17_2 = dpmul(dpmul(dpsub(0, temp_30), temp_20), temp_18);
    temp_2_2 = dpmul(temp_21, temp_23);
    M2C_FIELD(sp0, s64 *, 0x10) = dpadd(temp_17_2, dpmul(temp_2_2, temp_19));
    temp_16_3 = dpmul(temp_2_2, temp_18);
    M2C_FIELD(sp0, s64 *, 0x18) = dpadd(temp_16_3, dpmul(dpmul(temp_30, temp_20), temp_19));
}
