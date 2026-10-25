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

M2C_UNK func_002D3C78(s32, s32, M2C_UNK);           /* extern */
s32 func_002D8270(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_008DD880;
extern M2C_UNK D_008DDAC0;

s32 func_002D43E8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_2;

    M2C_FIELD(&D_008DDAC0, s32 *, 0xC) = arg2;
    M2C_FIELD(&D_008DDAC0, s32 *, 0) = 0xA;
    M2C_FIELD(&D_008DDAC0, s32 *, 4) = arg0;
    M2C_FIELD(&D_008DDAC0, s32 *, 8) = arg1;
    if (func_002D8270(&D_008DD880, 1, 0, &D_008DDAC0, 0x80, &D_008DDAC0, 0x80, 0, 0) >= 0) {
        temp_2 = M2C_FIELD(&D_008DDAC0, s32 *, 0x10);
        if (M2C_FIELD(&D_008DDAC0, s32 *, 0x10) == 1) {
            func_002D3C78(arg0, arg1, 2);
        }
        return temp_2;
    }
    return 0;
}
