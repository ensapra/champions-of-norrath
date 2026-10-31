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

M2C_UNK rijndael_ecb_encrypt(s32, s32, s32);        /* extern */

void encryptBuffer__FPCciPciP13Symmetric_key(s32 arg0, s32 arg1, s32 arg2, s32 arg4) {
    s32 temp_17;
    s32 var_16;
    s32 var_4;

    temp_17 = (s32) ((arg1 < 0) ? (arg1 + 0xF) : arg1) >> 4;
    var_16 = 0;
    if (temp_17 > 0) {
        var_4 = 0 * 0x10;
        do {
            var_16 += 1;
            rijndael_ecb_encrypt(arg0 + var_4, arg2 + var_4, arg4);
            var_4 = var_16 * 0x10;
        } while (var_16 < temp_17);
    }
}
