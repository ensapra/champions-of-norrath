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

s32 vtree_lookup__FPC7vtree_tPCv();                 /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(s32, s32);       /* extern */

s32 vtree_remove_by_key__FP7vtree_tPv(s32 arg0) {
    s32 temp_2;

    temp_2 = vtree_lookup__FPC7vtree_tPCv();
    if (temp_2 != 0) {
        vtree_remove__FP7vtree_tPv(arg0, temp_2);
    }
    return temp_2;
}
