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

M2C_UNK Identity__10VIMatrix33(s32, M2C_UNK);       /* extern */

s32 InitSolidFill__10VIMaterial(void *arg0) {
    void *temp_2;

    temp_2 = arg0 + 0x10;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x13;
    M2C_FIELD(temp_2, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(temp_2, s8 *, 1) = 0;
    M2C_FIELD(temp_2, s8 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s8 *, 0x38) = -1;
    M2C_FIELD(arg0, s8 *, 0x39) = -1;
    M2C_FIELD(arg0, s8 *, 0x3A) = -1;
    M2C_FIELD(arg0, s8 *, 0x3B) = -1;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    Identity__10VIMatrix33(arg0 + 0x40, 1);
    M2C_FIELD((arg0 + 0x70), f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x70) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x78) = -1;
    M2C_FIELD((arg0 + 0x68), f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x68) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x64) = 0.79999995f;
    return 0;
}
