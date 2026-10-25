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

extern u16 D_004804B8;
extern s32 D_004804BC;
extern s32 D_004804C0;
extern s32 D_004804C4;

u16 func_0019A300(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_4;
    s32 var_2;
    u16 temp_5;
    u16 var_6;

    temp_5 = arg1 & 0xFFFF;
    var_6 = 0;
    if (temp_5 != 0) {
        if (temp_5 == D_004804B8) {
            if ((D_004804C0 <= 0) || (temp_2 = D_004804C0 - 1, D_004804C0 = temp_2, (temp_2 <= 0))) {
                if (D_004804BC != 0) {
                    temp_2_2 = M2C_FIELD(arg0, s32 *, 0xFC) + 1;
                    M2C_FIELD(arg0, s32 *, 0xFC) = temp_2_2;
                    if (temp_2_2 >= 0xC9) {
                        M2C_FIELD(arg0, s32 *, 0xFC) = 0xC8;
                    }
                } else {
                    D_004804BC = 1;
                }
            }
        } else {
            goto block_9;
        }
    } else {
block_9:
        D_004804BC = 0;
        D_004804C0 = 0x1E;
        M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    }
    if (D_004804BC != 0) {
        temp_2_3 = D_004804C4 - 1;
        D_004804C4 = temp_2_3;
        if (temp_2_3 <= 0) {
            temp_4 = M2C_FIELD(arg0, s32 *, 0xFC);
            if (temp_4 >= 0x32) {
                if (temp_4 >= 0x64) {
                    var_2 = 1;
                    if (temp_4 >= 0x96) {
                        var_6 = temp_5;
                        if (temp_4 < 0xC8) {
                            var_2 = 1;
                            goto block_23;
                        }
                    } else {
                        goto block_23;
                    }
                } else {
                    var_2 = 2;
                    goto block_23;
                }
            } else {
                var_2 = 4;
block_23:
                D_004804C4 = var_2;
                var_6 = temp_5;
            }
        }
    }
    D_004804B8 = temp_5;
    return var_6;
}
