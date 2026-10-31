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

M2C_UNK vfprintf(s32, s64 *);                       /* extern */
extern s32 D_0118EDD4;
extern void *_impure_ptr;

void xmlGenericErrorDefaultFunc(s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, f32 fparg6, f32 fparg7) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    s64 sp30;
    s64 sp38;
    s64 sp40;
    s64 sp48;
    s64 sp50;
    s64 sp58;
    s32 var_4;

    sp30 = arg2;
    var_4 = D_0118EDD4;
    sp38 = arg3;
    sp40 = arg4;
    sp48 = arg5;
    sp50 = arg6;
    sp58 = arg7;
    sp10 = fparg0;
    sp14 = fparg1;
    sp18 = fparg2;
    sp1C = fparg3;
    sp20 = fparg4;
    sp24 = fparg5;
    sp28 = fparg6;
    sp2C = fparg7;
    if (var_4 == 0) {
        var_4 = M2C_FIELD(_impure_ptr, s32 *, 0xC);
        D_0118EDD4 = var_4;
    }
    vfprintf(var_4, &sp30);
}
