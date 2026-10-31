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

s32 rce_get_key_offset__Fi(M2C_UNK);                /* extern */
s32 rce_get_vlink_offset__Fi(M2C_UNK);              /* extern */
s32 rce_get_vnode_offset__Fi(M2C_UNK);              /* extern */
M2C_UNK vlist_init__FP7vlist_tiPFPCvPCv_ii(s32, s32, M2C_UNK *, s32); /* extern */
M2C_UNK vtree_init__FP7vtree_tiPFPCvPCv_ii(s32, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK drdp_addr_t_cmp__FPC11drdp_addr_tT0;
extern M2C_UNK uns32_cmp__FPCUiT0;

void route_cache_init__FP13route_cache_t(s32 arg0) {
    s32 temp_16;
    s32 temp_17;
    s32 temp_17_2;

    temp_17 = rce_get_vnode_offset__Fi(0);
    vtree_init__FP7vtree_tiPFPCvPCv_ii(arg0, temp_17, &drdp_addr_t_cmp__FPC11drdp_addr_tT0, rce_get_key_offset__Fi(0));
    temp_17_2 = rce_get_vnode_offset__Fi(1);
    vtree_init__FP7vtree_tiPFPCvPCv_ii(arg0 + 0x24, temp_17_2, &drdp_addr_t_cmp__FPC11drdp_addr_tT0, rce_get_key_offset__Fi(1));
    temp_16 = rce_get_vlink_offset__Fi(0);
    vlist_init__FP7vlist_tiPFPCvPCv_ii(arg0 + 0x48, temp_16, &uns32_cmp__FPCUiT0, rce_get_key_offset__Fi(2));
}
