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

M2C_UNK AddRef__13TcpConnection();                  /* extern */
M2C_UNK Close__12VITCPSocket2(s32);                 /* extern */
M2C_UNK Release__13TcpConnection(void *);           /* extern */
M2C_UNK ___12VITCPSocket2(s32, M2C_UNK);            /* extern */
M2C_UNK removeConnection__10TcpManagerP13TcpConnection(s32, void *); /* extern */

void Disconnect__13TcpConnectionb(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_3;
    void **temp_6;
    void *temp_2_2;

    AddRef__13TcpConnection();
    M2C_FIELD(arg0, s32 *, 0x10) = 2;
    if (M2C_FIELD(arg0, s32 *, 0xC0) == 0) {
        removeConnection__10TcpManagerP13TcpConnection(M2C_FIELD(arg0, s32 *, 0xC), arg0);
        M2C_FIELD(arg0, s32 *, 0xC0) = 1;
    }
    temp_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_2 != 0) {
        Close__12VITCPSocket2(temp_2);
        temp_3 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_3 != 0) {
            ___12VITCPSocket2(temp_3, 3);
        }
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    if (arg1 != 0) {
        temp_6 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_6 != NULL) {
            temp_2_2 = *temp_6;
            M2C_FIELD((temp_2_2 + 0x10), M2C_UNK (**)(void *, void *, void **), 4)(temp_6 + M2C_FIELD(temp_2_2, s16 *, 0x10), arg0, temp_6);
        }
    }
    Release__13TcpConnection(arg0);
}
