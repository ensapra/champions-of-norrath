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

M2C_UNK memcpy(s8 *, u8 *, s32, s32);               /* extern */

s32 Convert4__10VIESFParseR12VIPixelStorePUcT2i(s32 arg0, s32 *arg1, u8 *arg2, s8 *arg3, s32 arg4) {
    u8 sp0;
    u8 sp1;
    u8 sp2;
    u8 sp3;
    s32 temp_3;
    s32 var_8;
    u8 *var_4;
    u8 *var_5;
    u8 *var_6;
    u8 *var_7;

    var_8 = arg4;
    var_4 = arg3;
    temp_3 = *arg1;
    var_5 = arg2;
    if (temp_3 != 1) {
        if (temp_3 < 2) {
            if (temp_3 != 0) {
                return -1;
            }
            if (var_8 & 1) {
                memcpy(var_4, var_5, (var_8 >> 1) + 1, arg0);
            } else {
                memcpy(var_4, var_5, var_8 >> 1, arg0);
            }
            goto block_22;
        }
        if (temp_3 != 6) {
            return -1;
        }
        sp0 = 0;
        sp3 = -1U;
        var_6 = var_5;
        sp1 = 0;
        var_7 = var_4;
        sp2 = 0;
        if (var_8 > 0) {
            do {
                var_8 -= 1;
                sp0 = M2C_UNALIGNED32(M2C_FIELD((((*var_6 & 0xF) * 4) + arg0), M2C_UNK *, 0x28));
                M2C_FIELD(var_7, u8 *, 3) = sp3;
                M2C_FIELD(var_7, u8 *, 2) = sp0;
                M2C_FIELD(var_7, u8 *, 1) = sp1;
                M2C_FIELD(var_7, u8 *, 0) = sp2;
                var_7 += 4;
                if (var_8 > 0) {
                    var_8 -= 1;
                    sp0 = M2C_UNALIGNED32(M2C_FIELD(((((u8) *var_6 >> 4) * 4) + arg0), M2C_UNK *, 0x28));
                    M2C_FIELD(var_7, u8 *, 3) = sp3;
                    M2C_FIELD(var_7, u8 *, 2) = sp0;
                    M2C_FIELD(var_7, u8 *, 1) = sp1;
                    M2C_FIELD(var_7, u8 *, 0) = sp2;
                    var_7 += 4;
                }
                var_6 += 1;
            } while (var_8 > 0);
        }
        goto block_22;
    }
    if (var_8 > 0) {
        do {
            var_8 -= 1;
            *var_4 = *var_5 & 0xF;
            var_4 += 1;
            if (var_8 > 0) {
                var_8 -= 1;
                *var_4 = (u8) ((u8) *var_5 >> 4);
                var_4 += 1;
            }
            var_5 += 1;
        } while (var_8 > 0);
block_22:
    }
    return 0;
}
