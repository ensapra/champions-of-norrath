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

s32 func_002DE908(s32);                             /* extern */
extern s32 D_008E4540;

s32 func_002DF580(u32 arg0) {
    s32 temp_16;
    s32 temp_2;
    s32 temp_3;

    temp_16 = (arg0 >> 8) * 0x10;
    if (((s32) arg0 < 0) || ((arg0 ^ M2C_FIELD(temp_16, s32 *, 4)) & 0xFF)) {
        return 0x80008002;
    }
    temp_2 = func_002DE908(M2C_FIELD(temp_16, s32 *, 4));
    if (temp_2 == 0) {
        temp_3 = D_008E4540;
        D_008E4540 = temp_16;
        M2C_FIELD(temp_16, s32 *, 0) = temp_3;
        M2C_FIELD(temp_16, s32 *, 4) = 0;
    }
    return temp_2;
}
