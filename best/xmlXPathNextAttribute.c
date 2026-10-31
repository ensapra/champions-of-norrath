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

s32 xmlXPathNextAttribute(void *arg0, void *arg1) {
    void *temp_6;
    void *temp_7;

    temp_7 = M2C_FIELD(arg0, void **, 0xC);
    temp_6 = M2C_FIELD(temp_7, void **, 4);
    if (M2C_FIELD(temp_6, s32 *, 4) == 1) {
        if (arg1 != NULL) {
            return M2C_FIELD(arg1, s32 *, 0x18);
        }
        if (temp_6 != M2C_FIELD(temp_7, s32 *, 0)) {
            return M2C_FIELD(temp_6, s32 *, 0x2C);
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
