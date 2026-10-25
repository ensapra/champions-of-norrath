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

s32 func_002DD640();                                /* extern */
M2C_UNK func_002DD698();                            /* extern */
M2C_UNK func_002DDF20(s32);                         /* extern */

s32 func_002DE210(void) {
    s32 temp_16;
    s32 temp_2;
    s32 var_2;

    temp_16 = func_002DD640();
    temp_2 = *(s32 *)0x10001010;
    if (!(temp_2 & 0x80)) {
        var_2 = 0;
        if (temp_16 != 0) {
            func_002DD698();
            return 0;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_2;
    }
    func_002DDF20(temp_2 & 0xFFFFF37F);
    var_2 = 1;
    if (temp_16 != 0) {
        func_002DD698();
        var_2 = 1;
    }
    return var_2;
}
