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

s32 xmlXPathNextPrecedingSibling(void *arg0, void *arg1) {
    s32 temp_4;
    void *temp_3;
    void *temp_6;

    temp_3 = M2C_FIELD(arg0, void **, 0xC);
    temp_6 = M2C_FIELD(temp_3, void **, 4);
    temp_4 = M2C_FIELD(temp_6, s32 *, 4);
    switch (temp_4) {                               /* irregular */
    case 18:
        /* fallthrough */
    case 2:
        return 0;
    default:
        if (arg1 != M2C_FIELD(temp_3, s32 *, 0)) {
            if (arg1 != NULL) {
                return M2C_FIELD(arg1, s32 *, 0x1C);
            }
            return M2C_FIELD(temp_6, s32 *, 0x1C);
        }
        return 0;
    }
}
