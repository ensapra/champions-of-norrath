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

extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s8, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011D64E0;

s32 xmlCopyCharMultiByte(s8 *arg0, s8 arg1) {
    s32 temp_2;
    s32 var_2;
    s32 var_3;
    s8 *var_4;
    s8 var_2_2;

    if (arg1 >= 0x80) {
        if (arg1 < 0x800) {
            var_3 = 0;
            var_2_2 = (arg1 >> 6) | 0xC0;
            goto block_9;
        }
        if (arg1 > 0xFFFF) {
            if (arg1 <= 0x10FFFF) {
                var_3 = 0xC;
                var_2_2 = (arg1 >> 0x12) | 0xF0;
                goto block_9;
            }
            D_0118EDD0(D_0118EDD4, &D_011D64E0, arg1, D_0118EDD0);
            return 0;
        }
        var_3 = 6;
        var_2_2 = (arg1 >> 0xC) | 0xE0;
block_9:
        *arg0 = var_2_2;
        var_4 = arg0 + 1;
        var_2 = var_4 - arg0;
        if (var_3 >= 0) {
            do {
                temp_2 = arg1 >> var_3;
                var_3 -= 6;
                *var_4 = (temp_2 & 0x3F) | ~0x7F;
                var_4 += 1;
            } while (var_3 >= 0);
            return var_4 - arg0;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return var_2;
    }
    *arg0 = arg1;
    var_2 = 1;
    return var_2;
}
