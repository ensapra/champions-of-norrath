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

void __13VIWalkControl(void *arg0) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_19;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_16 = arg0 + 0x150;
    temp_17 = arg0 + 0x15C;
    temp_18 = arg0 + 0x168;
    temp_19 = arg0 + 0x194;
    temp_2 = arg0 + 0x74;
    temp_3 = arg0 + 0x80;
    temp_5 = arg0 + 0x8C;
    temp_6 = arg0 + 0x98;
    temp_7 = arg0 + 0xB0;
    temp_8 = arg0 + 0xBC;
    temp_9 = arg0 + 0xC8;
    temp_10 = arg0 + 0xD4;
    temp_11 = arg0 + 0xE0;
    temp_12 = arg0 + 0xEC;
    temp_13 = arg0 + 0x10C;
    temp_14 = arg0 + 0x138;
    temp_15 = arg0 + 0x144;
    temp_4 = arg0 + 0x174;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x74) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x80) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x8C) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x98) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xB0) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xBC) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_9, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xC8) = 0.0f;
    M2C_FIELD(temp_9, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_10, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xD4) = 0.0f;
    M2C_FIELD(temp_10, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_11, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xE0) = 0.0f;
    M2C_FIELD(temp_11, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_12, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xEC) = 0.0f;
    M2C_FIELD(temp_12, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_13, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x10C) = 0.0f;
    M2C_FIELD(temp_13, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x138) = 0.0f;
    M2C_FIELD(temp_14, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_14, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_15, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x144) = 0.0f;
    M2C_FIELD(temp_15, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_16, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x150) = 0.0f;
    M2C_FIELD(temp_16, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_17, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x15C) = 0.0f;
    M2C_FIELD(temp_17, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_18, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x168) = 0.0f;
    M2C_FIELD(temp_18, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_4, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x174) = 0.0f;
    M2C_FIELD(temp_4, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_19, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x194) = 0.0f;
    M2C_FIELD(temp_19, f32 *, 4) = 0.0f;
}
