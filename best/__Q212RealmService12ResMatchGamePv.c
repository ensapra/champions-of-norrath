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
extern M2C_UNK D_0121C150;

void __Q212RealmService12ResMatchGamePv(void *arg0, s32 arg1) {
    void *temp_10;
    void *temp_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    __Q210GenericAPI15GenericResponsesUiPv(0x18, 1, arg1);
    temp_2 = arg0 + 0x20;
    temp_10 = arg0 + 0x74;
    temp_4 = arg0 + 0x2C;
    temp_5 = arg0 + 0x38;
    temp_6 = arg0 + 0x44;
    temp_7 = arg0 + 0x50;
    temp_8 = arg0 + 0x5C;
    temp_9 = arg0 + 0x68;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0121C150;
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
    M2C_FIELD(temp_9, s32 *, 8) = 0;
    M2C_FIELD(temp_10, s32 *, 8) = 0;
    M2C_FIELD(temp_7, s32 *, 8) = 0;
    M2C_FIELD(temp_8, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(temp_7, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(temp_8, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(temp_9, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(temp_10, s32 *, 4) = 0;
}
