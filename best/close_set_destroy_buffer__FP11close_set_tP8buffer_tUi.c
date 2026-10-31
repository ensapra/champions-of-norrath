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

M2C_UNK __wrap_free(void *);                        /* extern */
M2C_UNK buffer_append_offset_uns32__FP8buffer_tUiUi(s32, s32, s32); /* extern */
M2C_UNK buffer_append_uns32__FP8buffer_tUi(s32, s32); /* extern */
M2C_UNK buffer_append_uns64__FP8buffer_tUl(s32, s64); /* extern */
s32 close_get_key_offset__Fi(M2C_UNK);              /* extern */
s32 close_get_vnode_offset__Fi(M2C_UNK);            /* extern */
s64 vlist_get_size__FP7vlist_t(s32);                /* extern */
void *vlist_remove_head__FP7vlist_t(s32);           /* extern */
M2C_UNK vtree_init__FP7vtree_tiPFPCvPCv_ii(s32, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK close_key_t_cmp__FPC11close_key_tT0;

void close_set_destroy_buffer__FP11close_set_tP8buffer_tUi(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 var_18;
    void *temp_2;

    if (arg1 != 0) {
        var_18 = arg0 + 0x24;
        buffer_append_uns64__FP8buffer_tUl(arg1, vlist_get_size__FP7vlist_t(var_18));
    } else {
        var_18 = arg0 + 0x24;
    }
loop_7:
    temp_2 = vlist_remove_head__FP7vlist_t(var_18);
    if (temp_2 != NULL) {
        if (arg1 != 0) {
            buffer_append_uns64__FP8buffer_tUl(arg1, M2C_FIELD(temp_2, s64 *, 0x18));
            buffer_append_uns32__FP8buffer_tUi(arg1, M2C_FIELD(temp_2, s32 *, 0x20));
            buffer_append_offset_uns32__FP8buffer_tUiUi(arg1, M2C_FIELD(temp_2, s32 *, 0x28), arg2);
        }
        __wrap_free(temp_2);
        goto loop_7;
    }
    temp_16 = close_get_vnode_offset__Fi(0);
    vtree_init__FP7vtree_tiPFPCvPCv_ii(arg0, temp_16, &close_key_t_cmp__FPC11close_key_tT0, close_get_key_offset__Fi(0));
}
