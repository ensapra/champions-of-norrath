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

void func_0015D858(void *arg0) {
    s16 temp_3;
    s16 temp_4_2;
    s16 temp_5_2;
    s16 temp_7;
    s16 temp_8_2;
    s16 temp_9_2;
    s32 temp_10;
    s32 temp_10_2;
    s32 temp_12;
    s32 temp_16;
    s32 temp_24;
    s32 temp_4;
    s32 temp_5;
    s32 temp_6;
    s32 temp_6_2;
    s32 temp_8;
    s32 temp_9;
    s32 temp_lo;
    s32 var_10;
    s32 var_13;
    s32 var_14;
    s32 var_15;
    s32 var_2;
    s32 var_2_2;
    s32 var_3;
    s32 var_4;
    s32 var_4_2;
    s32 var_8;
    s64 temp_3_2;
    void *temp_11;
    void *temp_25;
    void *temp_2;

    temp_25 = arg0 + 0x910;
    var_15 = M2C_FIELD(temp_25, s32 *, 0x3D0);
    var_14 = M2C_FIELD(temp_25, s32 *, 0x3D4);
    temp_24 = M2C_FIELD(arg0, s32 *, 0x5AC);
    temp_4 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_8 = (var_15 + var_14) * 2;
    temp_2 = temp_25 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x1D0);
    temp_11 = temp_2 + 0x150;
    var_13 = M2C_FIELD(temp_25, s32 *, 0x3D8);
    var_10 = M2C_FIELD(temp_25, s32 *, 0x3DC);
    if (temp_24 < temp_8) {
        var_15 = (s32) (var_15 * temp_24) / temp_8;
        var_14 = (s32) (var_14 * temp_24) / temp_8;
    }
    temp_5 = M2C_FIELD(arg0, s32 *, 0x5B0);
    temp_6 = (var_13 + var_10) * 2;
    var_2 = var_13 + var_10;
    if (temp_5 < temp_6) {
        var_13 = (s32) (var_13 * temp_5) / temp_6;
        var_10 = (s32) (var_10 * temp_5) / temp_6;
        var_2 = var_13 + var_10;
    }
    temp_16 = (s32) (temp_5 - (var_2 * 2)) >> 1;
    temp_10 = (temp_16 * 2) + var_13 + var_10;
    temp_6_2 = (s32) (temp_24 - ((var_15 + var_14) * 2)) >> 1;
    temp_7 = ((M2C_FIELD(arg0, s32 *, 0x5A0) + temp_4 + var_15) - var_14) + (temp_24 >> 1) + M2C_FIELD(arg0, s32 *, 0x4DC);
    temp_5_2 = ((M2C_FIELD(arg0, s32 *, 0x5A4) + temp_4 + var_13) - var_10) + (temp_5 >> 1) + M2C_FIELD(arg0, s32 *, 0x4E0);
    if (temp_10 > 0) {
        temp_12 = M2C_FIELD(temp_25, s32 *, 0x42C);
        temp_9 = M2C_FIELD(temp_25, s32 *, 0x428);
        temp_lo = (s32) (((temp_6_2 * 2) + var_15 + var_14) * 0x3E8) / temp_10;
        var_8 = M2C_FIELD(temp_25, s32 *, 0x418);
        switch (temp_12) {                          /* irregular */
        case 2:
        case 0:
            var_4 = temp_9 * 0x10;
            if (var_8 >= temp_lo) {
                var_2_2 = temp_6_2 + var_15;
block_15:
                var_3 = var_2_2 - var_4;
                var_4_2 = (s32) (var_3 * 0x3E8) / var_8;
            } else {
block_16:
                var_4_2 = (temp_16 + var_13) - var_4;
                var_3 = (s32) (var_4_2 * var_8) / 1000;
            }
            break;
        case 1:
            /* fallthrough */
        default:
            var_4 = temp_9 * 0x10;
            var_8 = 0xF4240 / var_8;
            if (var_8 >= temp_lo) {
                var_2_2 = temp_6_2 + var_15;
                goto block_15;
            }
            goto block_16;
        }
        temp_8_2 = temp_5_2 + var_4_2;
        temp_9_2 = temp_7 + var_3;
        temp_3 = temp_7 - var_3;
        temp_4_2 = temp_5_2 - var_4_2;
        if (temp_12 != 1) {
            if (temp_12 < 2) {
                if (temp_12 == 0) {
                    M2C_FIELD(temp_11, s16 *, 0x30) = temp_3;
                    M2C_FIELD(temp_11, s16 *, 0x52) = temp_4_2;
                    M2C_FIELD(temp_11, s16 *, 0x70) = temp_9_2;
                    M2C_FIELD(temp_11, s16 *, 0x72) = temp_8_2;
                    M2C_FIELD(temp_11, s16 *, 0x10) = temp_3;
                    M2C_FIELD(temp_11, s16 *, 0x12) = temp_4_2;
                    M2C_FIELD(temp_11, s16 *, 0x32) = temp_8_2;
                    M2C_FIELD(temp_11, s16 *, 0x50) = temp_9_2;
                } else {
                    M2C_FIELD(temp_11, s16 *, 0x70) = temp_3;
                    goto block_30;
                }
            } else if (temp_12 == 2) {
                M2C_FIELD(temp_11, s16 *, 0x50) = temp_3;
                M2C_FIELD(temp_11, s16 *, 0x32) = temp_4_2;
                M2C_FIELD(temp_11, s16 *, 0x10) = temp_9_2;
                M2C_FIELD(temp_11, s16 *, 0x12) = temp_8_2;
                M2C_FIELD(temp_11, s16 *, 0x70) = temp_3;
                M2C_FIELD(temp_11, s16 *, 0x72) = temp_4_2;
                M2C_FIELD(temp_11, s16 *, 0x52) = temp_8_2;
                M2C_FIELD(temp_11, s16 *, 0x30) = temp_9_2;
            } else {
                M2C_FIELD(temp_11, s16 *, 0x70) = temp_3;
block_30:
                M2C_FIELD(temp_11, s16 *, 0x12) = temp_4_2;
                M2C_FIELD(temp_11, s16 *, 0x50) = temp_9_2;
                M2C_FIELD(temp_11, s16 *, 0x52) = temp_8_2;
                M2C_FIELD(temp_11, s16 *, 0x30) = temp_3;
                M2C_FIELD(temp_11, s16 *, 0x32) = temp_4_2;
                M2C_FIELD(temp_11, s16 *, 0x72) = temp_8_2;
                M2C_FIELD(temp_11, s16 *, 0x10) = temp_9_2;
            }
        } else {
            M2C_FIELD(temp_11, s16 *, 0x10) = temp_3;
            M2C_FIELD(temp_11, s16 *, 0x72) = temp_4_2;
            M2C_FIELD(temp_11, s16 *, 0x30) = temp_9_2;
            M2C_FIELD(temp_11, s16 *, 0x32) = temp_8_2;
            M2C_FIELD(temp_11, s16 *, 0x50) = temp_3;
            M2C_FIELD(temp_11, s16 *, 0x52) = temp_4_2;
            M2C_FIELD(temp_11, s16 *, 0x12) = temp_8_2;
            M2C_FIELD(temp_11, s16 *, 0x70) = temp_9_2;
        }
    } else {
        M2C_FIELD(temp_11, s16 *, 0x70) = temp_7;
        M2C_FIELD(temp_11, s16 *, 0x72) = temp_5_2;
        M2C_FIELD(temp_11, s16 *, 0x10) = temp_7;
        M2C_FIELD(temp_11, s16 *, 0x12) = temp_5_2;
        M2C_FIELD(temp_11, s16 *, 0x30) = temp_7;
        M2C_FIELD(temp_11, s16 *, 0x32) = temp_5_2;
        M2C_FIELD(temp_11, s16 *, 0x50) = temp_7;
        M2C_FIELD(temp_11, s16 *, 0x52) = temp_5_2;
    }
    temp_10_2 = ((1 << M2C_FIELD(temp_25, s32 *, 0x410)) * 0x10) & 0x3FFF;
    temp_3_2 = (((1 << M2C_FIELD(temp_25, s32 *, 0x414)) * 0x10) & 0x3FFF) << 0x10;
    M2C_FIELD(temp_11, s64 *, 0x60) = (s64) ((((M2C_FIELD(temp_11, s64 *, 0x60) & ~0x3FFF) | temp_10_2) & 0xC000FFFF) | temp_3_2);
    M2C_FIELD(temp_2, s64 *, 0x150) = (s64) (M2C_FIELD(temp_2, s64 *, 0x150) & ~0x3FFF & 0xC000FFFF);
    M2C_FIELD(temp_11, s64 *, 0x20) = (s64) ((M2C_FIELD(temp_11, s64 *, 0x20) & ~0x3FFF & 0xC000FFFF) | temp_3_2);
    M2C_FIELD(temp_11, s64 *, 0x40) = (s64) (((M2C_FIELD(temp_11, s64 *, 0x40) & ~0x3FFF) | temp_10_2) & 0xC000FFFF);
}
