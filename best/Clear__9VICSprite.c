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

s32 Clear__9VIHSprite();                            /* extern */

s32 Clear__9VICSprite(void *arg0) {
    s32 *temp_2;
    s32 *temp_3;
    s32 *temp_4;
    s32 *var_2;
    s32 *var_2_2;
    s32 var_6;
    s32 var_6_2;
    s32 var_6_3;
    s32 var_7;

    if (Clear__9VIHSprite() >= 0) {
        M2C_FIELD(arg0, s32 *, 0x190) = 1;
        M2C_FIELD(arg0, s32 *, 0x34) = 5;
        M2C_FIELD(arg0, s32 *, 0x1A0) = -1;
        M2C_FIELD(arg0, s32 *, 0x1A4) = -1;
        M2C_FIELD(arg0, s32 *, 0x1168) = 0;
        M2C_FIELD(arg0, s32 *, 0x11EC) = 0;
        M2C_FIELD(arg0, s32 *, 0x11E8) = -1;
        M2C_FIELD(arg0, s32 *, 0x118C) = 0;
        M2C_FIELD(arg0, s32 *, 0x1190) = -1;
        var_7 = 0x1100;
        M2C_FIELD(arg0, s32 *, 0x1194) = 0;
        var_6 = 2;
        M2C_FIELD(arg0, s32 *, 0x1198) = -1;
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($v0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, ($v0) */);
        M2C_ERROR(/* unknown instruction: ldl $t1, 0xf($v0) */);
        M2C_ERROR(/* unknown instruction: ldr $t1, 0x8($v0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($a1) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, ($a1) */);
        M2C_ERROR(/* unknown instruction: sdl $t1, 0xf($a1) */);
        M2C_ERROR(/* unknown instruction: sdr $t1, 0x8($a1) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($v0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, ($v0) */);
        M2C_ERROR(/* unknown instruction: ldl $t1, 0xf($v0) */);
        M2C_ERROR(/* unknown instruction: ldr $t1, 0x8($v0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x11a3($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x119c($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $t1, 0x11ab($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $t1, 0x11a4($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($a1) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x1183($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0x117c($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x118b($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x1184($s0) */);
        M2C_FIELD(arg0, s64 *, 0x11B0) = 0;
        M2C_FIELD(arg0, s64 *, 0x11B8) = 0;
        M2C_FIELD(arg0, s32 *, 0x11C0) = 0;
        M2C_ERROR(/* unknown instruction: ldl $t3, 0x7($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $t3, ($sp) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0xf($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x8($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $t3, 0x11cb($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $t3, 0x11c4($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x11d3($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0x11cc($s0) */);
        M2C_FIELD(arg0, s32 *, 0xF10) = -1;
        M2C_FIELD(arg0, s64 *, 0x11D8) = 0;
        M2C_FIELD(arg0, s32 *, 0x11E0) = 0;
        M2C_FIELD(arg0, s32 *, 0x11E4) = -1;
        do {
            temp_2 = arg0 + 0xC + var_7;
            temp_3 = arg0 + 0x10 + var_7;
            temp_4 = arg0 + 0x14 + var_7;
            var_7 += 0xC;
            var_6 -= 1;
            *temp_2 = -1;
            *temp_3 = 0xB;
            *temp_4 = -1;
        } while (var_6 >= 0);
        var_6_2 = 8;
        var_2 = arg0 + 0xF34;
        do {
            var_6_2 -= 1;
            *var_2 = -1;
            var_2 -= 4;
        } while (var_6_2 >= 0);
        var_2_2 = arg0 + 0x1144;
        var_6_3 = 5;
        do {
            var_6_3 -= 1;
            *var_2_2 = -1;
            var_2_2 -= 4;
        } while (var_6_3 >= 0);
        return 0;
    }
    return -1;
}
