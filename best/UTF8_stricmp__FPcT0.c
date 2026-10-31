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

s32 UTF8_chricmp__FPcT0(s8 *, s8 *, s8, s32);       /* extern */
extern M2C_UNK D_0118ED60;

s32 UTF8_stricmp__FPcT0(s8 *arg0, s8 *arg1, s8 arg2) {
    s32 temp_2;
    s32 var_7;
    s8 *var_16;
    s8 *var_17;
    s8 temp_5;
    s8 var_4;
    s8 var_6;
    u8 temp_2_2;
    u8 temp_2_3;

    var_6 = arg2;
    var_16 = arg1;
    var_17 = arg0;
    var_7 = 0;
loop_7:
    if (var_7 == 0) {
        temp_2 = UTF8_chricmp__FPcT0(var_17, var_16, var_6, var_7);
        var_6 = 1;
        temp_5 = *var_17;
        var_7 = temp_2;
        var_4 = 1;
        if (temp_5 != 0) {
            if (*var_16 == 0) {
                goto block_13;
            }
            temp_2_2 = (u8) *var_17;
            if (temp_2_2 & 0x80) {
                var_4 = *(((u32) (temp_2_2 & 0x3C) >> 2) + &D_0118ED60);
            }
            temp_2_3 = (u8) *var_16;
            var_17 = &var_17[var_4];
            if (temp_2_3 & 0x80) {
                var_6 = *(((u32) (temp_2_3 & 0x3C) >> 2) + &D_0118ED60);
            }
            var_16 = &var_16[var_6];
            goto loop_7;
        }
block_13:
        var_7 |= temp_5 != (s8) (u8) *var_16;
    }
    return var_7;
}
