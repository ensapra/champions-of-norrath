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

void func_00141FA0(void) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    s32 temp_4_8;

    if (M2C_FIELD(&func_01000000, s32 *, 0xD445C) != 0) {
        temp_4 = M2C_FIELD(&func_01000000, s32 *, 0xD445C);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4) {
            func_00152520(temp_4);
        }
        func_0014B6F4(temp_4);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xD445C));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xD445C));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xD445C));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xD445C)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xD445C));
        M2C_FIELD(&func_01000000, s32 *, 0xD445C) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xD4460) != 0) {
        temp_4_2 = M2C_FIELD(&func_01000000, s32 *, 0xD4460);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_2) {
            func_00152520(temp_4_2);
        }
        func_0014B6F4(temp_4_2);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xD4460));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xD4460));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xD4460));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xD4460)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xD4460));
        M2C_FIELD(&func_01000000, s32 *, 0xD4460) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xD4458) != 0) {
        temp_4_3 = M2C_FIELD(&func_01000000, s32 *, 0xD4458);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_3) {
            func_00152520(temp_4_3);
        }
        func_0014B6F4(temp_4_3);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xD4458));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xD4458));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xD4458));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xD4458)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xD4458));
        M2C_FIELD(&func_01000000, s32 *, 0xD4458) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xD4454) != 0) {
        temp_4_4 = M2C_FIELD(&func_01000000, s32 *, 0xD4454);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_4) {
            func_00152520(temp_4_4);
        }
        func_0014B6F4(temp_4_4);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xD4454));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xD4454));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xD4454));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xD4454)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xD4454));
        M2C_FIELD(&func_01000000, s32 *, 0xD4454) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xD4450) != 0) {
        temp_4_5 = M2C_FIELD(&func_01000000, s32 *, 0xD4450);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_5) {
            func_00152520(temp_4_5);
        }
        func_0014B6F4(temp_4_5);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xD4450));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xD4450));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xD4450));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xD4450)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xD4450));
        M2C_FIELD(&func_01000000, s32 *, 0xD4450) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xD444C) != 0) {
        temp_4_6 = M2C_FIELD(&func_01000000, s32 *, 0xD444C);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_6) {
            func_00152520(temp_4_6);
        }
        func_0014B6F4(temp_4_6);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xD444C));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xD444C));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xD444C));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xD444C)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xD444C));
        M2C_FIELD(&func_01000000, s32 *, 0xD444C) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xD4448) != 0) {
        temp_4_7 = M2C_FIELD(&func_01000000, s32 *, 0xD4448);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_7) {
            func_00152520(temp_4_7);
        }
        func_0014B6F4(temp_4_7);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xD4448));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xD4448));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xD4448));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xD4448)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xD4448));
        M2C_FIELD(&func_01000000, s32 *, 0xD4448) = 0;
    }
    if (M2C_FIELD(&func_01000000, s32 *, 0xD4444) != 0) {
        temp_4_8 = M2C_FIELD(&func_01000000, s32 *, 0xD4444);
        if (func_001523D0(M2C_FIELD(&func_001BCB38, s32 *, 0xD74)) == temp_4_8) {
            func_00152520(temp_4_8);
        }
        func_0014B6F4(temp_4_8);
        func_00104F30(M2C_FIELD(&func_01000000, s32 *, 0xD4444));
        func_00106E30(0, M2C_FIELD(&func_01000000, s32 *, 0xD4444));
        func_00106E30(1, M2C_FIELD(&func_01000000, s32 *, 0xD4444));
        if (M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) == M2C_FIELD(&func_01000000, s32 *, 0xD4444)) {
            M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC) = 0;
        }
        func_001389A0(M2C_FIELD(&func_01000000, s32 *, 0xD4444));
        M2C_FIELD(&func_01000000, s32 *, 0xD4444) = 0;
    }
}
