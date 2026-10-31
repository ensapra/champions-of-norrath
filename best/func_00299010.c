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

f32 func_00112BA0(void *, f32, s32, s32);           /* extern */
s32 func_001441B8(M2C_UNK, M2C_UNK, s32, s32);      /* extern */
M2C_UNK func_00157668(M2C_UNK *, M2C_UNK *, s16);   /* extern */
f32 func_0015A070(s16, u16);                        /* extern */
f32 func_0015A100(s16);                             /* extern */
s32 func_001671F8(M2C_UNK *);                       /* extern */
M2C_UNK func_00180338(s32, M2C_UNK, s32);           /* extern */
f32 func_00180380(s32);                             /* extern */
M2C_UNK func_001803C0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_00180DA0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
f32 func_001E5A00(s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern f32 D_0048280C;
extern f32 D_00482810;
extern f32 D_00482814;
extern u32 D_00483E5C;
extern M2C_UNK D_004861F0;
extern M2C_UNK D_008D6BE0;

f32 func_00299010(void *arg0, void *arg1) {
    M2C_UNK sp10;
    f32 sp18;
    M2C_UNK sp20;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    M2C_UNK sp40;
    s32 sp48;
    M2C_UNK sp50;
    M2C_UNK sp80;
    s32 sp88;
    M2C_UNK sp90;
    f32 sp94;
    f32 sp98;
    M2C_UNK spA0;
    f32 spA4;
    f32 spA8;
    s32 spB0;
    s32 spB4;
    f32 spB8;
    M2C_UNK *var_19;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_ret;
    f32 var_f0;
    s32 *temp_16;
    s32 temp_11;
    s32 temp_2;
    s32 temp_6;
    s32 temp_ret_2;
    s32 var_20;
    s32 var_6;
    s32 var_7;
    u16 temp_5;
    u32 temp_3_3;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_7;
    void *temp_7_2;
    void *var_17;

    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($sp) */);
    temp_7 = M2C_FIELD(arg0, void **, 8);
    spB4 = 0;
    temp_3 = M2C_FIELD(temp_7, void **, 0x60);
    spB0 = 1;
    temp_5 = M2C_FIELD(arg0, u16 *, 0x70) + 0x10BB;
    temp_f21 = (f32) (M2C_FIELD((temp_3 + 0x58), s32 (**)(void *, M2C_UNK, s8, void *, s32), 4)(temp_7 + M2C_FIELD(temp_3, s16 *, 0x58), 1, M2C_FIELD(arg0, s8 *, 0), temp_7, M2C_FIELD(arg1, s32 *, 8)) * 0x3C);
    M2C_FIELD(arg0, u16 *, 0x70) = temp_5;
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg0, f32 *, 0x74) + D_0048280C);
    sp30 = func_0015A070((s16) temp_5, temp_5);
    sp34 = func_0015A100((s16) M2C_FIELD(arg0, u16 *, 0x70));
    sp38 = 0.0f;
    sp30 *= 0.5f;
    var_f0 = sp38 * 0.5f;
    sp34 *= 0.5f;
    sp38 = var_f0;
    if (!(M2C_FIELD(arg0, f32 *, 0x74) > 4.0f)) {
        spB0 = 0;
    }
    if (spB0 != 0) {
        temp_7_2 = M2C_FIELD(arg0, void **, 8);
        temp_3_2 = M2C_FIELD(temp_7_2, void **, 0x60);
        temp_ret = M2C_FIELD((temp_3_2 + 0x58), f32 (**)(void *, M2C_UNK, s8, void *), 4)(temp_7_2 + M2C_FIELD(temp_3_2, s16 *, 0x58), 2, M2C_FIELD(arg0, s8 *, 0), temp_7_2);
        var_f0 = temp_ret;
        spB4 = M2C_BITWISE(s32, temp_ret);
    }
    var_19 = M2C_FIELD(arg0, M2C_UNK **, 0x18);
    if (var_19 != NULL) {
        spB8 = var_f0;
        temp_f20 = D_00482810;
        var_20 = 0x10;
        var_17 = M2C_FIELD(var_19, void **, 0xC);
loop_6:
        if (var_17 != NULL) {
            if (spB0 == 0) {
                M2C_ERROR(/* unknown instruction: ldl $v1, 0x17($s1) */);
                M2C_ERROR(/* unknown instruction: ldr $v1, 0x10($s1) */);
                M2C_ERROR(/* unknown instruction: sdl $v1, 0x87($sp) */);
                M2C_ERROR(/* unknown instruction: sdr $v1, 0x80($sp) */);
                sp88 = M2C_FIELD(var_17, s32 *, 0x18);
                func_00157668(&sp50, &sp80, M2C_FIELD(var_17, s16 *, 0x38));
                temp_16 = arg0 + 0xC + var_20;
                func_001803C0(*temp_16, &sp50);
                temp_f1 = M2C_FIELD(var_17, f32 *, 0x1C);
                M2C_FIELD(&sp90, f32 *, 0) = (f32) (sp30 * temp_f1);
                sp94 = sp34 * temp_f1;
                sp98 = sp38 * temp_f1;
                M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($fp) */);
                M2C_ERROR(/* unknown instruction: ldr $a1, ($fp) */);
                M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($s7) */);
                M2C_ERROR(/* unknown instruction: sdr $a1, ($s7) */);
                M2C_FIELD(&sp10, s32 *, 8) = (s32) M2C_FIELD(&sp90, s32 *, 8);
                sp18 = M2C_FIELD(arg0, f32 *, 0x74) * M2C_FIELD(var_17, f32 *, 0x1C);
                M2C_FIELD(&spA0, f32 *, 0) = (f32) (sp30 * temp_f20);
                spA4 = sp34 * temp_f20;
                spA8 = sp38 * temp_f20;
                M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($s6) */);
                M2C_ERROR(/* unknown instruction: ldr $a1, ($s6) */);
                temp_6 = M2C_FIELD(&spA0, s32 *, 8);
                M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($s5) */);
                M2C_FIELD(&sp20, s32 *, 8) = temp_6;
                func_00180338(*temp_16, M2C_ERROR(/* unknown instruction: sdr $a1, ($s5) */), temp_6);
                func_00180DA0(&D_008D6BE0, &sp10, &sp20, 0);
                var_f0 = func_00180380(*temp_16);
            } else {
                var_f0 = 20.0f;
                var_6 = spB4;
                if (M2C_FIELD(var_17, f32 *, 0x1C) > 20.0f) {
                    temp_f1_2 = (f32) spB4 * 0.5f;
                    var_7 = 1;
                    if (temp_f1_2 >= 0.0f) {
                        var_f0 = temp_f1_2 + 0.5f;
                        var_6 = M2C_BITWISE(s32, temp_f1_2);
                    } else {
                        var_f0 = temp_f1_2 - 0.5f;
                        var_6 = M2C_BITWISE(s32, temp_f1_2);
                    }
                } else {
                    var_7 = 0;
                }
                temp_3_3 = (D_00483E5C * 0x19660D) + 0x3C6EF35F;
                D_00483E5C = temp_3_3;
                if ((((u32) (temp_3_3 >> 0x10) % 100U) + 1) < var_6) {
                    M2C_FIELD(var_17, s64 *, 0xA0) = (s64) (M2C_FIELD(var_17, s64 *, 0xA0) | 0x400000);
                    M2C_FIELD(var_17, f32 *, 0x36C) = (f32) (temp_f21 * D_00482814);
                    var_f0 = func_00112BA0(var_17, spB8, var_6, var_7);
                } else if (var_7 != 0) {
                    temp_ret_2 = func_001441B8(0x98, 0x64, var_6, var_7);
                    temp_2 = temp_ret_2;
                    var_f0 = M2C_BITWISE(f32, temp_ret_2);
                    if (temp_2 != 0) {
                        temp_11 = func_001671F8(&D_004861F0);
                        M2C_ERROR(/* unknown instruction: ldl $v1, 0x17($s1) */);
                        M2C_ERROR(/* unknown instruction: ldr $v1, 0x10($s1) */);
                        M2C_ERROR(/* unknown instruction: sdl $v1, 0x47($sp) */);
                        M2C_ERROR(/* unknown instruction: sdr $v1, 0x40($sp) */);
                        sp48 = M2C_FIELD(var_17, s32 *, 0x18);
                        var_f0 = func_001E5A00(temp_2, &sp40, 0, 0, 0, 0, 0, temp_11);
                    }
                }
            }
            var_20 += 4;
        }
        var_19 = *var_19;
        if (var_19 != NULL) {
            var_17 = M2C_FIELD(var_19, void **, 0xC);
            goto loop_6;
        }
    }
    if (spB0 != 0) {
        temp_2_2 = M2C_FIELD(arg0, void **, 0x14);
        var_f0 = M2C_FIELD((temp_2_2 + 8), f32 (**)(void *, M2C_UNK, s32), 4)(arg0 + M2C_FIELD(temp_2_2, s16 *, 8), 3, spB0);
    }
    return var_f0;
}
