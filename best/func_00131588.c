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

M2C_UNK func_0010A4D0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0014D270(s32);                         /* extern */
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK runStats__Fii;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00131588(void) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    void *temp_16;
    void *temp_17;

    if (M2C_FIELD(&runStats__Fii, s32 *, 0xD38) != 0) {
        func_0010A4D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD38), 0, 0);
    }
    if (M2C_FIELD(&runStats__Fii, s32 *, 0xD40) != 0) {
        func_0010A4D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD40), 0, 0);
    }
    temp_17 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x370;
    temp_16 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x38;
    if (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x370) != 0) {
        if (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x38) != 0) {
            func_0010A4D0(M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x38), 1, 0x40);
        }
    } else if (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x38) != 0) {
        func_0010A4D0(M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x38), 0, 0x40);
    }
    if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0xCAC) & 2) {
        temp_4 = M2C_FIELD(temp_16, s32 *, 4);
        if (temp_4 != 0) {
            func_0014D270(temp_4);
        }
    } else if (M2C_FIELD(temp_17, s32 *, 4) != 0) {
        temp_4_2 = M2C_FIELD(temp_16, s32 *, 4);
        if (temp_4_2 != 0) {
            func_0010A4D0(temp_4_2, 1, 0x40);
        }
    } else {
        temp_4_3 = M2C_FIELD(temp_16, s32 *, 4);
        if (temp_4_3 != 0) {
            func_0010A4D0(temp_4_3, 0, 0x40);
        }
    }
    if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0xCAC) & 4) {
        temp_4_4 = M2C_FIELD(temp_16, s32 *, 8);
        if (temp_4_4 != 0) {
            func_0014D270(temp_4_4);
        }
    } else if (M2C_FIELD(temp_17, s32 *, 8) != 0) {
        temp_4_5 = M2C_FIELD(temp_16, s32 *, 8);
        if (temp_4_5 != 0) {
            func_0010A4D0(temp_4_5, 1, 0x40);
        }
    } else {
        temp_4_6 = M2C_FIELD(temp_16, s32 *, 8);
        if (temp_4_6 != 0) {
            func_0010A4D0(temp_4_6, 0, 0x40);
        }
    }
}
