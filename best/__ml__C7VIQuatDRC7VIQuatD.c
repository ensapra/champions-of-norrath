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
s64 dpsub(s64, s64);                                /* extern */

void *__ml__C7VIQuatDRC7VIQuatD(void *arg0, void *arg1, void *arg2) {
    s64 sp0;
    s64 sp8;
    s64 sp10;
    s64 sp18;
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_16_3;
    s64 temp_16_4;
    s64 temp_16_5;
    s64 temp_16_6;
    s64 temp_16_7;
    s64 temp_16_8;
    s64 temp_16_9;
    s64 temp_17;
    s64 temp_18;
    s64 temp_18_2;
    s64 temp_18_3;
    s64 temp_18_4;
    s64 temp_19;
    s64 temp_20;
    s64 temp_21;
    s64 temp_22;
    s64 temp_23;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_3;

    temp_2 = M2C_FIELD(arg2, s64 *, 8);
    sp0 = temp_2;
    temp_3 = M2C_FIELD(arg1, s64 *, 0x10);
    sp8 = temp_3;
    temp_18 = dpmul(temp_2, temp_3);
    temp_2_2 = M2C_FIELD(arg2, s64 *, 0x10);
    sp10 = temp_2_2;
    temp_23 = M2C_FIELD(arg1, s64 *, 8);
    temp_21 = M2C_FIELD(arg2, s64 *, 0x18);
    temp_22 = M2C_FIELD(arg1, s64 *, 0);
    temp_18_2 = dpsub(temp_18, dpmul(temp_2_2, temp_23));
    temp_20 = M2C_FIELD(arg2, s64 *, 0);
    temp_19 = M2C_FIELD(arg1, s64 *, 0x18);
    temp_18_3 = dpadd(temp_18_2, dpmul(temp_21, temp_22));
    sp18 = dpadd(temp_18_3, dpmul(temp_20, temp_19));
    temp_16 = dpmul(sp10, temp_22);
    temp_16_2 = dpsub(temp_16, dpmul(temp_20, sp8));
    temp_16_3 = dpadd(temp_16_2, dpmul(temp_21, temp_23));
    temp_18_4 = dpadd(temp_16_3, dpmul(sp0, temp_19));
    temp_16_4 = dpmul(temp_20, temp_23);
    temp_16_5 = dpsub(temp_16_4, dpmul(sp0, temp_22));
    temp_16_6 = dpadd(temp_16_5, dpmul(temp_21, sp8));
    temp_17 = dpadd(temp_16_6, dpmul(sp10, temp_19));
    temp_16_7 = dpmul(temp_21, temp_19);
    temp_16_8 = dpsub(temp_16_7, dpmul(temp_20, temp_22));
    temp_16_9 = dpsub(temp_16_8, dpmul(sp0, temp_23));
    M2C_FIELD(arg0, s64 *, 0x18) = dpsub(temp_16_9, dpmul(sp10, sp8));
    M2C_FIELD(arg0, s64 *, 8) = temp_18_4;
    M2C_FIELD(arg0, s64 *, 0x10) = temp_17;
    M2C_FIELD(arg0, s64 *, 0) = sp18;
    return arg0;
}
