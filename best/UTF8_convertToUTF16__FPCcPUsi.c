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

extern M2C_UNK D_0118ED60;

s32 UTF8_convertToUTF16__FPCcPUsi(s8 *arg0, s16 *arg1, s32 arg2) {
    s16 *var_5;
    s32 var_9;
    s8 *var_7;
    s8 var_8;
    u8 temp_2;
    u8 var_2;
    u8 var_4;

    var_5 = arg1;
    var_7 = arg0;
    var_9 = 0;
    var_4 = (u8) *var_7;
    if ((*var_7 != 0) && (arg2 > 0)) {
        var_2 = (u8) *var_7;
loop_3:
        var_8 = 1;
        if (var_2 & 0x80) {
            var_8 = *(((u32) (var_2 & 0x3C) >> 2) + &D_0118ED60);
        }
        switch (var_8) {                            /* irregular */
        case 1:
            *var_5 = (s16) (s8) var_4;
            break;
        case 2:
            *var_5 = (M2C_FIELD(var_7, u8 *, 1) & 0x3F) + ((var_4 & 0x1F) << 6);
            break;
        case 3:
            *var_5 = (M2C_FIELD(var_7, u8 *, 2) & 0x3F) + (((var_4 & 0xF) << 0xC) + ((M2C_FIELD(var_7, u8 *, 1) & 0x3F) << 6));
            break;
        }
        var_7 += var_8;
        var_9 += 1;
        temp_2 = *var_7;
        var_5 += 2;
        var_4 = temp_2;
        if (temp_2 != 0) {
            if (var_9 < arg2) {
                var_2 = *var_7;
                goto loop_3;
            }
        }
    }
    *var_5 = 0;
    return var_9;
}
