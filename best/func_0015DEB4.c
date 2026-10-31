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

s32 func_0014BA30(void *, void *);                  /* extern */
M2C_UNK func_0015EA84(void *);                      /* extern */
M2C_UNK func_0015EB28(void *, s32);                 /* extern */
M2C_UNK func_0015EF14(void *, s32);                 /* extern */
extern M2C_UNK func_001C8098;

s32 func_0015DEB4(void *arg0, void *arg1, void *arg2) {
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 temp_5_4;
    s32 temp_5_5;
    s32 temp_5_6;
    s32 var_17;
    s32 var_20;
    s32 var_21;
    void *var_4;

    var_20 = 0;
    var_21 = 0;
    var_17 = M2C_FIELD(&func_001C8098, s32 (**)(), 0xDB8)();
    if (M2C_FIELD(arg1, s64 *, 0x5A0) != M2C_FIELD(arg2, s64 *, 0x5A0)) {
        var_20 = 1;
        var_17 = 1;
    }
    if ((M2C_FIELD(arg1, s32 *, 0x5AC) != M2C_FIELD(arg2, s32 *, 0x5AC)) || (var_4 = arg1 + 0x5C0, (M2C_FIELD(arg1, s32 *, 0x5B0) != M2C_FIELD(arg2, s32 *, 0x5B0)))) {
        var_20 += 1;
        var_17 = 1;
        var_4 = arg1 + 0x5C0;
    }
    temp_3 = M2C_FIELD(arg1, s32 *, 0xE80);
    if (func_0014BA30(var_4, arg2 + 0x5C0) == 0) {
        var_21 = 1;
        var_17 = 1;
    }
    if (temp_3 != M2C_FIELD(arg2, s32 *, 0xE80)) {
        M2C_FIELD(arg0, s32 *, 0xE80) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_17 = 1;
    }
    temp_3_2 = M2C_FIELD(arg1, s32 *, 0xEA4);
    if (temp_3_2 != M2C_FIELD(arg2, s32 *, 0xEA4)) {
        M2C_FIELD(arg0, s32 *, 0xEA4) = temp_3_2;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_17 = 1;
    }
    temp_5 = M2C_FIELD(arg1, s32 *, 0xE90);
    if (temp_5 != M2C_FIELD(arg2, s32 *, 0xE90)) {
        M2C_FIELD(arg0, s32 *, 0xE90) = temp_5;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 2);
        var_17 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_5_2 = M2C_FIELD(arg1, s32 *, 0xE94);
    if (temp_5_2 != M2C_FIELD(arg2, s32 *, 0xE94)) {
        M2C_FIELD(arg0, s32 *, 0xE94) = temp_5_2;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 4);
        var_17 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_5_3 = M2C_FIELD(arg1, s32 *, 0xE78);
    if (temp_5_3 != M2C_FIELD(arg2, s32 *, 0xE78)) {
        M2C_FIELD(arg0, s32 *, 0xE78) = temp_5_3;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 8);
        var_17 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_5_4 = M2C_FIELD(arg1, s32 *, 0xE7C);
    if (temp_5_4 != M2C_FIELD(arg2, s32 *, 0xE7C)) {
        M2C_FIELD(arg0, s32 *, 0xE7C) = temp_5_4;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 8);
        var_17 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_3_3 = M2C_FIELD(arg1, s32 *, 0xE84);
    if (temp_3_3 != M2C_FIELD(arg2, s32 *, 0xE84)) {
        M2C_FIELD(arg0, s32 *, 0xE84) = temp_3_3;
        var_17 = 1;
        func_0015EF14(arg0, temp_5_4);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 0x10);
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_5_5 = M2C_FIELD(arg1, s32 *, 0xE88);
    if (temp_5_5 != M2C_FIELD(arg2, s32 *, 0xE88)) {
        M2C_FIELD(arg0, s32 *, 0xE88) = temp_5_5;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 1);
        var_17 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_5_6 = M2C_FIELD(arg1, s32 *, 0xE8C);
    if (temp_5_6 != M2C_FIELD(arg2, s32 *, 0xE8C)) {
        M2C_FIELD(arg0, s32 *, 0xE8C) = temp_5_6;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 1);
        var_17 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    if (var_20 != 0) {
        func_0015EB28(arg0, temp_5_6);
    }
    if (var_21 != 0) {
        func_0015EA84(arg0);
    }
    return var_17;
}
