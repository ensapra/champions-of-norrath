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

M2C_UNK BeginTriStrip__8VIRaster(s32);              /* extern */
M2C_UNK Color__8VIRasterRC10VIColor32F(s32, void *); /* extern */
M2C_UNK EndTriStrip__8VIRaster(s32);                /* extern */
s32 Length__C7VILList(s32);                         /* extern */
M2C_UNK SetMaterial__8VIRasteri(s32, s32);          /* extern */
M2C_UNK SetModelView__8VIRasterRC10VIMatrix44(s32, s32); /* extern */
M2C_UNK Vertex__8VIRasterRC7VIVect3(s32, void *);   /* extern */
extern s32 D_0118E7D8;

s32 Render__9VITrailFxR8VIRasterR8VICamera(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_16;
    M2C_UNK *var_16_2;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 var_18;
    s32 var_18_2;
    void *temp_19;
    void *temp_19_2;
    void *temp_20;
    void *temp_20_2;
    void *temp_21;
    void *temp_21_2;
    void *temp_22;
    void *temp_22_2;

    if (Length__C7VILList(arg0 + 0x1C) >= 2) {
        SetModelView__8VIRasterRC10VIMatrix44(arg1, arg2 + 0x30);
        var_18 = 0;
        SetMaterial__8VIRasteri(arg1, D_0118E7D8);
        BeginTriStrip__8VIRaster(arg1);
        var_16 = M2C_FIELD(arg0, s32 **, 0x1C);
        if (*var_16 != 0) {
loop_3:
            temp_19 = var_16 + 0x28;
            temp_21 = var_16 + 0x10;
            temp_20 = var_16 + 0x38;
            temp_22 = var_16 + 0x1C;
            var_18 += 2;
            M2C_ERROR(/* unknown instruction: max.s $f0, $f0, $f21 */);
            temp_f0 = M2C_ERROR(/* unknown instruction: min.s $f0, $f0, $f20 */);
            M2C_FIELD(var_16, f32 *, 0x44) = temp_f0;
            M2C_FIELD(var_16, f32 *, 0x34) = temp_f0;
            Color__8VIRasterRC10VIColor32F(arg1, temp_19);
            Vertex__8VIRasterRC7VIVect3(arg1, temp_21);
            Color__8VIRasterRC10VIColor32F(arg1, temp_20);
            Vertex__8VIRasterRC7VIVect3(arg1, temp_22);
            if (var_18 == 0x18) {
                var_18 = 0;
                EndTriStrip__8VIRaster(arg1);
                if (*M2C_FIELD(var_16, M2C_UNK **, 0) != NULL) {
                    var_18 = 2;
                    BeginTriStrip__8VIRaster(arg1);
                    Color__8VIRasterRC10VIColor32F(arg1, temp_19);
                    Vertex__8VIRasterRC7VIVect3(arg1, temp_21);
                    Color__8VIRasterRC10VIColor32F(arg1, temp_20);
                    Vertex__8VIRasterRC7VIVect3(arg1, temp_22);
                }
            }
            var_16 = M2C_FIELD(var_16, M2C_UNK **, 0);
            if (*var_16 != NULL) {
                goto loop_3;
            }
        }
        if (var_18 != 0) {
            EndTriStrip__8VIRaster(arg1);
        }
        var_18_2 = 0;
        BeginTriStrip__8VIRaster(arg1);
        var_16_2 = M2C_FIELD(arg0, M2C_UNK **, 0x1C);
        if (*var_16_2 != NULL) {
loop_14:
            temp_19_2 = var_16_2 + 0x38;
            temp_21_2 = var_16_2 + 0x1C;
            temp_20_2 = var_16_2 + 0x28;
            temp_22_2 = var_16_2 + 0x10;
            var_18_2 += 2;
            M2C_ERROR(/* unknown instruction: max.s $f0, $f0, $f21 */);
            temp_f0_2 = M2C_ERROR(/* unknown instruction: min.s $f0, $f0, $f20 */);
            M2C_FIELD(var_16_2, f32 *, 0x44) = temp_f0_2;
            M2C_FIELD(var_16_2, f32 *, 0x34) = temp_f0_2;
            Color__8VIRasterRC10VIColor32F(arg1, temp_19_2);
            Vertex__8VIRasterRC7VIVect3(arg1, temp_21_2);
            Color__8VIRasterRC10VIColor32F(arg1, temp_20_2);
            Vertex__8VIRasterRC7VIVect3(arg1, temp_22_2);
            if (var_18_2 == 0x18) {
                var_18_2 = 0;
                EndTriStrip__8VIRaster(arg1);
                if (*M2C_FIELD(var_16_2, M2C_UNK **, 0) != NULL) {
                    var_18_2 = 2;
                    BeginTriStrip__8VIRaster(arg1);
                    Color__8VIRasterRC10VIColor32F(arg1, temp_19_2);
                    Vertex__8VIRasterRC7VIVect3(arg1, temp_21_2);
                    Color__8VIRasterRC10VIColor32F(arg1, temp_20_2);
                    Vertex__8VIRasterRC7VIVect3(arg1, temp_22_2);
                }
            }
            var_16_2 = M2C_FIELD(var_16_2, M2C_UNK **, 0);
            if (*var_16_2 != NULL) {
                goto loop_14;
            }
        }
        if (var_18_2 != 0) {
            EndTriStrip__8VIRaster(arg1);
        }
    }
    return 0;
}
