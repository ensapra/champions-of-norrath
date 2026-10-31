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

M2C_UNK _tr_init(void *, M2C_UNK, void *);          /* extern */
M2C_UNK lm_init(void *);                            /* extern */

s32 deflateReset(void *arg0) {
    s32 var_2;
    void *temp_16;

    if (arg0 != NULL) {
        temp_16 = M2C_FIELD(arg0, void **, 0x1C);
        var_2 = -2;
        if (temp_16 != NULL) {
            var_2 = -2;
            if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x14) = 0;
                    M2C_FIELD(arg0, s32 *, 8) = 0;
                    M2C_FIELD(arg0, s32 *, 0x2C) = 2;
                    M2C_FIELD(temp_16, s32 *, 0x18) = (s32) M2C_FIELD(temp_16, s32 *, 8);
                    M2C_FIELD(temp_16, s32 *, 0x1C) = 0;
                    M2C_FIELD(arg0, s32 *, 0x18) = 0;
                    if (M2C_FIELD(temp_16, s32 *, 0x20) < 0) {
                        M2C_FIELD(temp_16, s32 *, 0x20) = 0;
                    }
                    M2C_FIELD(temp_16, s32 *, 4) = (s32) ((M2C_FIELD(temp_16, s32 *, 0x20) == 0) ? 0x2A : 0x71);
                    M2C_FIELD(arg0, s32 *, 0x30) = 1;
                    M2C_FIELD(temp_16, s32 *, 0x28) = 0;
                    _tr_init(temp_16, 1, arg0);
                    lm_init(temp_16);
                    var_2 = 0;
                    /* Duplicate return node #10. Try simplifying control flow for better match */
                    return var_2;
                }
                goto block_6;
            }
        }
        return var_2;
    }
block_6:
    return -2;
}
