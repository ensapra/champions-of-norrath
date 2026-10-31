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

M2C_UNK printf(M2C_UNK *);                          /* extern */
extern M2C_UNK D_011D4CF0;
extern M2C_UNK D_011D4D18;

void *ezNetCnfGetCombination(s32 *arg0, s32 arg1) {
    s32 temp_2;

    if ((arg0 == NULL) || (temp_2 = *arg0, (temp_2 == 0))) {
        printf(&D_011D4CF0);
        return NULL;
    }
    if ((arg1 <= 0) || (temp_2 < arg1)) {
        printf(&D_011D4D18);
        return NULL;
    }
    return (arg0 + (arg1 * 0x68)) - 0x38;
}
