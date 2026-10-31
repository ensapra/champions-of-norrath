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

s32 _fcntl(s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, f32 fparg6, f32 fparg7) {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    s64 sp28;
    s64 sp30;
    s64 sp38;
    s64 sp40;
    s64 sp48;
    s64 sp50;
    s64 sp58;

    sp24 = fparg7;
    sp28 = arg1;
    sp30 = arg2;
    sp38 = arg3;
    sp40 = arg4;
    sp48 = arg5;
    sp50 = arg6;
    sp58 = arg7;
    sp8 = fparg0;
    spC = fparg1;
    sp10 = fparg2;
    sp14 = fparg3;
    sp18 = fparg4;
    sp1C = fparg5;
    sp20 = fparg6;
    return 1;
}
