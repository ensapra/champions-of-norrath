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

s32 PollSema_2(s32);                                /* extern */
M2C_UNK SignalSema_2(s32);                          /* extern */
s32 func_002D8270(M2C_UNK *, M2C_UNK, M2C_UNK, void *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_00305118(M2C_UNK *, s8 *, M2C_UNK);    /* extern */
extern s32 D_00446070;
extern s32 D_00446074;
extern M2C_UNK D_008E6B40;
extern M2C_UNK D_008E6C04;
extern M2C_UNK D_008E8100;
extern M2C_UNK func_002E0DE0;

s32 func_002E0F78(s32 arg0, s32 arg1, s8 *arg2, s32 arg3) {
    s32 temp_2;
    s32 var_2;
    void *temp_3;

    if (M2C_FIELD(&D_008E6B40, s32 *, 0x24) == 0) {
        return -0x64;
    }
    var_2 = -0xC8;
    if (PollSema_2(D_00446074) >= 0) {
        if ((arg2 == NULL) || (*arg2 == 0)) {
            SignalSema_2(D_00446074);
            return -0xD2;
        }
        func_00305118(&D_008E6C04, arg2, 0x3FF);
        temp_3 = &D_008E6C04 - 0x14;
        M2C_FIELD(&D_008E6C04, s32 *, -0x14) = arg0;
        M2C_FIELD(temp_3, s32 *, 8) = arg3;
        M2C_FIELD(temp_3, s32 *, 4) = arg1;
        M2C_FIELD(temp_3, s8 *, 0x413) = 0;
        temp_2 = func_002D8270(&D_008E6B40, 2, 1, temp_3, 0x414, &D_008E8100, 4, &func_002E0DE0, 0);
        if (temp_2 == 0) {
            D_00446070 = 2;
        } else {
            SignalSema_2(D_00446074);
        }
        var_2 = temp_2;
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
