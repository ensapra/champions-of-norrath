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

M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK buffer_append_packed_uns64__FP8buffer_tUl(s32, s32); /* extern */
M2C_UNK buffer_append_uns64__FP8buffer_tUl(s32, s64); /* extern */
M2C_UNK buffer_append_uns8__FP8buffer_tUc(s32, s64); /* extern */
void *vtree_get_next__FP7vtree_tPv(s32, void *);    /* extern */
s32 vtree_get_size__FP7vtree_t(s32);                /* extern */
void *vtree_peek_first__FP7vtree_t(s32);            /* extern */
extern M2C_UNK D_011CADF0;
extern M2C_UNK D_011CB038;

void drdp_append_route_table__FP13route_table_tP8buffer_tUl(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_20;
    s64 temp_16;
    s64 var_19;
    void *var_17;

    temp_20 = arg0 + 0x10;
    var_19 = 0;
    if (vtree_get_size__FP7vtree_t(temp_20) == 0) {
        _uassert(&D_011CB038, &D_011CADF0, 0x819);
    }
    buffer_append_uns64__FP8buffer_tUl(arg1, M2C_FIELD(arg0, s64 *, 0));
    buffer_append_uns64__FP8buffer_tUl(arg1, M2C_FIELD(arg0, s64 *, 8));
    buffer_append_packed_uns64__FP8buffer_tUl(arg1, vtree_get_size__FP7vtree_t(temp_20));
    var_17 = vtree_peek_first__FP7vtree_t(temp_20);
    if (var_17 != NULL) {
        do {
            buffer_append_packed_uns64__FP8buffer_tUl(arg1, M2C_FIELD(var_17, s64 *, 0x10) - var_19);
            buffer_append_packed_uns64__FP8buffer_tUl(arg1, M2C_FIELD(var_17, s64 *, 0x18) - M2C_FIELD(var_17, s64 *, 0x10));
            var_19 = M2C_FIELD(var_17, s64 *, 0x18);
            temp_16 = (s64) ((arg2 == M2C_FIELD(var_17, s64 *, 0x20)) << 0x20) >> 0x20;
            buffer_append_uns8__FP8buffer_tUc(arg1, temp_16);
            if (temp_16 == 0) {
                buffer_append_uns64__FP8buffer_tUl(arg1, M2C_FIELD(var_17, s64 *, 0x20));
            }
            var_17 = vtree_get_next__FP7vtree_tPv(temp_20, var_17);
        } while (var_17 != NULL);
    }
}
