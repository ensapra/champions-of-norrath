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

M2C_UNK func_001054D8(s32);                         /* extern */
extern M2C_UNK Update__17VIParticleEmitter;

void func_00105808(void) {
    s32 *var_17;
    s32 var_16;

    var_16 = 0;
    var_17 = &Update__17VIParticleEmitter + 0x110;
    do {
        var_17 += 0xB4;
        if (*var_17 != 0) {
            func_001054D8(var_16);
        }
        var_16 += 1;
    } while (var_16 < 0x100);
}
