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

void RotateHPR__11VIMatrix44DRC8VIVect3D(void *arg0, void *arg1) {
    s64 sp0;
    s64 sp8;
    s64 *sp10;
    s32 sp14;
    s64 *sp18;
    s32 sp1C;
    s64 *sp20;
    s64 *sp24;
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_16_3;
    s64 temp_16_4;
    s64 temp_18;
    s64 temp_22;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_2_3;
    s64 temp_30;

    temp_30 = sin(M2C_FIELD(arg1, s64 *, 0));
    temp_18 = cos(M2C_FIELD(arg1, s64 *, 0));
    sp0 = sin(M2C_FIELD(arg1, s64 *, 8));
    sp14 = arg0 + 0x28;
    sp10 = arg0 + 0x20;
    sp8 = cos(M2C_FIELD(arg1, s64 *, 8));
    sp1C = arg0 + 0x40;
    sp18 = arg0 + 0x30;
    temp_22 = sin(M2C_FIELD(arg1, s64 *, 0x10));
    sp24 = arg0 + 0x50;
    sp20 = arg0 + 0x48;
    temp_2 = cos(M2C_FIELD(arg1, s64 *, 0x10));
    temp_16 = dpmul(temp_2, temp_18);
    temp_2_2 = dpmul(temp_22, sp0);
    M2C_FIELD(arg0, s64 *, 0) = dpadd(temp_16, dpmul(temp_2_2, temp_30));
    M2C_FIELD(arg0, s64 *, 8) = dpmul(temp_22, sp8);
    temp_16_2 = dpmul(dpsub(0, temp_2), temp_30);
    M2C_FIELD(arg0, s64 *, 0x10) = dpadd(temp_16_2, dpmul(temp_2_2, temp_18));
    M2C_FIELD(arg0, s64 *, 0x18) = 0;
    temp_16_3 = dpmul(dpsub(0, temp_22), temp_18);
    temp_2_3 = dpmul(temp_2, sp0);
    *sp10 = dpadd(temp_16_3, dpmul(temp_2_3, temp_30));
    M2C_FIELD(arg0, s64 *, 0x28) = dpmul(temp_2, sp8);
    temp_16_4 = dpmul(temp_22, temp_30);
    *sp18 = dpadd(temp_16_4, dpmul(temp_2_3, temp_18));
    M2C_FIELD(arg0, s64 *, 0x38) = 0;
    M2C_FIELD(arg0, s64 *, 0x40) = dpmul(sp8, temp_30);
    *sp20 = dpsub(0, sp0);
    *sp24 = dpmul(sp8, temp_18);
    M2C_FIELD(arg0, s64 *, 0x78) = (s64) (0xFFC0 << 0x2E);
    M2C_FIELD(arg0, s64 *, 0x70) = 0;
    M2C_FIELD(arg0, s64 *, 0x58) = 0;
    M2C_FIELD(arg0, s64 *, 0x60) = 0;
    M2C_FIELD(arg0, s64 *, 0x68) = 0;
}
