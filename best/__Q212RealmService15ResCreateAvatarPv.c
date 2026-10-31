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

M2C_UNK __Q210GenericAPI15GenericResponsesUiPv(M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_0121C3B8;

void __Q212RealmService15ResCreateAvatarPv(void *arg0, s32 arg1) {
    void *temp_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;

    __Q210GenericAPI15GenericResponsesUiPv(7, 1, arg1);
    temp_2 = arg0 + 0x20;
    temp_6 = arg0 + 0x44;
    temp_4 = arg0 + 0x2C;
    temp_5 = arg0 + 0x38;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0121C3B8;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(temp_4, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_4, s32 *, 4) = 0;
    M2C_FIELD(temp_5, s32 *, 8) = 0;
    M2C_FIELD(temp_6, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(temp_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(temp_6, s32 *, 4) = 0;
}
