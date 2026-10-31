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

extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011D64E0;

s32 xmlCopyChar(s8 *arg1, s8 arg2) {
    s32 temp_2;
    s32 var_2;
    s32 var_4;
    s8 *var_3;

    if (arg2 >= 0x80) {
        if (arg2 < 0x800) {
            var_3 = arg1 + 1;
            var_4 = 0;
            *arg1 = (arg2 >> 6) | 0xC0;
            goto block_9;
        }
        if (arg2 <= 0xFFFF) {
            var_3 = arg1 + 1;
            var_4 = 6;
            *arg1 = (arg2 >> 0xC) | 0xE0;
            goto block_9;
        }
        if (arg2 <= 0x10FFFF) {
            var_3 = arg1 + 1;
            var_4 = 0xC;
            *arg1 = (arg2 >> 0x12) | 0xF0;
block_9:
            var_2 = var_3 - arg1;
            if (var_4 >= 0) {
                do {
                    temp_2 = arg2 >> var_4;
                    var_4 -= 6;
                    *var_3 = (temp_2 & 0x3F) | ~0x7F;
                    var_3 += 1;
                } while (var_4 >= 0);
                return var_3 - arg1;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return var_2;
        }
        D_0118EDD0(D_0118EDD4, &D_011D64E0, D_0118EDD0);
        return 0;
    }
    *arg1 = arg2;
    var_2 = 1;
    return var_2;
}
