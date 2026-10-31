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

M2C_UNK vsnprintf16__8VIStringPUsiPCcPv(s64 *, s64 *); /* extern */

void snprintf16__8VIStringPUsiPCce(s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, f32 fparg6, f32 fparg7) {
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    s64 sp48;
    s64 sp50;
    s64 sp58;
    s64 sp60;
    s64 sp68;

    sp48 = arg3;
    sp50 = arg4;
    sp58 = arg5;
    sp60 = arg6;
    sp68 = arg7;
    sp28 = fparg0;
    sp2C = fparg1;
    sp30 = fparg2;
    sp34 = fparg3;
    sp38 = fparg4;
    sp3C = fparg5;
    sp40 = fparg6;
    sp44 = fparg7;
    vsnprintf16__8VIStringPUsiPCcPv(&sp48, &sp48);
}
