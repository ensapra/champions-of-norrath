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

s32 LeftRotate__t10VIMultiMap2ZfZ14VIEmitterEntryi(void *arg0, s32 arg1) {
    s32 temp_11;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_6;
    s32 temp_6_2;
    s32 temp_7;
    s32 temp_8;
    void *temp_2_3;
    void *temp_3;
    void *temp_5;

    temp_6 = M2C_FIELD(arg0, s32 *, 8);
    temp_8 = arg1 * 0x70;
    temp_5 = temp_8 + temp_6;
    temp_7 = M2C_FIELD(temp_5, s32 *, 0xC);
    temp_11 = temp_7 * 0x70;
    temp_3 = temp_11 + temp_6;
    M2C_FIELD(temp_5, s32 *, 0xC) = (s32) M2C_FIELD(temp_3, s32 *, 8);
    temp_2 = M2C_FIELD(temp_3, s32 *, 8);
    if (temp_2 != 0) {
        M2C_FIELD(((temp_2 * 0x70) + temp_6), s32 *, 4) = arg1;
    }
    M2C_FIELD((temp_11 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 4) = (s32) M2C_FIELD((temp_8 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 4);
    temp_6_2 = M2C_FIELD(arg0, s32 *, 8);
    temp_2_2 = M2C_FIELD((temp_8 + temp_6_2), s32 *, 4);
    if (temp_2_2 == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = temp_7;
    } else {
        temp_2_3 = (temp_2_2 * 0x70) + temp_6_2;
        if (arg1 != M2C_FIELD(temp_2_3, s32 *, 8)) {
            M2C_FIELD(temp_2_3, s32 *, 0xC) = temp_7;
        } else {
            M2C_FIELD(temp_2_3, s32 *, 8) = temp_7;
        }
    }
    M2C_FIELD((temp_11 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 8) = arg1;
    M2C_FIELD((temp_8 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 4) = temp_7;
    return 0;
}
