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
s32 CheckPendingConnection__12VITCPSocket2(s32);    /* extern */
M2C_UNK Disconnect__13TcpConnectionb(void *, M2C_UNK); /* extern */
M2C_UNK Release__13TcpConnection(void *);           /* extern */
s32 isDone__5ClockUi(void *, s32);                  /* extern */

s32 finishConnect__13TcpConnection(void *arg0) {
    M2C_UNK var_5;
    s32 temp_2;
    s32 temp_3;
    s32 temp_5;
    s32 var_18;
    void **temp_6;
    void *temp_2_2;

    var_18 = 0;
    AddRef__13TcpConnection();
    temp_3 = M2C_FIELD(arg0, s32 *, 0x10);
    switch (temp_3) {                               /* irregular */
    case 2:
        var_5 = 0;
block_14:
        var_18 = -1;
        Disconnect__13TcpConnectionb(arg0, var_5);
        break;
    case 0:
        temp_2 = CheckPendingConnection__12VITCPSocket2(M2C_FIELD(arg0, s32 *, 8));
        if (temp_2 == 2) {
            var_5 = 0;
            goto block_14;
        }
        if (temp_2 != 1) {
            M2C_FIELD(arg0, s32 *, 0x10) = 1;
            var_18 = 1;
        }
        break;
    case 1:
        var_5 = 1;
        goto block_14;
    }
    if ((var_18 == 0) && (temp_5 = M2C_FIELD(arg0, s32 *, 0xAC), (temp_5 != 0))) {
        if (isDone__5ClockUi(arg0 + 0xB0, temp_5) != 0) {
            Disconnect__13TcpConnectionb(arg0, 0);
            var_18 = -1;
        } else {
            goto block_21;
        }
    } else {
block_21:
        if (var_18 == 1) {
            temp_6 = *M2C_FIELD(arg0, void ****, 0xC);
            if (temp_6 != NULL) {
                temp_2_2 = *temp_6;
                M2C_FIELD((temp_2_2 + 8), M2C_UNK (**)(void *, void *, void **), 4)(temp_6 + M2C_FIELD(temp_2_2, s16 *, 8), arg0, temp_6);
            }
        }
    }
    Release__13TcpConnection(arg0);
    return var_18;
}
