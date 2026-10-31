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

M2C_UNK Identity__10VIMatrix33(void *);             /* extern */
M2C_UNK ReleaseSurface__8VIRasteriR12VIDictionary(s32, s32, s32); /* extern */

s32 SetNumLayers__10VIMaterialiR8VIRasterR12VIDictionary(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_16_2;
    s32 temp_2;
    s32 temp_3;
    s32 var_17;
    s32 var_17_2;
    s32 var_18;
    s32 var_2;
    s32 var_5;
    void *temp_2_2;
    void *temp_4;
    void *var_16;

    var_2 = -1;
    if (arg1 < 4) {
        temp_3 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_3 < arg1) {
            var_17 = temp_3;
            temp_2 = var_17 * 0x90;
            var_18 = temp_2;
            var_16 = temp_2 + arg0 + 0x30;
            do {
                M2C_FIELD(var_16, s32 *, 0) = -1;
                M2C_FIELD(var_16, s32 *, 4) = 1;
                temp_4 = arg0 + var_18 + 0x40;
                M2C_FIELD(var_16, s8 *, 8) = -1;
                var_17 += 1;
                M2C_FIELD(var_16, s8 *, 9) = -1;
                var_18 += 0x90;
                M2C_FIELD(var_16, s8 *, 0xA) = -1;
                M2C_FIELD(var_16, s8 *, 0xB) = -1;
                M2C_FIELD(var_16, s32 *, 0xC) = 0;
                Identity__10VIMatrix33(temp_4);
                M2C_FIELD(var_16, f32 *, 0x40) = 0.0f;
                M2C_FIELD(var_16, f32 *, 0x44) = 0.0f;
                var_16 += 0x90;
            } while (var_17 < arg1);
        } else if (arg1 < temp_3) {
            var_17_2 = arg1;
            temp_2_2 = (arg1 * 0x90) + arg0;
            var_16_2 = temp_2_2 + 0x30;
            var_5 = M2C_FIELD(temp_2_2, s32 *, 0x30);
loop_8:
            var_16_2 += 0x90;
            if (var_5 != -1) {
                ReleaseSurface__8VIRasteriR12VIDictionary(arg2, var_5, arg3);
            }
            var_17_2 += 1;
            if (var_17_2 < M2C_FIELD(arg0, s32 *, 8)) {
                var_5 = *var_16_2;
                goto loop_8;
            }
        }
        M2C_FIELD(arg0, s32 *, 8) = arg1;
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        var_2 = 0;
    }
    return var_2;
}
