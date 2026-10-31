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

f32 fmodf(f32, M2C_UNK);                            /* extern */
f32 powf(f32, f32);                                 /* extern */

s32 UpdateCameraPhysics__11VIFlyCameraf(void *arg0, f32 fparg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 var_f0;
    void *temp_16;
    void *temp_18;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;

    temp_18 = arg0 + 0x54;
    temp_2 = arg0 + 0x60;
    temp_f20 = fparg0 * fparg0;
    temp_3 = arg0 + 0x6C;
    temp_16 = arg0 + 0x3C;
    sp0 = 0.0f;
    sp4 = 0.0f;
    sp8 = 0.0f;
    sp10 = 0.0f;
    sp18 = 0.0f;
    sp0 = M2C_FIELD(arg0, f32 *, 0x60);
    sp4 = M2C_FIELD(temp_2, f32 *, 4);
    sp8 = M2C_FIELD(temp_2, f32 *, 8);
    sp14 = 0.0f;
    sp10 = M2C_FIELD(arg0, f32 *, 0x6C);
    sp14 = M2C_FIELD(temp_3, f32 *, 4);
    sp18 = M2C_FIELD(temp_3, f32 *, 8);
    temp_f0 = powf(M2C_FIELD(arg0, f32 *, 0xEC), fparg0);
    temp_f0_2 = temp_f20 * temp_f0;
    temp_2_2 = arg0 + 0x30;
    temp_f5 = fparg0 * temp_f0;
    temp_3_2 = arg0 + 0x48;
    temp_f3 = M2C_FIELD(temp_2_2, f32 *, 8) + (sp8 * temp_f0_2);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x30) + (sp0 * temp_f0_2);
    temp_f2 = M2C_FIELD(temp_2_2, f32 *, 4) + (sp4 * temp_f0_2);
    M2C_FIELD(temp_2_2, f32 *, 8) = temp_f3;
    M2C_FIELD(arg0, f32 *, 0x30) = temp_f1;
    M2C_FIELD(temp_2_2, f32 *, 4) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (temp_f1 + (M2C_FIELD(arg0, f32 *, 0x48) * temp_f5));
    M2C_FIELD(temp_2_2, f32 *, 4) = (f32) (temp_f2 + (M2C_FIELD(temp_3_2, f32 *, 4) * temp_f5));
    M2C_FIELD(temp_2_2, f32 *, 8) = (f32) (temp_f3 + (M2C_FIELD(temp_3_2, f32 *, 8) * temp_f5));
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((M2C_FIELD(arg0, f32 *, 0x48) + (sp0 * fparg0)) * temp_f0);
    M2C_FIELD(temp_3_2, f32 *, 4) = (f32) ((M2C_FIELD(temp_3_2, f32 *, 4) + (sp4 * fparg0)) * temp_f0);
    M2C_FIELD(temp_3_2, f32 *, 8) = (f32) ((M2C_FIELD(temp_3_2, f32 *, 8) + (sp8 * fparg0)) * temp_f0);
    temp_f0_3 = powf(M2C_FIELD(arg0, f32 *, 0xF0), fparg0);
    temp_f20_2 = temp_f20 * temp_f0_3;
    temp_f5_2 = fparg0 * temp_f0_3;
    temp_f1_2 = M2C_FIELD(temp_16, f32 *, 4) + (sp14 * temp_f20_2);
    temp_f3_2 = M2C_FIELD(temp_16, f32 *, 8) + (sp18 * temp_f20_2);
    temp_f12 = M2C_FIELD(arg0, f32 *, 0x3C) + (sp10 * temp_f20_2);
    M2C_FIELD(temp_16, f32 *, 4) = temp_f1_2;
    M2C_FIELD(temp_16, f32 *, 8) = temp_f3_2;
    M2C_FIELD(arg0, f32 *, 0x3C) = temp_f12;
    temp_f12_2 = temp_f12 + (M2C_FIELD(arg0, f32 *, 0x54) * temp_f5_2);
    M2C_FIELD(arg0, f32 *, 0x3C) = temp_f12_2;
    M2C_FIELD(temp_16, f32 *, 4) = (f32) (temp_f1_2 + (M2C_FIELD(temp_18, f32 *, 4) * temp_f5_2));
    M2C_FIELD(temp_16, f32 *, 8) = (f32) (temp_f3_2 + (M2C_FIELD(temp_18, f32 *, 8) * temp_f5_2));
    M2C_FIELD(arg0, f32 *, 0x3C) = fmodf(temp_f12_2, 0x40C90FDA);
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x40);
    var_f0 = temp_f1_3;
    if (temp_f1_3 >= -1.5607961f) {
        var_f0 = 1.5607961f;
        if (temp_f1_3 <= 1.5607961f) {
            var_f0 = temp_f1_3;
            goto block_3;
        }
    } else {
block_3:
        if (!(var_f0 >= -1.5607961f)) {
            var_f0 = -1.5607961f;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x40) = var_f0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) ((M2C_FIELD(arg0, f32 *, 0x54) + (sp10 * fparg0)) * temp_f0_3);
    M2C_FIELD(temp_18, f32 *, 4) = (f32) ((M2C_FIELD(temp_18, f32 *, 4) + (sp14 * fparg0)) * temp_f0_3);
    M2C_FIELD(temp_18, f32 *, 8) = (f32) ((M2C_FIELD(temp_18, f32 *, 8) + (sp18 * fparg0)) * temp_f0_3);
    return 0;
}
