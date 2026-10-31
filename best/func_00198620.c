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

extern void *D_00480488;

void func_00198620(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_20;
    s32 temp_21;
    s32 temp_2;
    s32 temp_3;
    s32 var_10;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    s32 var_9;
    void *temp_6;
    void *temp_6_2;
    void *temp_6_3;
    void *temp_6_4;
    void *var_5;

    temp_21 = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE8)(0x10);
    temp_20 = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE4)(0x10);
    sp0 = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE8)(M2C_FIELD(arg1, s32 *, 0) + arg2);
    sp4 = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 4) + arg3);
    sp8 = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE8)(M2C_FIELD(arg1, s32 *, 8));
    var_10 = 0;
    spC = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 0xC));
    var_9 = 0;
    var_8 = 0;
    do {
        var_7 = 0;
        var_5 = (var_8 * 0x10) + arg0;
        var_6 = 0;
loop_2:
        var_7 += 1;
        M2C_FIELD(var_5, s32 *, 8) = 0;
        temp_3 = sp4 + var_6;
        var_6 += temp_20;
        M2C_FIELD(var_5, s32 *, 0) = (s32) (sp0 + var_9);
        M2C_FIELD(var_5, s32 *, 4) = temp_3;
        M2C_FIELD(var_5, s16 *, 0xC) = (s16) temp_21;
        M2C_FIELD(var_5, s16 *, 0xE) = (s16) temp_20;
        var_5 += 0x10;
        if (var_7 < 3) {
            goto loop_2;
        }
        var_10 += 1;
        var_9 += temp_21;
        var_8 += 3;
    } while (var_10 < 3);
    temp_6 = arg0 + 0x10;
    M2C_FIELD(temp_6, u16 *, 0xE) = (u16) spC;
    temp_6_2 = arg0 + 0x40;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (spC + M2C_FIELD(temp_6, s32 *, 4));
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) sp8;
    M2C_FIELD(temp_6_2, u16 *, 0xE) = (u16) spC;
    M2C_FIELD(temp_6_2, u16 *, 0xC) = (u16) sp8;
    temp_6_3 = arg0 + 0x50;
    M2C_FIELD(temp_6_3, u16 *, 0xC) = (u16) sp8;
    M2C_FIELD(temp_6_3, s32 *, 4) = (s32) (spC + M2C_FIELD(temp_6_2, s32 *, 4));
    temp_2 = M2C_FIELD(arg0, s32 *, 0x50) + M2C_FIELD(temp_6_3, u16 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x60) = temp_2;
    temp_6_4 = arg0 + 0x70;
    M2C_FIELD(arg0, s32 *, 0x70) = temp_2;
    M2C_FIELD(temp_6_4, u16 *, 0xE) = (u16) spC;
    M2C_FIELD((arg0 + 0x80), s32 *, 4) = (s32) (((u16) spC & 0xFFFF) + M2C_FIELD(temp_6_4, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
}
