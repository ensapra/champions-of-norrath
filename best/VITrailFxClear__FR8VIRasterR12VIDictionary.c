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

M2C_UNK ReleaseMaterial__8VIRasteriR12VIDictionary(s32, s32, s32); /* extern */
M2C_UNK ___9VITrailFx(void *, M2C_UNK);             /* extern */
M2C_UNK __builtin_vec_delete(void *);               /* extern */
extern s32 D_0118E7D8;
extern void *D_011E5214;

s32 VITrailFxClear__FR8VIRasterR12VIDictionary(s32 arg0, s32 arg1) {
    void *temp_16;
    void *var_16;

    if (D_011E5214 != NULL) {
        temp_16 = D_011E5214 + (M2C_FIELD(D_011E5214, s32 *, -8) * 0x38);
        if (D_011E5214 != temp_16) {
            var_16 = temp_16 - 0x38;
            do {
                ___9VITrailFx(var_16, 2);
                var_16 -= 0x38;
            } while (D_011E5214 != var_16);
        }
        __builtin_vec_delete(D_011E5214 - 8);
    }
    if (D_0118E7D8 != -1) {
        ReleaseMaterial__8VIRasteriR12VIDictionary(arg0, D_0118E7D8, arg1);
        D_0118E7D8 = -1;
    }
    return 0;
}
