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

s32 CalcDataSize__12VICollBuffer(void *arg0) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_4;
    s32 var_2;
    s32 var_3;
    s32 var_4;

    temp_3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_3 == 1) {
        var_4 = M2C_FIELD(arg0, s32 *, 0x30) << 5;
        var_3 = M2C_FIELD(arg0, s32 *, 0x38) * 0x1C;
        var_2 = M2C_FIELD(arg0, s32 *, 0x40) * 6;
        goto block_16;
    }
    if (temp_3 >= 2) {
        if (temp_3 == 3) {
            temp_4 = M2C_FIELD(arg0, s32 *, 0x30) << 5;
            temp_2 = temp_4 + (M2C_FIELD(arg0, s32 *, 0x38) * 0x1C);
            M2C_FIELD(arg0, s32 *, 0x44) = 0;
            M2C_FIELD(arg0, s32 *, 0x48) = temp_4;
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) (temp_2 + (M2C_FIELD(arg0, s32 *, 0x40) * 8));
            M2C_FIELD(arg0, s32 *, 0x4C) = temp_2;
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return 0;
        }
        return -1;
    }
    if (temp_3 == 0) {
        var_4 = M2C_FIELD(arg0, s32 *, 0x30) << 5;
        var_3 = M2C_FIELD(arg0, s32 *, 0x38) * 0x1C;
        var_2 = M2C_FIELD(arg0, s32 *, 0x40) * 0xC;
block_16:
        temp_3_2 = var_4 + var_3;
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = var_4;
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (temp_3_2 + var_2);
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_3_2;
        return 0;
    }
    return -1;
}
