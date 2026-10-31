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

M2C_UNK __builtin_vec_delete(s32);                  /* extern */
s32 __builtin_vec_new(M2C_UNK);                     /* extern */

s32 Init__9VIWndEula(void *arg0) {
    s32 temp_2;
    s32 var_2;

    M2C_FIELD(arg0, s32 *, 0x610) = 0;
    M2C_FIELD(arg0, s32 *, 0x60C) = 1;
    temp_2 = __builtin_vec_new(0x10000);
    var_2 = -1;
    if (temp_2 != 0) {
        __builtin_vec_delete(temp_2);
        var_2 = 0;
    }
    return var_2;
}
