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

s32 MoveToLRUEnd__13VIEESurfCachei(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_5;
    s32 temp_5_3;
    s32 temp_8;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_5_2;
    void *var_9;

    if (M2C_FIELD(arg0, s32 *, 0xC) != arg1) {
        temp_2 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_2 == -1) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x40) + (arg1 * 0x68) + 0x14;
            M2C_FIELD(temp_3, s32 *, 0x4C) = -1;
            M2C_FIELD(temp_3, s32 *, 0x48) = -1;
            M2C_FIELD(arg0, s32 *, 0xC) = arg1;
            M2C_FIELD(arg0, s32 *, 8) = arg1;
        } else {
            if (temp_2 == arg1) {
                var_9 = arg0 + 0x38;
                temp_5 = M2C_FIELD(var_9, s32 *, 8);
                temp_3_2 = temp_5 + (arg1 * 0x68) + 0x14;
                M2C_FIELD((temp_5 + (M2C_FIELD(temp_3_2, s32 *, 0x48) * 0x68)), s32 *, 0x60) = -1;
                M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_3_2, s32 *, 0x48);
            } else {
                var_9 = arg0 + 0x38;
                temp_8 = M2C_FIELD(var_9, s32 *, 8);
                temp_5_2 = temp_8 + (arg1 * 0x68) + 0x14;
                temp_4 = M2C_FIELD(temp_5_2, s32 *, 0x4C);
                if (temp_4 != -1) {
                    M2C_FIELD((temp_8 + (temp_4 * 0x68)), s32 *, 0x5C) = (s32) M2C_FIELD(temp_5_2, s32 *, 0x48);
                }
                temp_4_2 = M2C_FIELD(temp_5_2, s32 *, 0x48);
                if (temp_4_2 != -1) {
                    M2C_FIELD((temp_8 + (temp_4_2 * 0x68)), s32 *, 0x60) = (s32) M2C_FIELD(temp_5_2, s32 *, 0x4C);
                }
            }
            temp_5_3 = M2C_FIELD(var_9, s32 *, 8);
            temp_3_3 = temp_5_3 + (arg1 * 0x68) + 0x14;
            M2C_FIELD((temp_5_3 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x68)), s32 *, 0x5C) = arg1;
            M2C_FIELD(temp_3_3, s32 *, 0x48) = -1;
            M2C_FIELD(temp_3_3, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
            M2C_FIELD(arg0, s32 *, 0xC) = arg1;
        }
    }
    return 0;
}
