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

M2C_UNK ClearCameraForces__11VIFlyCamera(void *);   /* extern */
s32 GetTime__7VIScene(s32);                         /* extern */
M2C_UNK HPR__7VIVect3fff(void *, f32, f32, f32);    /* extern */
M2C_UNK MoveCamera__11VIFlyCameraR7VIScene(void *, s32); /* extern */
M2C_UNK Normalize__7VIVect3(void *, f32, f32, f32); /* extern */
M2C_UNK SetCamera__11VIFlyCameraR8VICameraR7VIScene(void *, s32, s32); /* extern */
M2C_UNK UpdateCameraPhysics__11VIFlyCameraf(void *, f32); /* extern */
M2C_UNK Update__14VICameraEffectf(s32, f32);        /* extern */
f32 __floatdisf(s32);                               /* extern */

s32 Process__11VIFlyCameraR8VICameraR7VIScene(void *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s32 sp14;
    void *sp18;
    void *sp1C;
    void *sp20;
    f32 *sp24;
    void *sp28;
    void *sp2C;
    f32 *sp30;
    s64 *sp34;
    s64 *sp38;
    f32 *temp_2;
    s32 temp_2_2;
    s32 temp_4;
    s32 var_16;
    s32 var_18;
    void *temp_19;
    void *temp_20;
    void *temp_21;
    void *temp_22;
    void *temp_23;
    void *temp_2_3;
    void *temp_30;

    sp14 = arg2;
    sp10 = arg1;
    var_18 = GetTime__7VIScene(arg2) - M2C_FIELD(arg0, s64 *, 0x88);
    Update__14VICameraEffectf(arg0 + 0xFC, __floatdisf(var_18) * 0.0009999999f);
    temp_2 = arg0 + 0x3C;
    if (var_18 > 0) {
        sp30 = temp_2;
        sp38 = arg0 + 0x28;
        sp34 = arg0 + 0x88;
        sp1C = arg0 + 0x30;
        temp_30 = arg0 + 0xB4;
        temp_23 = arg0 + 0x54;
        sp18 = arg0 + 0x90;
        sp20 = arg0 + 0x9C;
        sp24 = temp_2;
        sp28 = arg0 + 0xA8;
        temp_22 = arg0 + 0xC0;
        sp2C = arg0 + 0x48;
        temp_21 = arg0 + 0x60;
        temp_20 = arg0 + 0xCC;
        temp_19 = arg0 + 0x6C;
        do {
            temp_2_2 = M2C_FIELD(arg0, s32 *, 0xDC);
            var_16 = var_18 - temp_2_2;
            if (temp_2_2 >= var_18) {
                temp_4 = M2C_FIELD(arg0, s32 *, 0xD8);
                var_16 = (temp_4 >= var_18) ? var_18 : temp_4;
                M2C_FIELD(arg0, s64 *, 0x28) = (s64) (M2C_FIELD(arg0, s64 *, 0x88) + var_16);
                UpdateCameraPhysics__11VIFlyCameraf(arg0, __floatdisf(var_16) * 0.0009999999f);
                MoveCamera__11VIFlyCameraR7VIScene(arg0, sp14);
            } else {
                M2C_FIELD(arg0, s64 *, 0x28) = (s64) (M2C_FIELD(arg0, s64 *, 0x88) + var_16);
            }
            var_18 -= var_16;
            M2C_FIELD(sp18, f32 *, 0) = (f32) M2C_FIELD(sp1C, f32 *, 0);
            *sp34 = *sp38;
            M2C_FIELD(sp18, f32 *, 4) = (f32) M2C_FIELD(sp1C, f32 *, 4);
            M2C_FIELD(sp18, f32 *, 8) = (f32) M2C_FIELD(sp1C, f32 *, 8);
            M2C_FIELD(sp20, f32 *, 0) = (f32) M2C_FIELD(sp24, f32 *, 0);
            M2C_FIELD(sp20, f32 *, 4) = (f32) M2C_FIELD(sp24, f32 *, 4);
            M2C_FIELD(sp20, f32 *, 8) = (f32) M2C_FIELD(sp24, f32 *, 8);
            M2C_FIELD(sp28, f32 *, 0) = (f32) M2C_FIELD(sp2C, f32 *, 0);
            M2C_FIELD(sp28, f32 *, 4) = (f32) M2C_FIELD(sp2C, f32 *, 4);
            M2C_FIELD(sp28, f32 *, 8) = (f32) M2C_FIELD(sp2C, f32 *, 8);
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) M2C_FIELD(arg0, f32 *, 0x54);
            M2C_FIELD(temp_30, f32 *, 4) = (f32) M2C_FIELD(temp_23, f32 *, 4);
            M2C_FIELD(temp_30, f32 *, 8) = (f32) M2C_FIELD(temp_23, f32 *, 8);
            M2C_FIELD(arg0, f32 *, 0xC0) = (f32) M2C_FIELD(arg0, f32 *, 0x60);
            M2C_FIELD(temp_22, f32 *, 4) = (f32) M2C_FIELD(temp_21, f32 *, 4);
            M2C_FIELD(temp_22, f32 *, 8) = (f32) M2C_FIELD(temp_21, f32 *, 8);
            M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
            M2C_FIELD(temp_20, f32 *, 4) = (f32) M2C_FIELD(temp_19, f32 *, 4);
            M2C_FIELD(temp_20, f32 *, 8) = (f32) M2C_FIELD(temp_19, f32 *, 8);
        } while (var_18 > 0);
    } else {
        sp30 = temp_2;
    }
    ClearCameraForces__11VIFlyCamera(arg0);
    HPR__7VIVect3fff(arg0, *sp30, M2C_FIELD(arg0, f32 *, 0x40), M2C_FIELD(arg0, f32 *, 0x44));
    HPR__7VIVect3fff(arg0 + 0xC, *sp30, 0.0f, M2C_FIELD(arg0, f32 *, 0x44));
    temp_2_3 = arg0 + 0x18;
    M2C_FIELD(temp_2_3, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) -M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_2_3, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0);
    Normalize__7VIVect3(temp_2_3, 0.0f, 1.0f, 0.0f);
    SetCamera__11VIFlyCameraR8VICameraR7VIScene(arg0, sp10, sp14);
    return 0;
}
