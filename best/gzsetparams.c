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

s32 deflateParams(void *, s32, s32);                /* extern */
s32 fwrite(s32, M2C_UNK, M2C_UNK, s32);             /* extern */

s32 gzsetparams(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_4;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 0x5C) == 0x77) {
            if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
                temp_4 = M2C_FIELD(arg0, s32 *, 0x48);
                M2C_FIELD(arg0, s32 *, 0xC) = temp_4;
                if (fwrite(temp_4, 1, 0x4000, M2C_FIELD(arg0, s32 *, 0x40)) != 0x4000) {
                    M2C_FIELD(arg0, s32 *, 0x38) = -1;
                }
                M2C_FIELD(arg0, s32 *, 0x10) = 0x4000;
            }
            return deflateParams(arg0, arg1, arg2);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return -2;
    }
    return -2;
}
