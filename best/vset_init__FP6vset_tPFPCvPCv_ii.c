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

M2C_UNK vtree_init__FP7vtree_tiPFPCvPCv_ii(s32, s32, M2C_UNK); /* extern */

void vset_init__FP6vset_tPFPCvPCv_ii(s32 arg1, s32 arg2) {
    vtree_init__FP7vtree_tiPFPCvPCv_ii(arg2, arg1, 0);
}
