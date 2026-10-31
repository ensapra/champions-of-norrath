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

M2C_UNK Bound__6VIBBoxiRC7VIVect3(s32, s32, s32);   /* extern */

s32 Init__6VIBBoxiP7VIVect3(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_6;
    s32 var_16;
    s32 var_17;
    s32 var_5;

    var_17 = 0;
    if (arg1 > 0) {
        var_16 = arg2;
        var_5 = 0 == 0;
        do {
            var_17 += 1;
            temp_6 = var_16;
            var_16 += 0xC;
            Bound__6VIBBoxiRC7VIVect3(arg0, var_5, temp_6);
            var_5 = var_17 == 0;
        } while (var_17 < arg1);
    }
    return 0;
}
