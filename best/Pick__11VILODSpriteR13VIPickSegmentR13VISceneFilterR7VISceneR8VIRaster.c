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
void *Sprite__7VIScenei(s32, s32);                  /* extern */

s32 Pick__11VILODSpriteR13VIPickSegmentR13VISceneFilterR7VISceneR8VIRaster(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 *var_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_4;
    s32 var_5;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;

    sp8 = 0.0f;
    sp0 = 0.0f;
    sp4 = 0.0f;
    temp_2_2 = GetModelView__C8VIRaster(arg4);
    var_5 = 0;
    sp0 = M2C_FIELD(temp_2_2, f32 *, 0x30);
    sp4 = M2C_FIELD(temp_2_2, f32 *, 0x34);
    temp_f2 = sp0 - M2C_FIELD(arg1, f32 *, 0);
    temp_f1 = sp4 - M2C_FIELD(arg1, f32 *, 4);
    temp_f0 = M2C_FIELD(temp_2_2, f32 *, 0x38);
    sp8 = temp_f0;
    temp_f0_2 = temp_f0 - M2C_FIELD(arg1, f32 *, 8);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x48);
    sp0 = temp_f2;
    sp4 = temp_f1;
    temp_f3 = (temp_f2 * temp_f2) + (temp_f1 * temp_f1) + (temp_f0_2 * temp_f0_2);
    sp8 = temp_f0_2;
    if ((temp_f4 * temp_f4) < temp_f3) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0x44);
        if (temp_4 > 0) {
            var_3 = arg0 + 0x48;
loop_3:
            var_3 += 8;
            var_5 += 1;
            temp_f0_3 = *var_3;
            if ((temp_f0_3 * temp_f0_3) < temp_f3) {
                if (var_5 >= temp_4) {

                } else {
                    goto loop_3;
                }
            }
        }
    }
    if (var_5 != M2C_FIELD(arg0, s32 *, 0x44)) {
        temp_2 = Sprite__7VIScenei(arg3, M2C_FIELD(((var_5 * 8) + arg0), s32 *, 0x4C));
        temp_3 = M2C_FIELD(temp_2, void **, 0x3C);
        return M2C_FIELD((temp_3 + 0x30), s32 (**)(void *, void *, s32, s32, s32, void *), 4)(temp_2 + M2C_FIELD(temp_3, s16 *, 0x30), arg1, arg2, arg3, arg4, temp_2);
    }
    return 0;
}
