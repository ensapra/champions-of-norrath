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

M2C_UNK HPR__7VIVect3fff(void *, f32, f32, f32);    /* extern */
M2C_UNK Normalize__7VIVect3(void *, f32, f32, f32); /* extern */
f32 powf(f32, f32);                                 /* extern */

s32 InitCameraIntermediate__11VIFlyCamera(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f6;
    void *temp_2;

    temp_f20 = (f32) M2C_FIELD(arg0, s32 *, 0xD8) * 0.0009999999f;
    temp_f22 = powf(M2C_FIELD(arg0, f32 *, 0xEC), temp_f20);
    temp_f21 = powf(M2C_FIELD(arg0, f32 *, 0xF0), temp_f20);
    temp_f0 = powf(M2C_FIELD(arg0, f32 *, 0xF4), temp_f20);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xE0);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0xE4);
    temp_f6 = temp_f0 * temp_f20;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0xE8);
    temp_f2_2 = temp_f2 - (temp_f2 * temp_f0);
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) ((temp_f1 - (temp_f1 * temp_f22)) / (temp_f22 * temp_f20));
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) ((temp_f3 - (temp_f3 * temp_f21)) / (temp_f21 * temp_f20));
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) (temp_f2_2 / temp_f6);
    HPR__7VIVect3fff(arg0, M2C_FIELD(arg0, f32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x40), M2C_FIELD(arg0, f32 *, 0x44));
    HPR__7VIVect3fff(arg0 + 0xC, M2C_FIELD(arg0, f32 *, 0x3C), 0.0f, M2C_FIELD(arg0, f32 *, 0x44));
    temp_2 = arg0 + 0x18;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) -M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0);
    Normalize__7VIVect3(temp_2, 0.0f, 1.0f, 0.0f);
    return 0;
}
