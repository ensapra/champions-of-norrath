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

void scan_tree(void *arg0, void *arg1, s32 arg2) {
    s32 temp_11;
    s32 var_10;
    s32 var_3;
    s32 var_6;
    s32 var_9;
    u16 *temp_3;
    u16 *temp_3_2;
    u16 *var_5;
    u16 temp_7;
    u16 var_12;
    u16 var_8;

    var_8 = M2C_FIELD(arg1, u16 *, 2);
    var_12 = -1U;
    var_10 = 0;
    var_9 = 7;
    var_3 = 4;
    if (var_8 == 0) {
        var_9 = 0x8A;
        var_3 = 3;
    }
    M2C_FIELD(((arg2 * 4) + arg1), s16 *, 6) = -1;
    if (arg2 >= 0) {
        var_5 = arg1 + 6;
        var_6 = arg2 + 1;
        temp_11 = arg0 + 0xC;
        do {
            var_10 += 1;
            temp_7 = var_8;
            var_8 = *var_5;
            if ((var_10 >= var_9) || (temp_7 != var_8)) {
                if (var_10 < var_3) {
                    temp_3 = temp_11 + ((temp_7 * 4) + 0xA80);
                    *temp_3 += var_10;
                } else if (temp_7 != 0) {
                    if (temp_7 != var_12) {
                        temp_3_2 = temp_11 + ((temp_7 * 4) + 0xA80);
                        *temp_3_2 += 1;
                    }
                    M2C_FIELD(arg0, u16 *, 0xACC) = (u16) (M2C_FIELD(arg0, u16 *, 0xACC) + 1);
                } else if (var_10 >= 0xB) {
                    M2C_FIELD(arg0, u16 *, 0xAD4) = (u16) (M2C_FIELD(arg0, u16 *, 0xAD4) + 1);
                } else {
                    M2C_FIELD(arg0, u16 *, 0xAD0) = (u16) (M2C_FIELD(arg0, u16 *, 0xAD0) + 1);
                }
                var_10 = 0;
                var_12 = temp_7;
                if (var_8 == 0) {
                    var_9 = 0x8A;
                    var_3 = 3;
                } else if (temp_7 != var_8) {
                    var_9 = 7;
                    var_3 = 4;
                } else {
                    var_9 = 6;
                    var_3 = 3;
                }
            }
            var_6 -= 1;
            var_5 += 4;
        } while (var_6 != 0);
    }
}
