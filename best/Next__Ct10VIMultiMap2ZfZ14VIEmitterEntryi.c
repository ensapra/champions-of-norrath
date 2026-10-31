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

s32 Next__Ct10VIMultiMap2ZfZ14VIEmitterEntryi(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_6;
    s32 var_2;
    s32 var_2_2;
    s32 var_4;
    s32 var_4_2;
    s32 var_5;
    s32 var_5_2;

    var_5_2 = arg1;
    temp_6 = M2C_FIELD(arg0, s32 *, 8);
    temp_2 = M2C_FIELD(((var_5_2 * 0x70) + temp_6), s32 *, 0xC);
    var_4 = temp_2 * 8;
    if (temp_2 != 0) {
        var_5 = temp_2;
        var_2 = var_5;
        if (M2C_FIELD(((temp_2 * 0x70) + temp_6), s32 *, 8) != 0) {
            do {
                var_5 = M2C_FIELD((((var_4 - var_5) * 0x10) + temp_6), s32 *, 8);
                var_4 = var_5 * 8;
            } while (M2C_FIELD(((var_5 * 0x70) + temp_6), s32 *, 8) != 0);
            return var_5;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_2;
    }
    var_4_2 = M2C_FIELD(((var_5_2 * 0x70) + temp_6), s32 *, 4);
    if (var_4_2 != 0) {
        var_2_2 = var_4_2 * 8;
loop_8:
        var_5_2 = var_4_2;
        if (M2C_FIELD((((var_2_2 - var_4_2) * 0x10) + temp_6), s32 *, 0xC) == var_5_2) {
            var_4_2 = M2C_FIELD(((var_5_2 * 0x70) + temp_6), s32 *, 4);
            var_2_2 = var_4_2 * 8;
            if (var_4_2 != 0) {
                goto loop_8;
            }
        }
    }
    var_2 = var_4_2;
    return var_2;
}
