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

s32 vlist_get_size__FP7vlist_t(s32);                /* extern */
s32 vset_get_size__FP6vset_t(s32);                  /* extern */
s32 vtree_get_size__FP7vtree_t(s32);                /* extern */

s32 route_destroy_check__FP7route_t(s32 arg0) {
    s32 var_17;

    var_17 = 0;
    if ((vtree_get_size__FP7vtree_t(arg0 + 0x50) == 0) && (vset_get_size__FP6vset_t(arg0 + 0x74) == 0) && (vset_get_size__FP6vset_t(arg0 + 0x98) == 0)) {
        var_17 = vlist_get_size__FP7vlist_t(arg0 + 0x38) == 0;
    }
    return var_17;
}
