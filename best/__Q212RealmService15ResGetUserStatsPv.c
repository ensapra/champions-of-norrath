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
M2C_UNK __Q24Base16AutoVariableBase(s32);           /* extern */
extern M2C_UNK D_0121C1F0;
extern M2C_UNK D_0121FFF0;

void __Q212RealmService15ResGetUserStatsPv(void *arg0, s32 arg1) {
    void *temp_16;

    __Q210GenericAPI15GenericResponsesUiPv(0x13, 1, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0121C1F0;
    temp_16 = arg0 + 0x58;
    __Q24Base16AutoVariableBase(arg0 + 0x54);
    M2C_FIELD(temp_16, s32 *, 8) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0121FFF0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(temp_16, s32 *, 4) = 0;
}
