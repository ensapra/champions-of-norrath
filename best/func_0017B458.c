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

s32 PollSema(s32);                                  /* extern */
M2C_UNK SignalSema(s32);                            /* extern */
s32 func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_0017A088;
extern M2C_UNK func_001CE218;
extern M2C_UNK func_01000000;

s32 func_0017B458(s32 arg0, s32 arg1) {
    s32 temp_2;
    void *temp_2_2;
    void *temp_7;

    temp_2_2 = &func_01000000 + 0xEB640;
    if (M2C_FIELD(temp_2_2, s32 *, 0x24) == 0) {
        return -0x64;
    }
    temp_7 = &func_01000000 + 0xEB6C0;
    if (PollSema(M2C_FIELD(&func_001CE218, s32 *, 0x226C)) < 0) {
        return -0xC8;
    }
    M2C_FIELD(temp_7, s32 *, 4) = arg0;
    M2C_FIELD(temp_7, s32 *, 8) = arg1;
    temp_2 = func_001B08B0(temp_2_2, 0x11, 1, temp_7, 0x30, &func_01000000 + 0xECC00, 4, &func_0017A088, 0);
    if (temp_2 == 0) {
        M2C_FIELD(&func_001CE218, s32 *, 0x2268) = 0x11;
    } else {
        SignalSema(M2C_FIELD(&func_001CE218, s32 *, 0x226C));
    }
    return temp_2;
}
