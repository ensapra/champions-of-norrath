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

s32 adler32(M2C_UNK);                               /* extern */
M2C_UNK inflate_set_dictionary(s32, s32, u32);      /* extern */

s32 inflateSetDictionary(void *arg0, s32 arg1, u32 arg2) {
    s32 temp_2;
    s32 var_18;
    s32 var_2;
    u32 temp_19;
    u32 var_17;
    void *temp_3;
    void *temp_4;

    var_17 = arg2;
    var_18 = arg1;
    temp_19 = var_17;
    if (arg0 != NULL) {
        temp_3 = M2C_FIELD(arg0, void **, 0x1C);
        var_2 = -2;
        if (temp_3 != NULL) {
            if (M2C_FIELD(temp_3, s32 *, 0) != 6) {
                goto block_3;
            }
            if (adler32(1) != M2C_FIELD(arg0, s32 *, 0x30)) {
                return -3;
            }
            M2C_FIELD(arg0, s32 *, 0x30) = 1;
            temp_4 = M2C_FIELD(arg0, void **, 0x1C);
            temp_2 = M2C_FIELD(temp_4, s32 *, 0x10);
            if ((var_17 >> temp_2) != 0) {
                var_17 = (1 << temp_2) - 1;
                var_18 += temp_19 - var_17;
            }
            inflate_set_dictionary(M2C_FIELD(temp_4, s32 *, 0x14), var_18, var_17);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0) = 7;
            var_2 = 0;
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return var_2;
        }
        return var_2;
    }
block_3:
    return -2;
}
