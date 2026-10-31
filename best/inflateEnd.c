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

M2C_UNK inflate_blocks_free(s32, void *);           /* extern */

s32 inflateEnd(void *arg0) {
    s32 temp_2;
    s32 var_2;
    void *temp_5;

    if (arg0 != NULL) {
        temp_5 = M2C_FIELD(arg0, void **, 0x1C);
        var_2 = -2;
        if (temp_5 != NULL) {
            if (M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24) != NULL) {
                temp_2 = M2C_FIELD(temp_5, s32 *, 0x14);
                if (temp_2 != 0) {
                    inflate_blocks_free(temp_2, arg0);
                }
                M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, void **, 0x1C));
                M2C_FIELD(arg0, void **, 0x1C) = NULL;
                var_2 = 0;
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return var_2;
            }
            goto block_5;
        }
        return var_2;
    }
block_5:
    return -2;
}
