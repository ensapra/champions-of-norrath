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

void func_0011B8D0(void) {
    M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x194) = (s32) (M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x194) + 1);
    M2C_FIELD(&Decrement__12VIWndOptions, M2C_UNK (**)(void *, void *), 0x184)(&Decrement__12VIWndOptions + 0x194, &Decrement__12VIWndOptions + 0x184);
}
