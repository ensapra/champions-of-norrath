/* machine draft (m2c) for ee-gcc-2.96 -O2 -G0 -mno-check-zero-division, tried by autopilot */
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

M2C_UNK func_00114948(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_0012FF80();                            /* extern */
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK func_0012F910;
extern M2C_UNK helpMessageFrame__Fv;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00130070(s32 arg0) {
    if (arg0 >= 0) {
        M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x3D0) = 0;
        func_0012FF80();
        return;
    }
    switch (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x388)) { /* irregular */
    case 1:
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x52), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
        return;
    case 2:
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x53), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
        return;
    case 3:
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x54), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
        return;
    }
}
