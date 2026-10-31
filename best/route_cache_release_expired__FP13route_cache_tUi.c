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
M2C_UNK drdp_format_addr1__FPC11drdp_addr_t(s32);   /* extern */
M2C_UNK drdp_format_addr2__FPC11drdp_addr_t(void *); /* extern */
void *vlist_peek_head__FP7vlist_t(s32);             /* extern */
M2C_UNK vlist_remove_head__FP7vlist_t(s32);         /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(s32, void *);    /* extern */

void route_cache_release_expired__FP13route_cache_tUi(s32 arg0, s32 arg1) {
    s32 temp_18;
    void *temp_2;

    temp_18 = arg0 + 0x48;
loop_2:
    temp_2 = vlist_peek_head__FP7vlist_t(temp_18);
    if ((temp_2 != NULL) && ((M2C_FIELD(temp_2, s32 *, 0x34) - arg1) <= 0)) {
        drdp_format_addr1__FPC11drdp_addr_t(temp_2 + 0x28);
        drdp_format_addr2__FPC11drdp_addr_t(temp_2 + 0x2E);
        vtree_remove__FP7vtree_tPv(arg0, temp_2);
        vtree_remove__FP7vtree_tPv(arg0 + 0x24, temp_2);
        vlist_remove_head__FP7vlist_t(temp_18);
        __wrap_free(temp_2);
        goto loop_2;
    }
}
