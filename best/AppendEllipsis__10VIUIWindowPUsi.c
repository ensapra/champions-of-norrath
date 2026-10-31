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

s32 GetStringWidth__6VIFontP8VIRasterP12VIDictionaryPCc(void *, s32, s32, M2C_UNK *); /* extern */
s32 TextWidth__10VIUIWindowPCUs(void **, s32);      /* extern */
M2C_UNK strcat16__8VIStringPUsUiPCc(s32, s32, M2C_UNK *); /* extern */
s32 strlen16__8VIStringPCUs(s32);                   /* extern */
extern M2C_UNK D_011CA678;

void AppendEllipsis__10VIUIWindowPUsi(void **arg0, s32 arg1, s32 arg2) {
    s16 *var_16;
    s32 temp_16;
    s32 temp_2_2;
    void *temp_2;

    temp_16 = strlen16__8VIStringPCUs(arg1);
    temp_2 = *arg0;
    temp_2_2 = GetStringWidth__6VIFontP8VIRasterP12VIDictionaryPCc(temp_2 + 0x38, M2C_FIELD(temp_2, s32 *, 0x48), M2C_FIELD(temp_2, s32 *, 0x50), &D_011CA678);
    if (temp_2_2 < arg2) {
        var_16 = (temp_16 * 2) + arg1;
loop_3:
        if ((TextWidth__10VIUIWindowPCUs(arg0, arg1) + temp_2_2) >= arg2) {
            var_16 -= 2;
            *var_16 = 0;
            goto loop_3;
        }
        strcat16__8VIStringPUsUiPCc(arg1, (0xFF - strlen16__8VIStringPCUs(arg1)) * 2, &D_011CA678);
    }
}
