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

extern M2C_UNK huffmanTemp;

u16 func_00189C90(void **arg0) {
    s32 temp_2;
    s32 temp_4;
    s32 var_5;
    s32 var_7;
    s32 var_8;
    u16 *var_2_2;
    u8 temp_3;
    u8 temp_3_2;
    u8 var_2;
    void *temp_6;
    void *var_6;

    temp_6 = *arg0;
    temp_3 = M2C_FIELD(temp_6, u8 *, 0);
    var_6 = temp_6 + 1;
    if (temp_3 & 0x80) {
        var_2 = temp_3;
        if ((u32) ((temp_3 + 0x60) & 0xFF) >= 0x40U) {
            if (temp_3 >= 0xFDU) {
                goto block_3;
            }
            var_8 = 0;
            var_5 = 0;
            var_7 = 0;
            if ((u32) ((temp_3 + 0x7F) & 0xFF) < 0x1FU) {
                var_5 = ((temp_3 - 0x81) * 2) + 1;
            } else if ((u32) ((temp_3 + 0x20) & 0xFF) < 0x10U) {
                var_5 = (temp_3 * 2) - 0x181;
            } else if ((u32) ((temp_3 + 0x10) & 0xFF) < 0xDU) {
                temp_2 = (temp_3 - 0xF0) * 2;
                var_8 = 1;
                var_5 = (temp_3 >= 0xF4U) ? (temp_2 + 0x45) : (temp_2 + 7);
            }
            var_2_2 = &huffmanTemp + 0xCFE0;
            if (var_5 != 0) {
                temp_3_2 = M2C_FIELD(temp_6, u8 *, 1);
                temp_4 = temp_3_2 - 0x40;
                var_6 += 1;
                if ((u32) (temp_4 & 0xFF) < 0x3FU) {
                    var_7 = temp_3_2 - 0x3F;
                } else if ((u32) ((temp_3_2 + 0x80) & 0xFF) < 0x1FU) {
                    var_7 = temp_4;
                } else if ((u32) ((temp_3_2 + 0x61) & 0xFF) < 0x5EU) {
                    var_7 = temp_3_2 - 0x9E;
                    var_5 += 1;
                }
                if (var_8 != 0) {
                    if (var_5 == 7) {
                        var_5 = 1;
                    } else if (var_5 == 0xB) {
                        var_5 = 5;
                    } else {
                        var_5 = ((var_5 ^ 0x4D) == 0) ? 0xF : var_5;
                    }
                }
                var_2_2 = (u16 *)0x360000;
                if (var_5 != 0) {
                    if (var_7 != 0) {
                        var_2 = ((var_8 << 0xF) | ((var_5 + 0x20) << 8) | (var_7 + 0x20)) & 0xFFFF;
                    } else {
                        var_2_2 = (u16 *)0x360000;
                        goto block_28;
                    }
                } else {
                    goto block_28;
                }
            } else {
block_28:
                var_2 = (u8) *var_2_2;
            }
        }
    } else {
block_3:
        var_2 = temp_3;
    }
    *arg0 = var_6;
    return (u16) var_2;
}
