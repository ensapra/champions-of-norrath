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
M2C_UNK ___12VITCPSocket2(s32, M2C_UNK);            /* extern */
M2C_UNK __builtin_delete(void *, void *);           /* extern */
M2C_UNK __builtin_vec_delete(s32);                  /* extern */
M2C_UNK returnBlock__14BlockAllocatorP10data_block(s32, void *); /* extern */

void ___13TcpConnection(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 var_2;

    temp_4 = M2C_FIELD(arg0, s32 *, 0xA8);
    if (temp_4 != 0) {
        __builtin_vec_delete(temp_4);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_4_2 != 0) {
        Close__12VITCPSocket2(temp_4_2);
        temp_4_3 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_4_3 != 0) {
            ___12VITCPSocket2(temp_4_3, 3);
        }
    }
    var_2 = arg1 & 1;
    if (M2C_FIELD(arg0, void **, 0x34) != NULL) {
        do {
            M2C_FIELD(arg0, void **, 0x34) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x10);
            returnBlock__14BlockAllocatorP10data_block(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, void **, 0x34));
        } while (M2C_FIELD(arg0, void **, 0x34) != NULL);
        var_2 = arg1 & 1;
    }
    if (var_2 != 0) {
        __builtin_delete(arg0, M2C_FIELD(arg0, void **, 0x34));
    }
}
