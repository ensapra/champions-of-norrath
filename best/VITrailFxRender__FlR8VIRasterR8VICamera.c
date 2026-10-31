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

M2C_UNK AddTail__7VILListP7VILNode(M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK Remove__7VILNode(M2C_UNK *, s32, s32);      /* extern */
M2C_UNK Render__9VITrailFxR8VIRasterR8VICamera(M2C_UNK *, s32, s32); /* extern */
s32 Update__9VITrailFxl(M2C_UNK *, s32);            /* extern */
extern M2C_UNK D_011E51E8;
extern M2C_UNK *D_011E51F8;
extern M2C_UNK *D_011E5208;

void VITrailFxRender__FlR8VIRasterR8VICamera(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_4;
    M2C_UNK *var_16;
    M2C_UNK *var_16_2;
    M2C_UNK *var_17;
    M2C_UNK *var_4;

    var_16 = D_011E51F8;
    if (*var_16 != NULL) {
        var_4 = var_16;
        do {
            if (Update__9VITrailFxl(var_4, arg0) > 0) {
                Render__9VITrailFxR8VIRasterR8VICamera(var_16, arg1, arg2);
            }
            var_16 = *var_16;
            var_4 = var_16;
        } while (*var_16 != NULL);
    }
    var_16_2 = D_011E5208;
    var_17 = *var_16_2;
    if (var_17 != NULL) {
        do {
            temp_4 = var_16_2;
            if (Update__9VITrailFxl(var_16_2, arg0) <= 0) {
                Remove__7VILNode(temp_4, arg1, arg2);
                AddTail__7VILListP7VILNode(&D_011E51E8, var_16_2);
                var_16_2 = var_17;
            } else {
                var_16_2 = var_17;
                Render__9VITrailFxR8VIRasterR8VICamera(temp_4, arg1, arg2);
            }
            temp_2 = *var_16_2;
            var_17 = temp_2;
        } while (temp_2 != NULL);
    }
}
