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

void *func_001903E0(s32, s32);                      /* extern */
extern M2C_UNK func_01000000;

u8 func_001905F8(s32 arg0, s32 arg1) {
    u8 var_2;
    void *temp_2;

    var_2 = 0x63;
    if (M2C_FIELD((&func_01000000 + 0xF4610 + ((arg1 * 0x1C) + (arg0 * 0x70))), s32 *, 0x10) != 0) {
        temp_2 = func_001903E0(arg0, arg0);
        var_2 = M2C_FIELD(temp_2, u8 *, 0x70);
        if (var_2 == 6) {
            if (M2C_FIELD(temp_2, u8 *, 0x71) != 2) {
                return M2C_FIELD(temp_2, u8 *, 0x70);
            }
            return 5U;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
