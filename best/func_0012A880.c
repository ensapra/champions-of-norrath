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

M2C_UNK func_00104F30(s32);                         /* extern */
M2C_UNK func_00106E30(M2C_UNK, s32);                /* extern */
M2C_UNK func_001389A0(s32);                         /* extern */
M2C_UNK func_0014B6F4(s32);                         /* extern */
M2C_UNK func_0014D270(s32);                         /* extern */
s32 func_001523D0(s32);                             /* extern */
M2C_UNK func_00152520(s32);                         /* extern */
extern M2C_UNK Mul__7VIQuatDRC7VIQuatDT1;
extern M2C_UNK runStats__Fii;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

s32 func_0012A880(void *arg0) {
    s32 *var_16;
    s32 temp_3;
    s32 temp_4;
    s32 temp_4_10;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    s32 temp_4_8;
    s32 temp_4_9;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_3 != 2) {
        if (temp_3 < 3) {
            if (temp_3 != 1) {
                return 0;
            }
            if (M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x78) != 0) {
                temp_4 = M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x78);
                if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4) {
                    func_00152520(temp_4);
                }
                func_0014B6F4(temp_4);
                func_00104F30(M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x78));
                func_00106E30(0, M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x78));
                func_00106E30(1, M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x78));
                if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x78)) {
                    M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
                }
                func_001389A0(M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x78));
                M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x78) = 0;
            }
            if (M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x88) != 0) {
                temp_4_2 = M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x88);
                if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_2) {
                    func_00152520(temp_4_2);
                }
                func_0014B6F4(temp_4_2);
                func_00104F30(M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x88));
                func_00106E30(0, M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x88));
                func_00106E30(1, M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x88));
                if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x88)) {
                    M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
                }
                func_001389A0(M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x88));
                M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x88) = 0;
            }
            var_16 = &Mul__7VIQuatDRC7VIQuatDT1 + 0x80;
            goto block_41;
        }
        switch (temp_3) {                           /* irregular */
        case 4:
            var_16 = &Mul__7VIQuatDRC7VIQuatDT1 + 0x6C;
block_41:
            if (*var_16 != 0) {
                temp_4_3 = *var_16;
                if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_3) {
                    func_00152520(temp_4_3);
                }
                func_0014B6F4(*var_16);
                func_00104F30(*var_16);
                func_00106E30(0, *var_16);
                func_00106E30(1, *var_16);
                temp_4_4 = *var_16;
                if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_4) {
                    M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
                }
                func_001389A0(temp_4_4);
                *var_16 = 0;
            }
            goto block_52;
        case 5:
            if (M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x68) == 0) {
                return 1;
            }
            func_0014D270(M2C_FIELD(&Mul__7VIQuatDRC7VIQuatDT1, s32 *, 0x68));
            return 1;
        default:
            return 0;
        }
    } else {
        temp_2 = &Mul__7VIQuatDRC7VIQuatDT1 + 0x78;
        if (M2C_FIELD(temp_2, s32 *, 4) != 0) {
            temp_4_5 = M2C_FIELD(temp_2, s32 *, 4);
            if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_5) {
                func_00152520(temp_4_5);
            }
            func_0014B6F4(M2C_FIELD(temp_2, s32 *, 4));
            func_00104F30(M2C_FIELD(temp_2, s32 *, 4));
            func_00106E30(0, M2C_FIELD(temp_2, s32 *, 4));
            func_00106E30(1, M2C_FIELD(temp_2, s32 *, 4));
            temp_4_6 = M2C_FIELD(temp_2, s32 *, 4);
            if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_6) {
                M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_6);
            M2C_FIELD(temp_2, s32 *, 4) = 0;
        }
        temp_2_2 = &Mul__7VIQuatDRC7VIQuatDT1 + 0x88;
        if (M2C_FIELD(temp_2_2, s32 *, 4) != 0) {
            temp_4_7 = M2C_FIELD(temp_2_2, s32 *, 4);
            if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_7) {
                func_00152520(temp_4_7);
            }
            func_0014B6F4(M2C_FIELD(temp_2_2, s32 *, 4));
            func_00104F30(M2C_FIELD(temp_2_2, s32 *, 4));
            func_00106E30(0, M2C_FIELD(temp_2_2, s32 *, 4));
            func_00106E30(1, M2C_FIELD(temp_2_2, s32 *, 4));
            temp_4_8 = M2C_FIELD(temp_2_2, s32 *, 4);
            if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_8) {
                M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_8);
            M2C_FIELD(temp_2_2, s32 *, 4) = 0;
        }
        temp_2_3 = &Mul__7VIQuatDRC7VIQuatDT1 + 0x80;
        if (M2C_FIELD(temp_2_3, s32 *, 4) != 0) {
            temp_4_9 = M2C_FIELD(temp_2_3, s32 *, 4);
            if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_9) {
                func_00152520(temp_4_9);
            }
            func_0014B6F4(M2C_FIELD(temp_2_3, s32 *, 4));
            func_00104F30(M2C_FIELD(temp_2_3, s32 *, 4));
            func_00106E30(0, M2C_FIELD(temp_2_3, s32 *, 4));
            func_00106E30(1, M2C_FIELD(temp_2_3, s32 *, 4));
            temp_4_10 = M2C_FIELD(temp_2_3, s32 *, 4);
            if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_10) {
                M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_10);
            M2C_FIELD(temp_2_3, s32 *, 4) = 0;
        }
block_52:
        return 0;
    }
}
