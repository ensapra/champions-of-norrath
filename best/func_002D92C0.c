/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G8, tried by autopilot */
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

M2C_UNK func_003021B0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_004449F4;
extern M2C_UNK D_008E1BE8;

s32 func_002D92C0(void) {
    D_004449F4 = 0;
    func_003021B0(&D_008E1BE8, 0, 4);
    return 0;
}
