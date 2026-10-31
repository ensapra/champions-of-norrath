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

s32 GetTime__7VIScene(s32);                         /* extern */
M2C_UNK Slerp__6VIQuatRC6VIQuatT1f(void *, void *, void *, f32); /* extern */

s32 InterpTransAboutCenter__9VIHSpriteR7VISceneR7VIVect3R14VIHSpriteFrame(void *arg0, s32 arg1, void *arg2, void *arg3) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 var_f20;
    s32 temp_4;
    s32 var_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_5;

    if ((M2C_FIELD(arg0, s32 *, 0x12C) == 0) || (temp_4 = M2C_FIELD(arg0, s32 *, 0x12C), ((temp_4 < (GetTime__7VIScene(arg1) - M2C_FIELD(arg0, s64 *, 0x130))) != 0))) {
        temp_3 = arg0 + 0xE0;
        temp_4_2 = arg0 + 0x120;
        temp_5 = arg3 + 0x14;
        M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xE0);
        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a2) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, ($a2) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($a2) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, ($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($s2) */);
        M2C_FIELD(arg0, s32 *, 0x12C) = 0;
        M2C_FIELD(arg3, f32 *, 0x10) = (f32) M2C_FIELD((arg0 + 0x10C), f32 *, 0x10);
        M2C_FIELD(arg3, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x120);
        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_4_2, f32 *, 4);
        M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_4_2, f32 *, 8);
        return 0;
    }
    if (temp_4 == 0) {
        var_f20 = 1.0f;
        var_4 = 0;
    } else {
        GetTime__7VIScene(arg1);
        var_4 = M2C_FIELD(arg0, s32 *, 0x12C);
        M2C_ERROR(/* unknown instruction: max.s $f20, $f20, $f3 */);
        var_f20 = M2C_ERROR(/* unknown instruction: min.s $f20, $f20, $f1 */);
    }
    temp_2 = arg0 + 0xE0;
    if (var_4 == 0) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xE0);
        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
    } else {
        temp_3_2 = arg0 + 0xD4;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xE0);
        M2C_FIELD(arg2, f32 *, 0) = temp_f1;
        temp_f2 = M2C_FIELD(temp_2, f32 *, 4);
        M2C_FIELD(arg2, f32 *, 4) = temp_f2;
        temp_f3 = M2C_FIELD(temp_2, f32 *, 8);
        M2C_FIELD(arg2, f32 *, 8) = temp_f3;
        temp_f1_2 = temp_f1 - M2C_FIELD(arg0, f32 *, 0xD4);
        M2C_FIELD(arg2, f32 *, 0) = temp_f1_2;
        temp_f1_3 = temp_f1_2 * var_f20;
        temp_f2_2 = temp_f2 - M2C_FIELD(temp_3_2, f32 *, 4);
        M2C_FIELD(arg2, f32 *, 4) = temp_f2_2;
        temp_f2_3 = temp_f2_2 * var_f20;
        M2C_FIELD(arg2, f32 *, 0) = temp_f1_3;
        M2C_FIELD(arg2, f32 *, 4) = temp_f2_3;
        temp_f3_2 = (temp_f3 - M2C_FIELD(temp_3_2, f32 *, 8)) * var_f20;
        M2C_FIELD(arg2, f32 *, 8) = temp_f3_2;
        M2C_FIELD(arg2, f32 *, 0) = (f32) (temp_f1_3 + M2C_FIELD(arg0, f32 *, 0xD4));
        M2C_FIELD(arg2, f32 *, 4) = (f32) (temp_f2_3 + M2C_FIELD(temp_3_2, f32 *, 4));
        M2C_FIELD(arg2, f32 *, 8) = (f32) (temp_f3_2 + M2C_FIELD(temp_3_2, f32 *, 8));
    }
    if (var_4 == 0) {
        temp_3_3 = arg0 + 0x120;
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a0) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($a0) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($a0) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($a0) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($s2) */);
        temp_2_2 = arg3 + 0x14;
        M2C_FIELD(arg3, f32 *, 0x10) = (f32) M2C_FIELD((arg0 + 0x10C), f32 *, 0x10);
        M2C_FIELD(arg3, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x120);
        M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(temp_3_3, f32 *, 4);
        M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(temp_3_3, f32 *, 8);
    } else {
        Slerp__6VIQuatRC6VIQuatT1f(arg3, arg0 + 0xEC, arg0 + 0x10C, var_f20);
        temp_f2_4 = M2C_FIELD(arg0, f32 *, 0xFC);
        temp_3_4 = arg0 + 0x120;
        temp_2_3 = arg3 + 0x14;
        temp_4_3 = arg0 + 0x100;
        M2C_FIELD(arg3, f32 *, 0x10) = (f32) (temp_f2_4 + ((M2C_FIELD(arg0, f32 *, 0x11C) - temp_f2_4) * var_f20));
        temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x120);
        M2C_FIELD(arg3, f32 *, 0x14) = temp_f1_4;
        temp_f2_5 = M2C_FIELD(temp_3_4, f32 *, 4);
        M2C_FIELD(temp_2_3, f32 *, 4) = temp_f2_5;
        temp_f3_3 = M2C_FIELD(temp_3_4, f32 *, 8);
        M2C_FIELD(temp_2_3, f32 *, 8) = temp_f3_3;
        temp_f1_5 = temp_f1_4 - M2C_FIELD(arg0, f32 *, 0x100);
        M2C_FIELD(arg3, f32 *, 0x14) = temp_f1_5;
        temp_f1_6 = temp_f1_5 * var_f20;
        temp_f2_6 = temp_f2_5 - M2C_FIELD(temp_4_3, f32 *, 4);
        M2C_FIELD(temp_2_3, f32 *, 4) = temp_f2_6;
        temp_f2_7 = temp_f2_6 * var_f20;
        M2C_FIELD(arg3, f32 *, 0x14) = temp_f1_6;
        M2C_FIELD(temp_2_3, f32 *, 4) = temp_f2_7;
        temp_f3_4 = (temp_f3_3 - M2C_FIELD(temp_4_3, f32 *, 8)) * var_f20;
        M2C_FIELD(temp_2_3, f32 *, 8) = temp_f3_4;
        M2C_FIELD(arg3, f32 *, 0x14) = (f32) (temp_f1_6 + M2C_FIELD(arg0, f32 *, 0x100));
        M2C_FIELD(temp_2_3, f32 *, 4) = (f32) (temp_f2_7 + M2C_FIELD(temp_4_3, f32 *, 4));
        M2C_FIELD(temp_2_3, f32 *, 8) = (f32) (temp_f3_4 + M2C_FIELD(temp_4_3, f32 *, 8));
    }
    return 0;
}
