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

M2C_UNK memcpy(void *, u8 *, s32, s32);             /* extern */

s32 Convert8__10VIESFParseR12VIPixelStorePUcT2i(s32 arg0, s32 *arg1, u8 *arg2, void *arg3, s32 arg4) {
    u8 sp0;
    u8 sp1;
    u8 sp2;
    u8 sp3;
    s32 temp_5;
    s32 var_6;
    u8 *var_8;
    u8 temp_2;
    void *var_7;

    var_6 = arg4;
    temp_5 = *arg1;
    switch (temp_5) {                               /* irregular */
    case 1:
        memcpy(arg3, arg2, var_6, arg0);
block_6:
        return 0;
    case 6:
        sp0 = 0;
        sp3 = -1U;
        var_8 = arg2;
        sp1 = 0;
        var_7 = arg3;
        sp2 = 0;
        if (var_6 > 0) {
            do {
                temp_2 = *var_8;
                var_8 += 1;
                var_6 -= 1;
                sp0 = M2C_UNALIGNED32(M2C_FIELD(((temp_2 * 4) + arg0), M2C_UNK *, 0x28));
                M2C_FIELD(var_7, u8 *, 3) = sp3;
                M2C_FIELD(var_7, u8 *, 2) = sp0;
                M2C_FIELD(var_7, u8 *, 1) = sp1;
                M2C_FIELD(var_7, u8 *, 0) = sp2;
                var_7 += 4;
            } while (var_6 > 0);
        }
        goto block_6;
    default:
        return -1;
    }
}
