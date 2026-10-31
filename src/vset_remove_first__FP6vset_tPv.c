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

M2C_UNK __wrap_free(s32);                           /* extern */
M2C_UNK memcpy(s32, s32, s32);                      /* extern */
s32 vtree_remove_first__FP7vtree_t();               /* extern */

s32 vset_remove_first__FP6vset_tPv(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 var_2;

    temp_2 = vtree_remove_first__FP7vtree_t();
    var_2 = -1;
    if (temp_2 != 0) {
        memcpy(arg1, temp_2, M2C_FIELD(arg0, s32 *, 8));
        __wrap_free(temp_2);
        var_2 = 0;
    }
    return var_2;
}
