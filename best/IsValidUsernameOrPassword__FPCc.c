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

s32 IsValidUsernameOrPassword__FPCc(s8 *arg0) {
    s32 var_2;
    s32 var_3_2;
    s8 *var_4;
    u8 var_3;

    var_4 = arg0;
    var_3 = (u8) *var_4;
    if (*var_4 != 0) {
loop_2:
        if (((u32) ((s8) var_3 - 0x61) < 0x1AU) || ((var_3_2 = 1, (((u32) ((s8) var_3 - 0x41) < 0x1AU) == 0)) && ((u32) ((s8) var_3 - 0x30) >= 0xAU) && (var_3_2 = 0, ((s8) var_3 == 0x5F)))) {
            var_3_2 = 1;
        }
        var_2 = 0;
        if (var_3_2 != 0) {
            var_4 += 1;
            var_3 = (u8) *var_4;
            if (*var_4 == 0) {
                goto block_9;
            }
            goto loop_2;
        }
    } else {
block_9:
        var_2 = 1;
    }
    return var_2;
}
