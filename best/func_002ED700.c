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

void func_002ED700(void *arg0) {
    s64 temp_4;
    s64 temp_4_2;
    s64 temp_4_3;
    s64 temp_4_4;
    s64 temp_4_5;
    s64 temp_4_6;
    s64 temp_4_7;
    s64 temp_4_8;
    s64 var_2;
    s64 var_2_2;
    s64 var_2_3;
    s64 var_2_4;
    s64 var_2_5;
    s64 var_2_6;
    s64 var_2_7;
    s64 var_2_8;
    void *temp_5;
    void *temp_5_2;
    void *temp_5_3;
    void *temp_5_4;
    void *temp_5_5;
    void *temp_5_6;

    temp_4 = (s64) (((s64) (M2C_FIELD(arg0, s64 *, 0) * 0x5000) >> 0xF) + 0x100) >> 9;
    if (temp_4 >= 0x20) {
        var_2 = 0x3F;
    } else {
        var_2 = (temp_4 < -0x20) ? 0 : (temp_4 + 0x20);
    }
    M2C_FIELD(arg0, s64 *, 0) = var_2;
    temp_5 = arg0 + 8;
    temp_4_2 = (s64) (((s64) (M2C_FIELD(arg0, s64 *, 8) * 0x5000) >> 0xF) + 0x100) >> 9;
    if (temp_4_2 >= 0x20) {
        var_2_2 = 0x3F;
    } else {
        var_2_2 = (temp_4_2 < -0x20) ? 0 : (temp_4_2 + 0x20);
    }
    M2C_FIELD(arg0, s64 *, 8) = var_2_2;
    temp_5_2 = temp_5 + 8;
    temp_4_3 = (s64) (((s64) (M2C_FIELD(temp_5, s64 *, 8) * 0x5000) >> 0xF) + 0x900) >> 9;
    if (temp_4_3 >= 0x10) {
        var_2_3 = 0x1F;
    } else {
        var_2_3 = (temp_4_3 < -0x10) ? 0 : (temp_4_3 + 0x10);
    }
    M2C_FIELD(temp_5, s64 *, 8) = var_2_3;
    temp_5_3 = temp_5_2 + 8;
    temp_4_4 = (s64) (((s64) (M2C_FIELD(temp_5_2, s64 *, 8) * 0x5000) >> 0xF) - 0x900) >> 9;
    if (temp_4_4 >= 0x10) {
        var_2_4 = 0x1F;
    } else {
        var_2_4 = (temp_4_4 < -0x10) ? 0 : (temp_4_4 + 0x10);
    }
    M2C_FIELD(temp_5_2, s64 *, 8) = var_2_4;
    temp_5_4 = temp_5_3 + 8;
    temp_4_5 = (s64) (((s64) (M2C_FIELD(temp_5_3, s64 *, 8) * 0x368C) >> 0xF) + 0x15E) >> 9;
    if (temp_4_5 >= 8) {
        var_2_5 = 0xF;
    } else {
        var_2_5 = (temp_4_5 < -8) ? 0 : (temp_4_5 + 8);
    }
    M2C_FIELD(temp_5_3, s64 *, 8) = var_2_5;
    temp_5_5 = temp_5_4 + 8;
    temp_4_6 = (s64) (((s64) (M2C_FIELD(temp_5_4, s64 *, 8) * 0x3C00) >> 0xF) - 0x600) >> 9;
    if (temp_4_6 >= 8) {
        var_2_6 = 0xF;
    } else {
        var_2_6 = (temp_4_6 < -8) ? 0 : (temp_4_6 + 8);
    }
    M2C_FIELD(temp_5_4, s64 *, 8) = var_2_6;
    temp_5_6 = temp_5_5 + 8;
    temp_4_7 = (s64) (((s64) (M2C_FIELD(temp_5_5, s64 *, 8) * 0x2156) >> 0xF) - 0x55) >> 9;
    if (temp_4_7 >= 4) {
        var_2_7 = 7;
    } else {
        var_2_7 = (temp_4_7 < -4) ? 0 : (temp_4_7 + 4);
    }
    M2C_FIELD(temp_5_5, s64 *, 8) = var_2_7;
    temp_4_8 = (s64) (((s64) (M2C_FIELD(temp_5_6, s64 *, 8) * 0x234C) >> 0xF) - 0x378) >> 9;
    if (temp_4_8 >= 4) {
        var_2_8 = 7;
    } else {
        var_2_8 = (temp_4_8 < -4) ? 0 : (temp_4_8 + 4);
    }
    M2C_FIELD(temp_5_6, s64 *, 8) = var_2_8;
}
