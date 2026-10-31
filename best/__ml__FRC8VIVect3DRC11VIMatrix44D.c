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
s64 dpmul(s64, s64);                                /* extern */

void *__ml__FRC8VIVect3DRC11VIMatrix44D(void *arg0, void *arg1, void *arg2) {
    void *sp20;
    void *sp24;
    void *sp28;
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_16_3;
    s64 temp_17;
    s64 temp_17_2;
    s64 temp_17_3;
    s64 temp_17_4;
    s64 temp_18_2;
    s64 temp_18_3;
    s64 temp_19;
    s64 temp_20;
    s64 temp_21;
    s64 temp_21_2;
    s64 temp_21_3;
    s64 temp_22;
    s64 temp_23;
    s64 temp_2_2;
    s64 temp_30;
    s64 temp_30_2;
    void *temp_18;
    void *temp_2;
    void *temp_3;

    temp_18 = arg2 + 0x20;
    temp_2 = arg2 + 0x40;
    temp_17 = M2C_FIELD(arg1, s64 *, 0);
    sp20 = arg0;
    sp24 = temp_2;
    temp_3 = arg2 + 0x60;
    temp_21 = dpmul(M2C_FIELD(arg2, s64 *, 0), temp_17);
    sp28 = temp_3;
    temp_30 = dpmul(M2C_FIELD(arg2, s64 *, 8), temp_17);
    temp_23 = dpmul(M2C_FIELD(arg2, s64 *, 0x10), temp_17);
    temp_16 = M2C_FIELD(arg1, s64 *, 8);
    temp_17_2 = dpmul(M2C_FIELD(arg2, s64 *, 0x18), temp_17);
    temp_21_2 = dpadd(temp_21, dpmul(M2C_FIELD(arg2, s64 *, 0x20), temp_16));
    temp_30_2 = dpadd(temp_30, dpmul(M2C_FIELD(temp_18, s64 *, 8), temp_16));
    temp_22 = dpadd(temp_23, dpmul(M2C_FIELD(temp_18, s64 *, 0x10), temp_16));
    temp_16_2 = M2C_FIELD(arg1, s64 *, 0x10);
    temp_20 = dpadd(temp_17_2, dpmul(M2C_FIELD(temp_18, s64 *, 0x18), temp_16));
    temp_18_2 = dpadd(temp_21_2, dpmul(M2C_FIELD(arg2, s64 *, 0x40), temp_16_2));
    temp_17_3 = dpadd(temp_30_2, dpmul(M2C_FIELD(sp24, s64 *, 8), temp_16_2));
    temp_21_3 = dpadd(temp_22, dpmul(M2C_FIELD(temp_2, s64 *, 0x10), temp_16_2));
    temp_19 = dpadd(temp_20, dpmul(M2C_FIELD(sp24, s64 *, 0x18), temp_16_2));
    temp_18_3 = dpadd(temp_18_2, M2C_FIELD(sp28, s64 *, 0));
    temp_17_4 = dpadd(temp_17_3, M2C_FIELD(temp_3, s64 *, 8));
    temp_16_3 = dpadd(temp_21_3, M2C_FIELD(sp28, s64 *, 0x10));
    temp_2_2 = dpadd(temp_19, M2C_FIELD(temp_3, s64 *, 0x18));
    M2C_FIELD(sp20, s64 *, 0) = temp_18_3;
    M2C_FIELD(sp20, s64 *, 0x18) = temp_2_2;
    M2C_FIELD(sp20, s64 *, 8) = temp_17_4;
    M2C_FIELD(sp20, s64 *, 0x10) = temp_16_3;
    return sp20;
}
