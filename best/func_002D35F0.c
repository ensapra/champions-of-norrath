/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_002D8270(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_008DD880;
extern M2C_UNK D_008DD8D0;
extern M2C_UNK D_008DDAC0;

s32 func_002D35F0(void) {
    s32 var_3;
    void *var_2;

    var_2 = &D_008DD8D0 + 0x84;
    var_3 = 3;
    do {
        M2C_FIELD(var_2, s32 *, -0x74) = 0;
        var_3 -= 1;
        M2C_FIELD(var_2, s32 *, -0x6C) = 0;
        M2C_FIELD(var_2, s32 *, -0x70) = 0;
        M2C_FIELD(var_2, s32 *, -4) = 0;
        M2C_FIELD(var_2, s32 *, 4) = 0;
        M2C_FIELD(var_2, s32 *, 0) = 0;
        var_2 += 0x1C;
    } while (var_3 >= 0);
    M2C_FIELD(&D_008DDAC0, s32 *, 0) = 0x10;
    M2C_FIELD(&D_008DDAC0, s32 *, 0x10) = 0;
    if (func_002D8270(&D_008DD880, 1, 0, &D_008DDAC0, 0x80, &D_008DDAC0, 0x80, 0, 0) >= 0) {
        return M2C_FIELD(&D_008DDAC0, s32 *, 0xC);
    }
    return 0;
}
