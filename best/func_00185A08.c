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

s32 func_00186038();                                /* extern */
extern M2C_UNK xmlParseTryOrFinish;

s32 func_00185A08(s32 *arg0, s32 arg1) {
    s32 temp_2;

    *arg0 = arg1;
    temp_2 = func_00186038();
    if (temp_2 == 0) {
        M2C_FIELD(&xmlParseTryOrFinish, s32 *, 0x8A8) = (s32) (M2C_FIELD(&xmlParseTryOrFinish, s32 *, 0x8A8) + 1);
        return temp_2;
    }
    return 1;
}
