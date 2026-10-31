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

s32 UpdateDirections__13VIWalkControl(void *arg0) {
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_19;

    temp_18 = arg0 + 0x8C;
    temp_19 = arg0 + 0x74;
    temp_16 = arg0 + 0x80;
    HPR__7VIVect3fff(temp_19, M2C_FIELD(arg0, f32 *, 0xBC), 0.0f, M2C_FIELD(arg0, f32 *, 0xC4));
    temp_17 = arg0 + 0x98;
    HPR__7VIVect3fff(temp_18, M2C_FIELD(arg0, f32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    M2C_FIELD(temp_16, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) -M2C_FIELD(temp_19, f32 *, 8);
    M2C_FIELD(temp_16, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x74);
    Normalize__7VIVect3(temp_16, 0.0f, 1.0f, 0.0f);
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) ((M2C_FIELD(temp_18, f32 *, 4) * M2C_FIELD(temp_16, f32 *, 8)) - (M2C_FIELD(temp_18, f32 *, 8) * M2C_FIELD(temp_16, f32 *, 4)));
    M2C_FIELD(temp_17, f32 *, 4) = (f32) ((-M2C_FIELD(arg0, f32 *, 0x8C) * M2C_FIELD(temp_16, f32 *, 8)) + (M2C_FIELD(temp_18, f32 *, 8) * M2C_FIELD(arg0, f32 *, 0x80)));
    M2C_FIELD(temp_17, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x8C) * M2C_FIELD(temp_16, f32 *, 4)) - (M2C_FIELD(temp_18, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x80)));
    return 0;
}
