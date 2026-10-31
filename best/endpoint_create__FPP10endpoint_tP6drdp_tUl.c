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
M2C_UNK close_set_init__FP11close_set_t(void *);    /* extern */
s32 connection_get_key_offset__Fi(M2C_UNK);         /* extern */
s32 connection_get_vnode_offset__Fi(M2C_UNK);       /* extern */
s32 drdp_get_time__FPC6drdp_t(s32);                 /* extern */
M2C_UNK endpoint_destroy__FP10endpoint_t(void *);   /* extern */
s32 message_get_vlink_offset__Fi(M2C_UNK);          /* extern */
M2C_UNK vlist_init__FP7vlist_tiPFPCvPCv_ii(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK vtree_init__FP7vtree_tiPFPCvPCv_ii(void *, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_011CBA18;
extern M2C_UNK uns64_cmp__FPCUlT0;

s32 endpoint_create__FPP10endpoint_tP6drdp_tUl(void **arg0, s32 arg1, s64 arg2) {
    s32 temp_16;
    s32 temp_2;
    s32 var_22;
    void *var_17;

    var_22 = -2;
    var_17 = __wrap_malloc(0xB0);
    if (var_17 != NULL) {
        var_22 = 0;
        M2C_FIELD(var_17, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_011CBA18, M2C_UNK *, 0));
        M2C_FIELD(var_17, s32 *, 0x14) = arg1;
        M2C_FIELD(var_17, s64 *, 0x20) = arg2;
        M2C_FIELD(var_17, s32 *, 0x18) = 0;
        temp_2 = drdp_get_time__FPC6drdp_t(arg1);
        M2C_FIELD(var_17, s32 *, 0x2C) = 0;
        M2C_FIELD(var_17, s32 *, 0x28) = temp_2;
        M2C_FIELD(var_17, s32 *, 0xA8) = 0;
        M2C_FIELD(var_17, s32 *, 0xAC) = drdp_get_time__FPC6drdp_t(M2C_FIELD(var_17, s32 *, 0x14));
        temp_16 = connection_get_vnode_offset__Fi(0);
        vtree_init__FP7vtree_tiPFPCvPCv_ii(var_17 + 0x30, temp_16, &uns64_cmp__FPCUlT0, connection_get_key_offset__Fi(0));
        vlist_init__FP7vlist_tiPFPCvPCv_ii(var_17 + 0x54, message_get_vlink_offset__Fi(0), 0, 0);
        close_set_init__FP11close_set_t(var_17 + 0x6C);
        *arg0 = var_17;
        var_17 = NULL;
    }
    if (var_17 != NULL) {
        endpoint_destroy__FP10endpoint_t(var_17);
    }
    return var_22;
}
