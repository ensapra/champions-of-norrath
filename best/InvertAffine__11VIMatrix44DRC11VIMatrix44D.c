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
s64 dpsub(s64, s64);                                /* extern */

void InvertAffine__11VIMatrix44DRC11VIMatrix44D(void *arg0, void *arg1) {
    s64 *sp0;
    s64 *sp4;
    s64 *sp8;
    s64 *spC;
    s64 *sp10;
    s64 *sp14;
    s64 *sp18;
    s64 *sp1C;
    s32 sp20;
    s64 *sp24;
    s64 *sp28;
    s64 *sp2C;
    s64 *sp30;
    s64 *sp34;
    s64 *sp38;
    s64 *sp3C;
    s64 *sp40;
    s64 *sp44;
    s64 *sp48;
    void *sp4C;
    s64 *sp50;
    s64 sp60;
    s64 sp68;
    s64 temp_16;
    s64 temp_16_10;
    s64 temp_16_11;
    s64 temp_16_12;
    s64 temp_16_13;
    s64 temp_16_14;
    s64 temp_16_15;
    s64 temp_16_16;
    s64 temp_16_17;
    s64 temp_16_18;
    s64 temp_16_19;
    s64 temp_16_20;
    s64 temp_16_2;
    s64 temp_16_3;
    s64 temp_16_4;
    s64 temp_16_5;
    s64 temp_16_6;
    s64 temp_16_7;
    s64 temp_16_8;
    s64 temp_16_9;
    s64 temp_17;
    s64 temp_17_2;
    s64 temp_19;
    s64 temp_20;
    s64 temp_21;
    s64 temp_22;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_2_3;
    s64 temp_4;
    s64 temp_4_2;
    s64 temp_5;

    sp4 = arg1 + 0x28;
    temp_19 = M2C_FIELD(arg1, s64 *, 0x28);
    sp8 = arg1 + 0x50;
    sp10 = arg1 + 0x30;
    spC = arg1 + 8;
    temp_4 = dpmul(M2C_FIELD(arg1, s64 *, 0), temp_19);
    temp_20 = M2C_FIELD(arg1, s64 *, 0x50);
    sp0 = arg1 + 0x20;
    temp_16 = dpmul(temp_4, temp_20);
    sp60 = *spC;
    temp_21 = *sp10;
    sp14 = arg1 + 0x10;
    sp18 = arg1 + 0x48;
    temp_16_2 = dpadd(temp_16, dpmul(dpmul(sp60, temp_21), M2C_FIELD(arg1, s64 *, 0x40)));
    temp_17 = M2C_FIELD(arg1, s64 *, 0x10);
    temp_2 = M2C_FIELD(arg1, s64 *, 0x20);
    sp68 = temp_2;
    temp_22 = *sp18;
    temp_16_3 = dpadd(temp_16_2, dpmul(dpmul(temp_17, temp_2), temp_22));
    temp_16_4 = dpsub(temp_16_3, dpmul(dpmul(temp_17, temp_19), M2C_FIELD(arg1, s64 *, 0x40)));
    temp_16_5 = dpsub(temp_16_4, dpmul(dpmul(sp60, sp68), temp_20));
    temp_2_2 = dpsub(temp_16_5, dpmul(dpmul(M2C_FIELD(arg1, s64 *, 0), temp_21), temp_22));
    if (dpcmp(temp_2_2, 0) != 0) {
        sp1C = arg0 + 0x20;
        sp20 = arg0 + 0x40;
        sp24 = arg0 + 8;
        temp_17_2 = dpdiv(0xFFC0 << 0x2E, temp_2_2);
        sp28 = arg0 + 0x28;
        temp_16_6 = dpmul(temp_19, temp_20);
        sp2C = arg0 + 0x48;
        temp_5 = dpmul(temp_21, temp_22);
        sp30 = arg0 + 0x10;
        temp_4_2 = dpsub(temp_16_6, temp_5);
        sp34 = arg0 + 0x30;
        temp_2_3 = dpmul(temp_4_2, temp_17_2);
        sp38 = arg0 + 0x50;
        M2C_FIELD(arg0, s64 *, 0) = temp_2_3;
        sp40 = arg1 + 0x60;
        sp44 = arg1 + 0x68;
        sp48 = arg1 + 0x70;
        sp3C = arg0 + 0x60;
        sp4C = arg0 + 0x68;
        sp50 = arg0 + 0x70;
        temp_16_7 = dpmul(*sp10, M2C_FIELD(arg1, s64 *, 0x40));
        *sp1C = dpmul(dpsub(temp_16_7, dpmul(*sp0, *sp8)), temp_17_2);
        temp_16_8 = dpmul(*sp0, *sp18);
        M2C_FIELD(arg0, s64 *, 0x40) = dpmul(dpsub(temp_16_8, dpmul(*sp4, M2C_FIELD(arg1, s64 *, 0x40))), temp_17_2);
        temp_16_9 = dpmul(*sp14, *sp18);
        *sp24 = dpmul(dpsub(temp_16_9, dpmul(*spC, *sp8)), temp_17_2);
        temp_16_10 = dpmul(M2C_FIELD(arg1, s64 *, 0), *sp8);
        M2C_FIELD(arg0, s64 *, 0x28) = dpmul(dpsub(temp_16_10, dpmul(*sp14, M2C_FIELD(arg1, s64 *, 0x40))), temp_17_2);
        temp_16_11 = dpmul(*spC, M2C_FIELD(arg1, s64 *, 0x40));
        *sp2C = dpmul(dpsub(temp_16_11, dpmul(M2C_FIELD(arg1, s64 *, 0), *sp18)), temp_17_2);
        temp_16_12 = dpmul(*spC, *sp10);
        M2C_FIELD(arg0, s64 *, 0x10) = dpmul(dpsub(temp_16_12, dpmul(*sp14, *sp4)), temp_17_2);
        temp_16_13 = dpmul(*sp14, *sp0);
        *sp34 = dpmul(dpsub(temp_16_13, dpmul(M2C_FIELD(arg1, s64 *, 0), *sp10)), temp_17_2);
        temp_16_14 = dpmul(M2C_FIELD(arg1, s64 *, 0), *sp4);
        M2C_FIELD(arg0, s64 *, 0x50) = dpmul(dpsub(temp_16_14, dpmul(*spC, *sp0)), temp_17_2);
        temp_16_15 = dpmul(M2C_FIELD(arg0, s64 *, 0), M2C_FIELD(arg1, s64 *, 0x60));
        temp_16_16 = dpadd(temp_16_15, dpmul(*sp1C, *sp44));
        *sp3C = dpsub(0, dpadd(temp_16_16, dpmul(M2C_FIELD(arg0, s64 *, 0x40), M2C_FIELD(arg1, s64 *, 0x70))));
        temp_16_17 = dpmul(M2C_FIELD(arg0, s64 *, 8), *sp40);
        temp_16_18 = dpadd(temp_16_17, dpmul(*sp28, M2C_FIELD(arg1, s64 *, 0x68)));
        M2C_FIELD(arg0, s64 *, 0x68) = dpsub(0, dpadd(temp_16_18, dpmul(M2C_FIELD(arg0, s64 *, 0x48), *sp48)));
        temp_16_19 = dpmul(*sp30, *sp40);
        temp_16_20 = dpadd(temp_16_19, dpmul(M2C_FIELD(arg0, s64 *, 0x30), M2C_FIELD(arg1, s64 *, 0x68)));
        *sp50 = dpsub(0, dpadd(temp_16_20, dpmul(*sp38, *sp48)));
        M2C_FIELD(arg0, s64 *, 0x18) = 0;
        M2C_FIELD(arg0, s64 *, 0x78) = (s64) (0xFFC0 << 0x2E);
        M2C_FIELD(arg0, s64 *, 0x58) = 0;
        M2C_FIELD(arg0, s64 *, 0x38) = 0;
    }
}
