/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK func_01109848;
extern M2C_UNK jtbl_004C006C;

s32 func_001B4778(s32 arg0) {
    s32 var_2;

    if ((M2C_FIELD(&jtbl_004C006C, s32 *, 0x3F48) < 0) || (M2C_FIELD(&func_01109848, s32 *, 0x1838) = arg0, var_2 = M2C_FIELD(&func_01109848, s32 *, 0x17F8), (func_001B08B0(&func_01109848 + 0x17B8, 1, 0, &func_01109848 + 0x1838, 4, &func_01109848 + 0x17F8, 4, 0, 0) < 0))) {
        var_2 = 0;
    }
    return var_2;
}
