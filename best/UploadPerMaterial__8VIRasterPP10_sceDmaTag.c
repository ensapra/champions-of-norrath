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

extern s32 D_011B0190;
extern s32 D_011B01B0;

s32 UploadPerMaterial__8VIRasterPP10_sceDmaTag(void **arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 temp_f0;
    f32 temp_f0_2;
    void *temp_4;
    void *temp_5;
    void *temp_5_2;
    void *temp_6;

    spC = 0.0f;
    sp0 = 0.0f;
    sp4 = 0.0f;
    sp8 = 0.0f;
    temp_f0 = (f32) M2C_FIELD((void *)0x70000224, u8 *, 0) * 0.0039215684f;
    sp0 = temp_f0;
    sp4 = (f32) M2C_FIELD((void *)0x70000224, u8 *, 1) * 0.0039215684f;
    temp_f0_2 = (f32) M2C_FIELD((void *)0x70000224, u8 *, 2) * 0.0039215684f;
    sp8 = temp_f0_2;
    spC = (f32) M2C_FIELD((void *)0x70000224, u8 *, 3) * 0.0039215684f;
    M2C_FIELD(*arg1, s8 *, 3) = 0x10;
    M2C_FIELD(*arg1, s32 *, 4) = 0;
    temp_6 = *arg1;
    temp_4 = temp_6 + 0x10;
    M2C_FIELD(temp_6, s16 *, 0) = 3;
    *arg1 = temp_6 + 0x40;
    temp_5 = temp_6 + 0x20;
    M2C_FIELD(temp_6, s32 *, 0x10) = 0;
    M2C_FIELD(temp_4, s32 *, 4) = 0;
    M2C_FIELD(temp_4, s32 *, 8) = 0;
    M2C_FIELD(temp_4, s32 *, 0xC) = (s32) ((D_011B0190 + 2) | 0x6C010000);
    M2C_FIELD(temp_6, f32 *, 0x20) = (f32) (temp_f0 + *(f32 *)0x700001E0);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) (sp4 + *(f32 *)0x700001E4);
    M2C_FIELD(temp_5, f32 *, 8) = (f32) (temp_f0_2 + *(f32 *)0x700001E8);
    M2C_FIELD(temp_5, f32 *, 0xC) = (f32) (spC + *(f32 *)0x700001EC);
    temp_5_2 = temp_6 + 0x30;
    M2C_FIELD(temp_6, s32 *, 0x30) = 0;
    M2C_FIELD(temp_5_2, s32 *, 4) = 0;
    M2C_FIELD(temp_5_2, s32 *, 8) = 0;
    M2C_FIELD(temp_5_2, s32 *, 0xC) = (s32) (D_011B01B0 | 0x14000000);
    return 0;
}
