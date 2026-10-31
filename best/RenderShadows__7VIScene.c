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

M2C_UNK RenderShadow__7VIScenei(void *, s32);       /* extern */

s32 RenderShadows__7VIScene(void *arg0) {
    s32 *var_16;
    s32 var_18;
    s32 var_5;

    var_18 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1A88) > 0) {
        var_16 = arg0 + 0x1888;
        var_5 = M2C_FIELD(arg0, s32 *, 0x1888);
loop_2:
        var_16 += 4;
        var_18 += 1;
        RenderShadow__7VIScenei(arg0, var_5);
        if (var_18 < M2C_FIELD(arg0, s32 *, 0x1A88)) {
            var_5 = *var_16;
            goto loop_2;
        }
    }
    return 0;
}
