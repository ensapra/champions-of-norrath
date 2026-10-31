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

s32 AddDmacHandler(M2C_UNK, M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK EnableDmac(M2C_UNK, s32);                   /* extern */
extern s32 D_011B01F0;
extern M2C_UNK VIEERasterDMACHandler__Fi;

s32 InitDMACHandler__8VIRaster(void) {
    s32 temp_2;
    s32 var_2;

    *(s32 *)0x1000E010 = 1;
    temp_2 = AddDmacHandler(1, &VIEERasterDMACHandler__Fi, 0);
    var_2 = -1;
    D_011B01F0 = temp_2;
    if (temp_2 >= 0) {
        EnableDmac(1, temp_2);
        var_2 = 0;
    }
    return var_2;
}
