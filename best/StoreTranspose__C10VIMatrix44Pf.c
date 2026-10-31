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

void StoreTranspose__C10VIMatrix44Pf(void *arg0, void *arg1) {
    void *temp_5;
    void *temp_5_10;
    void *temp_5_11;
    void *temp_5_12;
    void *temp_5_13;
    void *temp_5_2;
    void *temp_5_3;
    void *temp_5_4;
    void *temp_5_5;
    void *temp_5_6;
    void *temp_5_7;
    void *temp_5_8;
    void *temp_5_9;

    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
    temp_5 = arg1 + 4;
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    temp_5_2 = temp_5 + 4;
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    temp_5_3 = temp_5_2 + 4;
    M2C_FIELD(temp_5_2, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    temp_5_4 = temp_5_3 + 4;
    M2C_FIELD(temp_5_3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    temp_5_5 = temp_5_4 + 4;
    M2C_FIELD(temp_5_4, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    temp_5_6 = temp_5_5 + 4;
    M2C_FIELD(temp_5_5, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    temp_5_7 = temp_5_6 + 4;
    M2C_FIELD(temp_5_6, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    temp_5_8 = temp_5_7 + 4;
    M2C_FIELD(temp_5_7, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 8);
    temp_5_9 = temp_5_8 + 4;
    M2C_FIELD(temp_5_8, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    temp_5_10 = temp_5_9 + 4;
    M2C_FIELD(temp_5_9, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    temp_5_11 = temp_5_10 + 4;
    M2C_FIELD(temp_5_10, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    temp_5_12 = temp_5_11 + 4;
    M2C_FIELD(temp_5_11, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    temp_5_13 = temp_5_12 + 4;
    M2C_FIELD(temp_5_12, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(temp_5_13, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD((temp_5_13 + 4), f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
}
