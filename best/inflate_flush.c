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

M2C_UNK memcpy(s32, u32, u32);                      /* extern */

s32 inflate_flush(void *arg0, void *arg1, s32 arg2) {
    s32 (*temp_7)(s32, u32, u32, M2C_UNK);
    s32 (*temp_7_2)(s32, u32, u32, M2C_UNK);
    s32 temp_20;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3_2;
    s32 temp_4;
    s32 var_20;
    s32 var_21;
    u32 temp_16;
    u32 temp_16_2;
    u32 temp_16_3;
    u32 temp_17;
    u32 temp_17_2;
    u32 temp_2;
    u32 temp_3;
    u32 temp_3_3;
    u32 var_16;
    u32 var_17;
    u32 var_2;

    var_21 = arg2;
    temp_17 = M2C_FIELD(arg0, u32 *, 0x30);
    temp_2 = M2C_FIELD(arg0, u32 *, 0x34);
    temp_20 = M2C_FIELD(arg1, s32 *, 0xC);
    var_16 = temp_2 - temp_17;
    if (temp_2 < temp_17) {
        var_16 = M2C_FIELD(arg0, s32 *, 0x2C) - temp_17;
    }
    temp_3 = M2C_FIELD(arg1, u32 *, 0x10);
    temp_16 = (temp_3 < var_16) ? temp_3 : var_16;
    if (temp_16 != 0) {
        var_21 = ((var_21 ^ -5) == 0) ? 0 : var_21;
    }
    temp_7 = M2C_FIELD(arg0, s32 (**)(s32, u32, u32, M2C_UNK), 0x38);
    M2C_FIELD(arg1, u32 *, 0x10) = (u32) (temp_3 - temp_16);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) + temp_16);
    if (temp_7 != NULL) {
        temp_2_2 = temp_7(M2C_FIELD(arg0, s32 *, 0x3C), temp_17, temp_16, temp_7);
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_2_2;
        M2C_FIELD(arg1, s32 *, 0x30) = temp_2_2;
    }
    var_20 = temp_20 + temp_16;
    var_17 = temp_17 + temp_16;
    memcpy(temp_20, temp_17, temp_16);
    temp_3_2 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (var_17 == temp_3_2) {
        var_2 = M2C_FIELD(arg0, u32 *, 0x34);
        temp_17_2 = M2C_FIELD(arg0, u32 *, 0x28);
        if (var_2 == temp_3_2) {
            M2C_FIELD(arg0, u32 *, 0x34) = temp_17_2;
            var_2 = temp_17_2;
        }
        temp_3_3 = M2C_FIELD(arg1, u32 *, 0x10);
        temp_16_2 = var_2 - temp_17_2;
        temp_16_3 = (temp_3_3 < temp_16_2) ? temp_3_3 : temp_16_2;
        if (temp_16_3 != 0) {
            var_21 = ((var_21 ^ -5) == 0) ? 0 : var_21;
        }
        temp_7_2 = M2C_FIELD(arg0, s32 (**)(s32, u32, u32, M2C_UNK), 0x38);
        M2C_FIELD(arg1, u32 *, 0x10) = (u32) (temp_3_3 - temp_16_3);
        M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) + temp_16_3);
        if (temp_7_2 != NULL) {
            temp_2_3 = temp_7_2(M2C_FIELD(arg0, s32 *, 0x3C), temp_17_2, temp_16_3, temp_7_2);
            M2C_FIELD(arg0, s32 *, 0x3C) = temp_2_3;
            M2C_FIELD(arg1, s32 *, 0x30) = temp_2_3;
        }
        temp_4 = var_20;
        var_20 += temp_16_3;
        var_17 = temp_17_2 + temp_16_3;
        memcpy(temp_4, temp_17_2, temp_16_3);
    }
    M2C_FIELD(arg1, s32 *, 0xC) = var_20;
    M2C_FIELD(arg0, u32 *, 0x30) = var_17;
    return var_21;
}
