/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_0017B6C8(void *arg0, u32 arg1, u8 *arg2, s32 arg3) {
    s32 temp_4;
    s32 temp_8;
    s32 var_7;
    u8 *var_3;
    u8 *var_6;
    u8 temp_2;
    void *temp_3;
    void *temp_5;

    var_6 = arg2;
    if (arg0 != NULL) {
        temp_3 = M2C_FIELD(arg0, void **, 4);
        if (arg1 < (u32) M2C_FIELD(temp_3, u32 *, 8)) {
            temp_5 = M2C_FIELD(((arg1 * 8) + M2C_FIELD((temp_3 + 8), s32 *, 4)), void **, 4);
            temp_4 = M2C_FIELD(temp_5, s32 *, 4);
            temp_8 = temp_4 + arg3;
            if ((u32) M2C_FIELD(temp_5, u32 *, 0) >= (u32) (temp_8 + 8)) {
                M2C_FIELD(temp_5, s32 *, 4) = temp_8;
                var_7 = arg3 - 1;
                var_3 = temp_5 + (temp_4 + 8);
                if (var_7 != 0xFFFFFFFF) {
                    do {
                        temp_2 = *var_6;
                        var_7 -= 1;
                        var_6 += 1;
                        *var_3 = temp_2;
                        var_3 += 1;
                    } while (var_7 != 0xFFFFFFFF);
                }
                return 0;
            }
        }
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
