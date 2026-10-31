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

s32 func_00174388(s32, s32, s16, s16, s16, s16, s16, s16); /* extern */
extern M2C_UNK xmlParseEntityDecl;

s32 func_00174588(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    s32 *var_3;
    s32 var_2;
    s32 var_4;

    var_4 = 0;
    if (M2C_FIELD(&xmlParseEntityDecl, s32 *, 0x5B0) == 1) {
        var_3 = &xmlParseEntityDecl + 0x5B0;
        var_2 = 0 < 0x20;
loop_2:
        var_4 += 1;
        if (var_2 != 0) {
            var_3 += 4;
            var_2 = var_4 < 0x20;
            if (*var_3 != 1) {
                /* Duplicate return node #4. Try simplifying control flow for better match */
                return func_00174388(var_4, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
            }
            goto loop_2;
        }
        return -1;
    }
    return func_00174388(var_4, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
