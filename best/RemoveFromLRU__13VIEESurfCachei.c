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

s32 RemoveFromLRU__13VIEESurfCachei(void *arg0, s32 arg1) {
    s32 temp_5;
    s32 temp_5_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_9;

    temp_9 = arg0 + 0x38;
    if (M2C_FIELD(arg0, s32 *, 8) == arg1) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD((M2C_FIELD(temp_9, s32 *, 8) + (arg1 * 0x68)), s32 *, 0x5C);
    } else {
        temp_5 = M2C_FIELD(temp_9, s32 *, 8);
        temp_3 = temp_5 + (arg1 * 0x68) + 0x14;
        M2C_FIELD((temp_5 + (M2C_FIELD(temp_3, s32 *, 0x4C) * 0x68)), s32 *, 0x5C) = (s32) M2C_FIELD(temp_3, s32 *, 0x48);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) == arg1) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD((M2C_FIELD(temp_9, s32 *, 8) + (arg1 * 0x68)), s32 *, 0x60);
    } else {
        temp_5_2 = M2C_FIELD(temp_9, s32 *, 8);
        temp_3_2 = temp_5_2 + (arg1 * 0x68) + 0x14;
        M2C_FIELD((temp_5_2 + (M2C_FIELD(temp_3_2, s32 *, 0x48) * 0x68)), s32 *, 0x60) = (s32) M2C_FIELD(temp_3_2, s32 *, 0x4C);
    }
    temp_4 = M2C_FIELD(temp_9, s32 *, 8) + (arg1 * 0x68) + 0x14;
    M2C_FIELD(temp_4, s32 *, 0x4C) = -1;
    M2C_FIELD(temp_4, s32 *, 0x48) = -1;
    return 0;
}
