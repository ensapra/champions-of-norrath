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

void SetLocation__17VIParticleEmitterRC7VIVect3(void *arg0, void *arg1) {
    f32 temp_f2;
    void *temp_3;
    void *temp_6;

    temp_3 = arg0 + 0x10;
    temp_6 = arg0 + 0x1C;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
    temp_f2 = M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x10) = temp_f2;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    if (M2C_FIELD(arg0, s32 *, 0x3D4) == 0) {
        M2C_FIELD(arg0, f32 *, 0x1C) = temp_f2;
        M2C_FIELD(arg0, s32 *, 0x3D4) = 1;
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
    }
}
