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

extern s32 D_01228A04;
extern s32 D_01228A08;
extern s32 D_01228A0C;
extern s32 D_01228A10;
extern s32 D_01228A14;
extern s32 D_01228A18;
extern s32 D_01228A1C;
extern s32 D_01228A20;

s32 Unlock__13VIColorBuffer(void *arg0) {
    s32 var_2;

    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        D_01228A18 = 0;
        D_01228A20 = 0;
        D_01228A10 = 0;
        D_01228A0C = 0;
        D_01228A04 = -1;
        D_01228A14 = 0;
        D_01228A1C = 0;
        D_01228A08 = -1;
        var_2 = 0;
    }
    return var_2;
}
