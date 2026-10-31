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

s64 GetTime__7VIScene(s32);                         /* extern */
M2C_UNK InitCameraIntermediate__12VIWalkCameraR7VIScene(void *, s32, void *, void *, void *, void *, void *, void *); /* extern */
M2C_UNK SetCamera__12VIWalkCameraR8VICameraR7VIScenei(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK SetLocation__13VIWalkControlRC7VIVect3T1R7VIScene(s32); /* extern */

s32 SetLocation__12VIWalkCameraRC7VIVect3T1R8VICameraR7VIScene(void *arg0, void *arg1, s32 arg3, s32 arg4) {
    s64 temp_2;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    SetLocation__13VIWalkControlRC7VIVect3T1R7VIScene(arg4);
    temp_2 = GetTime__7VIScene(arg4);
    M2C_FIELD(arg0, s32 *, 0x200) = 0;
    temp_10 = arg0 + 0x204;
    temp_8 = arg0 + 0x210;
    temp_9 = arg0 + 0x21C;
    M2C_FIELD(arg0, f32 *, 0x204) = 0.0f;
    temp_11 = arg0 + 0x234;
    temp_12 = arg0 + 0x1AC;
    temp_14 = arg0 + 0x1B8;
    temp_7 = arg0 + 0x1F8;
    temp_6 = arg0 + 0x1A0;
    M2C_FIELD(arg0, f32 *, 0x208) = (f32) M2C_FIELD(arg0, f32 *, 0x268);
    temp_13 = arg0 + 0x1C4;
    M2C_FIELD(arg0, f32 *, 0x210) = 0.0f;
    temp_15 = arg0 + 0x1DC;
    M2C_FIELD(temp_8, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x21C) = 0.0f;
    M2C_FIELD(temp_9, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_9, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x22C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x230) = 0.0f;
    M2C_FIELD(temp_6, s32 *, 8) = (s32) M2C_FIELD(temp_7, s32 *, 8);
    M2C_FIELD(arg0, s64 *, 0x1F8) = temp_2;
    M2C_FIELD(arg0, f32 *, 0x234) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, s64 *, 0x1A0) = temp_2;
    M2C_FIELD(temp_11, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_11, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x244) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x240) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1AC) = (f32) M2C_FIELD(arg0, f32 *, 0x204);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x1B8) = (f32) M2C_FIELD(arg0, f32 *, 0x210);
    M2C_FIELD(temp_14, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
    M2C_FIELD(temp_14, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x1C4) = (f32) M2C_FIELD(arg0, f32 *, 0x21C);
    M2C_FIELD(temp_13, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    M2C_FIELD(temp_13, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    M2C_FIELD(temp_6, f32 *, 0x30) = (f32) M2C_FIELD(temp_7, f32 *, 0x30);
    M2C_FIELD(temp_6, f32 *, 0x34) = (f32) M2C_FIELD(temp_7, f32 *, 0x34);
    M2C_FIELD(temp_6, f32 *, 0x38) = (f32) M2C_FIELD(temp_7, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x1DC) = (f32) M2C_FIELD(arg0, f32 *, 0x234);
    M2C_FIELD(temp_15, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_15, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(temp_6, f32 *, 0x48) = (f32) M2C_FIELD(temp_7, f32 *, 0x48);
    M2C_FIELD(temp_6, f32 *, 0x4C) = (f32) M2C_FIELD(temp_7, f32 *, 0x4C);
    InitCameraIntermediate__12VIWalkCameraR7VIScene(arg0, arg4, temp_6, temp_7, temp_8, temp_9, temp_10, temp_11);
    SetCamera__12VIWalkCameraR8VICameraR7VIScenei(arg0, arg3, arg4, 0);
    return 0;
}
