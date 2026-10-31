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

void GenerateSamples__14VIBoltHarmonici(void *arg0, s32 arg1) {
    s32 temp_lo;
    s32 var_19;
    void *var_16;

    var_16 = arg0 + (arg1 * 0xCC) + 4;
    var_19 = 0x10;
    do {
        var_19 -= 1;
        M2C_FIELD(var_16, f32 *, 0) = (f32) ((f32) (((rand() / 131) & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(arg0, f32 *, 0x1A8));
        temp_lo = rand() / 131;
        M2C_FIELD(var_16, s32 *, 8) = 0;
        M2C_FIELD(var_16, f32 *, 4) = (f32) ((f32) ((temp_lo & 0xFF) - 0x7F) * 0.0078125f * M2C_FIELD(arg0, f32 *, 0x1A8));
        var_16 += 0xC;
    } while (var_19 >= 0);
}
