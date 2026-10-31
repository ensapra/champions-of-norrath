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

void *__wrap_malloc(M2C_UNK);                       /* extern */
M2C_UNK vtree_insert__FP7vtree_tPv(void *, void *); /* extern */

s32 drdp_leader_add_internal__FP6drdp_tUlP12connection_t(void *arg0, s64 arg1, s32 arg2) {
    s32 var_2;
    void *temp_2;

    temp_2 = __wrap_malloc(0x20);
    var_2 = -2;
    if (temp_2 != NULL) {
        M2C_FIELD(temp_2, s64 *, 0x10) = arg1;
        M2C_FIELD(temp_2, s32 *, 0x18) = arg2;
        if (arg2 != 0) {
            M2C_FIELD(arg0, M2C_UNK (**)(void *, s32), 0x1F8)(arg0, arg2);
        }
        vtree_insert__FP7vtree_tPv(arg0 + 0x98, temp_2);
        var_2 = 0;
    }
    return var_2;
}
