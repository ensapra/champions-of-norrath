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

s32 xmlMemSetup(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_2;

    var_2 = -1;
    if ((arg0 != 0) && (arg1 != 0) && (arg2 != 0) && (arg3 != 0)) {
        D_011B1E1C = arg1;
        D_011B1E20 = arg2;
        D_011B1E24 = arg3;
        D_011B1E18 = arg0;
        var_2 = 0;
    }
    return var_2;
}
