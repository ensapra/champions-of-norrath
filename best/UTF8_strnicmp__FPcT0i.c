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

s32 UTF8_chricmp__FPcT0(s8 *, s8 *, s32);           /* extern */
extern M2C_UNK D_0118ED60;

s32 UTF8_strnicmp__FPcT0i(s8 *arg0, s8 *arg1, s32 arg2) {
    s32 var_18;
    s32 var_6;
    s8 *var_16;
    s8 *var_17;
    s8 var_4;
    s8 var_5;
    u8 temp_2;
    u8 temp_2_2;

    var_16 = arg1;
    var_17 = arg0;
    var_18 = 0;
    var_6 = 0;
loop_7:
    var_18 += 1;
    if ((var_18 < arg2) && (var_6 == 0)) {
        var_5 = 1;
        var_6 = UTF8_chricmp__FPcT0(var_17, var_16, var_6);
        var_4 = 1;
        if (*var_17 != 0) {
            if (*var_16 != 0) {
                temp_2 = (u8) *var_17;
                if (temp_2 & 0x80) {
                    var_4 = *(((u32) (temp_2 & 0x3C) >> 2) + &D_0118ED60);
                }
                temp_2_2 = (u8) *var_16;
                var_17 = &var_17[var_4];
                if (temp_2_2 & 0x80) {
                    var_5 = *(((u32) (temp_2_2 & 0x3C) >> 2) + &D_0118ED60);
                }
                var_16 = &var_16[var_5];
                goto loop_7;
            }
        }
    }
    return var_6;
}
