/* machine draft (m2c) for ee-gcc-2.96 -Os -G8, tried by autopilot */
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

s32 func_0014B9F0(s32 *, void *);                   /* extern */
s32 func_0014BA30(void *, void *);                  /* extern */
M2C_UNK func_0014CE60(s32, s32);                    /* extern */
M2C_UNK func_0014CF0C(void *, s32, s32);            /* extern */
M2C_UNK func_0014D138(void *, s32);                 /* extern */

s32 func_0014EAB0(void *arg0, void *arg1, void *arg2) {
    s32 sp0;
    M2C_UNK (*temp_2)(void *, s32, s32);
    s32 *var_17;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 temp_6;
    s32 var_20;
    s32 var_20_2;
    s32 var_21;
    s32 var_22;
    s32 var_23;
    s32 var_30;

    var_20_2 = 0;
    var_21 = 0;
    var_22 = 0;
    var_23 = 0;
    var_30 = 0;
    sp0 = 0;
    if (M2C_FIELD(arg1, s64 *, 0x5A0) != M2C_FIELD(arg2, s64 *, 0x5A0)) {
        var_22 = 1;
        var_21 = 1;
        var_20_2 = 1;
        func_0014CE60((s32) M2C_FIELD(arg1, s64 *, 0x5A0), M2C_FIELD(arg1, s32 *, 0x5A4));
    }
    temp_5 = M2C_FIELD(arg1, s32 *, 0x5AC);
    if ((temp_5 != M2C_FIELD(arg2, s32 *, 0x5AC)) || (M2C_FIELD(arg1, s32 *, 0x5B0) != M2C_FIELD(arg2, s32 *, 0x5B0))) {
        var_22 += 1;
        var_21 += 1;
        func_0014CF0C(arg0, temp_5, M2C_FIELD(arg1, s32 *, 0x5B0));
        var_20_2 = 1;
    }
    temp_5_2 = M2C_FIELD(arg1, s32 *, 0x5D4);
    var_17 = arg1 + 0x5D0;
    if (temp_5_2 != M2C_FIELD(arg2, s32 *, 0x5D4)) {
        var_21 += 1;
        func_0014D138(arg0, temp_5_2);
        var_20_2 = 1;
        var_17 = arg1 + 0x5D0;
    }
    if (func_0014B9F0(var_17, arg2 + 0x5D0) == 0) {
        var_23 = 1;
        var_20_2 = 1;
        M2C_FIELD(arg0, s32 *, 0x5D0) = (s32) *var_17;
    }
    if (func_0014BA30(arg1 + 0x5C0, arg2 + 0x5C0) == 0) {
        var_30 = 1;
        var_20_2 = 1;
        M2C_FIELD(arg0, s64 *, 0x5C0) = (s64) M2C_FIELD(arg1, s64 *, 0x5C0);
        M2C_FIELD(arg0, s64 *, 0x5C8) = (s64) M2C_FIELD(arg1, s64 *, 0x5C8);
    }
    temp_6 = M2C_FIELD(arg1, s32 *, 0x5DC);
    var_20 = ((M2C_FIELD(arg1, s32 *, 0x5D8) ^ M2C_FIELD(arg2, s32 *, 0x5D8)) != 0) ? 1 : var_20_2;
    if (temp_6 != M2C_FIELD(arg2, s32 *, 0x5DC)) {
        M2C_FIELD(arg0, s32 *, 0x5DC) = temp_6;
        var_20 = 1;
        sp0 = 1;
    }
    temp_5_3 = M2C_FIELD(arg1, s32 *, 0x5F8);
    if (temp_5_3 != M2C_FIELD(arg2, s32 *, 0x5F8)) {
        M2C_FIELD(arg0, s32 *, 0x5F8) = temp_5_3;
        var_20 = 1;
    }
    if ((var_23 != 0) || (var_30 != 0) || (sp0 != 0) || (var_22 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    if (var_21 != 0) {
        temp_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *, s32, s32), 0xDC);
        if (temp_2 != NULL) {
            temp_2(arg0, temp_5_3, temp_6);
        }
    }
    return var_20;
}
