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

M2C_UNK AutoPitch__13VIWalkControlf(void *, f32);   /* extern */
M2C_UNK ClearForces__13VIWalkControl(void *);       /* extern */
s32 GetTime__7VIScene(s32);                         /* extern */
M2C_UNK Move__13VIWalkControliR7VIScene(void *, s32, s32); /* extern */
M2C_UNK UpdateDirections__13VIWalkControl(void *);  /* extern */
M2C_UNK UpdateLocomotion__13VIWalkControlf(void *, f32); /* extern */
M2C_UNK UpdatePhysics__13VIWalkControlf(void *, s32, s64, f32); /* extern */

s32 Process__13VIWalkControliR7VIScene(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    void *sp10;
    void *sp14;
    void *sp18;
    void *sp1C;
    void *sp20;
    void *sp24;
    void *sp28;
    void *sp2C;
    void *sp30;
    void *sp34;
    f32 temp_f20;
    s32 temp_2;
    s32 temp_3;
    s32 var_17;
    s32 var_18;
    void *temp_19;
    void *temp_20;
    void *temp_21;
    void *temp_22;
    void *temp_23;
    void *temp_30;

    sp4 = arg2;
    sp0 = arg1;
    sp8 = M2C_FIELD(arg0, s32 *, 0xF8);
    var_18 = GetTime__7VIScene(arg2) - M2C_FIELD(arg0, s64 *, 0x130);
    if (sp0 != 0) {
        spC = M2C_FIELD(arg0, s32 *, 4);
    } else {
        spC = M2C_FIELD(arg0, s32 *, 0);
    }
    if (var_18 > 0) {
        sp2C = arg0 + 0x138;
        sp30 = arg0 + 0xB0;
        sp34 = arg0 + 0x144;
        sp10 = arg0 + 0xBC;
        sp14 = arg0 + 0x150;
        sp18 = arg0 + 0xC8;
        sp1C = arg0 + 0x15C;
        sp20 = arg0 + 0xD4;
        temp_20 = arg0 + 0x130;
        temp_19 = arg0 + 0xA8;
        sp24 = arg0 + 0x168;
        temp_30 = arg0 + 0x174;
        sp28 = arg0 + 0xE0;
        temp_23 = arg0 + 0xEC;
        temp_22 = arg0 + 0x194;
        temp_21 = arg0 + 0x10C;
loop_7:
        temp_2 = M2C_FIELD(arg0, s32 *, 4);
        var_17 = var_18 - temp_2;
        if (temp_2 < var_18) {
            M2C_FIELD(arg0, s64 *, 0xA8) = (s64) (M2C_FIELD(arg0, s64 *, 0x130) + var_17);
        } else {
            var_17 = (spC >= var_18) ? var_18 : spC;
            M2C_FIELD(arg0, s64 *, 0xA8) = (s64) (M2C_FIELD(arg0, s64 *, 0x130) + var_17);
            temp_f20 = (f32) ((s64) ((s64) var_17 << 0x20) >> 0x20) * 0.0009999999f;
            UpdatePhysics__13VIWalkControlf(arg0, spC, M2C_FIELD(arg0, s64 *, 0x130), temp_f20);
            AutoPitch__13VIWalkControlf(arg0, temp_f20);
            Move__13VIWalkControliR7VIScene(arg0, sp0, sp4);
            UpdateDirections__13VIWalkControl(arg0);
            UpdateLocomotion__13VIWalkControlf(arg0, temp_f20);
        }
        var_18 -= var_17;
        M2C_FIELD(sp2C, f32 *, 0) = (f32) M2C_FIELD(sp30, f32 *, 0);
        M2C_FIELD(arg0, s64 *, 0x130) = (s64) M2C_FIELD(arg0, s64 *, 0xA8);
        M2C_FIELD(sp2C, f32 *, 4) = (f32) M2C_FIELD(sp30, f32 *, 4);
        M2C_FIELD(sp2C, f32 *, 8) = (f32) M2C_FIELD(sp30, f32 *, 8);
        M2C_FIELD(sp34, f32 *, 0) = (f32) M2C_FIELD(sp10, f32 *, 0);
        M2C_FIELD(sp34, f32 *, 4) = (f32) M2C_FIELD(sp10, f32 *, 4);
        M2C_FIELD(sp34, f32 *, 8) = (f32) M2C_FIELD(sp10, f32 *, 8);
        M2C_FIELD(sp14, f32 *, 0) = (f32) M2C_FIELD(sp18, f32 *, 0);
        M2C_FIELD(sp14, f32 *, 4) = (f32) M2C_FIELD(sp18, f32 *, 4);
        M2C_FIELD(sp14, f32 *, 8) = (f32) M2C_FIELD(sp18, f32 *, 8);
        M2C_FIELD(sp1C, f32 *, 0) = (f32) M2C_FIELD(sp20, f32 *, 0);
        M2C_FIELD(sp1C, f32 *, 4) = (f32) M2C_FIELD(sp20, f32 *, 4);
        M2C_FIELD(sp1C, f32 *, 8) = (f32) M2C_FIELD(sp20, f32 *, 8);
        M2C_FIELD(sp24, f32 *, 0) = (f32) M2C_FIELD(sp28, f32 *, 0);
        M2C_FIELD(sp24, f32 *, 4) = (f32) M2C_FIELD(sp28, f32 *, 4);
        M2C_FIELD(sp24, f32 *, 8) = (f32) M2C_FIELD(sp28, f32 *, 8);
        M2C_FIELD(temp_20, s32 *, 0x50) = (s32) M2C_FIELD(temp_19, s32 *, 0x50);
        M2C_FIELD(arg0, f32 *, 0x174) = (f32) M2C_FIELD(arg0, f32 *, 0xEC);
        M2C_FIELD(temp_20, s32 *, 0x58) = (s32) M2C_FIELD(temp_19, s32 *, 0x58);
        M2C_FIELD(temp_30, f32 *, 4) = (f32) M2C_FIELD(temp_23, f32 *, 4);
        M2C_FIELD(temp_30, f32 *, 8) = (f32) M2C_FIELD(temp_23, f32 *, 8);
        M2C_FIELD(temp_20, f32 *, 0x54) = (f32) M2C_FIELD(temp_19, f32 *, 0x54);
        M2C_FIELD(temp_20, f32 *, 0x5C) = (f32) M2C_FIELD(temp_19, f32 *, 0x5C);
        M2C_FIELD(temp_20, f32 *, 0x60) = (f32) M2C_FIELD(temp_19, f32 *, 0x60);
        M2C_FIELD(arg0, f32 *, 0x194) = (f32) M2C_FIELD(arg0, f32 *, 0x10C);
        M2C_FIELD(temp_22, f32 *, 4) = (f32) M2C_FIELD(temp_21, f32 *, 4);
        M2C_FIELD(temp_22, f32 *, 8) = (f32) M2C_FIELD(temp_21, f32 *, 8);
        if (var_18 > 0) {
            goto loop_7;
        }
    }
    if (sp0 == 0) {
        ClearForces__13VIWalkControl(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    if ((sp8 ^ 1) & 1) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0xF8);
        if ((temp_3 & 1) && !(temp_3 & 0x854) && !(sp8 & 0x854)) {
            M2C_FIELD(arg0, s32 *, 0x118) = 0x10;
        }
    }
    return 0;
}
