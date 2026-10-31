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

void Transform__11VIMatrix44DRC7VIQuatDRC8VIVect3DT2(void *arg0, void *arg1, void *arg2, void *arg3) {
    s64 sp0;
    s64 sp8;
    s64 sp10;
    s64 sp18;
    s64 sp20;
    s64 sp28;
    s64 *sp30;
    s32 sp34;
    s64 *sp38;
    s32 sp3C;
    s64 *sp40;
    s32 sp44;
    s64 *sp48;
    s64 *sp4C;
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_19;
    s64 temp_19_2;
    s64 temp_20;
    s64 temp_21;
    s64 temp_21_2;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_4;
    s64 temp_4_2;
    s64 temp_4_3;

    temp_4 = M2C_FIELD(arg1, s64 *, 0x18);
    sp30 = arg0 + 8;
    temp_19 = M2C_FIELD(arg1, s64 *, 0);
    temp_16 = dpadd(temp_4, temp_4);
    temp_4_2 = temp_16;
    sp34 = arg0 + 0x10;
    sp0 = dpmul(temp_4_2, temp_19);
    temp_21 = M2C_FIELD(arg1, s64 *, 8);
    sp38 = arg0 + 0x20;
    sp8 = dpmul(temp_16, temp_21);
    temp_20 = M2C_FIELD(arg1, s64 *, 0x10);
    sp3C = arg0 + 0x28;
    sp40 = arg0 + 0x30;
    sp10 = dpmul(temp_16, temp_20);
    temp_16_2 = dpadd(temp_19, temp_19);
    temp_4_3 = temp_16_2;
    sp44 = arg0 + 0x40;
    sp18 = dpmul(temp_4_3, temp_19);
    sp48 = arg0 + 0x48;
    temp_19_2 = dpmul(temp_16_2, temp_21);
    sp4C = arg0 + 0x50;
    sp20 = dpmul(temp_16_2, temp_20);
    temp_2 = dpadd(temp_21, temp_21);
    sp28 = dpmul(temp_2, temp_21);
    temp_21_2 = dpmul(temp_2, temp_20);
    temp_2_2 = dpmul(dpadd(temp_20, temp_20), temp_20);
    M2C_FIELD(arg0, s64 *, 0) = dpmul(dpsub(0xFFC0 << 0x2E, dpadd(sp28, temp_2_2)), M2C_FIELD(arg2, s64 *, 0));
    *sp30 = dpmul(dpadd(temp_19_2, sp10), M2C_FIELD(arg2, s64 *, 0));
    M2C_FIELD(arg0, s64 *, 0x10) = dpmul(dpsub(sp20, sp8), M2C_FIELD(arg2, s64 *, 0));
    M2C_FIELD(arg0, s64 *, 0x18) = 0;
    *sp38 = dpmul(dpsub(temp_19_2, sp10), M2C_FIELD(arg2, s64 *, 8));
    M2C_FIELD(arg0, s64 *, 0x28) = dpmul(dpsub(0xFFC0 << 0x2E, dpadd(sp18, temp_2_2)), M2C_FIELD(arg2, s64 *, 8));
    *sp40 = dpmul(dpadd(temp_21_2, sp0), M2C_FIELD(arg2, s64 *, 8));
    M2C_FIELD(arg0, s64 *, 0x38) = 0;
    M2C_FIELD(arg0, s64 *, 0x40) = dpmul(dpadd(sp20, sp8), M2C_FIELD(arg2, s64 *, 0x10));
    *sp48 = dpmul(dpsub(temp_21_2, sp0), M2C_FIELD(arg2, s64 *, 0x10));
    *sp4C = dpmul(dpsub(0xFFC0 << 0x2E, dpadd(sp18, sp28)), M2C_FIELD(arg2, s64 *, 0x10));
    M2C_FIELD(arg0, s64 *, 0x58) = 0;
    M2C_FIELD(arg0, s64 *, 0x60) = (s64) M2C_FIELD(arg3, s64 *, 0);
    M2C_FIELD(arg0, s64 *, 0x68) = (s64) M2C_FIELD(arg3, s64 *, 8);
    M2C_FIELD(arg0, s64 *, 0x78) = (s64) (0xFFC0 << 0x2E);
    M2C_FIELD(arg0, s64 *, 0x70) = (s64) M2C_FIELD(arg3, s64 *, 0x10);
}
