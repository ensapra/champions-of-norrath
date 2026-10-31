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

M2C_UNK func_0015EB80(s64 *, s32, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_001628E0(s64 **, s32, f32, s64 *, void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern f32 D_0047FFE8;
extern f32 D_0047FFEC;
extern f32 D_0047FFF0;
extern s64 *D_004844C8;

void func_0016B610(void *arg0, s32 arg1, s32 arg2, void *arg3, void *arg4, s32 arg5, s64 arg6, s32 arg7, f32 fparg0) {
    s64 *sp20;
    s64 *sp24;
    s64 *sp28;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s64 sp40;
    s32 sp48;
    f32 temp_f0;
    s32 *temp_7;
    s32 *var_5_3;
    s32 temp_2_4;
    s32 temp_3_3;
    s32 var_14;
    s32 var_3_2;
    s32 var_6;
    s64 *temp_2;
    s64 *temp_2_2;
    s64 *temp_2_3;
    s64 *temp_3;
    s64 *temp_3_2;
    s64 *temp_3_4;
    s64 *temp_4_2;
    s64 *temp_4_3;
    s64 *temp_8;
    s64 *var_25;
    s64 *var_3;
    s64 *var_5;
    s64 *var_7;
    s64 temp_4;
    s64 var_10;
    s64 var_5_2;
    s8 temp_8_2;
    void *var_8;

    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($sp) */);
    M2C_FIELD(&sp20, s64 **, 0) = D_004844C8;
    sp24 = D_004844C8;
    temp_2 = D_004844C8 + 8;
    temp_3 = temp_2 + 4;
    sp30 = arg1;
    var_25 = temp_3;
    sp34 = arg2;
    sp38 = arg5;
    sp40 = arg6;
    M2C_FIELD(D_004844C8, s32 *, 8) = 0x11000000;
    sp48 = arg7;
    M2C_FIELD(&sp20, s64 **, 0) = temp_3;
    if (((s32) var_25 & 0xF) != 0xC) {
        M2C_FIELD(temp_2, s8 *, 4) = 0;
loop_2:
        var_25 += 1;
        if (((s32) var_25 & 0xF) != 0xC) {
            *var_25 = 0;
            goto loop_2;
        }
    }
    temp_2_2 = var_25 + 4;
    M2C_FIELD(&sp20, s64 **, 0) = temp_2_2;
    sp28 = temp_2_2;
    M2C_FIELD(var_25, s64 *, 4) = (s64) ((0x10000000 << 0x20) | 0x8000);
    temp_3_2 = M2C_FIELD(&sp20, s64 **, 0);
    M2C_FIELD(temp_2_2, s64 *, 8) = 0xE;
    M2C_FIELD(temp_3_2, f32 *, 0x54) = (f32) M2C_FIELD(arg4, f32 *, 0);
    temp_8 = temp_3_2 + 0x50;
    M2C_FIELD((temp_3_2 + 0x10), s64 *, 8) = 0x3F;
    M2C_FIELD(temp_3_2, f32 *, 0x58) = (f32) M2C_FIELD(arg4, f32 *, 4);
    M2C_FIELD(temp_3_2, s64 *, 0x10) = 0;
    M2C_FIELD(temp_3_2, s64 *, 0x20) = 0;
    M2C_FIELD(temp_3_2, f32 *, 0x5C) = (f32) M2C_FIELD(arg4, f32 *, 8);
    M2C_FIELD((temp_3_2 + 0x20), s64 *, 8) = 6;
    M2C_FIELD(&sp20, s64 **, 0) = temp_8;
    M2C_FIELD(temp_3_2, f32 *, 0x60) = (f32) M2C_FIELD(arg4, f32 *, 0xC);
    M2C_FIELD(temp_3_2, f32 *, 0x64) = (f32) M2C_FIELD(arg4, f32 *, 0x10);
    M2C_FIELD((temp_3_2 + 0x30), s64 *, 8) = 0x42;
    M2C_FIELD(temp_3_2, s64 *, 0x30) = (s64) M2C_FIELD(arg0, s64 *, 0x18);
    var_14 = 2;
    M2C_FIELD((temp_3_2 + 0x40), s64 *, 8) = 0x47;
    M2C_FIELD(temp_3_2, s64 *, 0x40) = 0x507F5;
    M2C_FIELD(temp_3_2, f32 *, 0x68) = (f32) M2C_FIELD(arg4, f32 *, 0x14);
    M2C_FIELD(var_25, s32 *, 0) = 0x50000005;
    *sp28 |= (s32) (((s32) (temp_8 - sp28) >> 3) - 2) >> 1;
    M2C_FIELD(temp_3_2, s32 *, 0x50) = 0x6C04C000;
    M2C_FIELD(temp_3_2, f32 *, 0x6C) = (f32) M2C_FIELD(arg4, f32 *, 0x18);
    M2C_FIELD(temp_3_2, f32 *, 0x70) = (f32) M2C_FIELD(arg4, f32 *, 0x1C);
    temp_f0 = M2C_FIELD(arg4, f32 *, 0x20);
    M2C_FIELD(&sp20, s64 **, 0) = temp_3_2 + 0xA0;
    M2C_FIELD(temp_3_2, f32 *, 0x74) = temp_f0;
    M2C_FIELD(temp_3_2, f32 *, 0x78) = (f32) M2C_FIELD(arg4, f32 *, 0x24);
    var_8 = sp20 + 4;
    M2C_FIELD(&sp20, s64 **, 0) = temp_3_2 + 0xD8;
    M2C_FIELD(temp_3_2, f32 *, 0x7C) = (f32) M2C_FIELD(arg4, f32 *, 0x28);
    var_7 = sp20 + 8;
    M2C_FIELD(temp_3_2, f32 *, 0x80) = (f32) M2C_FIELD(arg4, f32 *, 0x2C);
    M2C_FIELD(temp_3_2, s32 *, 0x94) = 0x04000000;
    M2C_FIELD(temp_3_2, s32 *, 0x98) = 0x14000002;
    M2C_FIELD(temp_3_2, f32 *, 0x84) = (f32) M2C_FIELD(arg4, f32 *, 0x30);
    M2C_FIELD(temp_3_2, s32 *, 0x9C) = 0x6C03C000;
    M2C_FIELD(temp_3_2, s32 *, 0xD0) = 0x14000010;
    M2C_FIELD(temp_3_2, f32 *, 0x88) = (f32) M2C_FIELD(arg4, f32 *, 0x34);
    M2C_FIELD(temp_3_2, s32 *, 0xD4) = 0x6D058000;
    M2C_FIELD(temp_3_2, s32 *, 0x100) = 0x14000024;
    M2C_FIELD(temp_3_2, f32 *, 0x8C) = (f32) M2C_FIELD(arg4, f32 *, 0x38);
    M2C_FIELD(&sp20, s64 **, 0) = temp_3_2 + 0x104;
    M2C_FIELD(temp_3_2, s16 *, 0xF8) = 0;
    M2C_FIELD(temp_3_2, f32 *, 0x90) = (f32) M2C_FIELD(arg4, f32 *, 0x3C);
    M2C_FIELD(temp_3_2, s16 *, 0xFA) = 0;
    M2C_FIELD(temp_3_2, s16 *, 0xFC) = 0;
    M2C_FIELD(temp_3_2, s16 *, 0xFE) = 0;
    M2C_FIELD(sp20, s16 *, 0) = (s16) temp_f0;
    M2C_FIELD(sp20, s16 *, 2) = M2C_BITWISE(s16, (fparg0 * 35.0f));
    M2C_FIELD(sp20, s16 *, 0) = (f32) D_0047FFEC;
    M2C_FIELD(sp20, f32 *, 0x10) = (f32) D_0047FFE8;
    M2C_FIELD(sp20, f32 *, 0x20) = (f32) D_0047FFF0;
    M2C_FIELD(sp20, s16 *, 4) = 0;
    M2C_FIELD(sp20, s16 *, 6) = 0;
    do {
        var_14 -= 1;
        M2C_FIELD(var_7, s16 *, 0) = 0;
        M2C_FIELD(var_7, s16 *, 2) = 0;
        M2C_FIELD(var_7, s16 *, 4) = 0;
        M2C_FIELD(var_7, s16 *, 6) = 0;
        var_7 += 8;
        M2C_FIELD(var_8, s32 *, 0) = 0;
        M2C_FIELD(var_8, s32 *, 0x10) = 0;
        M2C_FIELD(var_8, s32 *, 0x20) = 0;
        var_8 += 4;
    } while (var_14 >= 0);
    var_3 = M2C_FIELD(&sp20, s64 **, 0);
    if ((s32) var_3 & 0xF) {
        do {
            *var_3 = 0;
            var_3 += 1;
        } while ((s32) var_3 & 0xF);
    }
    M2C_FIELD(&sp20, s64 **, 0) = var_3;
    var_5 = var_3;
    *sp24 = ((s32) (((s32) (var_5 - sp24) >> 3) - 2) >> 1) | 0x10000000;
    if (sp38 != 0) {
        if (sp48 == 0) {
            func_001628E0(&sp20, sp38, temp_f0, var_7, var_8, 0x14000002, 0x6C03C000, 0x14000010);
            var_5 = M2C_FIELD(&sp20, s64 **, 0);
        }
        sp24 = var_5;
        var_5_2 = 0x1400000C;
    } else {
        sp24 = var_5;
        var_5_2 = 0x1400001E;
    }
    temp_2_3 = M2C_FIELD(&sp20, s64 **, 0);
    M2C_FIELD(temp_2_3, s64 *, 0) = 0x10000000;
    M2C_FIELD(temp_2_3, s64 *, 8) = var_5_2;
    M2C_FIELD(&sp20, s64 **, 0) = temp_2_3 + 0x10;
    temp_8_2 = M2C_FIELD(arg0, s8 *, 0x12);
    temp_3_3 = M2C_FIELD(arg0, s8 *, 0x26) - 1;
    var_6 = 0;
    var_10 = sp40 & ~(1 << (s64) temp_8_2);
    temp_7 = arg0 + 0x28 + (((temp_3_3 < 0) ? temp_3_3 : 0) * ((temp_8_2 * 4) + 4));
    var_3_2 = *temp_7;
    if (temp_8_2 >= 0) {
        var_5_3 = temp_7;
        do {
            var_10 = var_10 >> 1;
            if ((((s64) (var_10 << 0x20) >> 0x20) ^ 1) & 1) {
                temp_2_4 = M2C_FIELD(var_5_3, s32 *, 0);
                if (var_3_2 != temp_2_4) {
                    temp_3_4 = M2C_FIELD(&sp20, s64 **, 0);
                    M2C_FIELD(&sp20, s64 **, 0) = temp_3_4 + 0x10;
                    M2C_FIELD(temp_3_4, s64 *, 0) = ((s32) (temp_2_4 - var_3_2) >> 4) | ((s64) var_3_2 << 0x20) | 0x30000000;
                    M2C_FIELD(temp_3_4, s64 *, 8) = 0;
                    M2C_FIELD(&sp20, s64 **, 4) = temp_3_4;
                }
                var_3_2 = M2C_FIELD(var_5_3, s32 *, 4);
            }
            var_6 += 1;
            var_5_3 += 4;
        } while (temp_8_2 >= var_6);
    }
    temp_4 = *sp24;
    if (((temp_4 >> 0x1C) & 7) != 1) {
        temp_4_2 = M2C_FIELD(&sp20, s64 **, 0);
        sp24 = NULL;
        M2C_FIELD(temp_4_2, s64 *, 0) = 0x60000000;
        M2C_FIELD(temp_4_2, s64 *, 8) = 0;
        M2C_FIELD(&sp20, s64 **, 0) += 0x10;
    } else {
        *sp24 = (temp_4 & 0x8FFFFFFF) | 0x60000000;
    }
    temp_4_3 = D_004844C8;
    D_004844C8 = M2C_FIELD(&sp20, s64 **, 0);
    func_0015EB80(temp_4_3, sp34, sp30, sp48, 0);
}
