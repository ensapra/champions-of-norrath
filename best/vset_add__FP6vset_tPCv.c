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
M2C_UNK memcpy(s32, s32, s32);                      /* extern */
M2C_UNK vtree_insert__FP7vtree_tPv(void *, s32);    /* extern */
s32 vtree_lookup__FPC7vtree_tPCv();                 /* extern */

s32 vset_add__FP6vset_tPCv(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 var_3;

    var_3 = 0;
    if (vtree_lookup__FPC7vtree_tPCv() == 0) {
        temp_2 = __wrap_malloc(M2C_FIELD(arg0, s32 *, 8) + 0x10);
        var_3 = -2;
        if (temp_2 != 0) {
            memcpy(temp_2, arg1, M2C_FIELD(arg0, s32 *, 8));
            vtree_insert__FP7vtree_tPv(arg0, temp_2);
            var_3 = 0;
        }
    }
    return var_3;
}
