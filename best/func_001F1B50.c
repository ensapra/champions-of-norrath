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

s32 func_0010A428(void *, M2C_UNK);                 /* extern */
s32 func_0010EBF8(M2C_UNK);                         /* extern */
M2C_UNK func_0013EF30(f32 *, f32 *, void **, M2C_UNK); /* extern */
void *func_00143D38(s32, M2C_UNK *, s16, M2C_UNK, M2C_UNK, f32); /* extern */
f32 func_0015A070(s16);                             /* extern */
f32 func_0015A100(s16);                             /* extern */
f32 func_0017BF90(s32, f32 *, f32 *, void *, void **, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK func_00194300(void *);                      /* extern */
M2C_UNK func_00194390(void *, void *, void *, void *); /* extern */
extern f32 D_00480D60;
extern f32 D_00480D64;
extern s32 D_004844A0;
extern s32 D_004844A4;

void func_001F1B50(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    void *sp20;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    void *sp70;
    f32 sp270;
    f32 sp274;
    f32 sp278;
    f32 sp280;
    f32 sp284;
    f32 sp288;
    f32 sp290;
    f32 sp294;
    f32 sp298;
    f32 sp2A0;
    f32 sp2A4;
    f32 sp2A8;
    f32 sp2C0;
    f32 sp2C4;
    f32 sp2C8;
    M2C_UNK sp2E0;
    f32 temp_9;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f3;
    f32 temp_f4;
    s16 temp_3;
    s32 temp_2;
    s32 temp_3_2;
    s32 temp_3_3;
    void **var_16;
    void *temp_16;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;

    if ((func_0010EBF8(0) == 0) && (func_0010A428(arg0, 0x258) != 0)) {
        temp_3 = M2C_FIELD(arg0, s16 *, 0x23C);
        switch (temp_3) {                           /* irregular */
        case 0:
            temp_3_2 = M2C_FIELD(arg0, s32 *, 0x3D4);
            if (!(temp_3_2 & 2)) {
                if (((temp_3_2 ^ 1) & 1) && (temp_f20 = func_0015A070(M2C_FIELD(arg0, s16 *, 0x38)), temp_f0 = func_0015A100(M2C_FIELD(arg0, s16 *, 0x38)), sp290 = temp_f20, sp294 = temp_f0, sp298 = 0.0f, sp2A0 = M2C_FIELD(arg0, f32 *, 0x10), sp2A4 = M2C_FIELD(arg0, f32 *, 0x14), sp2A8 = M2C_FIELD(arg0, f32 *, 0x18) + 10.0f, sp2C0 = sp290 * 500.0f, sp2C4 = sp294 * 500.0f, sp2C8 = sp298 * 500.0f, temp_f0_2 = func_0017BF90(D_004844A0, &sp2A0, &sp2C0, arg0, &sp20, 0, 0, D_00480D64), (temp_f0_2 > 0.0f))) {
                    if ((temp_f0_2 < 1.0f) && (sp20 != NULL)) {
                        if (M2C_FIELD(sp20, s32 *, 0xC) & 0x40) {
                            goto block_25;
                        }
                    }
                }
            } else {
                temp_f20_2 = func_0015A070(M2C_FIELD(arg0, s16 *, 0x38));
                temp_f0_3 = func_0015A100(M2C_FIELD(arg0, s16 *, 0x38));
                sp0 = temp_f20_2;
                sp4 = temp_f0_3;
                sp8 = 0.0f;
                sp10 = M2C_FIELD(arg0, f32 *, 0x10);
                sp14 = M2C_FIELD(arg0, f32 *, 0x14);
                sp18 = M2C_FIELD(arg0, f32 *, 0x18) + 10.0f;
                sp40 = sp0 * 500.0f;
                sp44 = sp4 * 500.0f;
                sp48 = sp8 * 500.0f;
                temp_f0_4 = func_0017BF90(D_004844A0, &sp10, &sp40, arg0, &sp20, 0, 0, D_00480D60);
                if (!(temp_f0_4 > 0.0f) || !(temp_f0_4 < 1.0f) || (sp20 == NULL) || !(M2C_FIELD(sp20, s32 *, 0xC) & 0x40)) {
                    if (!((D_004844A4 ^ M2C_FIELD(arg0, s8 *, 0x239)) & 7)) {
                        M2C_ERROR(/* unknown instruction: ldl $v0, 0x17($s2) */);
                        M2C_ERROR(/* unknown instruction: ldr $v0, 0x10($s2) */);
                        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s0) */);
                        M2C_ERROR(/* unknown instruction: sdr $v0, ($s0) */);
                        M2C_FIELD(&sp50, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
                        temp_f21 = func_0015A070(M2C_FIELD(arg0, s16 *, 0x38)) * 200.0f;
                        temp_f0_5 = func_0015A100(M2C_FIELD(arg0, s16 *, 0x38)) * 200.0f;
                        sp60 = temp_f21;
                        sp68 = 0.0f;
                        sp64 = temp_f0_5;
                        M2C_FIELD(&sp50, f32 *, 0) += sp60;
                        temp_f3 = sp54 + sp64;
                        temp_f4 = sp58 + sp68;
                        sp54 = temp_f3;
                        sp58 = temp_f4;
                        sp270 = sp50 - 200.0f;
                        sp274 = temp_f3 - 200.0f;
                        sp278 = temp_f4 - 200.0f;
                        sp280 = sp50 + 200.0f;
                        sp284 = sp54 + 200.0f;
                        sp288 = sp58 + 200.0f;
                        func_0013EF30(&sp270, &sp280, &sp70, 0x80);
                        var_16 = &sp70;
                        if (sp70 != NULL) {
                            do {
                                temp_2 = M2C_FIELD(*var_16, s32 *, 0xC);
                                temp_3_3 = temp_2 & 8;
                                var_16 += 4;
                                if ((temp_2 & 0x40) && (temp_3_3 == 0)) {
                                    temp_2_2 = M2C_FIELD(arg0, void **, 0x48);
                                    M2C_FIELD((temp_2_2 + 0xB8), M2C_UNK (**)(void *, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_2_2, s16 *, 0xB8), 3);
                                }
                            } while (*var_16 != NULL);
                        }
                    }
                } else {
block_25:
                    temp_2_3 = M2C_FIELD(arg0, void **, 0x48);
                    M2C_FIELD((temp_2_3 + 0xB8), M2C_UNK (**)(void *, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_2_3, s16 *, 0xB8), 3);
                }
            }
            break;
        case 3:
            temp_2_4 = M2C_FIELD(arg0, void **, 0x3D8);
            if (((temp_2_4 == NULL) || (M2C_FIELD(M2C_FIELD(temp_2_4, void **, 0xC), s32 *, 0xC) & 8)) && (M2C_FIELD(arg0, s32 *, 0x3D0) < M2C_FIELD(arg0, s32 *, 0x3CC))) {
                temp_16 = arg0 + 0x3D8;
                func_00194300(temp_16);
                M2C_FIELD(arg0, void **, 0x3D8) = NULL;
                M2C_ERROR(/* unknown instruction: ldl $a4, 0x17($s2) */);
                M2C_ERROR(/* unknown instruction: ldr $a4, 0x10($s2) */);
                temp_9 = M2C_FIELD(arg0, f32 *, 0x18);
                M2C_ERROR(/* unknown instruction: sdl $a4, 0x7($v0) */);
                M2C_FIELD(&sp2E0, f32 *, 8) = temp_9;
                temp_2_5 = func_00143D38(M2C_FIELD(arg0, s32 *, 0x3C0), &sp2E0, M2C_FIELD(arg0, s16 *, 0x38), 0, M2C_ERROR(/* unknown instruction: sdr $a4, ($v0) */), temp_9);
                if ((temp_2_5 != NULL) && (M2C_FIELD(temp_2_5, s32 *, 0xC) & 0x20)) {
                    M2C_FIELD(temp_2_5, s64 *, 0xA0) = (s64) (M2C_FIELD(temp_2_5, s64 *, 0xA0) | 0x01000000);
                    func_00194390(temp_16, temp_2_5, temp_2_5, temp_2_5);
                }
                M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D0) + 1);
            }
            break;
        }
    }
}
