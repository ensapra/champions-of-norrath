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

s32 func_0012E758(void *arg0) {
    s32 temp_3;
    s32 temp_4;
    s32 temp_4_10;
    s32 temp_4_11;
    s32 temp_4_12;
    s32 temp_4_13;
    s32 temp_4_14;
    s32 temp_4_15;
    s32 temp_4_16;
    s32 temp_4_17;
    s32 temp_4_18;
    s32 temp_4_19;
    s32 temp_4_20;
    s32 temp_4_21;
    s32 temp_4_22;
    s32 temp_4_23;
    s32 temp_4_24;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    s32 temp_4_8;
    s32 temp_4_9;
    s32 var_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_2_8;
    void *temp_2_9;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_3 != 2) {
        if (temp_3 < 3) {
            if (temp_3 != 1) {
                return 0;
            }
            if (M2C_FIELD(&func_01000000, s32 *, 0xCD428) != 0) {
                temp_4 = M2C_FIELD(&func_01000000, s32 *, 0xCD428);
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4) {
                    func_00152520(temp_4);
                }
                func_0014B6F4(temp_4);
                func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xCD428));
                func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xCD428));
                func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xCD428));
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xCD428)) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xCD428));
                M2C_FIELD(&func_01000000, s32 *, 0xCD428) = 0;
            }
            if (M2C_FIELD(&func_01000000, s32 *, 0xCD448) != 0) {
                temp_4_2 = M2C_FIELD(&func_01000000, s32 *, 0xCD448);
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_2) {
                    func_00152520(temp_4_2);
                }
                func_0014B6F4(temp_4_2);
                func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xCD448));
                func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xCD448));
                func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xCD448));
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xCD448)) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xCD448));
                M2C_FIELD(&func_01000000, s32 *, 0xCD448) = 0;
            }
            if (M2C_FIELD(&func_01000000, s32 *, 0xCD458) != 0) {
                temp_4_3 = M2C_FIELD(&func_01000000, s32 *, 0xCD458);
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_3) {
                    func_00152520(temp_4_3);
                }
                func_0014B6F4(temp_4_3);
                func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xCD458));
                func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xCD458));
                func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xCD458));
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xCD458)) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xCD458));
                M2C_FIELD(&func_01000000, s32 *, 0xCD458) = 0;
            }
            if (M2C_FIELD(&func_01000000, s32 *, 0xCD438) != 0) {
                temp_4_4 = M2C_FIELD(&func_01000000, s32 *, 0xCD438);
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_4) {
                    func_00152520(temp_4_4);
                }
                func_0014B6F4(temp_4_4);
                func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xCD438));
                func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xCD438));
                func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xCD438));
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xCD438)) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xCD438));
                M2C_FIELD(&func_01000000, s32 *, 0xCD438) = 0;
            }
            if (M2C_FIELD(&func_01000000, s32 *, 0xCD468) != 0) {
                temp_4_5 = M2C_FIELD(&func_01000000, s32 *, 0xCD468);
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_5) {
                    func_00152520(temp_4_5);
                }
                func_0014B6F4(temp_4_5);
                func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xCD468));
                func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xCD468));
                func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xCD468));
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xCD468)) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xCD468));
                M2C_FIELD(&func_01000000, s32 *, 0xCD468) = 0;
            }
            goto block_101;
        }
        switch (temp_3) {                           /* irregular */
        case 3:
            temp_2 = &func_01000000 + 0xCD448;
            if (M2C_FIELD(temp_2, s32 *, 8) != 0) {
                temp_4_6 = M2C_FIELD(temp_2, s32 *, 8);
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_6) {
                    func_00152520(temp_4_6);
                }
                func_0014B6F4(M2C_FIELD(temp_2, s32 *, 8));
                func_00104F30(M2C_FIELD(temp_2, s32 *, 8));
                func_00106E30(0, M2C_FIELD(temp_2, s32 *, 8));
                func_00106E30(1, M2C_FIELD(temp_2, s32 *, 8));
                temp_4_7 = M2C_FIELD(temp_2, s32 *, 8);
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_7) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(temp_4_7);
                M2C_FIELD(temp_2, s32 *, 8) = 0;
            }
            temp_2_2 = &func_01000000 + 0xCD458;
            if (M2C_FIELD(temp_2_2, s32 *, 8) != 0) {
                temp_4_8 = M2C_FIELD(temp_2_2, s32 *, 8);
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_8) {
                    func_00152520(temp_4_8);
                }
                func_0014B6F4(M2C_FIELD(temp_2_2, s32 *, 8));
                func_00104F30(M2C_FIELD(temp_2_2, s32 *, 8));
                func_00106E30(0, M2C_FIELD(temp_2_2, s32 *, 8));
                func_00106E30(1, M2C_FIELD(temp_2_2, s32 *, 8));
                temp_4_9 = M2C_FIELD(temp_2_2, s32 *, 8);
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_9) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(temp_4_9);
                M2C_FIELD(temp_2_2, s32 *, 8) = 0;
            }
            temp_2_3 = &func_01000000 + 0xCD438;
            if (M2C_FIELD(temp_2_3, s32 *, 8) != 0) {
                temp_4_10 = M2C_FIELD(temp_2_3, s32 *, 8);
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_10) {
                    func_00152520(temp_4_10);
                }
                func_0014B6F4(M2C_FIELD(temp_2_3, s32 *, 8));
                func_00104F30(M2C_FIELD(temp_2_3, s32 *, 8));
                func_00106E30(0, M2C_FIELD(temp_2_3, s32 *, 8));
                func_00106E30(1, M2C_FIELD(temp_2_3, s32 *, 8));
                temp_4_11 = M2C_FIELD(temp_2_3, s32 *, 8);
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_11) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(temp_4_11);
                M2C_FIELD(temp_2_3, s32 *, 8) = 0;
            }
            temp_2_4 = &func_01000000 + 0xCD468;
            if (M2C_FIELD(temp_2_4, s32 *, 8) != 0) {
                temp_4_12 = M2C_FIELD(temp_2_4, s32 *, 8);
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_12) {
                    func_00152520(temp_4_12);
                }
                func_0014B6F4(M2C_FIELD(temp_2_4, s32 *, 8));
                func_00104F30(M2C_FIELD(temp_2_4, s32 *, 8));
                func_00106E30(0, M2C_FIELD(temp_2_4, s32 *, 8));
                func_00106E30(1, M2C_FIELD(temp_2_4, s32 *, 8));
                temp_4_13 = M2C_FIELD(temp_2_4, s32 *, 8);
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_13) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(temp_4_13);
                M2C_FIELD(temp_2_4, s32 *, 8) = 0;
            }
            goto block_101;
        case 5:
            var_2 = 1;
            if (M2C_FIELD(&func_01000000, s32 *, 0xCD430) != 0) {
                temp_4_14 = M2C_FIELD(&func_01000000, s32 *, 0xCD430);
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_14) {
                    func_00152520(temp_4_14);
                }
                func_0014B6F4(temp_4_14);
                func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xCD430));
                func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xCD430));
                func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xCD430));
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xCD430)) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xCD430));
                M2C_FIELD(&func_01000000, s32 *, 0xCD430) = 0;
                return 1;
            }
            /* Duplicate return node #102. Try simplifying control flow for better match */
            return var_2;
        default:
            return 0;
        }
    } else {
        temp_2_5 = &func_01000000 + 0xCD428;
        if (M2C_FIELD(temp_2_5, s32 *, 4) != 0) {
            temp_4_15 = M2C_FIELD(temp_2_5, s32 *, 4);
            if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_15) {
                func_00152520(temp_4_15);
            }
            func_0014B6F4(M2C_FIELD(temp_2_5, s32 *, 4));
            func_00104F30(M2C_FIELD(temp_2_5, s32 *, 4));
            func_00106E30(0, M2C_FIELD(temp_2_5, s32 *, 4));
            func_00106E30(1, M2C_FIELD(temp_2_5, s32 *, 4));
            temp_4_16 = M2C_FIELD(temp_2_5, s32 *, 4);
            if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_16) {
                M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_16);
            M2C_FIELD(temp_2_5, s32 *, 4) = 0;
        }
        temp_2_6 = &func_01000000 + 0xCD448;
        if (M2C_FIELD(temp_2_6, s32 *, 4) != 0) {
            temp_4_17 = M2C_FIELD(temp_2_6, s32 *, 4);
            if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_17) {
                func_00152520(temp_4_17);
            }
            func_0014B6F4(M2C_FIELD(temp_2_6, s32 *, 4));
            func_00104F30(M2C_FIELD(temp_2_6, s32 *, 4));
            func_00106E30(0, M2C_FIELD(temp_2_6, s32 *, 4));
            func_00106E30(1, M2C_FIELD(temp_2_6, s32 *, 4));
            temp_4_18 = M2C_FIELD(temp_2_6, s32 *, 4);
            if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_18) {
                M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_18);
            M2C_FIELD(temp_2_6, s32 *, 4) = 0;
        }
        temp_2_7 = &func_01000000 + 0xCD458;
        if (M2C_FIELD(temp_2_7, s32 *, 4) != 0) {
            temp_4_19 = M2C_FIELD(temp_2_7, s32 *, 4);
            if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_19) {
                func_00152520(temp_4_19);
            }
            func_0014B6F4(M2C_FIELD(temp_2_7, s32 *, 4));
            func_00104F30(M2C_FIELD(temp_2_7, s32 *, 4));
            func_00106E30(0, M2C_FIELD(temp_2_7, s32 *, 4));
            func_00106E30(1, M2C_FIELD(temp_2_7, s32 *, 4));
            temp_4_20 = M2C_FIELD(temp_2_7, s32 *, 4);
            if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_20) {
                M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_20);
            M2C_FIELD(temp_2_7, s32 *, 4) = 0;
        }
        temp_2_8 = &func_01000000 + 0xCD438;
        if (M2C_FIELD(temp_2_8, s32 *, 4) != 0) {
            temp_4_21 = M2C_FIELD(temp_2_8, s32 *, 4);
            if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_21) {
                func_00152520(temp_4_21);
            }
            func_0014B6F4(M2C_FIELD(temp_2_8, s32 *, 4));
            func_00104F30(M2C_FIELD(temp_2_8, s32 *, 4));
            func_00106E30(0, M2C_FIELD(temp_2_8, s32 *, 4));
            func_00106E30(1, M2C_FIELD(temp_2_8, s32 *, 4));
            temp_4_22 = M2C_FIELD(temp_2_8, s32 *, 4);
            if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_22) {
                M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_22);
            M2C_FIELD(temp_2_8, s32 *, 4) = 0;
        }
        temp_2_9 = &func_01000000 + 0xCD468;
        if (M2C_FIELD(temp_2_9, s32 *, 4) != 0) {
            temp_4_23 = M2C_FIELD(temp_2_9, s32 *, 4);
            if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_23) {
                func_00152520(temp_4_23);
            }
            func_0014B6F4(M2C_FIELD(temp_2_9, s32 *, 4));
            func_00104F30(M2C_FIELD(temp_2_9, s32 *, 4));
            func_00106E30(0, M2C_FIELD(temp_2_9, s32 *, 4));
            func_00106E30(1, M2C_FIELD(temp_2_9, s32 *, 4));
            temp_4_24 = M2C_FIELD(temp_2_9, s32 *, 4);
            if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_4_24) {
                M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_24);
            M2C_FIELD(temp_2_9, s32 *, 4) = 0;
        }
block_101:
        var_2 = 0;
        return var_2;
    }
}
