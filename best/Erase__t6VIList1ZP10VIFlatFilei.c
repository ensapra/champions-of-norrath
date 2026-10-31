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

M2C_UNK __builtin_delete(void *);                   /* extern */

void *Erase__t6VIList1ZP10VIFlatFilei(void *arg0, void *arg1) {
    void *temp_16;
    void *temp_2;
    void *temp_3;

    temp_16 = M2C_FIELD(arg1, void **, 4);
    if (temp_16 != NULL) {
        M2C_FIELD(temp_16, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    } else {
        M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    }
    temp_3 = M2C_FIELD(arg1, void **, 8);
    temp_2 = M2C_FIELD(arg1, void **, 4);
    if (temp_3 != NULL) {
        M2C_FIELD(temp_3, void **, 4) = temp_2;
    } else {
        M2C_FIELD(arg0, void **, 4) = temp_2;
    }
    __builtin_delete(arg1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
    return (temp_16 != NULL) ? temp_16 : (void *)0x7FFFFFFF;
}
