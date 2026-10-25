/* machine draft (m2c) for ee-gcc-2.96 -Os -G8, tried by autopilot */
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

M2C_UNK func_0015ACB0(s32, s32, M2C_UNK, s32, s32, M2C_UNK); /* extern */

s32 func_0015B72C(void *arg0) {
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_6;
    s32 temp_6_2;
    s32 temp_7;
    s32 temp_8;
    s32 temp_8_2;
    s32 var_17;
    s32 var_18;
    s32 var_4;
    s32 var_5;
    s32 var_9;
    void *temp_2;

    var_9 = 0;
    var_17 = 0;
    var_18 = 0;
    temp_6 = M2C_FIELD(arg0, s32 *, 0xBF0);
    var_4 = 0;
    if (temp_6 > 0) {
        var_5 = 0 * 8;
loop_2:
        temp_8 = M2C_FIELD(arg0, s32 *, 0xB80);
        temp_2 = ((var_5 + var_17) * 4) + temp_8;
        if (var_4 != 0) {
            if (!(M2C_FIELD(temp_2, s32 *, 4) & 0x50)) {
                temp_3 = M2C_FIELD(arg0, s32 *, 0xB8C);
                temp_6_2 = temp_3 < var_17;
                if (temp_3 >= var_18) {
                    if (temp_6_2 != 0) {
                        M2C_FIELD(arg0, s32 *, 0xB8C) = var_18;
                    } else {
                        goto block_8;
                    }
                } else if (temp_6_2 == 0) {
block_8:
                    M2C_FIELD(arg0, s32 *, 0xB8C) = (s32) (temp_3 - (var_17 - var_18));
                }
                func_0015ACB0(temp_8 + (var_18 * 0x24), temp_8 + ((var_5 + var_17) * 4), 0x24, M2C_FIELD(arg0, s32 *, 0xBF0) - var_17, temp_8, 0);
                M2C_FIELD(arg0, s32 *, 0xD0C) = 0;
                M2C_FIELD(arg0, s32 *, 0xBF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xBF0) - (var_17 - var_18));
                return 1;
            }
            goto block_12;
        }
        if (M2C_FIELD(temp_2, s32 *, 4) & 0x50) {
            var_4 = 1;
            var_18 = var_17;
        }
block_12:
        var_17 += 1;
        var_5 = var_17 * 8;
        if (var_17 >= temp_6) {
            goto block_13;
        }
        goto loop_2;
    }
block_13:
    if (var_4 != 0) {
        temp_7 = M2C_FIELD(arg0, s32 *, 0xBF0);
        if (var_17 == temp_7) {
            temp_3_2 = M2C_FIELD(arg0, s32 *, 0xB8C);
            temp_8_2 = M2C_FIELD(arg0, s32 *, 0xB80);
            if ((temp_3_2 >= var_18) || (temp_3_2 >= var_17)) {
                M2C_FIELD(arg0, s32 *, 0xB8C) = var_18;
            }
            func_0015ACB0(temp_8_2 + (var_18 * 0x24), temp_8_2 + (var_17 * 0x24), 0x24, temp_7 - var_17, temp_8_2, 0);
            var_9 = 1;
            M2C_FIELD(arg0, s32 *, 0xBF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xBF0) - (var_17 - var_18));
        }
    }
    M2C_FIELD(arg0, s32 *, 0xD0C) = 0;
    return var_9;
}
