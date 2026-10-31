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

extern u32 D_0118FE38;

u32 *htmlEntityValueLookup(u32 arg0) {
    s32 var_6;
    u32 temp_2;
    u32 var_5;

    var_5 = 0;
    if ((u32) D_0118FE38 >= arg0) {
        if (arg0 >= (u32) D_0118FE38) {
            var_6 = 0;
            /* Duplicate return node #3. Try simplifying control flow for better match */
            return &(&D_0118FE38)[var_6 + var_5];
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return NULL;
    }
loop_4:
    var_5 += 1;
    var_6 = var_5 * 2;
    if (var_5 < 0xFDU) {
        temp_2 = *((var_5 * 0xC) + &D_0118FE38);
        if (temp_2 >= arg0) {
            if (arg0 < temp_2) {
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return NULL;
            }
            return &(&D_0118FE38)[var_6 + var_5];
        }
        goto loop_4;
    }
    return NULL;
}
