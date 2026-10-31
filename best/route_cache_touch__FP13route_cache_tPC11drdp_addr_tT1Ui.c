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
void *__wrap_malloc(M2C_UNK);                       /* extern */
s32 drdp_addr_t_cmp__FPC11drdp_addr_tT0(void *, void *); /* extern */
M2C_UNK drdp_format_addr1__FPC11drdp_addr_t(void *); /* extern */
M2C_UNK drdp_format_addr2__FPC11drdp_addr_t(void *); /* extern */
M2C_UNK route_cache_release_expired__FP13route_cache_tUi(s32); /* extern */
M2C_UNK vlist_insert__FP7vlist_tPv(s32, void *);    /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(s32, void *);    /* extern */
M2C_UNK vtree_insert__FP7vtree_tPv(s32, void *);    /* extern */
void *vtree_lookup__FPC7vtree_tPCv(s32, void *);    /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(s32, void *);    /* extern */

void route_cache_touch__FP13route_cache_tPC11drdp_addr_tT1Ui(s32 arg0, void *arg1, void *arg2, s32 arg3) {
    s32 temp_16;
    s32 temp_21;
    s32 temp_21_2;
    void *temp_17;
    void *temp_17_2;
    void *temp_2;
    void *temp_4;
    void *var_16;
    void *var_18;
    void *var_20;

    temp_21 = arg0 + 0x24;
    route_cache_release_expired__FP13route_cache_tUi(arg3);
    temp_17 = vtree_lookup__FPC7vtree_tPCv(arg0, arg1);
    var_16 = vtree_lookup__FPC7vtree_tPCv(temp_21, arg2);
    if ((temp_17 == NULL) && (var_16 == NULL)) {
        temp_2 = __wrap_malloc(0x38);
        var_20 = temp_2 + 0x28;
        if (temp_2 != NULL) {
            var_18 = temp_2 + 0x2E;
            M2C_FIELD(temp_2, M2C_UNK *, 0x28) = M2C_UNALIGNED32(M2C_FIELD(arg1, M2C_UNK *, 0));
            M2C_FIELD(var_20, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
            M2C_FIELD(temp_2, M2C_UNK *, 0x2E) = M2C_UNALIGNED32(M2C_FIELD(arg2, M2C_UNK *, 0));
            M2C_FIELD(var_18, s16 *, 4) = (s16) M2C_FIELD(arg2, s16 *, 4);
            M2C_FIELD(temp_2, s32 *, 0x34) = (s32) (arg3 + 0x493E0);
            vlist_insert__FP7vlist_tPv(arg0 + 0x48, temp_2);
            vtree_insert__FP7vtree_tPv(arg0, temp_2);
            vtree_insert__FP7vtree_tPv(temp_21, temp_2);
            goto block_14;
        }
    } else {
        if ((temp_17 != NULL) && (var_16 != NULL) && (temp_17 != var_16)) {
            vtree_remove__FP7vtree_tPv(arg0, var_16);
            vtree_remove__FP7vtree_tPv(temp_21, var_16);
            vlist_remove__FP7vlist_tPv(arg0 + 0x48, var_16);
            drdp_format_addr1__FPC11drdp_addr_t(var_16 + 0x28);
            drdp_format_addr2__FPC11drdp_addr_t(var_16 + 0x2E);
            drdp_format_addr1__FPC11drdp_addr_t(arg1);
            drdp_format_addr2__FPC11drdp_addr_t(arg2);
            temp_4 = var_16;
            var_16 = NULL;
            __wrap_free(temp_4);
        }
        temp_17_2 = (temp_17 == NULL) ? var_16 : temp_17;
        var_20 = temp_17_2 + 0x28;
        var_18 = temp_17_2 + 0x2E;
        if (drdp_addr_t_cmp__FPC11drdp_addr_tT0(var_20, arg1) != 0) {
            vtree_remove__FP7vtree_tPv(arg0, temp_17_2);
            M2C_FIELD(temp_17_2, M2C_UNK *, 0x28) = M2C_UNALIGNED32(M2C_FIELD(arg1, M2C_UNK *, 0));
            M2C_FIELD(var_20, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
            var_18 = temp_17_2 + 0x2E;
            vtree_insert__FP7vtree_tPv(arg0, temp_17_2);
        } else if (drdp_addr_t_cmp__FPC11drdp_addr_tT0(var_18, arg2) != 0) {
            vtree_remove__FP7vtree_tPv(temp_21, temp_17_2);
            M2C_FIELD(temp_17_2, M2C_UNK *, 0x2E) = M2C_UNALIGNED32(M2C_FIELD(arg2, M2C_UNK *, 0));
            M2C_FIELD(var_18, s16 *, 4) = (s16) M2C_FIELD(arg2, s16 *, 4);
            vtree_insert__FP7vtree_tPv(temp_21, temp_17_2);
        }
        temp_21_2 = arg3 + 0x493E0;
        drdp_format_addr1__FPC11drdp_addr_t(var_20);
        drdp_format_addr2__FPC11drdp_addr_t(var_18);
        drdp_format_addr1__FPC11drdp_addr_t(arg1);
        drdp_format_addr2__FPC11drdp_addr_t(arg2);
        temp_16 = arg0 + 0x48;
        if (M2C_FIELD(temp_17_2, s32 *, 0x34) != temp_21_2) {
            vlist_remove__FP7vlist_tPv(temp_16, temp_17_2);
            M2C_FIELD(temp_17_2, s32 *, 0x34) = temp_21_2;
            vlist_insert__FP7vlist_tPv(temp_16, temp_17_2);
        }
block_14:
        drdp_format_addr1__FPC11drdp_addr_t(var_20);
        drdp_format_addr2__FPC11drdp_addr_t(var_18);
    }
}
