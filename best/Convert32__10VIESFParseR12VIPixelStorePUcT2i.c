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

M2C_UNK memcpy(u16 *, void *, s32);                 /* extern */

s32 Convert32__10VIESFParseR12VIPixelStorePUcT2i(s32 *arg1, void *arg2, u16 *arg3, s32 arg4) {
    s32 temp_5;
    s32 var_8;
    u16 *var_4;
    u16 temp_3;
    u16 temp_3_2;
    u16 temp_3_3;
    u8 temp_2;
    u8 temp_2_2;
    void *var_5;
    void *var_5_2;
    void *var_5_3;

    var_8 = arg4;
    temp_5 = *arg1;
    var_4 = arg3;
    if (temp_5 != 3) {
        if (temp_5 < 4) {
            if (temp_5 != 2) {
                return -1;
            }
            memcpy(var_4, arg2, var_8 * 4);
            goto block_20;
        }
        switch (temp_5) {                           /* irregular */
        case 6:
            var_5 = arg2;
            if (var_8 > 0) {
                do {
                    var_8 -= 1;
                    M2C_FIELD(var_4, u8 *, 3) = (u8) M2C_FIELD(var_5, u8 *, 3);
                    M2C_FIELD(var_4, u8 *, 2) = (u8) M2C_FIELD(var_5, u8 *, 0);
                    M2C_FIELD(var_4, u8 *, 1) = (u8) M2C_FIELD(var_5, u8 *, 1);
                    temp_2 = M2C_FIELD(var_5, u8 *, 2);
                    var_5 += 4;
                    M2C_FIELD(var_4, u8 *, 0) = temp_2;
                    var_4 += 4;
                } while (var_8 > 0);
            }
            goto block_20;
        case 5:
            var_5_2 = arg2;
            if (var_8 > 0) {
                do {
                    var_8 -= 1;
                    temp_3 = (*var_4 & 0xFFE0) | ((u8) M2C_FIELD(var_5_2, u8 *, 0) >> 3);
                    *var_4 = temp_3;
                    temp_3_2 = (temp_3 & 0xFC1F) | (((u8) M2C_FIELD(var_5_2, u8 *, 1) >> 3) << 5);
                    *var_4 = temp_3_2;
                    temp_3_3 = (temp_3_2 & 0x83FF) | (((u8) M2C_FIELD(var_5_2, u8 *, 2) >> 3) << 0xA);
                    *var_4 = temp_3_3;
                    temp_2_2 = M2C_FIELD(var_5_2, u8 *, 3);
                    var_5_2 += 4;
                    *var_4 = (temp_3_3 & 0x7FFF) | ((temp_2_2 >> 7) << 0xF);
                    var_4 += 2;
                } while (var_8 > 0);
            }
            goto block_20;
        default:
            return -1;
        }
    } else {
        var_5_3 = arg2;
        if (var_8 > 0) {
            do {
                M2C_FIELD(var_4, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_5_3, M2C_UNK *, 0));
                var_8 -= 1;
                var_5_3 += 4;
                M2C_FIELD(var_4, s8 *, 3) = -1;
                var_4 += 4;
            } while (var_8 > 0);
        }
block_20:
        return 0;
    }
}
