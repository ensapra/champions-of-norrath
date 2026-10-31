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

s32 LinkFreeChain__t10VIMultiMap2ZfZ14VIEmitterEntryi(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_4;
    s32 var_2;
    s32 var_5;
    s32 var_6;

    temp_3 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    if (arg1 >= temp_3) {
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
    } else {
        var_5 = arg1;
        var_2 = var_5 * 8;
        if (var_5 < (temp_3 - 1)) {
            var_6 = var_5 * 0x70;
            do {
                temp_4 = var_5 + 1;
                var_5 = temp_4;
                M2C_FIELD((var_6 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 4) = temp_4;
                M2C_FIELD((var_6 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 8) = -2;
                var_6 += 0x70;
            } while (var_5 < (M2C_FIELD(arg0, s32 *, 4) - 1));
            var_2 = var_5 * 8;
        }
        temp_2 = (var_2 - var_5) * 0x10;
        M2C_FIELD((temp_2 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 4) = -1;
        M2C_FIELD((temp_2 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 8) = -2;
    }
    return 0;
}
