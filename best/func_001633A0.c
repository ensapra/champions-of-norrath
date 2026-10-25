/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

f32 func_0014C97C(s32, s16, s16, s32);              /* extern */
f32 func_0014CA18(s32);                             /* extern */

void func_001633A0(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    f32 temp_4;
    f32 temp_5_3;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f3;
    s16 temp_3_3;
    s32 temp_18;
    s32 temp_20;
    s32 temp_20_2;
    s32 temp_21;
    s32 temp_21_2;
    s32 temp_22;
    s32 temp_23;
    s32 temp_2;
    s32 temp_30;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_6;
    s32 temp_lo;
    s32 var_5;
    s32 var_6;
    s32 var_7;
    void *temp_14;
    void *temp_17;
    void *temp_18_2;
    void *temp_19;
    void *var_17;
    void *var_18;
    void *var_19;

    sp14 = 0;
    temp_5 = (s32) M2C_FIELD(arg0, s32 *, 0x5AC) >> 1;
    temp_3 = M2C_FIELD(arg0, s32 *, 0x920);
    sp0 = temp_5;
    temp_30 = (s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1;
    temp_20 = temp_5 - temp_3;
    temp_21 = temp_30 - temp_3;
    temp_20_2 = (temp_20 < 0) ? 0 : temp_20;
    temp_21_2 = (temp_21 < 0) ? 0 : temp_21;
    temp_5_2 = temp_5 - temp_20_2;
    temp_6 = temp_30 - temp_21_2;
    temp_2 = temp_5_2 * 3;
    temp_3_2 = temp_6 * 3;
    temp_18 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_14 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x1C60) + arg0;
    var_17 = temp_14 + 0x1330;
    var_18 = temp_14 + 0x9E0;
    var_5 = temp_20_2 + ((s32) ((temp_5_2 < 0) ? (temp_5_2 + 3) : temp_5_2) >> 2);
    var_6 = temp_21_2 + ((s32) ((temp_6 < 0) ? (temp_6 + 3) : temp_6) >> 2);
    var_7 = temp_21_2 + ((s32) ((temp_3_2 < 0) ? (temp_3_2 + 3) : temp_3_2) >> 2);
    sp4 = var_5;
    spC = var_6;
    temp_23 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_18 + sp0 + M2C_FIELD(arg0, s32 *, 0x4DC);
    sp8 = temp_20_2 + ((s32) ((temp_2 < 0) ? (temp_2 + 3) : temp_2) >> 2);
    temp_22 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_18 + temp_30 + M2C_FIELD(arg0, s32 *, 0x4E0);
    sp10 = var_7;
    var_19 = temp_14 + 0x1C80;
    do {
        temp_lo = (s32) (sp14 << 0x10) / 36;
        sp14 += 1;
        temp_f20 = func_0014C97C(temp_lo, (s16) var_5, (s16) var_6, var_7);
        temp_f0 = func_0014CA18(temp_lo);
        var_7 = sp14 < 0x25;
        temp_f3 = (f32) temp_20_2 * temp_f0;
        temp_4 = temp_f3;
        temp_5_3 = (f32) sp4 * temp_f0;
        temp_3_3 = temp_22 + M2C_BITWISE(s32, temp_f3);
        M2C_FIELD(var_18, s16 *, 0x10) = (s16) (temp_23 + M2C_ERROR(/* Read from unset register $f5 */));
        M2C_FIELD(var_18, s16 *, 0x12) = temp_3_3;
        temp_18_2 = var_18 + 0x20;
        M2C_FIELD(temp_18_2, s16 *, 0x12) = (s16) (temp_22 + M2C_BITWISE(s32, temp_5_3));
        M2C_FIELD(temp_18_2, s16 *, 0x10) = (s16) (temp_23 + M2C_BITWISE(s32, temp_4));
        M2C_FIELD(var_17, s64 *, 0) = (s64) M2C_FIELD(var_18, s64 *, 0x20);
        M2C_FIELD(var_17, s64 *, 8) = (s64) M2C_FIELD(temp_18_2, s64 *, 8);
        M2C_FIELD(var_17, s64 *, 0x10) = (s64) M2C_FIELD(temp_18_2, s16 *, 0x10);
        var_18 = temp_18_2 + 0x20;
        M2C_FIELD(var_17, s64 *, 0x18) = (s64) M2C_FIELD(temp_18_2, s64 *, 0x18);
        temp_17 = var_17 + 0x20;
        var_5 = temp_22 + M2C_BITWISE(s32, temp_f0);
        M2C_FIELD(temp_17, s16 *, 0x10) = (s16) (temp_23 + M2C_ERROR(/* Read from unset register $f5 */));
        var_6 = temp_23 + M2C_BITWISE(s32, temp_f0);
        M2C_FIELD(temp_17, s16 *, 0x12) = (s16) (temp_22 + M2C_BITWISE(s32, temp_f0));
        M2C_FIELD(var_19, s64 *, 0) = (s64) M2C_FIELD(var_17, s64 *, 0x20);
        M2C_FIELD(var_19, s64 *, 8) = (s64) M2C_FIELD(temp_17, s64 *, 8);
        M2C_FIELD(var_19, s64 *, 0x10) = (s64) M2C_FIELD(temp_17, s16 *, 0x10);
        var_17 = temp_17 + 0x20;
        M2C_FIELD(var_19, s64 *, 0x18) = (s64) M2C_FIELD(temp_17, s64 *, 0x18);
        temp_19 = var_19 + 0x20;
        M2C_FIELD(temp_19, s16 *, 0x10) = (s16) var_6;
        M2C_FIELD(temp_19, s16 *, 0x12) = (s16) var_5;
        var_19 = temp_19 + 0x20;
    } while (var_7 != 0);
}
