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

s32 Unlock__12VIPrimBuffer(void *arg0) {
    f32 var_f0;
    s32 temp_3;
    s32 var_2;

    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 8);
        switch (temp_3) {                           /* irregular */
        case 2:
            var_f0 = 0.0078125f;
block_17:
            M2C_FIELD(arg0, f32 *, 0x3C) = var_f0;
            break;
        case 4:
            var_f0 = 0.0078125f;
            goto block_17;
        case 5:
            var_f0 = 0.007874016f;
            goto block_17;
        case 8:
            M2C_FIELD(arg0, f32 *, 0x3C) = 0.0078125f;
            M2C_FIELD(arg0, f32 *, 0x38) = 0.0078125f;
            break;
        default:
            var_f0 = 1.0f;
            goto block_17;
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        var_2 = 0;
    }
    return var_2;
}
