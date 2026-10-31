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

M2C_UNK func_001050A8(M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_00105190(M2C_UNK *);                   /* extern */
M2C_UNK func_0013B870();                            /* extern */
M2C_UNK func_0014D270(s32);                         /* extern */
extern M2C_UNK Init__9VIConsole;
extern M2C_UNK func_00105078;
extern M2C_UNK func_00117388;
extern M2C_UNK func_001173C8;
extern M2C_UNK runStats__Fii;

void func_00117418(void) {
    M2C_UNK sp10;
    M2C_UNK *spB8;
    M2C_UNK spD0;
    s32 sp178;
    M2C_UNK *sp17C;
    M2C_UNK *sp180;

    func_0013B870();
    M2C_FIELD(&Init__9VIConsole, s32 *, 0x620) = 1;
    func_001050A8(&sp10, M2C_FIELD(&Init__9VIConsole, s32 *, 0x610), 9, 0, 1, 0, M2C_FIELD(&runStats__Fii, s32 *, 0xE28), M2C_FIELD(&runStats__Fii, s32 *, 0xE2C), 0, 0);
    spB8 = &func_00105078;
    func_00105190(&sp10);
    func_001050A8(&spD0, M2C_FIELD(&Init__9VIConsole, s32 *, 0x610), 9, 2, 0xF, 0, M2C_FIELD(&runStats__Fii, s32 *, 0xE30), M2C_FIELD(&runStats__Fii, s32 *, 0xE34), 0, 0);
    sp180 = &func_00117388;
    sp17C = &func_001173C8;
    sp178 = 0;
    func_00105190(&spD0);
    if (M2C_FIELD(&Init__9VIConsole, s32 *, 0x61C) != 0) {
        func_0014D270(M2C_FIELD(&Init__9VIConsole, s32 *, 0x61C));
    }
}
