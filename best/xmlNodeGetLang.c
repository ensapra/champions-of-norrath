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

s32 xmlGetProp(void *, M2C_UNK *);                  /* extern */
extern M2C_UNK D_011C29A0;

s32 xmlNodeGetLang(void *arg0) {
    s32 var_2;
    void *var_16;
    void *var_4;

    var_16 = arg0;
    if (var_16 != NULL) {
        var_4 = var_16;
loop_2:
        var_2 = xmlGetProp(var_4, &D_011C29A0);
        if (var_2 == 0) {
            var_16 = M2C_FIELD(var_16, void **, 0x14);
            var_4 = var_16;
            if (var_16 == NULL) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_2 = 0;
    }
    return var_2;
}
