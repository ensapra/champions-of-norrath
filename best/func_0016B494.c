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

f32 func_0014C97C(s32, s32);                        /* extern */
f32 func_0014CA18(s32, s16);                        /* extern */

void func_0016B494(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s16 temp_3_3;
    s16 var_5;
    s32 temp_16;
    s32 temp_2;
    s32 temp_3;
    s32 temp_5;
    s32 temp_lo;
    s32 var_21;
    s32 var_23;
    s32 var_2;
    s32 var_2_2;
    s32 var_3;
    u16 temp_2_2;
    u16 temp_3_2;
    void *temp_18;
    void *temp_18_2;
    void *var_18;

    var_3 = 0;
    sp0 = arg4;
    switch (arg1) {                                 /* irregular */
    case 3:
        var_2 = M2C_FIELD(arg0, s32 *, 0x5EE0);
        sp4 = 1;
block_12:
        var_23 = 1;
block_13:
        if (var_2 == 0) {
            var_3 = 1;
        }
        break;
    case 1:
        var_2 = M2C_FIELD(arg0, s32 *, 0x5EE0);
        sp4 = 1;
        var_23 = -1;
        goto block_13;
    case 2:
        var_2 = M2C_FIELD(arg0, s32 *, 0x5EDC);
        sp4 = -1;
        goto block_12;
    default:
        sp4 = -1;
        var_23 = -1;
        var_3 = M2C_FIELD(arg0, s32 *, 0x5EDC) == 0;
        break;
    }
    var_2_2 = var_23 * arg5;
    if (var_3 != 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x5ED0);
        var_3 = (s32) ((temp_2 < 0) ? (temp_2 + 3) : temp_2) >> 2;
        var_2_2 = var_23 * arg5;
    }
    var_21 = 0;
    temp_3 = sp0 + var_3;
    sp8 = temp_3;
    temp_3_2 = M2C_FIELD(arg0, u16 *, 0x4DC);
    temp_2_2 = M2C_FIELD(arg0, u16 *, 0x4E0);
    temp_3_3 = temp_3_2 + ((sp4 * temp_3) + arg2);
    var_5 = temp_2_2 + arg3;
    M2C_FIELD(arg6, s16 *, 0x10) = temp_3_3;
    M2C_FIELD(arg6, s16 *, 0x12) = (s16) (temp_2_2 + (var_2_2 + arg3));
    temp_18 = arg6 + 0x20;
    M2C_FIELD(temp_18, s16 *, 0x10) = temp_3_3;
    M2C_FIELD(temp_18, s16 *, 0x12) = var_5;
    temp_18_2 = temp_18 + 0x20;
    M2C_FIELD(temp_18_2, s16 *, 0x10) = (s16) (temp_3_2 + arg2);
    M2C_FIELD(temp_18_2, s16 *, 0x12) = var_5;
    var_18 = temp_18_2 + 0x20;
    do {
        temp_lo = (s32) (var_21 << 0xE) / 7;
        var_21 += 1;
        temp_16 = temp_lo - 0x4000;
        temp_5 = sp4 * M2C_BITWISE(s32, func_0014CA18(temp_16, var_5));
        M2C_FIELD(var_18, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_5 + arg2));
        var_5 = var_23 * M2C_BITWISE(s32, func_0014C97C(temp_16, temp_5));
        M2C_FIELD(var_18, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (var_5 + ((var_23 * (arg5 * 2)) + arg3)));
        var_18 += 0x20;
    } while (var_21 < 8);
    M2C_FIELD(var_18, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + ((sp4 * sp8) + arg2));
    M2C_FIELD(var_18, s16 *, 0x12) = (s16) (M2C_FIELD(var_18, u16 *, -0xE) & 0xFFFF);
}
