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

s32 vtree_vnode_range_cmp__FP7vtree_tPvT1P7vnode_t(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_3;

    var_3 = M2C_FIELD(arg0, s32 (**)(s32, s32), 0xC)(arg1, arg3 + M2C_FIELD(arg0, s32 *, 0x10));
    if (var_3 <= 0) {
        var_3 = (M2C_FIELD(arg0, s32 (**)(s32, s32), 0xC)(arg2, arg3 + M2C_FIELD(arg0, s32 *, 0x10)) >= 0) ? 0 : -1;
    }
    return var_3;
}
