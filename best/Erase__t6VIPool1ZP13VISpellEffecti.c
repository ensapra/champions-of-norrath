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

s32 End__Ct6VIPool1ZP13VISpellEffect(void *, void *, s32, M2C_UNK, void *, s32, s32, s32); /* extern */

s32 Erase__t6VIPool1ZP13VISpellEffecti(void *arg0, s32 arg1) {
    s32 temp_10;
    s32 temp_12;
    s32 temp_5_2;
    s32 temp_6;
    s32 temp_9;
    void *temp_5;
    void *temp_6_2;
    void *temp_6_3;

    temp_12 = arg1 * 0xC;
    temp_9 = M2C_FIELD(arg0, s32 *, 8);
    temp_6_2 = temp_12 + temp_9;
    temp_10 = M2C_FIELD(temp_6_2, s32 *, 4);
    if (temp_10 != -1) {
        M2C_FIELD(((temp_10 * 0xC) + temp_9), s32 *, 8) = (s32) M2C_FIELD(temp_6_2, s32 *, 8);
    } else {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(temp_6_2, s32 *, 8);
    }
    temp_6_3 = temp_12 + M2C_FIELD(arg0, s32 *, 8);
    temp_5_2 = M2C_FIELD(temp_6_3, s32 *, 8);
    if (temp_5_2 != -1) {
        M2C_FIELD(((temp_5_2 * 0xC) + M2C_FIELD(arg0, s32 *, 8)), s32 *, 4) = (s32) M2C_FIELD(temp_6_3, s32 *, 4);
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(temp_6_3, s32 *, 4);
    }
    temp_6 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_5 = temp_12 + M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(temp_5, s32 *, 8) = -2;
    M2C_FIELD(temp_5, s32 *, 4) = temp_6;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
    if (temp_10 == -1) {
        return End__Ct6VIPool1ZP13VISpellEffect(arg0, temp_5, temp_6, -1, arg0, M2C_FIELD(arg0, s32 *, 8), temp_10, arg1);
    }
    return temp_10;
}
