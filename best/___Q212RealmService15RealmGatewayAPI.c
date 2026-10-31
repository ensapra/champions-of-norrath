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

M2C_UNK __builtin_delete(void *);                   /* extern */
extern M2C_UNK D_01214760;

void ___Q212RealmService15RealmGatewayAPI(void *arg0, s32 arg1) {
    void *temp_2;
    void *temp_6;

    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_01214760;
    temp_6 = M2C_FIELD(arg0, void **, 0);
    if (temp_6 != NULL) {
        temp_2 = M2C_FIELD(temp_6, void **, 0x64);
        M2C_FIELD((temp_2 + 8), M2C_UNK (**)(void *, M2C_UNK, void *), 4)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
    }
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
