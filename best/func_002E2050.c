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

M2C_UNK FlushCache_2(M2C_UNK);                      /* extern */
s32 PollSema_2(s32);                                /* extern */
M2C_UNK SignalSema_2(s32);                          /* extern */
s32 func_002D8270(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_00305118(M2C_UNK *, s8 *, M2C_UNK);    /* extern */
extern s32 D_00446070;
extern s32 D_00446074;
extern M2C_UNK D_008E6B40;
extern M2C_UNK D_008E6BA0;
extern M2C_UNK D_008E6BF0;
extern M2C_UNK D_008E8100;
extern M2C_UNK func_002E0DE0;

s32 func_002E2050(s32 arg0, s32 arg1, s8 *arg2, s8 *arg3) {
    s32 temp_2;
    s32 var_2;
    void *temp_16;

    if (M2C_FIELD(&D_008E6B40, s32 *, 0x24) == 0) {
        return -0x64;
    }
    var_2 = -0xC8;
    if (PollSema_2(D_00446074) >= 0) {
        if ((arg2 == NULL) || (*arg2 == 0) || (arg3 == NULL)) {
            SignalSema_2(D_00446074);
            return -0xD2;
        }
        M2C_FIELD(&D_008E6BF0, s32 *, 0) = arg0;
        M2C_FIELD(&D_008E6BF0, s32 *, 4) = arg1;
        M2C_FIELD(&D_008E6BF0, s32 *, 8) = 0x10;
        func_00305118(&D_008E6BF0 + 0x14, arg2, 0x3FF);
        M2C_FIELD(&D_008E6BF0, s8 *, 0x413) = 0;
        func_00305118(&D_008E6BA0, arg3, 0x20);
        temp_16 = &D_008E6BA0 - 0x20;
        M2C_FIELD(&D_008E6BF0, void **, 0x10) = temp_16;
        M2C_FIELD(temp_16, s8 *, 0x3F) = 0;
        FlushCache_2(0);
        temp_2 = func_002D8270(&D_008E6B40, 0xE, 1, &D_008E6BF0, 0x414, &D_008E8100, 4, &func_002E0DE0, 0);
        if (temp_2 == 0) {
            D_00446070 = 0x13;
        } else {
            SignalSema_2(D_00446074);
        }
        var_2 = temp_2;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
