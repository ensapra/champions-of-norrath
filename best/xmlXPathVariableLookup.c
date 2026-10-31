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

s32 xmlXPathVariableLookupNS(void *, s32, M2C_UNK); /* extern */

s32 xmlXPathVariableLookup(void *arg0, s32 arg1) {
    s32 (*temp_2)(s32, M2C_UNK);
    s32 var_2;

    var_2 = 0;
    if (arg0 != NULL) {
        temp_2 = M2C_FIELD(arg0, s32 (**)(s32, M2C_UNK), 0x5C);
        if (temp_2 != NULL) {
            var_2 = temp_2(M2C_FIELD(arg0, s32 *, 0x60), 0);
            if (var_2 == 0) {
                /* Duplicate return node #4. Try simplifying control flow for better match */
                return xmlXPathVariableLookupNS(arg0, arg1, 0);
            }
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_2;
        }
        return xmlXPathVariableLookupNS(arg0, arg1, 0);
    }
    return var_2;
}
