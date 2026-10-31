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

M2C_UNK __9VIHSprite();                             /* extern */
M2C_UNK __t7VIArray1Z20VICSpritePartEmitter(void *, void *, void *, void *); /* extern */
extern M2C_UNK D_01208198;

void __9VICSprite(void *arg0) {
    s32 *temp_2_2;
    s32 *temp_3;
    s32 *temp_4;
    s32 *var_2_3;
    s32 *var_2_4;
    s32 var_4;
    s32 var_4_2;
    s32 var_5;
    s32 var_5_2;
    s32 var_5_3;
    s32 var_6;
    void *temp_17;
    void *temp_2;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *var_2;
    void *var_2_2;

    __9VIHSprite();
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &D_01208198;
    var_2 = arg0 + 0x1A8;
    var_4 = 0x41;
    do {
        var_4 -= 1;
        M2C_FIELD(var_2, s32 *, 4) = -1;
        M2C_FIELD(var_2, s32 *, 0) = -1;
        M2C_FIELD(var_2, f32 *, 8) = 1.0f;
        M2C_FIELD(var_2, s32 *, 0xC) = 0;
        M2C_FIELD(var_2, s32 *, 0x14) = 0;
        M2C_FIELD(var_2, s32 *, 0x10) = 0;
        M2C_FIELD(var_2, s32 *, 0x1C) = -1;
        M2C_FIELD(var_2, s32 *, 0x18) = -1;
        M2C_FIELD(var_2, s32 *, 0x30) = 0;
        M2C_FIELD(var_2, f32 *, 0x24) = 1.0f;
        M2C_FIELD(var_2, f32 *, 0x20) = 1.0f;
        M2C_FIELD(var_2, f32 *, 0x2C) = 0.0f;
        M2C_FIELD(var_2, f32 *, 0x28) = 0.0f;
        var_2 += 0x34;
    } while (var_4 != -1);
    var_2_2 = arg0 + 0xF38;
    var_4_2 = 0x12;
    do {
        var_4_2 -= 1;
        M2C_FIELD(var_2_2, s32 *, 0xC) = -1;
        M2C_FIELD(var_2_2, s32 *, 0) = 0;
        M2C_FIELD(var_2_2, s32 *, 4) = -1;
        M2C_FIELD(var_2_2, s32 *, 8) = -1;
        M2C_FIELD(var_2_2, s32 *, 0x10) = 0;
        M2C_FIELD(var_2_2, s32 *, 0x14) = 0;
        var_2_2 += 0x18;
    } while (var_4_2 != -1);
    temp_2 = arg0 + 0x1148;
    temp_6 = arg0 + 0x1154;
    temp_17 = arg0 + 0x11C4;
    temp_5 = arg0 + 0x1100;
    temp_7 = arg0 + 0x11F0;
    M2C_FIELD(arg0, f32 *, 0x1148) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1154) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_5, s32 *, 4) = 2;
    M2C_FIELD(arg0, f32 *, 0x1148) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_5, s32 *, 8) = 1;
    M2C_FIELD(temp_6, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1154) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x1100) = 0;
    M2C_FIELD(temp_2, f32 *, 0x1C) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 0x18) = 0.0f;
    M2C_FIELD(temp_7, s32 *, 8) = -1;
    M2C_FIELD(arg0, f32 *, 0x11C4) = 0.0f;
    M2C_FIELD(temp_17, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_17, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_17, f32 *, 0xC) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x11F0) = -1;
    M2C_FIELD(temp_7, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, s64 *, 0x1200) = 0;
    __t7VIArray1Z20VICSpritePartEmitter(arg0 + 0x1208, temp_5, temp_6, temp_7);
    M2C_FIELD(arg0, s32 *, 0x34) = 5;
    M2C_FIELD(arg0, s32 *, 0x198) = 9;
    M2C_FIELD(arg0, s32 *, 0x190) = 1;
    M2C_FIELD(arg0, s32 *, 0x1A0) = -1;
    M2C_FIELD(arg0, s32 *, 0x1A4) = -1;
    M2C_FIELD(arg0, s32 *, 0x1168) = 0;
    M2C_FIELD(arg0, s32 *, 0x11EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x11E8) = -1;
    M2C_FIELD(arg0, s32 *, 0x1190) = -1;
    var_6 = 0x1100;
    M2C_FIELD(arg0, s32 *, 0x1198) = -1;
    var_5 = 2;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    M2C_FIELD(arg0, s32 *, 0x118C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1194) = 0;
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, ($v0) */);
    M2C_ERROR(/* unknown instruction: ldl $t0, 0xf($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $t0, 0x8($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, ($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $t0, 0xf($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $t0, 0x8($v1) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, ($v0) */);
    M2C_ERROR(/* unknown instruction: ldl $t0, 0xf($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $t0, 0x8($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x11a3($s4) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x119c($s4) */);
    M2C_ERROR(/* unknown instruction: sdl $t0, 0x11ab($s4) */);
    M2C_ERROR(/* unknown instruction: sdr $t0, 0x11a4($s4) */);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($v1) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x1183($s4) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x117c($s4) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x118b($s4) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x1184($s4) */);
    M2C_FIELD(arg0, s32 *, 0x11C0) = 1;
    M2C_FIELD(arg0, s64 *, 0x11B0) = 0;
    M2C_FIELD(arg0, s64 *, 0x11B8) = 0;
    M2C_ERROR(/* unknown instruction: ldl $t2, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $t2, ($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0xf($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0x8($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $t2, 0x7($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $t2, ($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0xf($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x8($s1) */);
    M2C_FIELD(arg0, s32 *, 0xF10) = -1;
    M2C_FIELD(arg0, s64 *, 0x11D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x11E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x11E4) = -1;
    do {
        temp_2_2 = arg0 + 0xC + var_6;
        temp_3 = arg0 + 0x10 + var_6;
        temp_4 = arg0 + 0x14 + var_6;
        var_6 += 0xC;
        var_5 -= 1;
        *temp_2_2 = -1;
        *temp_3 = 0xB;
        *temp_4 = -1;
    } while (var_5 >= 0);
    var_5_2 = 8;
    var_2_3 = arg0 + 0xF34;
    do {
        var_5_2 -= 1;
        *var_2_3 = -1;
        var_2_3 -= 4;
    } while (var_5_2 >= 0);
    var_2_4 = arg0 + 0x1144;
    var_5_3 = 5;
    do {
        var_5_3 -= 1;
        *var_2_4 = -1;
        var_2_4 -= 4;
    } while (var_5_3 >= 0);
}
