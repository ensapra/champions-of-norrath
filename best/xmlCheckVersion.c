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

s32 exit(M2C_UNK);                                  /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32, M2C_UNK, s32);
extern s32 D_0118EDD4;
extern M2C_UNK D_011D5FC8;
extern M2C_UNK D_011D6008;

void xmlCheckVersion(s32 arg0) {
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_2;

    temp_lo = arg0 / 10000;
    if (temp_lo == (0x4F52 / 10000)) {
        var_2 = 0x64;
    } else {
        D_0118EDD0(D_0118EDD4, &D_011D5FC8, temp_lo, 2, temp_lo);
        var_2 = exit(1);
    }
    temp_lo_2 = (s32) M2C_ERROR(/* Read from unset register $a2 */) / var_2;
    if (((s32) M2C_ERROR(/* Read from unset register $a3 */) / var_2) < temp_lo_2) {
        D_0118EDD0(D_0118EDD4, &D_011D6008, temp_lo_2, 0xCB, (s32) &D_0118EDD4);
    }
}
