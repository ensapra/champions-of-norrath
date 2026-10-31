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

M2C_UNK __builtin_vec_delete(s32);                  /* extern */
extern M2C_UNK D_011B0110;
extern M2C_UNK D_011B0118;
extern M2C_UNK D_011B0120;
extern M2C_UNK D_011B0128;
extern M2C_UNK D_011B0130;
extern M2C_UNK D_011B0140;
extern M2C_UNK D_011B0148;
extern M2C_UNK D_011B0150;
extern M2C_UNK D_011B0160;
extern M2C_UNK D_011B0170;
extern s32 D_01228A34;

s32 Clear__12VIPrimBuffer(void *arg0) {
    s32 temp_2;
    void *temp_3;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_2 != 0) {
        __builtin_vec_delete(temp_2);
    }
    temp_3 = arg0 + 0x30;
    M2C_FIELD(temp_3, f32 *, 0xC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(&D_011B0118, s16 *, 2) = 0;
    M2C_FIELD(&D_011B0110, f32 *, 4) = 0.0f;
    M2C_FIELD(&D_011B0128, s16 *, 2) = 0;
    M2C_FIELD(&D_011B0120, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(&D_011B0130, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(&D_011B0150, s8 *, 3) = -1;
    D_01228A34 = 0;
    M2C_FIELD(&D_011B0140, s8 *, 2) = 0;
    M2C_FIELD(&D_011B0148, s8 *, 3) = -1;
    M2C_FIELD(&D_011B0110, f32 *, 0) = 0.0f;
    M2C_FIELD(&D_011B0118, s16 *, 0) = 0;
    M2C_FIELD(&D_011B0120, f32 *, 0) = 0.0f;
    M2C_FIELD(&D_011B0128, s16 *, 0) = 0;
    M2C_FIELD(&D_011B0130, f32 *, 0) = 0.0f;
    M2C_FIELD(&D_011B0130, f32 *, 4) = 0.0f;
    M2C_FIELD(&D_011B0140, s8 *, 0) = 0;
    M2C_FIELD(&D_011B0140, s8 *, 1) = 0;
    M2C_FIELD(&D_011B0148, s8 *, 0) = -1;
    M2C_FIELD(&D_011B0148, s8 *, 1) = -1;
    M2C_FIELD(&D_011B0148, s8 *, 2) = -1;
    M2C_FIELD(&D_011B0150, s8 *, 0) = -1;
    M2C_FIELD(&D_011B0150, s8 *, 1) = -1;
    M2C_FIELD(&D_011B0150, s8 *, 2) = -1;
    M2C_FIELD(&D_011B0160, f32 *, 0) = 0.0f;
    M2C_FIELD(&D_011B0160, f32 *, 4) = 0.0f;
    M2C_FIELD(&D_011B0160, f32 *, 8) = 0.0f;
    M2C_FIELD(&D_011B0160, f32 *, 0xC) = 0.0f;
    M2C_FIELD(&D_011B0170, s8 *, 3) = 0;
    M2C_FIELD(&D_011B0170, s8 *, 0) = 0;
    M2C_FIELD(&D_011B0170, s8 *, 1) = 0;
    M2C_FIELD(&D_011B0170, s8 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    return 0;
}
