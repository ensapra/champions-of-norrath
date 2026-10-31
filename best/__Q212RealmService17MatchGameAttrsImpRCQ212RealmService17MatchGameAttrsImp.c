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
M2C_UNK *_S_refill__t24__default_alloc_template2b0i0Ui(s32, s32); /* extern */
M2C_UNK *__uninitialized_copy_aux__H2ZPCQ212RealmService13MatchGameNodeZPQ212RealmService13MatchGameNode_X01X01X11G12__false_type_X11(s32, s32, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK *__wrap_malloc(u32);                        /* extern */
extern M2C_UNK D_011F290C;
extern M2C_UNK D_011FDDC0;

void __Q212RealmService17MatchGameAttrsImpRCQ212RealmService17MatchGameAttrsImp(void *arg0, void *arg1) {
    M2C_UNK **temp_4;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_3;
    M2C_UNK *var_5;
    M2C_UNK *var_6;
    s32 temp_2;
    s32 temp_5;
    u32 var_16;

    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_011FDDC0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    temp_2 = (s32) (M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0)) >> 5;
    M2C_FIELD(arg0, void **, 8) = NULL;
    if (temp_2 != 0) {
        var_16 = temp_2 << 5;
        if (var_16 >= 0x81U) {
            temp_2_2 = __wrap_malloc(var_16);
            var_6 = temp_2_2;
            if (temp_2_2 == NULL) {
                var_6 = _S_oom_malloc__t23__malloc_alloc_template1i0Ui(var_16);
            }
        } else {
            temp_4 = &D_011F290C + (var_16 >> 1);
            temp_3 = *temp_4;
            temp_5 = var_16 + 7;
            if (temp_3 == NULL) {
                var_6 = _S_refill__t24__default_alloc_template2b0i0Ui(temp_5 & ~7, temp_5);
            } else {
                var_6 = temp_3;
                *temp_4 = *temp_3;
            }
        }
        var_5 = var_6;
    } else {
        var_5 = NULL;
        var_16 = 0;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = var_5;
    M2C_FIELD(arg0, void **, 8) = (void *) (var_5 + var_16);
    M2C_FIELD(arg0, M2C_UNK **, 4) = var_5;
    M2C_FIELD(arg0, M2C_UNK **, 4) = __uninitialized_copy_aux__H2ZPCQ212RealmService13MatchGameNodeZPQ212RealmService13MatchGameNode_X01X01X11G12__false_type_X11(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), var_5, 0, var_5);
}
