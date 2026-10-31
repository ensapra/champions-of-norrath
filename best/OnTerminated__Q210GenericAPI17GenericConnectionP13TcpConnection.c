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

M2C_UNK Release__13TcpConnection(s32);              /* extern */
extern M2C_UNK D_011CD990;

void OnTerminated__Q210GenericAPI17GenericConnectionP13TcpConnection(void *arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *var_5;
    s32 temp_2_3;
    s32 temp_3;
    void *temp_2_2;
    void *temp_7;

    temp_2 = M2C_FIELD(arg0, M2C_UNK **, 0x14);
    temp_3 = M2C_FIELD(temp_2, s32 *, -0x10);
    if (temp_3 == 0) {
        var_5 = &D_011CD990;
    } else {
        *(temp_2 + temp_3) = 0;
        var_5 = M2C_FIELD(arg0, M2C_UNK **, 0x14);
    }
    temp_7 = M2C_FIELD(arg0, void **, 8);
    temp_2_2 = M2C_FIELD(temp_7, void **, 0x64);
    M2C_FIELD((temp_2_2 + 0x20), M2C_UNK (**)(void *, M2C_UNK *, s16, void *), 4)(temp_7 + M2C_FIELD(temp_2_2, s16 *, 0x20), var_5, M2C_FIELD(arg0, s16 *, 0x1C), temp_7);
    temp_2_3 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_2_3 != 0) {
        Release__13TcpConnection(temp_2_3);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}
