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

M2C_UNK AddRef__13TcpConnection(void *);            /* extern */

void addNewConnection__10TcpManagerP13TcpConnection(void *arg0, void *arg1) {
    void *temp_2;

    AddRef__13TcpConnection(arg1);
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x6C);
    temp_2 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_2 != NULL) {
        M2C_FIELD(temp_2, void **, 4) = arg1;
    }
    M2C_FIELD(arg0, void **, 0x6C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) + 1);
}
