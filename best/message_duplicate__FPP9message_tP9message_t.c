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

s32 __wrap_malloc(s32);                             /* extern */
M2C_UNK memcpy(s32, void *, s32);                   /* extern */

s32 message_duplicate__FPP9message_tP9message_t(s32 *arg0, void *arg1) {
    s32 temp_2;
    s32 var_2;

    *arg0 = 0;
    temp_2 = __wrap_malloc(M2C_FIELD(arg1, s32 *, 0x30) + 0x48);
    var_2 = -2;
    if (temp_2 != 0) {
        memcpy(temp_2, arg1, M2C_FIELD(arg1, s32 *, 0x30) + 0x48);
        var_2 = 0;
        *arg0 = temp_2;
    }
    return var_2;
}
