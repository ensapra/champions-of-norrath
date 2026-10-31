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

M2C_UNK vlist_insert__FP7vlist_tPv(s32, void *);    /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(s32, void *);    /* extern */
void *vtree_lookup__FPC7vtree_tPCv(s32);            /* extern */

void route_cache_route_to_address__FP13route_cache_tPC11drdp_addr_tP11drdp_addr_tUi(s32 arg0, void *arg1, void *arg2, s32 arg3) {
    s32 temp_16;
    s32 temp_20;
    void *temp_2;

    temp_20 = arg3 + 0x493E0;
    temp_2 = vtree_lookup__FPC7vtree_tPCv(arg0 + 0x24);
    if (temp_2 == NULL) {
        M2C_FIELD(arg2, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(arg1, M2C_UNK *, 0));
        M2C_FIELD(arg2, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
        return;
    }
    M2C_FIELD(arg2, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(temp_2, M2C_UNK *, 0x28));
    M2C_FIELD(arg2, s16 *, 4) = (s16) M2C_FIELD(temp_2, s16 *, 0x2C);
    temp_16 = arg0 + 0x48;
    if (M2C_FIELD(temp_2, s32 *, 0x34) != temp_20) {
        vlist_remove__FP7vlist_tPv(temp_16, temp_2);
        M2C_FIELD(temp_2, s32 *, 0x34) = temp_20;
        vlist_insert__FP7vlist_tPv(temp_16, temp_2);
    }
}
