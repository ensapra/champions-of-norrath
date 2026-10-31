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

s32 xmlIsBlankNode(void *arg0) {
    s32 var_2;
    s32 var_2_2;
    u8 *var_4;
    u8 temp_2;
    u8 temp_2_2;

    var_2 = 0;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 4) == 3)) {
        var_4 = M2C_FIELD(arg0, u8 **, 0x28);
        if (var_4 != NULL) {
            temp_2 = *var_4;
            if (temp_2 != 0) {
                var_2_2 = temp_2 & 0xFF;
loop_9:
                if (var_2_2 == 0xA) {
                    var_4 += 1;
                    goto block_15;
                }
                var_4 += 1;
                if ((var_2_2 == 0xD) || (var_2_2 == 9) || (var_2_2 == 0x20)) {
block_15:
                    temp_2_2 = *var_4;
                    if (temp_2_2 != 0) {
                        var_2_2 = temp_2_2 & 0xFF;
                        goto loop_9;
                    }
                    goto block_18;
                }
                return 0;
            }
block_18:
            var_2 = 1;
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return var_2;
        }
        return 1;
    }
    return var_2;
}
