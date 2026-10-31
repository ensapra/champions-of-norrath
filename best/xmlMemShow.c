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

M2C_UNK fprintf(M2C_UNK *, s64, s64);               /* extern */
extern s64 D_011B1DF8;
extern s64 D_011B1E00;
extern M2C_UNK D_011DC018;

void xmlMemShow(s32 arg0) {
    if (arg0 != 0) {
        fprintf(&D_011DC018, D_011B1DF8, D_011B1E00);
    }
}
