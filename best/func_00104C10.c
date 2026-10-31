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

s32 func_001B06E0(void *, M2C_UNK, M2C_UNK);        /* extern */
extern M2C_UNK SetGradientColor__20VIParticleAttributesiRC10VIColor32F;

s32 func_00104C10(void) {
    s32 var_3;
    void *temp_16;

    temp_16 = &SetGradientColor__20VIParticleAttributesiRC10VIColor32F + 0x20;
loop_1:
    var_3 = 0x270F;
    if (func_001B06E0(temp_16, 0x12346, 0) < 0) {
loop_2:
        goto loop_2;
    }
    do {
        var_3 -= 4;
    } while (var_3 != -1);
    if (M2C_FIELD(temp_16, s32 *, 0x24) != 0) {
        return 1;
    }
    goto loop_1;
}
