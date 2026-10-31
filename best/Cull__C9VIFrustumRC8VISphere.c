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

s32 Cull__C9VIFrustumRC8VISphere(void *arg0, void *arg1) {
    f32 *var_4;
    f32 var_f0;
    s32 var_2;
    s32 var_3;

    var_4 = arg0 + 0x60;
    var_3 = 0;
    var_f0 = M2C_FIELD(arg0, f32 *, 0x60);
loop_1:
    var_2 = 1;
    var_4 += 0x10;
    if (!(M2C_FIELD(arg1, f32 *, 0xC) < ((M2C_FIELD(arg1, f32 *, 0) * var_f0) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(var_4, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(var_4, f32 *, 8)) + M2C_FIELD(var_4, f32 *, 0xC)))) {
        var_3 += 1;
        if (var_3 < 6) {
            var_f0 = *var_4;
            goto loop_1;
        }
        var_2 = 0;
    }
    return var_2;
}
