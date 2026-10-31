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

M2C_UNK __7VILNode();                               /* extern */

void __18VISpellActiveEventP12VISpellEventP7VIScene(void *arg0, s32 arg1, s32 arg2) {
    s32 var_2;
    s32 var_3;
    s32 var_3_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *var_2_2;
    void *var_2_3;
    void *var_4;

    __7VILNode();
    temp_2 = arg0 + 0x14;
    temp_3 = arg0 + 0x20;
    temp_8 = arg0 + 0x2C;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x14) = 0.0f;
    var_4 = temp_8;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    var_2 = 1;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    do {
        var_2 -= 1;
        M2C_FIELD(var_4, f32 *, 0) = 0.0f;
        M2C_FIELD(var_4, f32 *, 4) = 0.0f;
        M2C_FIELD(var_4, f32 *, 8) = 0.0f;
        var_4 += 0xC;
    } while (var_2 != -1);
    temp_7 = arg0 + 0x44;
    var_2_2 = temp_7;
    var_3 = 1;
    do {
        var_3 -= 1;
        M2C_FIELD(var_2_2, f32 *, 0) = 0.0f;
        M2C_FIELD(var_2_2, f32 *, 4) = 0.0f;
        M2C_FIELD(var_2_2, f32 *, 8) = 0.0f;
        var_2_2 += 0xC;
    } while (var_3 != -1);
    temp_6 = arg0 + 0x5C;
    var_2_3 = temp_6;
    var_3_2 = 1;
    do {
        var_3_2 -= 1;
        M2C_FIELD(var_2_3, f32 *, 0) = 0.0f;
        M2C_FIELD(var_2_3, f32 *, 4) = 0.0f;
        M2C_FIELD(var_2_3, f32 *, 8) = 0.0f;
        var_2_3 += 0xC;
    } while (var_3_2 != -1);
    temp_2_2 = arg0 + 0x38;
    temp_5 = arg0 + 0x68;
    temp_3_2 = arg0 + 0x50;
    M2C_FIELD(arg0, s32 *, 0x74) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s32 *, 0x90) = -1;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = -1;
    M2C_FIELD(arg0, s32 *, 0x8C) = -1;
    M2C_FIELD(temp_8, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_2_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    M2C_FIELD(temp_2_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x44) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x50) = 0.0f;
    M2C_FIELD(temp_3_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x5C) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x68) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 4) = 0.0f;
}
