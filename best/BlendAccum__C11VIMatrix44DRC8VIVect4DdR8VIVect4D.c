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

s64 dpadd(s64, s32);                                /* extern */
s32 dpmul(s64, s32);                                /* extern */

void BlendAccum__C11VIMatrix44DRC8VIVect4DdR8VIVect4D(void *arg0, s64 *arg1, s32 arg2, void *arg3) {
    s64 *sp0;
    void *sp4;
    s32 temp_2;
    s32 temp_2_11;
    s32 temp_2_16;
    s32 temp_2_6;
    s64 temp_23;
    s64 temp_2_10;
    s64 temp_2_12;
    s64 temp_2_13;
    s64 temp_2_14;
    s64 temp_2_15;
    s64 temp_2_3;
    s64 temp_2_4;
    s64 temp_2_5;
    s64 temp_2_7;
    s64 temp_2_8;
    s64 temp_2_9;
    void *temp_19;
    void *temp_20;
    void *temp_2_2;

    temp_19 = arg0 + 0x20;
    sp0 = arg1;
    temp_20 = arg0 + 0x40;
    temp_2 = dpmul(*arg1, arg2);
    temp_23 = dpadd(M2C_FIELD(arg3, s64 *, 0), dpmul(M2C_FIELD(arg0, s64 *, 0), temp_2));
    temp_2_2 = arg0 + 0x60;
    sp4 = temp_2_2;
    M2C_FIELD(arg3, s64 *, 0) = temp_23;
    temp_2_3 = dpadd(M2C_FIELD(arg3, s64 *, 8), dpmul(M2C_FIELD(arg0, s64 *, 8), temp_2));
    M2C_FIELD(arg3, s64 *, 8) = temp_2_3;
    temp_2_4 = dpadd(M2C_FIELD(arg3, s64 *, 0x10), dpmul(M2C_FIELD(arg0, s64 *, 0x10), temp_2));
    M2C_FIELD(arg3, s64 *, 0x10) = temp_2_4;
    temp_2_5 = dpadd(M2C_FIELD(arg3, s64 *, 0x18), dpmul(M2C_FIELD(arg0, s64 *, 0x18), temp_2));
    M2C_FIELD(arg3, s64 *, 0x18) = temp_2_5;
    temp_2_6 = dpmul(M2C_FIELD(sp0, s64 *, 8), arg2);
    temp_2_7 = dpadd(temp_23, dpmul(M2C_FIELD(arg0, s64 *, 0x20), temp_2_6));
    M2C_FIELD(arg3, s64 *, 0) = temp_2_7;
    temp_2_8 = dpadd(temp_2_3, dpmul(M2C_FIELD(temp_19, s64 *, 8), temp_2_6));
    M2C_FIELD(arg3, s64 *, 8) = temp_2_8;
    temp_2_9 = dpadd(temp_2_4, dpmul(M2C_FIELD(temp_19, s64 *, 0x10), temp_2_6));
    M2C_FIELD(arg3, s64 *, 0x10) = temp_2_9;
    temp_2_10 = dpadd(temp_2_5, dpmul(M2C_FIELD(temp_19, s64 *, 0x18), temp_2_6));
    M2C_FIELD(arg3, s64 *, 0x18) = temp_2_10;
    temp_2_11 = dpmul(M2C_FIELD(sp0, s64 *, 0x10), arg2);
    temp_2_12 = dpadd(temp_2_7, dpmul(M2C_FIELD(arg0, s64 *, 0x40), temp_2_11));
    M2C_FIELD(arg3, s64 *, 0) = temp_2_12;
    temp_2_13 = dpadd(temp_2_8, dpmul(M2C_FIELD(temp_20, s64 *, 8), temp_2_11));
    M2C_FIELD(arg3, s64 *, 8) = temp_2_13;
    temp_2_14 = dpadd(temp_2_9, dpmul(M2C_FIELD(temp_20, s64 *, 0x10), temp_2_11));
    M2C_FIELD(arg3, s64 *, 0x10) = temp_2_14;
    temp_2_15 = dpadd(temp_2_10, dpmul(M2C_FIELD(temp_20, s64 *, 0x18), temp_2_11));
    M2C_FIELD(arg3, s64 *, 0x18) = temp_2_15;
    temp_2_16 = dpmul(M2C_FIELD(sp0, s64 *, 0x18), arg2);
    M2C_FIELD(arg3, s64 *, 0) = dpadd(temp_2_12, dpmul(M2C_FIELD(arg0, s64 *, 0x60), temp_2_16));
    M2C_FIELD(arg3, s64 *, 8) = dpadd(temp_2_13, dpmul(M2C_FIELD(temp_2_2, s64 *, 8), temp_2_16));
    M2C_FIELD(arg3, s64 *, 0x10) = dpadd(temp_2_14, dpmul(M2C_FIELD(temp_2_2, s64 *, 0x10), temp_2_16));
    M2C_FIELD(arg3, s64 *, 0x18) = dpadd(temp_2_15, dpmul(M2C_FIELD(temp_2_2, s64 *, 0x18), temp_2_16));
}
