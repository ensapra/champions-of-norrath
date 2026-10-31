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

M2C_UNK changeHostPort__Q210GenericAPI14GenericAPICoreUiPCcs(void *, M2C_UNK, M2C_UNK *, s16); /* extern */
extern M2C_UNK D_011D9780;

void OnDisconnect__Q212RealmService19RealmGatewayAPICorePCcs(void *arg0) {
    M2C_UNK *temp_6;
    M2C_UNK *var_2;
    s32 temp_3;
    void *temp_2;
    void *temp_5;

    if ((M2C_FIELD(arg0, s32 *, 0x70) != 0) && (M2C_FIELD(arg0, s32 *, 0x6C) != 0)) {
        temp_5 = M2C_FIELD(arg0, void **, 0x68);
        temp_2 = M2C_FIELD(temp_5, void **, 8);
        M2C_FIELD((temp_2 + 0x18), M2C_UNK (**)(void *, void *), 4)(temp_5 + M2C_FIELD(temp_2, s16 *, 0x18), temp_5);
        temp_6 = M2C_FIELD(arg0, M2C_UNK **, 0x84);
        var_2 = &D_011D9780;
        temp_3 = M2C_FIELD(temp_6, s32 *, -0x10);
        if (temp_3 != 0) {
            *(temp_6 + temp_3) = 0;
            var_2 = M2C_FIELD(arg0, M2C_UNK **, 0x84);
        }
        changeHostPort__Q210GenericAPI14GenericAPICoreUiPCcs(arg0, 0, var_2, M2C_FIELD(arg0, s16 *, 0x88));
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
        M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    }
}
