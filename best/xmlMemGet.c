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

extern s32 D_011B1E18;
extern s32 D_011B1E1C;
extern s32 D_011B1E20;
extern s32 D_011B1E24;

s32 xmlMemGet(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_011B1E18;
    }
    if (arg1 != NULL) {
        *arg1 = D_011B1E1C;
    }
    if (arg2 != NULL) {
        *arg2 = D_011B1E20;
    }
    if (arg3 != NULL) {
        *arg3 = D_011B1E24;
    }
    return 0;
}
