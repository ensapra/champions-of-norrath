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

s32 End__12VICollBuffer(void *arg0) {
    s32 *temp_3_2;
    s32 temp_3;
    s32 temp_6;
    void *temp_5;

    temp_3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_3 != 1) {
        if (temp_3 < 2) {
            if (temp_3 != 0) {
                return -1;
            }
            goto block_5;
        }
        if (temp_3 == 3) {
            goto block_5;
        }
        return -1;
    }
block_5:
    temp_6 = M2C_FIELD(arg0, s32 *, 0x44);
    temp_3_2 = (M2C_FIELD(arg0, s32 *, 0x2C) << 5) + temp_6;
    *temp_3_2 += 1;
    temp_5 = (M2C_FIELD(arg0, s32 *, 0x2C) << 5) + temp_6;
    M2C_FIELD(temp_5, s32 *, 4) = (s32) (M2C_FIELD(temp_5, s32 *, 4) + M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x34) * 0x1C) + M2C_FIELD(arg0, s32 *, 0x48)), s16 *, 2));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    return 0;
}
