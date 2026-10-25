/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

M2C_UNK DeleteSema_2(s32);                          /* extern */
extern s32 D_00446074;
extern s32 D_00446078;

s32 func_002E0D60(void) {
    if (D_00446074 >= 0) {
        DeleteSema_2(D_00446074);
        D_00446074 = -1;
        DeleteSema_2(D_00446078);
    }
    return 1;
}
