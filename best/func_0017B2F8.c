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

M2C_UNK FlushCache(M2C_UNK);                        /* extern */
s32 PollSema(s32);                                  /* extern */
M2C_UNK SignalSema(s32);                            /* extern */
M2C_UNK func_001A4738(void *, s8 *, M2C_UNK);       /* extern */
s32 func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_0017A088;
extern M2C_UNK func_001CE218;
extern M2C_UNK func_01000000;

s32 func_0017B2F8(s32 arg0, s32 arg1, s8 *arg2, s8 *arg3) {
    s32 temp_2_3;
    s32 var_2;
    void *temp_16;
    void *temp_16_2;
    void *temp_2;
    void *temp_2_2;

    temp_2 = &func_01000000 + 0xEB640;
    if (M2C_FIELD(temp_2, s32 *, 0x24) == 0) {
        return -0x64;
    }
    var_2 = -0xC8;
    if (PollSema(M2C_FIELD(&func_001CE218, s32 *, 0x226C)) >= 0) {
        if ((arg2 == NULL) || (*arg2 == 0) || (temp_2_2 = &func_01000000 + 0xEB6F0, (arg3 == NULL))) {
            SignalSema(M2C_FIELD(&func_001CE218, s32 *, 0x226C));
            return -0xD2;
        }
        M2C_FIELD(&func_01000000, s32 *, 0xEB6F0) = arg0;
        M2C_FIELD(temp_2_2, s32 *, 4) = arg1;
        M2C_FIELD(temp_2_2, s32 *, 8) = 0x10;
        func_001A4738(temp_2_2 + 0x14, arg2, 0x3FF);
        temp_16 = &func_01000000 + 0xEB6A0;
        M2C_FIELD(temp_2_2, s8 *, 0x413) = 0;
        func_001A4738(temp_16, arg3, 0x20);
        temp_16_2 = temp_16 - 0x20;
        M2C_FIELD(temp_2_2, void **, 0x10) = temp_16_2;
        M2C_FIELD(temp_16_2, s8 *, 0x3F) = 0;
        FlushCache(0);
        temp_2_3 = func_001B08B0(temp_2, 0xE, 1, temp_2_2, 0x414, &func_01000000 + 0xECC00, 4, &func_0017A088, 0);
        if (temp_2_3 == 0) {
            M2C_FIELD(&func_001CE218, s32 *, 0x2268) = 0x13;
        } else {
            SignalSema(M2C_FIELD(&func_001CE218, s32 *, 0x226C));
        }
        var_2 = temp_2_3;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
