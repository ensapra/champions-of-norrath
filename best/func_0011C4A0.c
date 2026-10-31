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

extern M2C_UNK Decrement__12VIWndOptions;
extern M2C_UNK HUDRunFrame__Fv;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_0011C4A0(s32 arg0, s32 arg1) {
    M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x1A8) = arg0;
    if (arg1 != 0) {
        M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x2C) = 0x40;
        M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x30) = 0x20;
        M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16E4) = 1;
        return;
    }
    M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x2C) = 0x20;
    M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x30) = 0x40;
}
