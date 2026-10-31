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
M2C_UNK bandwidth_init__FP11bandwidth_tii(void *, M2C_UNK, M2C_UNK); /* extern */
s32 connection_get_key_offset__Fi(M2C_UNK);         /* extern */
s32 connection_get_vnode_offset__Fi(M2C_UNK);       /* extern */
s32 drdp_get_time__FPC6drdp_t(s32);                 /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
s32 message_get_vlink_offset__Fi(M2C_UNK);          /* extern */
M2C_UNK route_destroy__FP7route_t(void *);          /* extern */
M2C_UNK vlist_init__FP7vlist_tiPFPCvPCv_ii(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK vset_init__FP6vset_tPFPCvPCv_ii(void *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK vtree_init__FP7vtree_tiPFPCvPCv_ii(void *, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_011DB4A8;
extern M2C_UNK reset_connection_cmp__FPC18reset_connection_tT0;
extern M2C_UNK reset_endpoint_cmp__FPC16reset_endpoint_tT0;
extern M2C_UNK uns32_cmp__FPCUiT0;

s32 route_create__FPP7route_tP6drdp_tUl(void **arg0, s32 arg1, s64 arg2) {
    s32 temp_16;
    s32 temp_2;
    s32 var_22;
    void *var_17;

    var_22 = -2;
    var_17 = __wrap_malloc(0x170);
    if (var_17 != NULL) {
        var_22 = 0;
        M2C_FIELD(var_17, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_011DB4A8, M2C_UNK *, 0));
        M2C_FIELD(var_17, s32 *, 0x24) = arg1;
        temp_2 = drdp_get_time__FPC6drdp_t(arg1);
        M2C_FIELD(var_17, s64 *, 0x30) = arg2;
        M2C_FIELD(var_17, s32 *, 0x28) = temp_2;
        vlist_init__FP7vlist_tiPFPCvPCv_ii(var_17 + 0x38, message_get_vlink_offset__Fi(0), 0, 0);
        temp_16 = connection_get_vnode_offset__Fi(2);
        vtree_init__FP7vtree_tiPFPCvPCv_ii(var_17 + 0x50, temp_16, &uns32_cmp__FPCUiT0, connection_get_key_offset__Fi(1));
        bandwidth_init__FP11bandwidth_tii(var_17 + 0xC0, 0xBB8, 0x12C);
        vset_init__FP6vset_tPFPCvPCv_ii(var_17 + 0x74, &reset_connection_cmp__FPC18reset_connection_tT0, 0x20);
        vset_init__FP6vset_tPFPCvPCv_ii(var_17 + 0x98, &reset_endpoint_cmp__FPC16reset_endpoint_tT0, 8);
        M2C_FIELD(var_17, s32 *, 0xF8) = 0;
        M2C_FIELD(var_17, s32 *, 0xF4) = 0;
        M2C_FIELD(var_17, s32 *, 0xFC) = 0;
        M2C_FIELD(var_17, s32 *, 0xF0) = 0;
        M2C_FIELD(var_17, s32 *, 0x100) = 0;
        memset(var_17 + 0x108, 0, 0x68);
        *arg0 = var_17;
        var_17 = NULL;
    }
    if (var_17 != NULL) {
        route_destroy__FP7route_t(var_17);
    }
    return var_22;
}
