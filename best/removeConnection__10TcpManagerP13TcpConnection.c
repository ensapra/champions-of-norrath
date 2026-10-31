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

M2C_UNK Release__13TcpConnection(void *, void *, void **); /* extern */

void removeConnection__10TcpManagerP13TcpConnection(void *arg0, void *arg1) {
    void **temp_7;
    void *temp_3;

    if (M2C_FIELD(arg1, s32 *, 0xC0) == 0) {
        temp_7 = M2C_FIELD(arg1, void ***, 4);
        M2C_FIELD(arg1, s32 *, 0xC0) = 1;
        M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) - 1);
        if (temp_7 != NULL) {
            *temp_7 = M2C_FIELD(arg1, void **, 0);
        }
        temp_3 = M2C_FIELD(arg1, void **, 0);
        if (temp_3 != NULL) {
            M2C_FIELD(temp_3, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
        }
        if (M2C_FIELD(arg0, void **, 0x6C) == arg1) {
            M2C_FIELD(arg0, void **, 0x6C) = (void *) M2C_FIELD(arg1, void **, 0);
        }
        M2C_FIELD(arg1, void **, 0) = NULL;
        M2C_FIELD(arg1, void ***, 4) = NULL;
        Release__13TcpConnection(arg1, arg0, temp_7);
    }
}
