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

M2C_UNK func_00105078();                            /* extern */
M2C_UNK func_0013B898(void *);                      /* extern */
extern M2C_UNK Init__9VIConsole;
extern M2C_UNK jtbl_004C006C;

void func_00117398(void) {
    M2C_FIELD(&Init__9VIConsole, s32 *, 0x620) = 2;
    func_00105078();
    func_0013B898(&jtbl_004C006C + 0x7784);
}
