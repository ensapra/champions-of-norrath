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

void UnitRotate__11VIMatrix44DRC7VIQuatD(void *arg0, void *arg1) {
    s64 sp0;
    s64 sp8;
    s64 *sp10;
    s32 sp14;
    s64 *sp18;
    s32 sp1C;
    s64 *sp20;
    s32 sp24;
    s64 *sp28;
    s32 sp2C;
    s64 temp_16;
    s64 temp_18;
    s64 temp_18_2;
    s64 temp_19;
    s64 temp_20;
    s64 temp_21;
    s64 temp_21_2;
    s64 temp_22;
    s64 temp_23;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_2_3;
    s64 temp_30;
    s64 temp_4;
    s64 temp_4_2;

    temp_4 = M2C_FIELD(arg1, s64 *, 0x18);
    sp10 = arg0 + 8;
    sp14 = arg0 + 0x10;
    sp1C = arg0 + 0x28;
    sp18 = arg0 + 0x20;
    temp_18 = M2C_FIELD(arg1, s64 *, 0);
    temp_16 = dpadd(temp_4, temp_4);
    temp_4_2 = temp_16;
    sp24 = arg0 + 0x40;
    sp20 = arg0 + 0x30;
    sp0 = dpmul(temp_4_2, temp_18);
    temp_21 = M2C_FIELD(arg1, s64 *, 8);
    sp2C = arg0 + 0x50;
    sp28 = arg0 + 0x48;
    sp8 = dpmul(temp_16, temp_21);
    temp_20 = M2C_FIELD(arg1, s64 *, 0x10);
    temp_30 = dpmul(temp_16, temp_20);
    temp_2 = dpadd(temp_18, temp_18);
    temp_22 = dpmul(temp_2, temp_18);
    temp_18_2 = dpmul(temp_2, temp_21);
    temp_23 = dpmul(temp_2, temp_20);
    temp_2_2 = dpadd(temp_21, temp_21);
    temp_21_2 = dpmul(temp_2_2, temp_21);
    temp_19 = dpmul(temp_2_2, temp_20);
    temp_2_3 = dpmul(dpadd(temp_20, temp_20), temp_20);
    M2C_FIELD(arg0, s64 *, 0) = dpsub(0xFFC0 << 0x2E, dpadd(temp_21_2, temp_2_3));
    *sp10 = dpadd(temp_18_2, temp_30);
    M2C_FIELD(arg0, s64 *, 0x10) = dpsub(temp_23, sp8);
    M2C_FIELD(arg0, s64 *, 0x18) = 0;
    *sp18 = dpsub(temp_18_2, temp_30);
    M2C_FIELD(arg0, s64 *, 0x28) = dpsub(0xFFC0 << 0x2E, dpadd(temp_22, temp_2_3));
    *sp20 = dpadd(temp_19, sp0);
    M2C_FIELD(arg0, s64 *, 0x38) = 0;
    M2C_FIELD(arg0, s64 *, 0x40) = dpadd(temp_23, sp8);
    *sp28 = dpsub(temp_19, sp0);
    M2C_FIELD(arg0, s64 *, 0x50) = dpsub(0xFFC0 << 0x2E, dpadd(temp_22, temp_21_2));
    M2C_FIELD(arg0, s64 *, 0x58) = 0;
    M2C_FIELD(arg0, s64 *, 0x78) = (s64) (0xFFC0 << 0x2E);
    M2C_FIELD(arg0, s64 *, 0x60) = 0;
    M2C_FIELD(arg0, s64 *, 0x68) = 0;
    M2C_FIELD(arg0, s64 *, 0x70) = 0;
}
