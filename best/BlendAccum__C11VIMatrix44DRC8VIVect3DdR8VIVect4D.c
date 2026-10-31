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

void BlendAccum__C11VIMatrix44DRC8VIVect3DdR8VIVect4D(void *arg0, s64 *arg1, s64 arg2, void *arg3) {
    s64 *sp0;
    s64 sp8;
    void *sp10;
    s64 sp18;
    void *sp20;
    s64 sp28;
    void *sp30;
    s64 temp_18;
    s64 temp_19;
    s64 temp_2_10;
    s64 temp_2_11;
    s64 temp_2_12;
    s64 temp_2_13;
    s64 temp_2_14;
    s64 temp_2_15;
    s64 temp_2_16;
    s64 temp_2_4;
    s64 temp_2_5;
    s64 temp_2_6;
    s64 temp_2_7;
    s64 temp_2_8;
    s64 temp_2_9;
    s64 temp_5;
    s64 temp_5_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;

    sp0 = arg1;
    sp8 = arg2;
    temp_18 = dpmul(*arg1, arg2);
    temp_2 = arg0 + 0x20;
    temp_5 = temp_18;
    sp10 = temp_2;
    temp_5_2 = dpmul(M2C_FIELD(arg0, s64 *, 0), temp_5);
    temp_2_2 = arg0 + 0x40;
    sp20 = temp_2_2;
    temp_19 = dpadd(M2C_FIELD(arg3, s64 *, 0), temp_5_2);
    temp_2_3 = arg0 + 0x60;
    sp30 = temp_2_3;
    M2C_FIELD(arg3, s64 *, 0) = temp_19;
    temp_2_4 = dpadd(M2C_FIELD(arg3, s64 *, 8), dpmul(M2C_FIELD(arg0, s64 *, 8), temp_18));
    M2C_FIELD(arg3, s64 *, 8) = temp_2_4;
    temp_2_5 = dpadd(M2C_FIELD(arg3, s64 *, 0x10), dpmul(M2C_FIELD(arg0, s64 *, 0x10), temp_18));
    M2C_FIELD(arg3, s64 *, 0x10) = temp_2_5;
    temp_2_6 = dpadd(M2C_FIELD(arg3, s64 *, 0x18), dpmul(M2C_FIELD(arg0, s64 *, 0x18), temp_18));
    M2C_FIELD(arg3, s64 *, 0x18) = temp_2_6;
    temp_2_7 = dpmul(M2C_FIELD(sp0, s64 *, 8), sp8);
    temp_2_8 = dpadd(temp_19, dpmul(M2C_FIELD(arg0, s64 *, 0x20), temp_2_7));
    M2C_FIELD(arg3, s64 *, 0) = temp_2_8;
    temp_2_9 = dpadd(temp_2_4, dpmul(M2C_FIELD(temp_2, s64 *, 8), temp_2_7));
    sp18 = temp_2_9;
    M2C_FIELD(arg3, s64 *, 8) = temp_2_9;
    temp_2_10 = dpadd(temp_2_5, dpmul(M2C_FIELD(temp_2, s64 *, 0x10), temp_2_7));
    M2C_FIELD(arg3, s64 *, 0x10) = temp_2_10;
    temp_2_11 = dpadd(temp_2_6, dpmul(M2C_FIELD(temp_2, s64 *, 0x18), temp_2_7));
    M2C_FIELD(arg3, s64 *, 0x18) = temp_2_11;
    temp_2_12 = dpmul(M2C_FIELD(sp0, s64 *, 0x10), sp8);
    temp_2_13 = dpadd(temp_2_8, dpmul(M2C_FIELD(arg0, s64 *, 0x40), temp_2_12));
    M2C_FIELD(arg3, s64 *, 0) = temp_2_13;
    temp_2_14 = dpadd(sp18, dpmul(M2C_FIELD(temp_2_2, s64 *, 8), temp_2_12));
    sp28 = temp_2_14;
    M2C_FIELD(arg3, s64 *, 8) = temp_2_14;
    temp_2_15 = dpadd(temp_2_10, dpmul(M2C_FIELD(temp_2_2, s64 *, 0x10), temp_2_12));
    M2C_FIELD(arg3, s64 *, 0x10) = temp_2_15;
    temp_2_16 = dpadd(temp_2_11, dpmul(M2C_FIELD(temp_2_2, s64 *, 0x18), temp_2_12));
    M2C_FIELD(arg3, s64 *, 0x18) = temp_2_16;
    M2C_FIELD(arg3, s64 *, 0) = dpadd(temp_2_13, dpmul(M2C_FIELD(arg0, s64 *, 0x60), sp8));
    M2C_FIELD(arg3, s64 *, 8) = dpadd(sp28, dpmul(M2C_FIELD(temp_2_3, s64 *, 8), sp8));
    M2C_FIELD(arg3, s64 *, 0x10) = dpadd(temp_2_15, dpmul(M2C_FIELD(temp_2_3, s64 *, 0x10), sp8));
    M2C_FIELD(arg3, s64 *, 0x18) = dpadd(temp_2_16, dpmul(M2C_FIELD(temp_2_3, s64 *, 0x18), sp8));
}
