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

M2C_UNK Close__12VITCPSocket2(s32);                 /* extern */
M2C_UNK Release__13TcpConnection(void *);           /* extern */
s32 Send__12VITCPSocket2PCciPii(s32, s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK ___12VITCPSocket2(s32, M2C_UNK);            /* extern */
s32 *__errno();                                     /* extern */
M2C_UNK removeConnection__10TcpManagerP13TcpConnection(s32, void *); /* extern */
M2C_UNK returnBlock__14BlockAllocatorP10data_block(s32, void *); /* extern */

s32 processOutgoing__13TcpConnection(void *arg0) {
    s32 *var_4;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 var_17;
    s32 var_2;
    void **temp_6;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_5;

    var_2 = 1;
    if (M2C_FIELD(arg0, s32 *, 0x10) == 1) {
        temp_3 = M2C_FIELD(arg0, void **, 0x34);
        var_17 = 1;
        if (temp_3 != NULL) {
            temp_2 = M2C_FIELD(temp_3, s32 *, 4);
            temp_2_2 = Send__12VITCPSocket2PCciPii(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(temp_3, s32 *, 0xC) + temp_2, M2C_FIELD(temp_3, s32 *, 0) - temp_2, 0, 0);
            if (temp_2_2 >= 0) {
                temp_5 = M2C_FIELD(arg0, void **, 0x34);
                temp_4 = M2C_FIELD(temp_5, s32 *, 4);
                if ((u32) temp_2_2 < (u32) (M2C_FIELD(temp_5, s32 *, 0) - temp_4)) {
                    M2C_FIELD(temp_5, s32 *, 4) = (s32) (temp_4 + temp_2_2);
                } else if (temp_2_2 != 0) {
                    temp_2_3 = M2C_FIELD(temp_5, void **, 0x10);
                    if (M2C_FIELD(arg0, void **, 0x38) == temp_5) {
                        M2C_FIELD(arg0, void **, 0x38) = temp_2_3;
                        M2C_FIELD(arg0, void **, 0x34) = (void *) M2C_FIELD(temp_5, void **, 0x10);
                    } else {
                        M2C_FIELD(arg0, void **, 0x34) = temp_2_3;
                    }
                    var_17 = 0;
                    returnBlock__14BlockAllocatorP10data_block(M2C_FIELD(arg0, s32 *, 0x30), temp_5);
                } else {
                    var_4 = arg0 + 0x2C;
                    goto block_13;
                }
            } else {
                var_4 = arg0 + 0x2C;
                if (*__errno() != 0xB) {
block_13:
                    M2C_FIELD(arg0, s32 *, 0x10) = 2;
                    *var_4 += 1;
                    if (M2C_FIELD(arg0, s32 *, 0xC0) == 0) {
                        removeConnection__10TcpManagerP13TcpConnection(M2C_FIELD(arg0, s32 *, 0xC), arg0);
                        M2C_FIELD(arg0, s32 *, 0xC0) = 1;
                    }
                    temp_4_2 = M2C_FIELD(arg0, s32 *, 8);
                    if (temp_4_2 != 0) {
                        Close__12VITCPSocket2(temp_4_2);
                        temp_4_3 = M2C_FIELD(arg0, s32 *, 8);
                        if (temp_4_3 != 0) {
                            ___12VITCPSocket2(temp_4_3, 3);
                        }
                        M2C_FIELD(arg0, s32 *, 8) = 0;
                    }
                    temp_6 = M2C_FIELD(arg0, void ***, 0x14);
                    if (temp_6 != NULL) {
                        temp_2_4 = *temp_6;
                        M2C_FIELD((temp_2_4 + 0x10), M2C_UNK (**)(void *, void *, void **), 4)(temp_6 + M2C_FIELD(temp_2_4, s16 *, 0x10), arg0, temp_6);
                    }
                    var_17 = -1;
                    Release__13TcpConnection(arg0);
                }
            }
        }
        var_2 = var_17;
    }
    return var_2;
}
