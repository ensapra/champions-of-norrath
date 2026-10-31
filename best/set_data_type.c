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

void set_data_type(void *arg0) {
    s32 temp_9;
    s32 var_6;
    s32 var_6_2;
    u16 *var_3;
    u16 *var_5;
    u16 *var_5_2;
    u16 temp_2;
    u16 temp_3;
    u16 temp_3_2;
    u32 var_2;
    u32 var_7;
    u32 var_8;

    var_8 = 0;
    var_7 = 0;
    temp_9 = arg0 + 4;
    var_3 = arg0 + 0xA4;
    var_6 = 6;
    do {
        temp_2 = *var_3;
        var_3 += 4;
        var_6 -= 1;
        var_7 += temp_2;
    } while (var_6 >= 0);
    var_6_2 = 7;
    var_5 = temp_9 + 0xBC;
    do {
        temp_3 = *var_5;
        var_5 += 4;
        var_6_2 += 1;
        var_8 += temp_3;
    } while (var_6_2 < 0x80);
    var_2 = var_8 >> 2;
    if (var_6_2 < 0x100) {
        var_5_2 = (var_6_2 * 4) + temp_9 + 0xA0;
        do {
            temp_3_2 = *var_5_2;
            var_5_2 += 4;
            var_6_2 += 1;
            var_7 += temp_3_2;
        } while (var_6_2 < 0x100);
        var_2 = var_8 >> 2;
    }
    M2C_FIELD(arg0, s8 *, 0x24) = (s8) (var_2 >= var_7);
}
