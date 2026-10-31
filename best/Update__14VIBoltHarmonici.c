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

s32 rand();                                         /* extern */

void Update__14VIBoltHarmonici(void *arg0, s32 arg1) {
    s32 temp_lo;
    s32 var_19;
    s32 var_3;
    void *var_16;
    void *var_2;

    if (M2C_FIELD(arg0, f32 *, 0x1A0) >= 1.0f) {
        M2C_FIELD(arg0, f32 *, 0x1A0) = 0.0f;
        var_2 = arg0;
        var_3 = 0x10;
        do {
            var_3 -= 1;
            M2C_FIELD(var_2, f32 *, 4) = (f32) M2C_FIELD(var_2, f32 *, 0xD0);
            M2C_FIELD(var_2, f32 *, 8) = (f32) M2C_FIELD(var_2, f32 *, 0xD4);
            M2C_FIELD(var_2, f32 *, 0xC) = (f32) M2C_FIELD(var_2, f32 *, 0xD8);
            var_2 += 0xC;
        } while (var_3 >= 0);
        var_19 = 0;
        var_16 = arg0 + 0xD0;
        do {
            var_19 += 1;
            M2C_FIELD(var_16, f32 *, 0) = (f32) ((f32) (((rand() / 131) & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(arg0, f32 *, 0x1A8));
            temp_lo = rand() / 131;
            M2C_FIELD(var_16, s32 *, 8) = 0;
            M2C_FIELD(var_16, f32 *, 4) = (f32) ((f32) ((temp_lo & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(arg0, f32 *, 0x1A8));
            var_16 += 0xC;
        } while (var_19 < 0x11);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x1A0) = (f32) M2C_ERROR(/* unknown instruction: min.s $f0, $f0, $f1 */);
}
