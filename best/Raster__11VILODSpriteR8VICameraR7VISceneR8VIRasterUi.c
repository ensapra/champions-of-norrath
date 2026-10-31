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

void *GetModelView__C8VIRaster(s32);                /* extern */
M2C_UNK GetNextColorBuffer__7VIScene(s32);          /* extern */
s32 GetSpriteType__7VIScenei(s32, s32);             /* extern */
s32 RasterSprite__7VISceneR8VICameraiUi(s32, s32, s32, s32); /* extern */

s32 Raster__11VILODSpriteR8VICameraR7VISceneR8VIRasterUi(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 *var_17;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f3;
    s32 *var_16;
    s32 var_19;
    s32 var_5;
    void *temp_4;

    sp8 = 0.0f;
    sp0 = 0.0f;
    sp4 = 0.0f;
    temp_4 = GetModelView__C8VIRaster(arg3);
    if (!(M2C_FIELD(arg0, s32 *, 0x40) & 1)) {
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x48);
        sp0 = M2C_FIELD(temp_4, f32 *, 0x30);
        sp4 = M2C_FIELD(temp_4, f32 *, 0x34);
        temp_f0 = M2C_FIELD(temp_4, f32 *, 0x38);
        sp8 = temp_f0;
        temp_f20 = (sp0 * sp0) + (sp4 * sp4) + (temp_f0 * temp_f0);
        var_19 = 0;
        if ((temp_f3 * temp_f3) < temp_f20) {
            var_17 = arg0 + 0x48;
            if (M2C_FIELD(arg0, s32 *, 0x44) > 0) {
                var_16 = arg0 + 0x4C;
                var_5 = M2C_FIELD(arg0, s32 *, 0x4C);
loop_4:
                var_16 += 8;
                if (GetSpriteType__7VIScenei(arg2, var_5) == 1) {
                    GetNextColorBuffer__7VIScene(arg2);
                }
                var_17 += 8;
                temp_f0_2 = *var_17;
                var_19 += 1;
                if ((temp_f0_2 * temp_f0_2) < temp_f20) {
                    if (var_19 < M2C_FIELD(arg0, s32 *, 0x44)) {
                        var_5 = *var_16;
                        goto loop_4;
                    }
                }
            }
        }
        if (var_19 != M2C_FIELD(arg0, s32 *, 0x44)) {
            return RasterSprite__7VISceneR8VICameraiUi(arg2, arg1, M2C_FIELD(((var_19 * 8) + arg0), s32 *, 0x4C), arg4);
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
