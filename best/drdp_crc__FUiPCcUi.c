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

extern M2C_UNK D_0118E960;

s32 drdp_crc__FUiPCcUi(s32 arg0, s8 *arg1, u32 arg2) {
    s32 temp_2;
    s8 *var_12;
    s8 temp_2_2;
    s8 temp_3;
    s8 temp_4;
    s8 temp_5;
    s8 temp_6;
    s8 temp_7;
    s8 temp_8;
    u32 temp_11;
    u32 temp_11_2;
    u32 temp_11_3;
    u32 temp_11_4;
    u32 temp_11_5;
    u32 temp_11_6;
    u32 temp_11_7;
    u32 temp_9;
    u32 var_11;
    u32 var_13;
    void *temp_12;
    void *temp_12_2;
    void *temp_12_3;
    void *temp_12_4;
    void *temp_12_5;
    void *temp_12_6;

    var_13 = arg2;
    var_12 = arg1;
    var_11 = ~arg0;
    if (var_13 >= 8U) {
        do {
            temp_12 = var_12 + 1;
            temp_12_2 = temp_12 + 1;
            temp_4 = M2C_FIELD(temp_12, s8 *, 1);
            temp_12_3 = temp_12_2 + 1;
            temp_5 = M2C_FIELD(temp_12_2, s8 *, 1);
            temp_12_4 = temp_12_3 + 1;
            temp_6 = M2C_FIELD(temp_12_3, s8 *, 1);
            temp_12_5 = temp_12_4 + 1;
            temp_11 = *((((var_11 ^ M2C_FIELD(var_12, s8 *, 0)) & 0xFF) * 4) + &D_0118E960) ^ (var_11 >> 8);
            temp_8 = M2C_FIELD(temp_12_4, s8 *, 1);
            temp_9 = temp_11 >> 8;
            temp_12_6 = temp_12_5 + 1;
            temp_7 = M2C_FIELD(temp_12_5, s8 *, 1);
            temp_2 = *((((temp_11 ^ M2C_FIELD(var_12, s8 *, 1)) & 0xFF) * 4) + &D_0118E960);
            var_13 -= 8;
            temp_3 = M2C_FIELD(temp_12_6, s8 *, 1);
            var_12 = temp_12_6 + 1 + 1;
            temp_11_2 = temp_2 ^ temp_9;
            temp_11_3 = *((((temp_11_2 ^ temp_4) & 0xFF) * 4) + &D_0118E960) ^ (temp_11_2 >> 8);
            temp_11_4 = *((((temp_11_3 ^ temp_5) & 0xFF) * 4) + &D_0118E960) ^ (temp_11_3 >> 8);
            temp_11_5 = *((((temp_11_4 ^ temp_6) & 0xFF) * 4) + &D_0118E960) ^ (temp_11_4 >> 8);
            temp_11_6 = *((((temp_11_5 ^ temp_8) & 0xFF) * 4) + &D_0118E960) ^ (temp_11_5 >> 8);
            temp_11_7 = *((((temp_11_6 ^ temp_7) & 0xFF) * 4) + &D_0118E960) ^ (temp_11_6 >> 8);
            var_11 = *((((temp_11_7 ^ temp_3) & 0xFF) * 4) + &D_0118E960) ^ (temp_11_7 >> 8);
        } while (var_13 >= 8U);
    }
    if (var_13 != 0) {
        do {
            temp_2_2 = *var_12;
            var_12 += 1;
            var_13 -= 1;
            var_11 = *((((var_11 ^ temp_2_2) & 0xFF) * 4) + &D_0118E960) ^ (var_11 >> 8);
        } while (var_13 != 0);
    }
    return ~var_11;
}
