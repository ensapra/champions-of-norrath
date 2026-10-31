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
extern M2C_UNK D_0121C1B0;

void __Q212RealmService12ResLeaveRoomPv(void *arg0, s32 arg1) {
    __Q210GenericAPI15GenericResponsesUiPv(0x15, 1, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0121C1B0;
}
