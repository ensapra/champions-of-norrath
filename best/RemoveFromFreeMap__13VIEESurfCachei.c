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

s32 Erase__t10VIMultiMap2ZUiZii(s32, s32, s32);     /* extern */

s32 RemoveFromFreeMap__13VIEESurfCachei(s32 arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_6;
    s32 var_2;
    void *temp_17;

    temp_17 = arg0 + 0x20;
    temp_16 = arg1 * 0x18;
    var_2 = -1;
    temp_6 = M2C_FIELD((M2C_FIELD(temp_17, s32 *, 8) + temp_16), s32 *, 0xC);
    if (temp_6 >= 0) {
        if (Erase__t10VIMultiMap2ZUiZii(arg0 + 0x4C, temp_6, temp_6) >= 0) {
            var_2 = 0;
            M2C_FIELD((M2C_FIELD(temp_17, s32 *, 8) + temp_16), s32 *, 0xC) = -1;
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return var_2;
        }
        return -1;
    }
    return var_2;
}
