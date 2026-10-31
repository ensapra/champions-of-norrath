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

M2C_UNK Disconnect__13TcpConnectionb(void *, M2C_UNK); /* extern */
M2C_UNK Release__10TcpManager(s32);                 /* extern */
M2C_UNK Release__13TcpConnection(void *);           /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __wrap_free(void *);                        /* extern */
extern M2C_UNK D_011F290C;
extern M2C_UNK D_01205360;

void ___Q210GenericAPI17GenericConnection(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 temp_3_2;
    void **temp_2_2;
    void **temp_2_4;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_01205360;
    temp_4 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_4 != NULL) {
        M2C_FIELD(temp_4, s32 *, 0x14) = 0;
        Disconnect__13TcpConnectionb(temp_4, 1);
        Release__13TcpConnection(M2C_FIELD(arg0, void **, 0x10));
    }
    Release__10TcpManager(M2C_FIELD(arg0, s32 *, 0xC));
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x18) - 0x10;
    temp_2 = M2C_FIELD(temp_4_2, s32 *, 8) - 1;
    M2C_FIELD(temp_4_2, s32 *, 8) = temp_2;
    if (temp_2 == 0) {
        temp_3 = M2C_FIELD(temp_4_2, s32 *, 4);
        if ((u32) (temp_3 + 0x10) >= 0x81U) {
            __wrap_free(temp_4_2);
        } else {
            temp_2_2 = &D_011F290C + (((u32) (temp_3 + 0x17) >> 3) * 4);
            M2C_FIELD(temp_4_2, void **, 0) = (void *) *temp_2_2;
            *temp_2_2 = temp_4_2;
        }
    }
    temp_4_3 = M2C_FIELD(arg0, s32 *, 0x14) - 0x10;
    temp_2_3 = M2C_FIELD(temp_4_3, s32 *, 8) - 1;
    M2C_FIELD(temp_4_3, s32 *, 8) = temp_2_3;
    if (temp_2_3 == 0) {
        temp_3_2 = M2C_FIELD(temp_4_3, s32 *, 4);
        if ((u32) (temp_3_2 + 0x10) < 0x81U) {
            temp_2_4 = &D_011F290C + (((u32) (temp_3_2 + 0x17) >> 3) * 4);
            M2C_FIELD(temp_4_3, void **, 0) = (void *) *temp_2_4;
            *temp_2_4 = temp_4_3;
        } else {
            __wrap_free(temp_4_3);
        }
    }
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
