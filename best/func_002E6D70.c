/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

M2C_UNK DeleteSema_2(s32);                          /* extern */
M2C_UNK DeleteThread_2(s32);                        /* extern */
M2C_UNK SignalSema_2(s32);                          /* extern */
M2C_UNK SuspendThread_2(s32);                       /* extern */
M2C_UNK TerminateThread_2(s32);                     /* extern */
M2C_UNK func_002E73F8(s32);                         /* extern */
M2C_UNK func_002E7770(s32);                         /* extern */
M2C_UNK func_003021B0(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK D_008EBDD8;

s32 func_002E6D70(void) {
    s32 var_17;
    s32 var_17_2;
    void *var_16;
    void *var_16_2;

    var_17 = 0;
    if (M2C_FIELD(&D_008EBDD8, s32 *, 0x40) > 0) {
        var_16 = &D_008EBDD8 + 0x88;
        do {
            if (M2C_FIELD(var_16, s32 *, 0x1C) == 4) {
                func_002E73F8(M2C_FIELD(var_16, s32 *, 0x14));
            }
            var_17 += 1;
            var_16 += 0x110;
        } while (var_17 < M2C_FIELD(&D_008EBDD8, s32 *, 0x40));
    }
    var_17_2 = 0;
    if (M2C_FIELD(&D_008EBDD8, s32 *, 0x44) > 0) {
        var_16_2 = &D_008EBDD8 + 0x4C8;
        do {
            if (M2C_FIELD(var_16_2, s32 *, 0x1C) == 4) {
                func_002E7770(M2C_FIELD(var_16_2, s32 *, 0x14));
            }
            var_17_2 += 1;
            var_16_2 += 0x68;
        } while (var_17_2 < M2C_FIELD(&D_008EBDD8, s32 *, 0x44));
    }
    M2C_FIELD(&D_008EBDD8, s32 *, 0x38) = 1;
    if (M2C_FIELD(&D_008EBDD8, s32 *, 0x30) != 0) {
        SuspendThread_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x30));
        SignalSema_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x28));
        TerminateThread_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x30));
        DeleteThread_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x30));
        M2C_FIELD(&D_008EBDD8, s32 *, 0x30) = 0;
    }
    if (M2C_FIELD(&D_008EBDD8, s32 *, 0x2C) != 0) {
        DeleteSema_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x2C));
        M2C_FIELD(&D_008EBDD8, s32 *, 0x2C) = 0;
    }
    if (M2C_FIELD(&D_008EBDD8, s32 *, 0x28) != 0) {
        DeleteSema_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x28));
        M2C_FIELD(&D_008EBDD8, s32 *, 0x28) = 0;
    }
    func_003021B0(&D_008EBDD8 + 0x88, 0, 0x440);
    func_003021B0(&D_008EBDD8 + 0x4C8, 0, 0x1A0);
    M2C_FIELD(&D_008EBDD8, s32 *, 0x34) = 0;
    return 0;
}
