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

extern u16 D_0118E658;
extern s32 D_0118E698;

s8 char16to8__8VIStringUs(s32 arg0) {
    s32 var_5;
    u16 *var_3;
    u16 var_2;
    u32 temp_4;

    temp_4 = arg0 & 0xFFFF;
    if (temp_4 >= 0x100U) {
        var_5 = 0;
        if (D_0118E698 > 0) {
            var_3 = &D_0118E658;
            var_2 = D_0118E658;
loop_8:
            var_3 += 2;
            if (temp_4 != var_2) {
                var_5 += 1;
                if (var_5 < D_0118E698) {
                    var_2 = *var_3;
                    goto loop_8;
                }
                /* Duplicate return node #12. Try simplifying control flow for better match */
                return 0x3F;
            }
            return (s8) (var_5 - 0x80);
        }
        return 0x3F;
    }
    return (s8) temp_4;
}
