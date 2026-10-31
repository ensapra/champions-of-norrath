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

s32 GetTime__7VITimer();                            /* extern */
f32 __floatdisf(s32);                               /* extern */
f32 sinf(f32);                                      /* extern */

f32 TickPulse__C10VIUIWindow(void *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 var_f0;

    temp_f20_2 = 1.0f - M2C_FIELD(arg0, f32 *, 0x28);
    temp_f20 = 1.0f - (temp_f20_2 * temp_f20_2);
    var_f0 = __floatdisf(GetTime__7VITimer() - M2C_FIELD(arg0, s64 *, 0x160)) * 0.01f;
    if (var_f0 > 6.283185f) {
        var_f0 -= 6.283185f;
    }
    return temp_f20 * ((sinf(var_f0 + 1.5707963f) * 0.5f) + 0.5f);
}
