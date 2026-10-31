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

extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32 *);
extern s32 D_0118EDD4;
extern s32 D_011AFF9C;
extern M2C_UNK D_011D6A28;

s32 xmlNamespaceParseQName(void) {
    if (D_011AFF9C == 0) {
        D_0118EDD0(D_0118EDD4, &D_011D6A28, &D_0118EDD4);
        D_011AFF9C = 1;
    }
    return 0;
}
