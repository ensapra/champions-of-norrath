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

M2C_UNK Send__13TcpConnectionPCcUi(void *, s32, s32); /* extern */

void Send__Q210GenericAPI17GenericConnectionRQ24Base10ByteStream(void *arg0, void *arg1) {
    void *temp_4;

    temp_4 = M2C_FIELD(arg0, void **, 0x10);
    if ((temp_4 != NULL) && (M2C_FIELD(temp_4, s32 *, 0x10) == 1)) {
        Send__13TcpConnectionPCcUi(temp_4, *M2C_FIELD(arg1, s32 **, 0xC), M2C_FIELD(arg1, s32 *, 0x10));
    }
}
