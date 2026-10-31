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

M2C_UNK func_00104F30(s32);                         /* extern */
M2C_UNK func_001050A8(M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_00105190(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0014D240(s32);                         /* extern */
extern M2C_UNK Init__9VIConsole;
extern M2C_UNK func_00105090;
extern M2C_UNK func_00117398;
extern M2C_UNK func_00117510;
extern M2C_UNK runStats__Fii;

void func_00117538(void) {
    M2C_UNK sp10;
    M2C_UNK *spB8;
    M2C_UNK *spBC;
    M2C_UNK *spC0;

    if ((u32) (M2C_FIELD(&Init__9VIConsole, s32 *, 0x620) - 2) >= 2U) {
        if (M2C_FIELD(&Init__9VIConsole, s32 *, 0x61C) != 0) {
            func_0014D240(M2C_FIELD(&Init__9VIConsole, s32 *, 0x61C));
        }
        func_00104F30(M2C_FIELD(&Init__9VIConsole, s32 *, 0x610));
        M2C_FIELD(&Init__9VIConsole, s32 *, 0x620) = 3;
        func_001050A8(&sp10, M2C_FIELD(&Init__9VIConsole, s32 *, 0x610), 9, 0, 0xF, 0, M2C_FIELD(&runStats__Fii, s32 *, 0xE28), M2C_FIELD(&runStats__Fii, s32 *, 0xE2C), 0, 0);
        spB8 = &func_00105090;
        spBC = &func_00117510;
        spC0 = &func_00117398;
        func_00105190(&sp10, &func_00117398);
    }
}
