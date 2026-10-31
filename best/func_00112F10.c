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

M2C_UNK func_0014D270(s32);                         /* extern */
M2C_UNK func_00152520(s32);                         /* extern */
extern M2C_UNK Init__9VIConsole;
extern M2C_UNK runStats__Fii;

void func_00112F10(void) {
    func_00152520(M2C_FIELD(&runStats__Fii, s32 *, 0xD74));
    if (M2C_FIELD(&Init__9VIConsole, s32 *, 0x528) != 0) {
        func_0014D270(M2C_FIELD(&Init__9VIConsole, s32 *, 0x528));
    }
}
