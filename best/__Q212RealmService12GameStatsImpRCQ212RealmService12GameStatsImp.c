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

M2C_UNK *_S_oom_malloc__t23__malloc_alloc_template1i0Ui(u32); /* extern */
M2C_UNK *_S_refill__t24__default_alloc_template2b0i0Ui(s32, M2C_UNK **, s32); /* extern */
M2C_UNK *__uninitialized_copy_aux__H2ZPCQ212RealmService13GameStatsNodeZPQ212RealmService13GameStatsNode_X01X01X11G12__false_type_X11(s32, s32, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK *__wrap_malloc(u32, M2C_UNK, s32);          /* extern */
extern M2C_UNK D_011F290C;
extern M2C_UNK D_011FDD60;

void __Q212RealmService12GameStatsImpRCQ212RealmService12GameStatsImp(void *arg0, void *arg1) {
    M2C_UNK **temp_5;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_4;
    M2C_UNK *var_3;
    M2C_UNK *var_6;
    s32 temp_2;
    s32 temp_6;
    u32 temp_16;
    u32 temp_3;

    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_011FDD60;
    temp_6 = M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    temp_2 = (s32) (M2C_FIELD(arg1, s32 *, 4) - temp_6) >> 2;
    M2C_FIELD(arg0, void **, 8) = NULL;
    if ((temp_2 * 0xAAAAAAAB) != 0) {
        temp_16 = temp_2 * 4;
        temp_3 = temp_16 + 7;
        if (temp_16 >= 0x81U) {
            temp_2_2 = __wrap_malloc(temp_16, 0xAAAAAAAB, temp_6);
            var_6 = temp_2_2;
            if (temp_2_2 == NULL) {
                var_6 = _S_oom_malloc__t23__malloc_alloc_template1i0Ui(temp_16);
            }
        } else {
            temp_5 = &D_011F290C + ((temp_3 >> 3) * 4);
            temp_4 = *temp_5;
            if (temp_4 != NULL) {
                var_6 = temp_4;
                *temp_5 = *temp_4;
            } else {
                var_6 = _S_refill__t24__default_alloc_template2b0i0Ui(temp_3 & ~7, temp_5, temp_6);
            }
        }
        var_3 = var_6;
    } else {
        var_3 = NULL;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = var_3;
    M2C_FIELD(arg0, M2C_UNK **, 4) = var_3;
    M2C_FIELD(arg0, void **, 8) = (void *) (var_3 + (temp_2 * 0x800000004));
    M2C_FIELD(arg0, M2C_UNK **, 4) = __uninitialized_copy_aux__H2ZPCQ212RealmService13GameStatsNodeZPQ212RealmService13GameStatsNode_X01X01X11G12__false_type_X11(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), var_3, 0, var_3);
}
