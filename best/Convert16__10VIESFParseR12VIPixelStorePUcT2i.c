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

M2C_UNK memcpy(void *, u8 *, s32);                  /* extern */

s32 Convert16__10VIESFParseR12VIPixelStorePUcT2i(s32 *arg1, u8 *arg2, void *arg3, s32 arg4) {
    s32 temp_5;
    s32 var_8;
    u16 temp_2;
    u16 temp_2_2;
    u16 temp_2_3;
    u8 *var_5;
    u8 *var_5_2;
    u8 *var_5_3;
    void *var_4;

    var_8 = arg4;
    temp_5 = *arg1;
    var_4 = arg3;
    if (temp_5 != 3) {
        if (temp_5 < 4) {
            if (temp_5 != 2) {
                return -1;
            }
            var_5 = arg2;
            if (var_8 > 0) {
                do {
                    var_8 -= 1;
                    M2C_FIELD(var_4, s8 *, 0) = (s8) (*var_5 * 8);
                    M2C_FIELD(var_4, s8 *, 1) = (s8) (((u16) *var_5 >> 2) & 0xF8);
                    M2C_FIELD(var_4, s8 *, 2) = (s8) (((u16) *var_5 >> 7) & 0xF8);
                    temp_2 = (u16) *var_5;
                    var_5 += 2;
                    M2C_FIELD(var_4, s8 *, 3) = (s8) ((temp_2 >> 0xF) << 7);
                    var_4 += 4;
                } while (var_8 > 0);
            }
            goto block_21;
        }
        switch (temp_5) {                           /* irregular */
        case 6:
            var_5_2 = arg2;
            if (var_8 > 0) {
                do {
                    var_8 -= 1;
                    M2C_FIELD(var_4, s8 *, 3) = (s8) (((u16) *var_5_2 >> 0xF) << 7);
                    M2C_FIELD(var_4, s8 *, 2) = (s8) ((u8) *var_5_2 * 8);
                    M2C_FIELD(var_4, s8 *, 1) = (s8) (((u16) *var_5_2 >> 2) & 0xF8);
                    temp_2_2 = *var_5_2;
                    var_5_2 += 2;
                    M2C_FIELD(var_4, s8 *, 0) = (s8) ((temp_2_2 >> 7) & 0xF8);
                    var_4 += 4;
                } while (var_8 > 0);
            }
            goto block_21;
        case 5:
            memcpy(var_4, arg2, var_8 * 2);
            goto block_21;
        default:
            return -1;
        }
    } else {
        var_5_3 = arg2;
        if (var_8 > 0) {
            do {
                var_8 -= 1;
                M2C_FIELD(var_4, s8 *, 0) = (s8) (*var_5_3 * 8);
                M2C_FIELD(var_4, s8 *, 1) = (s8) (((u16) *var_5_3 >> 2) & 0xF8);
                temp_2_3 = (u16) *var_5_3;
                var_5_3 += 2;
                M2C_FIELD(var_4, s8 *, 3) = -1;
                M2C_FIELD(var_4, s8 *, 2) = (s8) ((temp_2_3 >> 7) & 0xF8);
                var_4 += 4;
            } while (var_8 > 0);
        }
block_21:
        return 0;
    }
}
