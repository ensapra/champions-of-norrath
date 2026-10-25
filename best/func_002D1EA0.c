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

void *func_002D1878();                              /* extern */
M2C_UNK func_002D5570();                            /* extern */
s64 func_002D5600();                                /* extern */

s64 func_002D1EA0(void) {
    s64 temp_4;
    s64 var_2;
    void *temp_2;

    temp_2 = func_002D1878();
    if (M2C_FIELD(temp_2, s32 *, 8) == 0) {
        func_002D5570();
        var_2 = 1;
        if (M2C_FIELD(temp_2, s16 *, 0) == 1) {
            return (s64) ((((u64) *(u64 *)0x12001000 >> 0xD) & 1) << 0x20) >> 0x20;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_2;
    }
    temp_4 = (func_002D5600() >> 0xD) & 1;
    var_2 = 1;
    if (M2C_FIELD(temp_2, s16 *, 0) == 1) {
        var_2 = (s64) (temp_4 << 0x20) >> 0x20;
    }
    return var_2;
}
