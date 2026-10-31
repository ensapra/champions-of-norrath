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

s32 rand();                                         /* extern */

void Reset__6VIBolt(void *arg0) {
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_lo_6;
    s32 var_18;
    s32 var_18_2;
    s32 var_19;
    s32 var_19_2;
    s32 var_20;
    s32 var_20_2;
    void *temp_18;
    void *temp_18_2;
    void *var_16;
    void *var_16_2;
    void *var_16_3;
    void *var_16_4;
    void *var_16_5;
    void *var_16_6;

    var_16 = arg0 + 4;
    var_18 = 0x10;
    M2C_FIELD(arg0, s32 *, 0x19C) = 3;
    M2C_FIELD(arg0, f32 *, 0x1A4) = 0.64f;
    M2C_FIELD(arg0, f32 *, 0x1A8) = 0.57f;
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    do {
        var_18 -= 1;
        M2C_FIELD(var_16, f32 *, 0) = (f32) ((f32) (((rand() / 131) & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(arg0, f32 *, 0x1A8));
        temp_lo = rand() / 131;
        M2C_FIELD(var_16, s32 *, 8) = 0;
        M2C_FIELD(var_16, f32 *, 4) = (f32) ((f32) ((temp_lo & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(arg0, f32 *, 0x1A8));
        var_16 += 0xC;
    } while (var_18 >= 0);
    var_16_2 = arg0 + 0xD0;
    var_18_2 = 0x10;
    do {
        var_18_2 -= 1;
        M2C_FIELD(var_16_2, f32 *, 0) = (f32) ((f32) (((rand() / 131) & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(arg0, f32 *, 0x1A8));
        temp_lo_2 = rand() / 131;
        M2C_FIELD(var_16_2, s32 *, 8) = 0;
        M2C_FIELD(var_16_2, f32 *, 4) = (f32) ((f32) ((temp_lo_2 & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(arg0, f32 *, 0x1A8));
        var_16_2 += 0xC;
    } while (var_18_2 >= 0);
    temp_18 = arg0 + 0x1AC;
    M2C_FIELD(temp_18, s32 *, 0x19C) = 3;
    M2C_FIELD(temp_18, f32 *, 0x1A4) = 10.24f;
    var_16_3 = arg0 + 0x1B0;
    M2C_FIELD(temp_18, f32 *, 0x1A8) = 0.14999999f;
    var_20 = 0x10;
    M2C_FIELD(temp_18, s32 *, 0x1A0) = 0;
    do {
        var_20 -= 1;
        M2C_FIELD(var_16_3, f32 *, 0) = (f32) ((f32) (((rand() / 131) & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(temp_18, f32 *, 0x1A8));
        temp_lo_3 = rand() / 131;
        M2C_FIELD(var_16_3, s32 *, 8) = 0;
        M2C_FIELD(var_16_3, f32 *, 4) = (f32) ((f32) ((temp_lo_3 & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(temp_18, f32 *, 0x1A8));
        var_16_3 += 0xC;
    } while (var_20 >= 0);
    var_16_4 = temp_18 + 0xD0;
    var_20_2 = 0x10;
    do {
        var_20_2 -= 1;
        M2C_FIELD(var_16_4, f32 *, 0) = (f32) ((f32) (((rand() / 131) & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(temp_18, f32 *, 0x1A8));
        temp_lo_4 = rand() / 131;
        M2C_FIELD(var_16_4, s32 *, 8) = 0;
        M2C_FIELD(var_16_4, f32 *, 4) = (f32) ((f32) ((temp_lo_4 & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(temp_18, f32 *, 0x1A8));
        var_16_4 += 0xC;
    } while (var_20_2 >= 0);
    temp_18_2 = arg0 + 0x358;
    M2C_FIELD(temp_18_2, s32 *, 0x19C) = 3;
    var_16_5 = arg0 + 0x35C;
    M2C_FIELD(temp_18_2, f32 *, 0x1A4) = 44.0f;
    M2C_FIELD(temp_18_2, f32 *, 0x1A8) = 0.08f;
    var_19 = 0x10;
    M2C_FIELD(temp_18_2, s32 *, 0x1A0) = 0;
    do {
        var_19 -= 1;
        M2C_FIELD(var_16_5, f32 *, 0) = (f32) ((f32) (((rand() / 131) & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(temp_18_2, f32 *, 0x1A8));
        temp_lo_5 = rand() / 131;
        M2C_FIELD(var_16_5, s32 *, 8) = 0;
        M2C_FIELD(var_16_5, f32 *, 4) = (f32) ((f32) ((temp_lo_5 & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(temp_18_2, f32 *, 0x1A8));
        var_16_5 += 0xC;
    } while (var_19 >= 0);
    var_16_6 = temp_18_2 + 0xD0;
    var_19_2 = 0x10;
    do {
        var_19_2 -= 1;
        M2C_FIELD(var_16_6, f32 *, 0) = (f32) ((f32) (((rand() / 131) & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(temp_18_2, f32 *, 0x1A8));
        temp_lo_6 = rand() / 131;
        M2C_FIELD(var_16_6, s32 *, 8) = 0;
        M2C_FIELD(var_16_6, f32 *, 4) = (f32) ((f32) ((temp_lo_6 & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(temp_18_2, f32 *, 0x1A8));
        var_16_6 += 0xC;
    } while (var_19_2 >= 0);
}
