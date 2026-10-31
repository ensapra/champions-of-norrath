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

s32 close_get_key_offset__Fi(M2C_UNK);              /* extern */
s32 close_get_vlink_offset__Fi(M2C_UNK);            /* extern */
s32 close_get_vnode_offset__Fi(M2C_UNK);            /* extern */
M2C_UNK vlist_init__FP7vlist_tiPFPCvPCv_ii(s32, s32, M2C_UNK *, s32); /* extern */
M2C_UNK vtree_init__FP7vtree_tiPFPCvPCv_ii(s32, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK close_key_t_cmp__FPC11close_key_tT0;
extern M2C_UNK uns32_cmp__FPCUiT0;

void close_set_init__FP11close_set_t(s32 arg0) {
    s32 temp_17;
    s32 temp_17_2;

    temp_17 = close_get_vnode_offset__Fi(0);
    vtree_init__FP7vtree_tiPFPCvPCv_ii(arg0, temp_17, &close_key_t_cmp__FPC11close_key_tT0, close_get_key_offset__Fi(0));
    temp_17_2 = close_get_vlink_offset__Fi(0);
    vlist_init__FP7vlist_tiPFPCvPCv_ii(arg0 + 0x24, temp_17_2, &uns32_cmp__FPCUiT0, close_get_key_offset__Fi(1));
}
