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

M2C_UNK ___11VIUDPSocket(void *, M2C_UNK);          /* extern */
M2C_UNK ___Q212RealmService15RealmGatewayAPI(void *, M2C_UNK); /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __wrap_free(void *);                        /* extern */
extern M2C_UNK D_011F2910;
extern M2C_UNK D_01210298;

void ___16VIRealmInterface(void *arg0, s32 arg1) {
    s32 *var_16;
    s32 *var_16_2;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    void **temp_3;
    void **temp_3_2;
    void *temp_18;
    void *temp_18_2;
    void *temp_4;
    void *temp_4_2;

    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_01210298;
    if (arg0 != (void *)-0x124C) {
        var_16 = arg0 + 0x13DC;
        temp_18 = arg0 + 0x124C;
        if (temp_18 != var_16) {
            do {
                var_16 -= 4;
                temp_4 = *var_16 - 0x10;
                temp_2 = M2C_FIELD(temp_4, s32 *, 8) - 1;
                M2C_FIELD(temp_4, s32 *, 8) = temp_2;
                if (temp_2 == 0) {
                    temp_2_2 = M2C_FIELD(temp_4, s32 *, 4);
                    if ((u32) (temp_2_2 + 0x10) >= 0x81U) {
                        __wrap_free(temp_4);
                    } else {
                        temp_3 = ((((u32) (temp_2_2 + 0x17) >> 3) - 1) * 4) + &D_011F2910;
                        M2C_FIELD(temp_4, void **, 0) = (void *) *temp_3;
                        *temp_3 = temp_4;
                    }
                }
            } while (temp_18 != var_16);
        }
    }
    if (arg0 != (void *)-0x10BC) {
        var_16_2 = arg0 + 0x124C;
        temp_18_2 = arg0 + 0x10BC;
        if (temp_18_2 != var_16_2) {
            do {
                var_16_2 -= 4;
                temp_4_2 = *var_16_2 - 0x10;
                temp_2_3 = M2C_FIELD(temp_4_2, s32 *, 8) - 1;
                M2C_FIELD(temp_4_2, s32 *, 8) = temp_2_3;
                if (temp_2_3 == 0) {
                    temp_2_4 = M2C_FIELD(temp_4_2, s32 *, 4);
                    if ((u32) (temp_2_4 + 0x10) >= 0x81U) {
                        __wrap_free(temp_4_2);
                    } else {
                        temp_3_2 = ((((u32) (temp_2_4 + 0x17) >> 3) - 1) * 4) + &D_011F2910;
                        M2C_FIELD(temp_4_2, void **, 0) = (void *) *temp_3_2;
                        *temp_3_2 = temp_4_2;
                    }
                }
            } while (temp_18_2 != var_16_2);
        }
    }
    ___11VIUDPSocket(arg0 + 0xD44, 2);
    ___Q212RealmService15RealmGatewayAPI(arg0, 0);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
