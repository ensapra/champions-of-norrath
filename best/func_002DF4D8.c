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

s32 func_002DD640();                                /* extern */
M2C_UNK func_002DD698();                            /* extern */
M2C_UNK func_002DE9A8(s32);                         /* extern */
extern s32 D_008E4540;

s32 func_002DF4D8(u32 arg0) {
    s32 temp_17;
    s32 temp_18;
    s32 temp_2;

    temp_17 = (arg0 >> 8) * 0x10;
    temp_18 = func_002DD640();
    if (((s32) arg0 < 0) || ((arg0 ^ M2C_FIELD(temp_17, s32 *, 4)) & 0xFF)) {
        if (temp_18 != 0) {
            func_002DD698();
        }
        return 0x80008002;
    }
    func_002DE9A8(M2C_FIELD(temp_17, s32 *, 4));
    temp_2 = D_008E4540;
    D_008E4540 = temp_17;
    M2C_FIELD(temp_17, s32 *, 0) = temp_2;
    M2C_FIELD(temp_17, s32 *, 4) = 0;
    if (temp_18 != 0) {
        func_002DD698();
    }
    return 0;
}
