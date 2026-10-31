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
s32 func_001523D0(s32);                             /* extern */
M2C_UNK func_00152520(s32);                         /* extern */
extern M2C_UNK Normalize__7VIQuatD;
extern M2C_UNK runStats__Fii;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

s32 func_001326D0(void *arg0) {
    s32 *temp_16;
    s32 *temp_16_2;
    s32 *temp_16_3;
    s32 *temp_16_4;
    s32 temp_3;
    s32 temp_4;
    s32 temp_4_10;
    s32 temp_4_11;
    s32 temp_4_12;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    s32 temp_4_8;
    s32 temp_4_9;
    s32 var_17;
    s32 var_20;
    s32 var_2;
    void *temp_2;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_3 != 2) {
        if (temp_3 < 3) {
            if (temp_3 != 1) {
                return 0;
            }
            if (M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x58) != 0) {
                temp_4 = M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x58);
                if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4) {
                    func_00152520(temp_4);
                }
                func_0014B6F4(temp_4);
                func_00104F30(M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x58));
                func_00106E30(0, M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x58));
                func_00106E30(1, M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x58));
                if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x58)) {
                    M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
                }
                func_001389A0(M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x58));
                M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x58) = 0;
            }
            goto block_57;
        }
        switch (temp_3) {                           /* irregular */
        case 3:
            var_20 = 0;
            var_17 = 0;
            do {
                temp_16 = var_17 + (&Normalize__7VIQuatD + 0x68);
                if (*temp_16 != 0) {
                    temp_4_2 = *temp_16;
                    if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_2) {
                        func_00152520(temp_4_2);
                    }
                    func_0014B6F4(*temp_16);
                    func_00104F30(*temp_16);
                    func_00106E30(0, *temp_16);
                    func_00106E30(1, *temp_16);
                    temp_4_3 = *temp_16;
                    if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_3) {
                        M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
                    }
                    func_001389A0(temp_4_3);
                    *temp_16 = 0;
                }
                temp_16_2 = var_17 + (&Normalize__7VIQuatD + 0x70);
                if (*temp_16_2 != 0) {
                    temp_4_4 = *temp_16_2;
                    if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_4) {
                        func_00152520(temp_4_4);
                    }
                    func_0014B6F4(*temp_16_2);
                    func_00104F30(*temp_16_2);
                    func_00106E30(0, *temp_16_2);
                    func_00106E30(1, *temp_16_2);
                    temp_4_5 = *temp_16_2;
                    if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_5) {
                        M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
                    }
                    func_001389A0(temp_4_5);
                    *temp_16_2 = 0;
                }
                temp_16_3 = var_17 + (&Normalize__7VIQuatD + 0x60);
                if (*temp_16_3 != 0) {
                    temp_4_6 = *temp_16_3;
                    if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_6) {
                        func_00152520(temp_4_6);
                    }
                    func_0014B6F4(*temp_16_3);
                    func_00104F30(*temp_16_3);
                    func_00106E30(0, *temp_16_3);
                    func_00106E30(1, *temp_16_3);
                    temp_4_7 = *temp_16_3;
                    if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_7) {
                        M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
                    }
                    func_001389A0(temp_4_7);
                    *temp_16_3 = 0;
                }
                temp_16_4 = var_17 + (&Normalize__7VIQuatD + 0x78);
                if (*temp_16_4 == 0) {
                    var_20 += 1;
                } else {
                    temp_4_8 = *temp_16_4;
                    if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_8) {
                        func_00152520(temp_4_8);
                    }
                    func_0014B6F4(*temp_16_4);
                    func_00104F30(*temp_16_4);
                    func_00106E30(0, *temp_16_4);
                    func_00106E30(1, *temp_16_4);
                    temp_4_9 = *temp_16_4;
                    if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_9) {
                        M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
                    }
                    var_20 += 1;
                    func_001389A0(temp_4_9);
                    *temp_16_4 = 0;
                }
                var_17 += 4;
            } while (var_20 <= 0);
            goto block_57;
        case 5:
            var_2 = 1;
            if (M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x50) != 0) {
                temp_4_10 = M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x50);
                if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_10) {
                    func_00152520(temp_4_10);
                }
                func_0014B6F4(temp_4_10);
                func_00104F30(M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x50));
                func_00106E30(0, M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x50));
                func_00106E30(1, M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x50));
                if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x50)) {
                    M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
                }
                func_001389A0(M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x50));
                M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x50) = 0;
                return 1;
            }
            /* Duplicate return node #58. Try simplifying control flow for better match */
            return var_2;
        default:
            return 0;
        }
    } else {
        temp_2 = &Normalize__7VIQuatD + 0x58;
        if (M2C_FIELD(temp_2, s32 *, 4) != 0) {
            temp_4_11 = M2C_FIELD(temp_2, s32 *, 4);
            if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_11) {
                func_00152520(temp_4_11);
            }
            func_0014B6F4(M2C_FIELD(temp_2, s32 *, 4));
            func_00104F30(M2C_FIELD(temp_2, s32 *, 4));
            func_00106E30(0, M2C_FIELD(temp_2, s32 *, 4));
            func_00106E30(1, M2C_FIELD(temp_2, s32 *, 4));
            temp_4_12 = M2C_FIELD(temp_2, s32 *, 4);
            if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_12) {
                M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_12);
            M2C_FIELD(temp_2, s32 *, 4) = 0;
        }
block_57:
        var_2 = 0;
        return var_2;
    }
}
