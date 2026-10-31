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

s32 xmlHashLookup2(s32);                            /* extern */

s32 xmlXPathFunctionLookupNS(void *arg0, s32 arg1) {
    s32 temp_4;

    if (arg0 != NULL) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0x28);
        if ((temp_4 != 0) && (arg1 != 0)) {
            return xmlHashLookup2(temp_4);
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
