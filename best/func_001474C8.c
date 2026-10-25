/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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
extern M2C_UNK func_001B9FD8;
extern M2C_UNK func_001BCB38;
extern M2C_UNK func_01000000;

s32 func_001474C8(void *arg0) {
    s32 *temp_16;
    s32 *temp_16_2;
    s32 *var_17;
    s32 *var_17_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    s32 temp_4_8;
    s32 temp_4_9;
    s32 var_18;
    s32 var_18_2;
    s32 var_19;
    s32 var_19_2;
    s32 var_2;

    temp_4 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_4 != 2) {
        if (temp_4 < 3) {
            if (temp_4 != 1) {
                return 0;
            }
            var_17 = &func_01000000 + 0xD4518;
            var_18 = 0;
            var_19 = 0;
            do {
                temp_16 = var_19 + (&func_01000000 + 0xD4510);
                if (*temp_16 != 0) {
                    temp_4_2 = *temp_16;
                    if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_2) {
                        func_00152520(temp_4_2);
                    }
                    func_0014B6F4(*temp_16);
                    func_00104F30(*temp_16);
                    func_00106E30(0, *temp_16);
                    func_00106E30(1, *temp_16);
                    temp_4_3 = *temp_16;
                    if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_3) {
                        M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                    }
                    func_001389A0(temp_4_3);
                    *temp_16 = 0;
                }
                if (*var_17 == 0) {
                    var_18 += 1;
                } else {
                    temp_4_4 = *var_17;
                    if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_4) {
                        func_00152520(temp_4_4);
                    }
                    func_0014B6F4(*var_17);
                    func_00104F30(*var_17);
                    func_00106E30(0, *var_17);
                    func_00106E30(1, *var_17);
                    temp_4_5 = *var_17;
                    if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_5) {
                        M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                    }
                    var_18 += 1;
                    func_001389A0(temp_4_5);
                    *var_17 = 0;
                }
                var_17 += 4;
                var_19 += 4;
            } while (var_18 < 2);
            goto block_40;
        }
        var_2 = 1;
        if (temp_4 != 5) {
            goto block_40;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
        return var_2;
    }
    var_17_2 = &func_01000000 + 0xD4500;
    var_18_2 = 0;
    var_19_2 = 0;
    do {
        temp_16_2 = var_19_2 + (&func_01000000 + 0xD4508);
        if (*temp_16_2 != 0) {
            temp_4_6 = *temp_16_2;
            if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_6) {
                func_00152520(temp_4_6);
            }
            func_0014B6F4(*temp_16_2);
            func_00104F30(*temp_16_2);
            func_00106E30(0, *temp_16_2);
            func_00106E30(1, *temp_16_2);
            temp_4_7 = *temp_16_2;
            if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_7) {
                M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_7);
            *temp_16_2 = 0;
        }
        if (*var_17_2 == 0) {
            var_18_2 += 1;
        } else {
            temp_4_8 = *var_17_2;
            if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_8) {
                func_00152520(temp_4_8);
            }
            func_0014B6F4(*var_17_2);
            func_00104F30(*var_17_2);
            func_00106E30(0, *var_17_2);
            func_00106E30(1, *var_17_2);
            temp_4_9 = *var_17_2;
            if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_9) {
                M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
            }
            var_18_2 += 1;
            func_001389A0(temp_4_9);
            *var_17_2 = 0;
        }
        var_17_2 += 4;
        var_19_2 += 4;
    } while (var_18_2 < 2);
block_40:
    var_2 = 0;
    return var_2;
}
