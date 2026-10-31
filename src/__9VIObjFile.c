/* identical to func_0014B0F0 (matched), with its names changed by decompdecomp */
/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

M2C_UNK __6VIFile();                            /* extern */
M2C_UNK ResetState__9VIObjFile(s32);                         /* extern */

void __9VIObjFile(s32 arg0) {
    __6VIFile();
    ResetState__9VIObjFile(arg0);
}
