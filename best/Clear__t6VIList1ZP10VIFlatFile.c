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

s32 Clear__t6VIList1ZP10VIFlatFile(void *arg0) {
    void *temp_16;
    void *var_4;

    var_4 = M2C_FIELD(arg0, void **, 4);
    if (var_4 != NULL) {
loop_3:
        temp_16 = M2C_FIELD(var_4, void **, 4);
        __builtin_delete(var_4);
        M2C_FIELD(arg0, void **, 4) = temp_16;
        if (temp_16 != NULL) {
            var_4 = temp_16;
            goto loop_3;
        }
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 4) = NULL;
    return 0;
}
