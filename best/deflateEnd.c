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

s32 deflateEnd(void *arg0) {
    s32 temp_17;
    s32 var_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_5;

    if ((arg0 == NULL) || (temp_5 = M2C_FIELD(arg0, void **, 0x1C), (temp_5 == NULL))) {
        return -2;
    }
    temp_17 = M2C_FIELD(temp_5, s32 *, 4);
    if ((temp_17 == 0x2A) || (temp_17 == 0x71) || (var_2 = -2, (temp_17 == 0x29A))) {
        temp_3 = M2C_FIELD(temp_5, void **, 8);
        if (temp_3 != NULL) {
            M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg0, s32 *, 0x28), temp_3);
        }
        temp_3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x4C);
        if (temp_3_2 != NULL) {
            M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg0, s32 *, 0x28), temp_3_2);
        }
        temp_3_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x48);
        if (temp_3_3 != NULL) {
            M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg0, s32 *, 0x28), temp_3_3);
        }
        temp_3_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x38);
        if (temp_3_4 != NULL) {
            M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg0, s32 *, 0x28), temp_3_4);
        }
        M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, void **, 0x1C));
        M2C_FIELD(arg0, void **, 0x1C) = NULL;
        var_2 = ((temp_17 ^ 0x71) != 0) ? 0 : -3;
    }
    return var_2;
}
