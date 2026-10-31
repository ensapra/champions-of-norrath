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

M2C_UNK __wrap_free(s32);                           /* extern */
s32 atoi(s32);                                      /* extern */
s32 xmlGetProp(s32);                                /* extern */

s32 GetIntegerAttribute__17VIXMLCallbackDataPCci(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_17;
    s32 temp_4;
    s32 var_16;
    s32 var_2;

    temp_4 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_4 == 0) || (arg1 == 0)) {
        var_16 = 0;
    } else {
        var_16 = xmlGetProp(temp_4);
    }
    var_2 = arg2;
    if (var_16 != 0) {
        temp_17 = atoi(var_16);
        __wrap_free(var_16);
        var_2 = temp_17;
    }
    return var_2;
}
