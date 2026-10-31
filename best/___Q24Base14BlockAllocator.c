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

M2C_UNK __builtin_delete(M2C_UNK **);               /* extern */
M2C_UNK __wrap_free(M2C_UNK *);                     /* extern */

void ___Q24Base14BlockAllocator(M2C_UNK **arg0, s32 arg1) {
    M2C_UNK **var_16;
    M2C_UNK *temp_4;

    var_16 = arg0;
    do {
loop_3:
        if (*var_16 != NULL) {
            temp_4 = *var_16;
            *var_16 = *temp_4;
            __wrap_free(temp_4);
            goto loop_3;
        }
        var_16 += 4;
    } while ((u32) var_16 < (u32) (arg0 + 0x7C));
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
