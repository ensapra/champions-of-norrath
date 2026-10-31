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

s32 xmlHashAddEntry2(s32, s32, s32, s32);           /* extern */
s32 xmlHashCreate(M2C_UNK);                         /* extern */

s32 xmlXPathRegisterFuncNS(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;
    s32 var_2;

    if ((arg0 != NULL) && (arg1 != 0)) {
        var_2 = M2C_FIELD(arg0, s32 *, 0x28);
        if (var_2 == 0) {
            temp_2 = xmlHashCreate(0);
            M2C_FIELD(arg0, s32 *, 0x28) = temp_2;
            if (temp_2 != 0) {
                var_2 = temp_2;
                /* Duplicate return node #5. Try simplifying control flow for better match */
                return xmlHashAddEntry2(var_2, arg1, arg2, arg3);
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return -1;
        }
        return xmlHashAddEntry2(var_2, arg1, arg2, arg3);
    }
    return -1;
}
