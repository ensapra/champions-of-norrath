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

s32 func_00142158(s32, s32);                        /* extern */
s32 func_00155AB8(void *, M2C_UNK *);               /* extern */
f32 func_0015A070(s16);                             /* extern */
f32 func_0015A100(s16);                             /* extern */
s32 func_0015A198(f32, f32);                        /* extern */
s32 func_001639C8(void *, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001CE218(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32); /* extern */
f32 func_001D12B0();                                /* extern */
extern M2C_UNK D_00408600;
extern M2C_UNK D_00470EB8;
extern f32 D_0048170C;
extern s32 D_00484538;

void func_002207A8(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f21;
    s32 temp_2;
    s32 temp_3;
    s32 temp_5;
    s32 var_18;
    s32 var_2;
    u16 temp_3_4;
    void **temp_16;
    void *temp_3_2;
    void *temp_3_3;

    temp_2 = func_00142158(M2C_FIELD(arg0, s32 *, 0x118), M2C_FIELD(arg0, u8 *, 0x28) + 0x1E0) != 0;
    M2C_FIELD(arg0, s32 *, 0x118) = temp_2;
    if (temp_2 != 0) {
        if (M2C_FIELD(arg0, s8 *, 0x9C) != 0) {
            M2C_FIELD(arg0, s32 *, 0xC0) = func_001639C8(arg0 + 0x98, arg0 + 0x10, 0, 0);
        } else {
            M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x17C) = (s32) (M2C_FIELD(arg0, s32 *, 0x17C) + 1);
        if (func_00155AB8(arg0 + 0x4C, &D_00470EB8) == 0) {
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x17($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, 0x10($s1) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($sp) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, ($sp) */);
            sp8 = M2C_FIELD(arg0, f32 *, 0x18);
            temp_f21 = func_0015A070(M2C_FIELD(arg0, s16 *, 0x38)) * 48.0f;
            temp_f0 = func_0015A100(M2C_FIELD(arg0, s16 *, 0x38)) * 48.0f;
            temp_3 = M2C_FIELD(arg0, s32 *, 0xC0);
            sp10 = temp_f21;
            sp18 = 24.0f;
            sp14 = temp_f0;
            sp0 += sp10;
            sp4 += temp_f0;
            sp8 += 24.0f;
            if (temp_3 & 1) {
                M2C_FIELD(arg0, s32 *, 0x124) = 1;
            } else if (temp_3 & 2) {
                M2C_FIELD(arg0, s32 *, 0x124) = 0;
            }
            if (M2C_FIELD(arg0, s32 *, 0x124) != 0) {
                temp_5 = D_00484538;
                var_18 = 0;
                if (temp_5 > 0) {
                    do {
                        temp_16 = (var_18 * 0x5DB0) + 0x5570 + &D_00408600;
                        temp_3_2 = *temp_16;
                        var_18 += 1;
                        if (temp_3_2 != NULL) {
                            var_2 = var_18 < temp_5;
                            if (!(M2C_FIELD(temp_3_2, s32 *, 0xC) & 8)) {
                                temp_f1 = sp4 - M2C_FIELD((temp_3_2 + 0x10), f32 *, 4);
                                temp_f0_2 = sp0 - M2C_FIELD(temp_3_2, f32 *, 0x10);
                                M2C_ERROR(/* unknown instruction: c1 0x4 */);
                                if (((temp_f0_2 * temp_f0_2) + (temp_f1 * temp_f1)) < 18.0f) {
                                    temp_f0_3 = func_001D12B0() * D_0048170C;
                                    func_001CE218(*temp_16, arg0, 0x2710, 0, 0, 0x41, 0, 0, temp_f0_3, temp_f0_3);
                                    temp_3_3 = *temp_16;
                                    M2C_FIELD(temp_3_3, f32 *, 0x2F4) = 100.0f;
                                    temp_3_4 = (u16) M2C_FIELD(arg0, s16 *, 0x38);
                                    if ((func_0015A198(M2C_FIELD(temp_3_3, f32 *, 0x14) - sp4, M2C_FIELD(temp_3_3, f32 *, 0x10) - sp0) - temp_3_4) & 0x8000) {
                                        M2C_FIELD(*temp_16, s16 *, 0x2EC) = (s16) (temp_3_4 - 0x4000);
                                    } else {
                                        M2C_FIELD(*temp_16, s16 *, 0x2EC) = (s16) (temp_3_4 + 0x4000);
                                    }
                                }
                                goto block_19;
                            }
                        } else {
block_19:
                            var_2 = var_18 < temp_5;
                        }
                    } while (var_2 != 0);
                }
            }
        }
    }
}
