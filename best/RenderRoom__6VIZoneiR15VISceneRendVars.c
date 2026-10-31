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

s32 Add__t8VIVector1Z18VISceneDisplayElemRC18VISceneDisplayElem(void *, s32 *); /* extern */
s32 CullByTop__11VIClipStackRC6VIBBox(s32, s32);    /* extern */
f32 DistanceSquared__C6VIBBoxRC7VIVect3(s32, s32);  /* extern */
s32 RasterActor__7VISceneR8VICameraiR11VIClipStack(void *, s32, s32, s32); /* extern */
s32 RasterSprite__7VISceneR8VICameraiUi(void *, s32, s32, M2C_UNK); /* extern */
s32 RenderThroughPortals__6VIZoneiR15VISceneRendVars(void *, s32, void *); /* extern */
M2C_UNK SetModelView__8VIRasterRC10VIMatrix44(s32, void *); /* extern */
M2C_UNK SetStaticLighting__8VIRasterRC10VIColor32F(s32, f32 *); /* extern */
M2C_UNK sceVu0CopyMatrix(void *, s32);              /* extern */

s32 RenderRoom__6VIZoneiR15VISceneRendVars(void *arg0, s32 arg1, void *arg2) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    f32 temp_f1;
    s32 temp_16;
    s32 temp_16_3;
    s32 temp_19;
    s32 temp_3;
    s32 var_2;
    s32 var_2_2;
    void *temp_16_2;
    void *temp_21;
    void *temp_4;
    void *var_16;

    temp_21 = arg0 + 0x5C;
    temp_16 = arg1 * 0x78;
    if (CullByTop__11VIClipStackRC6VIBBox(M2C_FIELD(arg2, s32 *, 0x14), M2C_FIELD(temp_21, s32 *, 4) + temp_16 + 4) == 0) {
        var_2 = -1;
        if (RenderThroughPortals__6VIZoneiR15VISceneRendVars(arg0, arg1, arg2) >= 0) {
            temp_4 = M2C_FIELD(temp_21, s32 *, 4) + temp_16;
            temp_3 = M2C_FIELD(M2C_FIELD(arg2, void **, 4), s32 *, 0x544);
            var_2_2 = arg1 * 0xF;
            if (M2C_FIELD(temp_4, s32 *, 0x24) != temp_3) {
                if (!(M2C_FIELD(temp_4, s32 *, 0) & 2)) {
                    temp_19 = M2C_FIELD(temp_4, s32 *, 0x1C);
                    M2C_FIELD(temp_4, s32 *, 0x24) = temp_3;
                    if (temp_19 != -1) {
                        temp_16_2 = arg0 + 0x90;
                        sceVu0CopyMatrix(temp_16_2, M2C_FIELD(arg2, s32 *, 0xC) + 0x30);
                        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
                        M2C_FIELD(arg0, f32 *, 0xCC) = 1.0f;
                        M2C_FIELD(arg0, s32 *, 0xC4) = 0;
                        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
                        SetModelView__8VIRasterRC10VIMatrix44(M2C_FIELD(arg2, s32 *, 0x10), temp_16_2);
                        sp10 = 0.0f;
                        sp18 = 0.0f;
                        sp1C = 1.0f;
                        sp14 = 0.0f;
                        SetStaticLighting__8VIRasterRC10VIColor32F(M2C_FIELD(arg2, s32 *, 0x10), &sp10);
                        var_2_2 = arg1 * 0xF;
                        if (RasterSprite__7VISceneR8VICameraiUi(M2C_FIELD(arg2, void **, 4), M2C_FIELD(arg2, s32 *, 0xC), temp_19, 1) != 0) {
                            sp24 = -1;
                            sp20 = M2C_FIELD(arg2, s32 *, 0x30);
                            sp28 = temp_19;
                            if (Add__t8VIVector1Z18VISceneDisplayElemRC18VISceneDisplayElem(M2C_FIELD(arg2, void **, 4) + 0x458, &sp20) < 0) {
                                return -1;
                            }
                            goto block_8;
                        }
                        goto block_9;
                    }
                }
block_8:
                var_2_2 = arg1 * 0xF;
                goto block_9;
            }
block_9:
            temp_16_3 = var_2_2 * 8;
            temp_f1 = M2C_FIELD(arg2, f32 *, 0x34);
            var_2 = 0;
            if (DistanceSquared__C6VIBBoxRC7VIVect3(M2C_FIELD(temp_21, s32 *, 4) + temp_16_3 + 4, M2C_FIELD(arg2, s32 *, 0xC) + 0x1C) < (temp_f1 * temp_f1)) {
                var_16 = M2C_FIELD((M2C_FIELD(temp_21, s32 *, 4) + temp_16_3), void **, 0x68);
                if (var_16 != (void *)-1) {
loop_11:
                    var_2 = -1;
                    if (RasterActor__7VISceneR8VICameraiR11VIClipStack(M2C_FIELD(arg2, void **, 4), M2C_FIELD(arg2, s32 *, 0xC), M2C_FIELD(var_16, s32 *, 4), M2C_FIELD(arg2, s32 *, 0x14)) >= 0) {
                        var_16 = M2C_FIELD(var_16, void **, 0x10);
                        if (var_16 == (void *)-1) {
                            goto block_13;
                        }
                        goto loop_11;
                    }
                } else {
                    goto block_13;
                }
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return var_2;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return var_2;
    }
block_13:
    var_2 = 0;
    return var_2;
}
