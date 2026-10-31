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

void __10VIMatrix33RC10VIMatrix33(void *arg0, void *arg1) {
    s32 var_3;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *var_2;

    var_2 = arg0;
    var_3 = 2;
    do {
        var_3 -= 1;
        M2C_FIELD(var_2, f32 *, 0) = 0.0f;
        M2C_FIELD(var_2, f32 *, 4) = 0.0f;
        M2C_FIELD(var_2, f32 *, 8) = 0.0f;
        var_2 += 0xC;
    } while (var_3 != -1);
    temp_2 = arg1 + 0xC;
    temp_3 = arg0 + 0xC;
    temp_5 = arg1 + 0x18;
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_4 = arg0 + 0x18;
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
}
