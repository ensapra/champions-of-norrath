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
M2C_UNK func_001441F8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0014B6F4(s32);                         /* extern */
s32 func_001523D0(s32);                             /* extern */
M2C_UNK func_00152520(s32);                         /* extern */
extern M2C_UNK func_001B9FD8;
extern M2C_UNK func_001BCB38;
extern M2C_UNK func_01000000;

void func_00112938(void) {
    s32 *temp_2;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_4_10;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    s32 temp_4_8;
    s32 temp_4_9;
    void *temp_4;

    temp_4 = &func_01000000 + 0xC2A70;
    if (M2C_FIELD(temp_4, s32 *, 0xC) != 0) {
        temp_2 = M2C_FIELD(&func_01000000, s32 **, 0xC2A70);
        do {
            temp_16 = *temp_2;
            if (temp_16 != 0) {
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_16) {
                    func_00152520(temp_16);
                }
                func_0014B6F4(temp_16);
                func_00104F30(temp_16);
                func_00106E30(0, temp_16);
                func_00106E30(1, temp_16);
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_16) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(temp_16);
            }
            func_001441F8(temp_4, 0);
            temp_16_2 = *M2C_FIELD(&func_01000000, s32 **, 0xC2A88);
            if (temp_16_2 != 0) {
                if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_16_2) {
                    func_00152520(temp_16_2);
                }
                func_0014B6F4(temp_16_2);
                func_00104F30(temp_16_2);
                func_00106E30(0, temp_16_2);
                func_00106E30(1, temp_16_2);
                if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == temp_16_2) {
                    M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
                }
                func_001389A0(temp_16_2);
            }
            func_001441F8(&func_01000000 + 0xC2A88, 0);
        } while (M2C_FIELD(temp_4, s32 *, 0xC) != 0);
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xC2AB8) != 0) {
        temp_4_2 = M2C_FIELD(&func_01000000, s32 *, 0xC2AB8);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_2) {
            func_00152520(temp_4_2);
        }
        func_0014B6F4(temp_4_2);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xC2AB8));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xC2AB8));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xC2AB8));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xC2AB8)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xC2AB8));
        M2C_FIELD(&func_01000000, s32 *, 0xC2AB8) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xC2ABC) != 0) {
        temp_4_3 = M2C_FIELD(&func_01000000, s32 *, 0xC2ABC);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_3) {
            func_00152520(temp_4_3);
        }
        func_0014B6F4(temp_4_3);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xC2ABC));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xC2ABC));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xC2ABC));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xC2ABC)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xC2ABC));
        M2C_FIELD(&func_01000000, s32 *, 0xC2ABC) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xC2AB4) != 0) {
        temp_4_4 = M2C_FIELD(&func_01000000, s32 *, 0xC2AB4);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_4) {
            func_00152520(temp_4_4);
        }
        func_0014B6F4(temp_4_4);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xC2AB4));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xC2AB4));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xC2AB4));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xC2AB4)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xC2AB4));
        M2C_FIELD(&func_01000000, s32 *, 0xC2AB4) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xC2AB0) != 0) {
        temp_4_5 = M2C_FIELD(&func_01000000, s32 *, 0xC2AB0);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_5) {
            func_00152520(temp_4_5);
        }
        func_0014B6F4(temp_4_5);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xC2AB0));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xC2AB0));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xC2AB0));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xC2AB0)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xC2AB0));
        M2C_FIELD(&func_01000000, s32 *, 0xC2AB0) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xC2AAC) != 0) {
        temp_4_6 = M2C_FIELD(&func_01000000, s32 *, 0xC2AAC);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_6) {
            func_00152520(temp_4_6);
        }
        func_0014B6F4(temp_4_6);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xC2AAC));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xC2AAC));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xC2AAC));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xC2AAC)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xC2AAC));
        M2C_FIELD(&func_01000000, s32 *, 0xC2AAC) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xC2AA8) != 0) {
        temp_4_7 = M2C_FIELD(&func_01000000, s32 *, 0xC2AA8);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_7) {
            func_00152520(temp_4_7);
        }
        func_0014B6F4(temp_4_7);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xC2AA8));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xC2AA8));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xC2AA8));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xC2AA8)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xC2AA8));
        M2C_FIELD(&func_01000000, s32 *, 0xC2AA8) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xC2AA4) != 0) {
        temp_4_8 = M2C_FIELD(&func_01000000, s32 *, 0xC2AA4);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_8) {
            func_00152520(temp_4_8);
        }
        func_0014B6F4(temp_4_8);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xC2AA4));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xC2AA4));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xC2AA4));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xC2AA4)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xC2AA4));
        M2C_FIELD(&func_01000000, s32 *, 0xC2AA4) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xC2AA0) != 0) {
        temp_4_9 = M2C_FIELD(&func_01000000, s32 *, 0xC2AA0);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_9) {
            func_00152520(temp_4_9);
        }
        func_0014B6F4(temp_4_9);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xC2AA0));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xC2AA0));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xC2AA0));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xC2AA0)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xC2AA0));
        M2C_FIELD(&func_01000000, s32 *, 0xC2AA0) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xC2A9C) != 0) {
        temp_4_10 = M2C_FIELD(&func_01000000, s32 *, 0xC2A9C);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_10) {
            func_00152520(temp_4_10);
        }
        func_0014B6F4(temp_4_10);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xC2A9C));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xC2A9C));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xC2A9C));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xC2A9C)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xC2A9C));
        M2C_FIELD(&func_01000000, s32 *, 0xC2A9C) = 0;
    }
}
