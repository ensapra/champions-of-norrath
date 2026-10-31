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

void Mul__C11VIMatrix44DRC8VIVect4DR8VIVect4D(void *arg0, void *arg1, void *arg2) {
    void *sp0;
    void *sp4;
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_16_3;
    s64 temp_18;
    s64 temp_20;
    s64 temp_2_10;
    s64 temp_2_11;
    s64 temp_2_12;
    s64 temp_2_13;
    s64 temp_2_3;
    s64 temp_2_4;
    s64 temp_2_5;
    s64 temp_2_6;
    s64 temp_2_7;
    s64 temp_2_8;
    s64 temp_2_9;
    void *temp_19;
    void *temp_2;
    void *temp_2_2;

    temp_19 = arg0 + 0x20;
    temp_2 = arg0 + 0x40;
    temp_18 = M2C_FIELD(arg1, s64 *, 0);
    sp0 = temp_2;
    temp_20 = dpmul(M2C_FIELD(arg0, s64 *, 0), temp_18);
    temp_2_2 = arg0 + 0x60;
    sp4 = temp_2_2;
    M2C_FIELD(arg2, s64 *, 0) = temp_20;
    temp_2_3 = dpmul(M2C_FIELD(arg0, s64 *, 8), temp_18);
    M2C_FIELD(arg2, s64 *, 8) = temp_2_3;
    temp_2_4 = dpmul(M2C_FIELD(arg0, s64 *, 0x10), temp_18);
    M2C_FIELD(arg2, s64 *, 0x10) = temp_2_4;
    temp_2_5 = dpmul(M2C_FIELD(arg0, s64 *, 0x18), temp_18);
    M2C_FIELD(arg2, s64 *, 0x18) = temp_2_5;
    temp_16 = M2C_FIELD(arg1, s64 *, 8);
    temp_2_6 = dpadd(temp_20, dpmul(M2C_FIELD(arg0, s64 *, 0x20), temp_16));
    M2C_FIELD(arg2, s64 *, 0) = temp_2_6;
    temp_2_7 = dpadd(temp_2_3, dpmul(M2C_FIELD(temp_19, s64 *, 8), temp_16));
    M2C_FIELD(arg2, s64 *, 8) = temp_2_7;
    temp_2_8 = dpadd(temp_2_4, dpmul(M2C_FIELD(temp_19, s64 *, 0x10), temp_16));
    M2C_FIELD(arg2, s64 *, 0x10) = temp_2_8;
    temp_2_9 = dpadd(temp_2_5, dpmul(M2C_FIELD(temp_19, s64 *, 0x18), temp_16));
    M2C_FIELD(arg2, s64 *, 0x18) = temp_2_9;
    temp_16_2 = M2C_FIELD(arg1, s64 *, 0x10);
    temp_2_10 = dpadd(temp_2_6, dpmul(M2C_FIELD(arg0, s64 *, 0x40), temp_16_2));
    M2C_FIELD(arg2, s64 *, 0) = temp_2_10;
    temp_2_11 = dpadd(temp_2_7, dpmul(M2C_FIELD(temp_2, s64 *, 8), temp_16_2));
    M2C_FIELD(arg2, s64 *, 8) = temp_2_11;
    temp_2_12 = dpadd(temp_2_8, dpmul(M2C_FIELD(temp_2, s64 *, 0x10), temp_16_2));
    M2C_FIELD(arg2, s64 *, 0x10) = temp_2_12;
    temp_2_13 = dpadd(temp_2_9, dpmul(M2C_FIELD(temp_2, s64 *, 0x18), temp_16_2));
    M2C_FIELD(arg2, s64 *, 0x18) = temp_2_13;
    temp_16_3 = M2C_FIELD(arg1, s64 *, 0x18);
    M2C_FIELD(arg2, s64 *, 0) = dpadd(temp_2_10, dpmul(M2C_FIELD(arg0, s64 *, 0x60), temp_16_3));
    M2C_FIELD(arg2, s64 *, 8) = dpadd(temp_2_11, dpmul(M2C_FIELD(temp_2_2, s64 *, 8), temp_16_3));
    M2C_FIELD(arg2, s64 *, 0x10) = dpadd(temp_2_12, dpmul(M2C_FIELD(temp_2_2, s64 *, 0x10), temp_16_3));
    M2C_FIELD(arg2, s64 *, 0x18) = dpadd(temp_2_13, dpmul(M2C_FIELD(temp_2_2, s64 *, 0x18), temp_16_3));
}
