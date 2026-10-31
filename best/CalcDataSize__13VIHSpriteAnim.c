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

s32 CalcDataSize__13VIHSpriteAnim(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 var_2;
    s32 var_3;
    s32 var_4;

    temp_3 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_3) {                               /* irregular */
    case 0:
        temp_2 = M2C_FIELD(arg0, s32 *, 0xC);
        var_3 = temp_2 * 8;
        M2C_FIELD(arg0, s32 *, 0x28) = var_3;
        var_4 = M2C_FIELD(arg0, s32 *, 0x14) * 8;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        var_2 = (temp_2 * M2C_FIELD(arg0, s32 *, 0x10)) << 5;
        temp_3_2 = var_3 + var_2;
        M2C_FIELD(arg0, s32 *, 0x2C) = temp_3_2;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_3_2 + var_4);
        return 0;
    case 1:
        temp_2_2 = M2C_FIELD(arg0, s32 *, 0xC);
        var_3 = temp_2_2 * 8;
        M2C_FIELD(arg0, s32 *, 0x28) = var_3;
        var_4 = M2C_FIELD(arg0, s32 *, 0x14) * 8;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        var_2 = temp_2_2 * M2C_FIELD(arg0, s32 *, 0x10) * 0x10;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        temp_3_2 = var_3 + var_2;
        M2C_FIELD(arg0, s32 *, 0x2C) = temp_3_2;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_3_2 + var_4);
        return 0;
    default:
        return -1;
    }
}
