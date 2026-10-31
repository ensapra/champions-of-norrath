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

u32 Ascii2Sjis__16VIIconDefinitionc(s32, s8);       /* extern */
s32 strlen(s32);                                    /* extern */

void AsciiString2Sjis__16VIIconDefinitionPcPUs(s32 arg0, s32 arg1, s16 *arg2) {
    s16 *var_16;
    s32 temp_2;
    s32 var_17;
    s32 var_2;
    s8 *temp_2_2;
    u32 temp_2_3;

    var_17 = 0;
    temp_2 = strlen(arg1);
    var_2 = 0 * 2;
    if (temp_2 > 0) {
        var_16 = arg2;
        do {
            temp_2_2 = arg1 + var_17;
            var_17 += 1;
            temp_2_3 = Ascii2Sjis__16VIIconDefinitionc(arg0, *temp_2_2);
            *var_16 = (temp_2_3 >> 8) | ((temp_2_3 & 0xFF) << 8);
            var_16 += 2;
        } while (var_17 < temp_2);
        var_2 = var_17 * 2;
    }
    *(var_2 + arg2) = 0;
}
