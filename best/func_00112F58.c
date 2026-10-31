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

extern M2C_UNK Init__9VIConsole;
extern M2C_UNK runStats__Fii;

void func_00112F58(s64 arg1) {
    s64 temp_7;

    temp_7 = (s64) (arg1 << 0x20) >> 0x20;
    switch (temp_7) {                               /* irregular */
    case 0:
        M2C_FIELD(&Init__9VIConsole, s32 *, 0x598) = 1;
        M2C_FIELD(&Init__9VIConsole, s32 *, 0x5A4) = (s32) (M2C_FIELD(&Init__9VIConsole, s32 *, 0x5A4) + M2C_FIELD(&runStats__Fii, s32 *, 0xE0C));
        M2C_FIELD(&Init__9VIConsole, s32 *, 0x5A8) = 1;
        return;
    case 1:
        M2C_FIELD(&Init__9VIConsole, s32 *, 0x598) = (s32) temp_7;
        M2C_FIELD(&Init__9VIConsole, s32 *, 0x5A8) = (s32) temp_7;
        M2C_FIELD(&Init__9VIConsole, s32 *, 0x5A4) = (s32) (M2C_FIELD(&Init__9VIConsole, s32 *, 0x5A4) - M2C_FIELD(&runStats__Fii, s32 *, 0xE0C));
        return;
    }
}
