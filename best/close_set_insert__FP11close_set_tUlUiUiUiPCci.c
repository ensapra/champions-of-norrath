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
M2C_UNK close_set_release_expired__FP11close_set_tUi(s32); /* extern */
M2C_UNK drdp_format_endpoint1__FUl(s64);            /* extern */
M2C_UNK vlist_insert__FP7vlist_tPv(s32, void *);    /* extern */
M2C_UNK vtree_insert__FP7vtree_tPv(s32, void *);    /* extern */

s32 close_set_insert__FP11close_set_tUlUiUiUiPCci(s32 arg0, s64 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_18;
    s32 var_2;
    void *temp_2;

    temp_18 = arg3 + 0x1D4C0;
    close_set_release_expired__FP11close_set_tUi(arg4);
    if ((temp_18 - arg4) >= 0) {
        temp_2 = __wrap_malloc(0x38);
        var_2 = -2;
        if (temp_2 != NULL) {
            M2C_FIELD(temp_2, s64 *, 0x18) = arg1;
            M2C_FIELD(temp_2, s32 *, 0x20) = arg2;
            M2C_FIELD(temp_2, s32 *, 0x28) = temp_18;
            M2C_FIELD(temp_2, s32 *, 0x2C) = arg5;
            M2C_FIELD(temp_2, s32 *, 0x30) = arg6;
            vlist_insert__FP7vlist_tPv(arg0 + 0x24, temp_2);
            vtree_insert__FP7vtree_tPv(arg0, temp_2);
            drdp_format_endpoint1__FUl(M2C_FIELD(temp_2, s64 *, 0x18));
            goto block_3;
        }
    } else {
block_3:
        var_2 = 0;
    }
    return var_2;
}
