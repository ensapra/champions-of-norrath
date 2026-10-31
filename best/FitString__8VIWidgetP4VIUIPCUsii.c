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

s32 GetStringWidth__6VIFontP8VIRasterP12VIDictionaryPCUs(s32, s32, s32, s16 *); /* extern */
M2C_UNK strcpy16__8VIStringPUsUiPCUs(s16 *, M2C_UNK); /* extern */
s32 strlen16__8VIStringPCUs(s16 *);                 /* extern */
extern s16 D_011E7F20;

s16 *FitString__8VIWidgetP4VIUIPCUsii(void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 *var_7;
    s32 var_16;
    s32 var_2;

    if (arg2 == 0) {
        D_011E7F20 = 0;
        return &D_011E7F20;
    }
    strcpy16__8VIStringPUsUiPCUs(&D_011E7F20, 0x100);
    var_16 = strlen16__8VIStringPCUs(&D_011E7F20);
loop_5:
    if (arg3 < GetStringWidth__6VIFontP8VIRasterP12VIDictionaryPCUs(arg1 + 0x38, M2C_FIELD(arg1, s32 *, 0x48), M2C_FIELD(arg1, s32 *, 0x50), &D_011E7F20)) {
        var_16 -= 1;
        (&D_011E7F20)[var_16] = 0;
        goto loop_5;
    }
    if ((arg4 != 0) && (var_16 > 0)) {
        var_7 = &D_011E7F20;
        var_2 = var_16;
        do {
            var_2 -= 1;
            *var_7 = 0x2A;
            var_7 += 2;
        } while (var_2 != 0);
    }
    return &D_011E7F20;
}
