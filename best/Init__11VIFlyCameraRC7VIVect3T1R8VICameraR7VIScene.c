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

s64 GetTime__7VIScene(s32, M2C_UNK);                /* extern */
M2C_UNK InitCameraIntermediate__11VIFlyCamera(void *, void *, void *, void *, void *, void *, void *, void *); /* extern */
M2C_UNK Reset__14VICameraEffect(void *);            /* extern */
M2C_UNK SetCamera__11VIFlyCameraR8VICameraR7VIScene(void *, s32, s32); /* extern */

s32 Init__11VIFlyCameraRC7VIVect3T1R8VICameraR7VIScene(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    s64 temp_2;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_3;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    M2C_FIELD(arg0, s32 *, 0xD8) = 0x20;
    M2C_FIELD(arg0, f32 *, 0xE0) = 45.0f;
    M2C_FIELD(arg0, f32 *, 0xE8) = 1.5707961f;
    M2C_FIELD(arg0, f32 *, 0xF0) = 0.01f;
    M2C_FIELD(arg0, s32 *, 0xF8) = -1;
    M2C_FIELD(arg0, f32 *, 0xE4) = 1.5707961f;
    M2C_FIELD(arg0, f32 *, 0xEC) = 0.01f;
    M2C_FIELD(arg0, f32 *, 0xF4) = 0.01f;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0xC8;
    temp_2 = GetTime__7VIScene(arg4, -1);
    temp_3 = arg0 + 0x90;
    temp_5 = arg0 + 0x9C;
    temp_8 = arg0 + 0xCC;
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_6 = arg0 + 0xB4;
    temp_7 = arg0 + 0x30;
    temp_9 = arg0 + 0x3C;
    temp_11 = arg0 + 0xA8;
    temp_10 = arg0 + 0x48;
    M2C_FIELD(arg0, s64 *, 0x88) = temp_2;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    temp_12 = arg0 + 0x54;
    M2C_FIELD(arg0, s64 *, 0x28) = temp_2;
    temp_14 = arg0 + 0xC0;
    temp_13 = arg0 + 0x60;
    temp_15 = arg0 + 0x6C;
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xB4) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xCC) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x90);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x9C);
    M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
    M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg0, f32 *, 0xA8);
    M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg0, f32 *, 0xB4);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg0, f32 *, 0xC0);
    M2C_FIELD(temp_13, f32 *, 4) = (f32) M2C_FIELD(temp_14, f32 *, 4);
    M2C_FIELD(temp_13, f32 *, 8) = (f32) M2C_FIELD(temp_14, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(arg0, f32 *, 0xCC);
    M2C_FIELD(temp_15, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
    M2C_FIELD(temp_15, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
    InitCameraIntermediate__11VIFlyCamera(arg0, temp_5, temp_6, temp_7, temp_8, temp_9, temp_10, temp_11);
    SetCamera__11VIFlyCameraR8VICameraR7VIScene(arg0, arg3, arg4);
    Reset__14VICameraEffect(arg0 + 0xFC);
    return 0;
}
