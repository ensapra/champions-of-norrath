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
M2C_UNK vtree_init__FP7vtree_tiPFPCvPCv_ii(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK vtree_insert__FP7vtree_tPv(s32, void *, s64); /* extern */
extern M2C_UNK uns64_range_t_cmp__FPC13uns64_range_tT0;

void route_table_init__FP13route_table_tUlUl(void *arg0, s64 arg1, s64 arg2) {
    s32 temp_19;
    s64 temp_6;
    void *temp_2;

    temp_19 = arg0 + 0x10;
    vtree_init__FP7vtree_tiPFPCvPCv_ii(temp_19, 0, &uns64_range_t_cmp__FPC13uns64_range_tT0, 0x10);
    M2C_FIELD(arg0, s64 *, 0) = arg1;
    M2C_FIELD(arg0, s64 *, 8) = arg2;
    temp_2 = __wrap_malloc(0x28);
    temp_6 = M2C_FIELD(arg0, s64 *, 8);
    M2C_FIELD(temp_2, s64 *, 0x10) = (s64) M2C_FIELD(arg0, s64 *, 0);
    M2C_FIELD(temp_2, s64 *, 0x18) = temp_6;
    M2C_FIELD(temp_2, s64 *, 0x20) = 0;
    vtree_insert__FP7vtree_tPv(temp_19, temp_2, temp_6);
}
