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
void *drdp_create_addr__FPP6drdp_tPC11drdp_addr_tiUibPvPFP6drdp_tP12connection_t_vT6PFP6drdp_tUl_vii(void **, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK drdp_destroy__FP6drdp_t(void *);            /* extern */
M2C_UNK memcpy(s32, s32, s32);                      /* extern */

void *drdp_create_master__FPP6drdp_tPC11drdp_addr_tUibPvPFP6drdp_tP12connection_t_vT5PFP6drdp_tUl_vPCvi(void **arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8) {
    void *sp20;
    s32 temp_2;
    void *var_16;
    void *var_3;

    sp20 = NULL;
    var_16 = drdp_create_addr__FPP6drdp_tPC11drdp_addr_tiUibPvPFP6drdp_tP12connection_t_vT6PFP6drdp_tUl_vii(&sp20, 0, arg2, arg3, arg4, arg5, arg6, arg7, 0x200000, 0xFDE8);
    var_3 = sp20;
    if (var_16 == NULL) {
        if (arg_sp8 > 0) {
            var_16 = (void *)-1;
            temp_2 = __wrap_malloc(arg_sp8);
            var_3 = sp20;
            M2C_FIELD(var_3, s32 *, 0x208) = temp_2;
            if (temp_2 != 0) {
                M2C_FIELD(var_3, s32 *, 0x20C) = arg_sp8;
                memcpy(temp_2, arg_sp0, arg_sp8);
                goto block_4;
            }
        } else {
block_4:
            var_16 = NULL;
            var_3 = NULL;
            *arg0 = sp20;
            sp20 = NULL;
        }
    }
    if (var_3 != NULL) {
        drdp_destroy__FP6drdp_t(var_3);
    }
    return var_16;
}
