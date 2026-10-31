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

s32 Vertex__12VICollBufferR10VIVect3S16(void *arg0, void *arg1) {
    s32 temp_3;
    s32 temp_4;
    s32 temp_6;
    void *temp_3_2;
    void *temp_5;
    void *var_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_3) {                               /* irregular */
    case 3:
        temp_6 = M2C_FIELD(arg0, s32 *, 0x4C);
        temp_3_2 = temp_6 + (M2C_FIELD(arg0, s32 *, 0x3C) * 8);
        M2C_FIELD(temp_3_2, u16 *, 0) = (u16) M2C_FIELD(arg1, u16 *, 0);
        M2C_FIELD(temp_3_2, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
        M2C_FIELD(temp_3_2, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 4);
        M2C_FIELD(temp_3_2, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 0x50);
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x3C) * 8) + temp_6), u8 *, 7) = (u8) M2C_FIELD(arg0, u8 *, 0x51);
        var_3 = (M2C_FIELD(arg0, s32 *, 0x34) * 0x1C) + M2C_FIELD(arg0, s32 *, 0x48);
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
        M2C_FIELD(var_3, u16 *, 2) = (u16) (M2C_FIELD(var_3, u16 *, 2) + 1);
        return 0;
    default:
        return -1;
    case 1:
        temp_4 = M2C_FIELD(arg0, s32 *, 0x3C);
        temp_5 = M2C_FIELD(arg0, s32 *, 0x4C) + (temp_4 * 6);
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_4 + 1);
        M2C_FIELD(temp_5, u16 *, 0) = (u16) M2C_FIELD(arg1, u16 *, 0);
        var_3 = (M2C_FIELD(arg0, s32 *, 0x34) * 0x1C) + M2C_FIELD(arg0, s32 *, 0x48);
        M2C_FIELD(temp_5, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
        M2C_FIELD(temp_5, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 4);
        /* Duplicate return node #8. Try simplifying control flow for better match */
        M2C_FIELD(var_3, u16 *, 2) = (u16) (M2C_FIELD(var_3, u16 *, 2) + 1);
        return 0;
    }
}
