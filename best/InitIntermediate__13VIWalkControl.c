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

M2C_UNK UpdateDirections__13VIWalkControl(void *);  /* extern */
f32 powf(f32, f32);                                 /* extern */

s32 InitIntermediate__13VIWalkControl(void *arg0) {
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f23;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;

    temp_f20 = (f32) M2C_FIELD(arg0, s32 *, 0) * 0.0009999999f;
    temp_f22 = powf(M2C_FIELD(arg0, f32 *, 0x40), temp_f20);
    powf(M2C_FIELD(arg0, f32 *, 0x44), temp_f20);
    temp_f23 = powf(M2C_FIELD(arg0, f32 *, 0x4C), temp_f20);
    temp_f21 = powf(M2C_FIELD(arg0, f32 *, 0x48), temp_f20);
    temp_f0 = powf(M2C_FIELD(arg0, f32 *, 0x50), temp_f20);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_f10 = temp_f0 * temp_f20;
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f22_2 = temp_f22 * temp_f20;
    temp_f1_2 = temp_f1 - (temp_f1 * temp_f0);
    M2C_FIELD(arg0, f32 *, 0x120) = (f32) ((temp_f2 - (temp_f2 * temp_f22)) / temp_f22_2);
    M2C_FIELD(arg0, f32 *, 0x124) = (f32) ((temp_f3 - (temp_f3 * temp_f23)) / (temp_f23 * temp_f20));
    M2C_FIELD(arg0, f32 *, 0x12C) = (f32) ((temp_f4 - (temp_f4 * temp_f21)) / (temp_f21 * temp_f20));
    M2C_FIELD(arg0, f32 *, 0x11C) = (f32) ((temp_f5 - (temp_f5 * temp_f22)) / temp_f22_2);
    M2C_FIELD(arg0, f32 *, 0x128) = (f32) (temp_f1_2 / temp_f10);
    UpdateDirections__13VIWalkControl(arg0);
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    return 0;
}
