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

M2C_UNK func_00142310(void *, M2C_UNK);             /* extern */
M2C_UNK func_001437E8(void *);                      /* extern */
M2C_UNK func_00143878(void *);                      /* extern */
s32 func_001441B8(M2C_UNK);                         /* extern */
s16 func_00153FA8(void *);                          /* extern */
s32 func_001639C8(s32, void *, M2C_UNK, M2C_UNK);   /* extern */
s32 func_00165DC0(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_00168A38(s32, M2C_UNK *, s16, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00180DA0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_00191EF8(f32 *, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001D98B8(f32 *, M2C_UNK);              /* extern */
M2C_UNK func_001E5278(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32, f32); /* extern */
M2C_UNK func_0021F898(void *);                      /* extern */
M2C_UNK func_0024D308(s32, void *, M2C_UNK);        /* extern */
M2C_UNK ovl_ntgui2_func_0013F708(void *, M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_00470D48;
extern f32 D_004816E4;
extern f32 D_004816E8;
extern f32 D_004816EC;
extern f32 D_004816F0;
extern s32 D_004844A4;
extern s32 D_004844C0;
extern s32 D_00484CD8;
extern M2C_UNK D_00485508;
extern M2C_UNK D_007D7950;
extern M2C_UNK D_007D79A0;

void func_0021F1A8(void *arg0) {
    M2C_UNK sp20;
    M2C_UNK sp40;
    M2C_UNK sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    M2C_UNK sp80;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    M2C_UNK spA0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_11;
    s32 temp_2;
    s32 temp_4;
    s32 temp_8;
    s32 var_6;
    void *temp_18;

    temp_18 = arg0 + 0x10;
    M2C_FIELD(arg0, s32 *, 0xC0) = func_001639C8(arg0 + 0x98, temp_18, 0, 0);
    if (M2C_FIELD(arg0, s8 *, 0xE4) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0xE8) < D_004844A4) {
            temp_4 = M2C_FIELD(arg0, s32 *, 0x90);
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s2) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($s2) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a5) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, ($a5) */);
            M2C_FIELD(&sp20, s32 *, 8) = (s32) M2C_FIELD(temp_18, s32 *, 8);
            if (temp_4 != 0) {
                M2C_ERROR(/* unknown instruction: ldl $a7, 0x7($s2) */);
                M2C_ERROR(/* unknown instruction: ldr $a7, ($s2) */);
                M2C_ERROR(/* unknown instruction: sdl $a7, 0x7($v0) */);
                M2C_FIELD(&sp40, s32 *, 8) = (s32) M2C_FIELD(temp_18, s32 *, 8);
                func_00168A38(temp_4, &sp40, M2C_FIELD(arg0, s16 *, 0x38), 0, 0, &sp20, 0, M2C_ERROR(/* unknown instruction: sdr $a7, ($v0) */), 0x3F800000);
            }
            do {
                M2C_FIELD(&sp50, f32 *, 0) = (f32) ((2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f);
                M2C_FIELD(&sp50, f32 *, 4) = (f32) ((2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f);
                temp_f2 = M2C_FIELD(&sp50, f32 *, 0);
                temp_f1 = M2C_FIELD(&sp50, f32 *, 4);
                temp_f0 = (2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f;
                M2C_FIELD(&sp50, f32 *, 8) = temp_f0;
            } while (((temp_f2 * temp_f2) + (temp_f1 * temp_f1) + (temp_f0 * temp_f0)) > 1.0f);
            if (sp58 < 0.0f) {
                sp58 = -sp58;
            }
            M2C_FIELD(&sp50, f32 *, 0) = (f32) (M2C_FIELD(&sp50, f32 *, 0) * 5.0f);
            sp54 *= 5.0f;
            sp58 = sp58 * 5.0f * 5.0f;
            func_00180DA0(&D_007D7950, &sp20, &sp50, 0);
            do {
                M2C_FIELD(&sp50, f32 *, 0) = (f32) ((2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f);
                M2C_FIELD(&sp50, f32 *, 4) = (f32) ((2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f);
                temp_f2_2 = M2C_FIELD(&sp50, f32 *, 0);
                temp_f1_2 = M2C_FIELD(&sp50, f32 *, 4);
                temp_f0_2 = (2.0f * ((f32) func_00153FA8(arg0) * 0.000015258789f)) - 1.0f;
                M2C_FIELD(&sp50, f32 *, 8) = temp_f0_2;
            } while (((temp_f2_2 * temp_f2_2) + (temp_f1_2 * temp_f1_2) + (temp_f0_2 * temp_f0_2)) > 1.0f);
            if (sp58 < 0.0f) {
                sp58 = -sp58;
            }
            M2C_FIELD(&sp50, f32 *, 0) = (f32) (M2C_FIELD(&sp50, f32 *, 0) * D_004816E4);
            sp54 *= D_004816E4;
            sp58 = sp58 * D_004816E4 * D_004816E8;
            func_00180DA0(&D_007D79A0, &sp20, &sp50, 0);
            if ((f32) (D_004844A4 - M2C_FIELD(arg0, s32 *, 0xE0)) > 90.0f) {
                sp60 = M2C_FIELD(arg0, f32 *, 0x10);
                sp64 = M2C_FIELD(arg0, f32 *, 0x14);
                sp68 = M2C_FIELD(arg0, f32 *, 0x18) + D_004816EC;
                func_0024D308(func_00165DC0(&D_00485508, &D_00470D48), arg0, 0x3F800000);
                func_001D98B8(&sp60, 0x40000000);
                var_6 = (D_004844C0 & 0x8000) ? 0xDC : ((D_004844C0 & 0x10000) ? 0x3C : 0xF);
                if (D_00484CD8 == 2) {
                    var_6 *= 3;
                } else if (D_00484CD8 == 3) {
                    var_6 *= 6;
                }
                M2C_ERROR(/* unknown instruction: ldl $a6, 0x7($s2) */);
                M2C_ERROR(/* unknown instruction: ldr $a6, ($s2) */);
                temp_11 = M2C_FIELD(temp_18, s32 *, 8);
                M2C_ERROR(/* unknown instruction: sdl $a6, 0x7($v0) */);
                M2C_FIELD(&sp80, s32 *, 8) = temp_11;
                ovl_ntgui2_func_0013F708(arg0, &sp80, var_6, 0x40800, 0, 0, M2C_ERROR(/* unknown instruction: sdr $a6, ($v0) */), temp_11, 0x42200000, 0x43340000);
                sp90 = M2C_FIELD(arg0, f32 *, 0x10);
                sp94 = M2C_FIELD(arg0, f32 *, 0x14);
                sp98 = M2C_FIELD(arg0, f32 *, 0x18) + 1.0f;
                func_00191EF8(&sp90, func_00153FA8(arg0), 9, 0, 0x42400000);
                temp_2 = func_001441B8(0xBC);
                if (temp_2 != 0) {
                    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($s2) */);
                    M2C_ERROR(/* unknown instruction: ldr $v1, ($s2) */);
                    temp_8 = M2C_FIELD(temp_18, s32 *, 8);
                    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($v0) */);
                    M2C_ERROR(/* unknown instruction: sdr $v1, ($v0) */);
                    M2C_FIELD(&spA0, s32 *, 8) = temp_8;
                    func_001E5278(temp_2, &spA0, 0, 0, temp_8, 0x43000000, 0x42C80000, 0x429C0000, 0xC2000000, 0, 0, 0, 0, 168.0f, 60.0f, 1.0f, D_004816F0);
                }
                func_001437E8(arg0);
            }
        }
    } else {
        if ((M2C_FIELD(arg0, s32 *, 0xD8) != 2) && (M2C_FIELD(arg0, s32 *, 0xE8) < D_004844A4)) {
            M2C_FIELD(arg0, s32 *, 0xD8) = 2;
            func_00142310(arg0, 1);
            func_0021F898(arg0);
        }
        if (M2C_FIELD(arg0, u16 *, 0x9E) & 0x80) {
            func_00143878(arg0);
        }
    }
}
