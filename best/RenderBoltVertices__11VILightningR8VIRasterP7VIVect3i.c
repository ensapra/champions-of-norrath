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
M2C_UNK Color__8VIRasterRC10VIColor32F(s32, f32 *); /* extern */
M2C_UNK EndTriStrip__8VIRaster(s32);                /* extern */
M2C_UNK Mul__C10VIMatrix44RC7VIVect3R7VIVect3(void *, f32 *, f32 *); /* extern */
M2C_UNK UV__8VIRasterRC7VIVect2(s32, f32 *);        /* extern */
M2C_UNK Vertex__8VIRasterRC7VIVect3(s32, f32 *);    /* extern */

void RenderBoltVertices__11VILightningR8VIRasterP7VIVect3i(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp50;
    f32 sp54;
    f32 sp60;
    f32 sp64;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp80;
    s32 sp84;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 spA0;
    f32 spA4;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spC0;
    f32 spC4;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spE0;
    f32 spE4;
    f32 spF0;
    s32 spF4;
    f32 sp100;
    f32 sp104;
    f32 sp110;
    f32 sp114;
    f32 sp118;
    f32 sp120;
    s32 sp124;
    f32 sp130;
    f32 sp134;
    f32 sp138;
    void *sp140;
    void *sp144;
    s32 sp148;
    void *sp14C;
    f32 *var_16_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 var_f2;
    s32 var_30;
    s32 var_30_2;
    void *var_16;

    temp_f3 = (f32) arg3 * 0.3333333f;
    sp140 = arg0;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x18C4);
    sp144 = arg2;
    sp148 = 0;
    sp14C = arg2 + 0x60;
    sp10 = M2C_FIELD(arg0, f32 *, 0x18B0) * temp_f3 * temp_f2;
    sp1C = 1.0f;
    sp18 = M2C_FIELD(arg0, f32 *, 0x18B8) * temp_f3 * temp_f2;
    sp14 = M2C_FIELD(arg0, f32 *, 0x18B4) * temp_f3 * temp_f2;
    Color__8VIRasterRC10VIColor32F(arg1, &sp10);
    sp20 = 0.0f;
    sp24 = 0.0f;
    sp28 = 0.0f;
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp38 = 0.0f;
    do {
        switch (sp148) {                            /* irregular */
        case 0:
            sp30 = 0.0f;
            sp34 = 0.04f;
            sp38 = 0.0f;
            break;
        case 1:
            sp30 = 0.0f;
            sp34 = -0.04f;
            sp38 = 0.0f;
            break;
        case 2:
            sp20 = 0.04f;
            sp24 = 0.0f;
            sp28 = 0.0f;
            Mul__C10VIMatrix44RC7VIVect3R7VIVect3(sp140 + 0x20, &sp20, &sp30);
            break;
        case 3:
            sp30 = -sp30;
            sp34 = -sp34;
            sp38 = -sp38;
            break;
        }
        BeginTriStrip__8VIRaster(arg1);
        var_30 = 1;
        sp24 = M2C_FIELD(sp144, f32 *, 4);
        sp28 = M2C_FIELD(sp144, f32 *, 8);
        sp20 = M2C_FIELD(sp144, f32 *, 0);
        sp40 = 0.0f;
        sp44 = 1.0f;
        UV__8VIRasterRC7VIVect2(arg1, &sp40);
        Vertex__8VIRasterRC7VIVect3(arg1, &sp20);
        sp50 = 0.0f;
        sp54 = 0.0f;
        UV__8VIRasterRC7VIVect2(arg1, &sp50);
        Vertex__8VIRasterRC7VIVect3(arg1, &sp20);
        var_16 = sp144 + 0xC;
loop_20:
        temp_f20 = (f32) var_30;
        var_30 += 1;
        temp_f2_2 = M2C_FIELD(var_16, f32 *, 0);
        temp_f1 = M2C_FIELD(var_16, f32 *, 4);
        temp_f0 = M2C_FIELD(var_16, f32 *, 8);
        var_16 += 0xC;
        sp20 = temp_f2_2;
        sp24 = temp_f1;
        sp28 = temp_f0;
        sp60 = temp_f20;
        sp64 = 1.0f;
        UV__8VIRasterRC7VIVect2(arg1, &sp60);
        sp70 = sp20 - sp30;
        sp74 = sp24 - sp34;
        sp78 = sp28 - sp38;
        Vertex__8VIRasterRC7VIVect3(arg1, &sp70);
        sp80 = temp_f20;
        sp84 = 0;
        UV__8VIRasterRC7VIVect2(arg1, &sp80);
        sp90 = sp20 + sp30;
        sp94 = sp24 + sp34;
        sp98 = sp28 + sp38;
        Vertex__8VIRasterRC7VIVect3(arg1, &sp90);
        if (var_30 < 9) {
            goto loop_20;
        }
        EndTriStrip__8VIRaster(arg1);
        BeginTriStrip__8VIRaster(arg1);
        var_30_2 = 8;
        var_16_2 = sp144 + 0x60;
        sp24 = M2C_FIELD(sp14C, f32 *, 4);
        sp28 = M2C_FIELD(sp14C, f32 *, 8);
        sp20 = M2C_FIELD(sp14C, f32 *, 0);
        spA0 = 0.0f;
        spA4 = 1.0f;
        UV__8VIRasterRC7VIVect2(arg1, &spA0);
        spB4 = sp24 - sp34;
        spB8 = sp28 - sp38;
        spB0 = sp20 - sp30;
        Vertex__8VIRasterRC7VIVect3(arg1, &spB0);
        spC0 = 0.0f;
        spC4 = 0.0f;
        UV__8VIRasterRC7VIVect2(arg1, &spC0);
        spD0 = sp20 + sp30;
        spD4 = sp24 + sp34;
        spD8 = sp28 + sp38;
        Vertex__8VIRasterRC7VIVect3(arg1, &spD0);
        var_f2 = M2C_FIELD(sp144, f32 *, 0x60);
loop_22:
        temp_f0_2 = M2C_FIELD(var_16_2, f32 *, 4);
        temp_f1_2 = M2C_FIELD(var_16_2, f32 *, 8);
        var_16_2 += 0xC;
        sp20 = var_f2;
        sp24 = temp_f0_2;
        sp28 = temp_f1_2;
        if (var_30_2 == 0x10) {
            spE0 = 8.0f;
            spE4 = 1.0f;
            UV__8VIRasterRC7VIVect2(arg1, &spE0);
            Vertex__8VIRasterRC7VIVect3(arg1, &sp20);
            spF0 = 8.0f;
            spF4 = 0;
            UV__8VIRasterRC7VIVect2(arg1, &spF0);
            Vertex__8VIRasterRC7VIVect3(arg1, &sp20);
        } else {
            temp_f20_2 = (f32) (var_30_2 - 8);
            sp100 = temp_f20_2;
            sp104 = 1.0f;
            UV__8VIRasterRC7VIVect2(arg1, &sp100);
            sp110 = sp20 - sp30;
            sp114 = sp24 - sp34;
            sp118 = sp28 - sp38;
            Vertex__8VIRasterRC7VIVect3(arg1, &sp110);
            sp120 = temp_f20_2;
            sp124 = 0;
            UV__8VIRasterRC7VIVect2(arg1, &sp120);
            sp130 = sp20 + sp30;
            sp134 = sp24 + sp34;
            sp138 = sp28 + sp38;
            Vertex__8VIRasterRC7VIVect3(arg1, &sp130);
        }
        var_30_2 += 1;
        if (var_30_2 < 0x11) {
            var_f2 = *var_16_2;
            goto loop_22;
        }
        sp148 += 1;
        EndTriStrip__8VIRaster(arg1);
    } while (sp148 < 4);
}
