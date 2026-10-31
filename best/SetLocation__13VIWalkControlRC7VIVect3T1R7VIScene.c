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
M2C_UNK InitIntermediate__13VIWalkControl(void *, void *, void *, void *, void *, void *, void *, void *); /* extern */

s32 SetLocation__13VIWalkControlRC7VIVect3T1R7VIScene(void *arg0, void *arg1, void *arg2, s32 arg3) {
    s32 temp_18;
    s64 temp_2;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_20;
    void *temp_21;
    void *temp_22;
    void *temp_23;
    void *temp_3;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_20 = arg0 + 0xD4;
    temp_21 = arg0 + 0xE0;
    temp_22 = arg0 + 0xEC;
    temp_23 = arg0 + 0x10C;
    temp_18 = M2C_FIELD(arg0, s32 *, 0x180);
    temp_2 = GetTime__7VIScene(arg3);
    temp_5 = arg0 + 0x138;
    temp_6 = arg0 + 0x150;
    M2C_FIELD(arg0, f32 *, 0x138) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_10 = arg0 + 0x168;
    temp_3 = arg0 + 0x144;
    temp_7 = arg0 + 0x15C;
    temp_11 = arg0 + 0x174;
    temp_14 = arg0 + 0x194;
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    temp_12 = arg0 + 0xB0;
    M2C_FIELD(arg0, s64 *, 0x130) = temp_2;
    temp_13 = arg0 + 0xBC;
    temp_15 = arg0 + 0xC8;
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    temp_8 = arg0 + 0xA8;
    M2C_FIELD(arg0, f32 *, 0x150) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 0.0f;
    temp_9 = arg0 + 0x130;
    M2C_FIELD(temp_6, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x168) = 0.0f;
    M2C_FIELD(temp_10, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_10, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x144) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x148) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x14C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x15C) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x174) = 0.0f;
    M2C_FIELD(temp_11, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_11, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x18C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x184) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x190) = (f32) M2C_FIELD(arg0, f32 *, 0x144);
    M2C_FIELD(arg0, f32 *, 0x194) = 0.0f;
    M2C_FIELD(temp_14, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_14, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, s64 *, 0xA8) = temp_2;
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) ((temp_18 & 0x100) | 1);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) M2C_FIELD(arg0, f32 *, 0x138);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) M2C_FIELD(arg0, f32 *, 0x144);
    M2C_FIELD(temp_13, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_13, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(arg0, f32 *, 0x150);
    M2C_FIELD(temp_15, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_15, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) M2C_FIELD(arg0, f32 *, 0x15C);
    M2C_FIELD(temp_20, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_20, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(arg0, f32 *, 0x168);
    M2C_FIELD(temp_21, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_21, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) M2C_FIELD(arg0, f32 *, 0x174);
    M2C_FIELD(temp_8, s32 *, 0x50) = (s32) M2C_FIELD(temp_9, s32 *, 0x50);
    M2C_FIELD(temp_22, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_8, s32 *, 0x58) = (s32) M2C_FIELD(temp_9, s32 *, 0x58);
    M2C_FIELD(temp_22, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(temp_8, f32 *, 0x54) = (f32) M2C_FIELD(temp_9, f32 *, 0x54);
    M2C_FIELD(temp_8, f32 *, 0x5C) = (f32) M2C_FIELD(temp_9, f32 *, 0x5C);
    M2C_FIELD(temp_8, f32 *, 0x60) = (f32) M2C_FIELD(temp_9, f32 *, 0x60);
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) M2C_FIELD(arg0, f32 *, 0x194);
    M2C_FIELD(temp_23, f32 *, 4) = (f32) M2C_FIELD(temp_14, f32 *, 4);
    M2C_FIELD(temp_23, f32 *, 8) = (f32) M2C_FIELD(temp_14, f32 *, 8);
    InitIntermediate__13VIWalkControl(arg0, temp_5, temp_6, temp_7, temp_8, temp_9, temp_10, temp_11);
    return 0;
}
