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

M2C_UNK func_0010B378(s32, void *, s32);            /* extern */
s32 func_001167E0();                                /* extern */
M2C_UNK func_00130DA0(s64);                         /* extern */
M2C_UNK func_0013BBD0();                            /* extern */
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK helpMessageFrame__Fv;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00131090(s64 arg1) {
    s32 temp_6;
    s32 temp_6_2;
    s64 temp_16;

    temp_16 = (s64) (arg1 << 0x20) >> 0x20;
    temp_6 = temp_16 * 4;
    if (func_001167E0() == 2) {
        temp_6_2 = *(&Slerp__7VIQuatDRC7VIQuatDT1d + 0x38 + temp_6);
        M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x384) = (s32) temp_16;
        M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = temp_6_2;
        func_0010B378(*(&Slerp__7VIQuatDRC7VIQuatDT1d + 0x28 + temp_6), &shopItemSetAttributes__FiiPcPQ24item11description + 0x1748, temp_6_2);
        func_0013BBD0();
        if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16DC) != 0) {
            func_00130DA0(temp_16);
        }
    }
}
