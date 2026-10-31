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

s32 InitParms__13VIWalkControl(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0x20;
    M2C_FIELD(arg0, f32 *, 0x70) = 0.5235987f;
    M2C_FIELD(arg0, s32 *, 4) = 0xC8;
    M2C_FIELD(arg0, f32 *, 8) = 0.5f;
    M2C_FIELD(arg0, f32 *, 0x10) = 8.833329f;
    M2C_FIELD(arg0, f32 *, 0x14) = 4.4166646f;
    M2C_FIELD(arg0, f32 *, 0x18) = 1.5707961f;
    M2C_FIELD(arg0, f32 *, 0x1C) = 0.78539807f;
    M2C_FIELD(arg0, f32 *, 0x20) = 3.0f;
    M2C_FIELD(arg0, f32 *, 0x24) = 0.29999998f;
    M2C_FIELD(arg0, f32 *, 0x2C) = 1.0471973f;
    M2C_FIELD(arg0, f32 *, 0x30) = 1.8f;
    M2C_FIELD(arg0, f32 *, 0x38) = 1.1999999f;
    M2C_FIELD(arg0, f32 *, 0x34) = 0.59999996f;
    M2C_FIELD(arg0, f32 *, 0x3C) = 0.0009999999f;
    M2C_FIELD(arg0, f32 *, 0x44) = 0.79999995f;
    M2C_FIELD(arg0, f32 *, 0x48) = 0.02f;
    M2C_FIELD(arg0, f32 *, 0x54) = 0.099999994f;
    M2C_FIELD(arg0, f32 *, 0x58) = 0.01f;
    M2C_FIELD(arg0, f32 *, 0x5C) = 0.7f;
    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    M2C_FIELD(arg0, s32 *, 0x64) = -1;
    M2C_FIELD(arg0, f32 *, 0x68) = -1.5607961f;
    M2C_FIELD(arg0, f32 *, 0x6C) = 1.5607961f;
    M2C_FIELD(arg0, f32 *, 0xC) = 3.0f;
    M2C_FIELD(arg0, f32 *, 0x28) = 0.59999996f;
    M2C_FIELD(arg0, f32 *, 0x40) = 0.02f;
    M2C_FIELD(arg0, f32 *, 0x4C) = 0.01f;
    M2C_FIELD(arg0, f32 *, 0x50) = 0.01f;
    return 0;
}
