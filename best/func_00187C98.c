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

extern M2C_UNK jtbl_004C006C;
extern M2C_UNK xmlParseTryOrFinish;

void func_00187C98(void *arg0, s32 arg1, s32 arg2) {
    s32 var_18;
    void *temp_5;
    void *var_16;
    void *var_2;
    void *var_3;

    var_2 = &jtbl_004C006C + 0xDF34;
    var_3 = arg0 + 0x60;
    temp_5 = var_2 + 0x80;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    do {
        M2C_FIELD(var_3, s64 *, 0) = (s64) M2C_FIELD(var_2, s64 *, 0);
        M2C_FIELD(var_3, s64 *, 8) = (s64) M2C_FIELD(var_2, s64 *, 8);
        M2C_FIELD(var_3, s64 *, 0x10) = (s64) M2C_FIELD(var_2, s64 *, 0x10);
        M2C_FIELD(var_3, s64 *, 0x18) = (s64) M2C_FIELD(var_2, s64 *, 0x18);
        var_2 += 0x20;
        var_3 += 0x20;
    } while (var_2 != temp_5);
    M2C_FIELD(var_3, s64 *, 0) = (s64) M2C_FIELD(var_2, s64 *, 0);
    var_16 = arg0 + 0x60;
    var_18 = 8;
    M2C_FIELD(var_3, s64 *, 8) = (s64) M2C_FIELD(var_2, s64 *, 8);
    do {
        var_18 -= 1;
        M2C_FIELD(var_16, s32 *, 0) = (s32) (M2C_FIELD(M2C_FIELD(&xmlParseTryOrFinish, void **, 0x958), s32 (**)(s32), 0xE8)(M2C_FIELD(var_16, s32 *, 0)) + arg1);
        M2C_FIELD(var_16, s32 *, 4) = (s32) (M2C_FIELD(M2C_FIELD(&xmlParseTryOrFinish, void **, 0x958), u16 (**)(s32), 0xE4)(M2C_FIELD(var_16, s32 *, 4)) + arg2);
        M2C_FIELD(var_16, s32 *, 8) = M2C_FIELD(M2C_FIELD(&xmlParseTryOrFinish, void **, 0x958), s32 (**)(s32), 0xE8)(M2C_FIELD(var_16, s32 *, 8));
        M2C_FIELD(var_16, u16 *, 0xC) = M2C_FIELD(M2C_FIELD(&xmlParseTryOrFinish, void **, 0x958), s32 (**)(s32), 0xE8)((s32) M2C_FIELD(var_16, u16 *, 0xC));
        M2C_FIELD(var_16, u16 *, 0xE) = M2C_FIELD(M2C_FIELD(&xmlParseTryOrFinish, void **, 0x958), u16 (**)(s32), 0xE4)((s32) M2C_FIELD(var_16, u16 *, 0xE));
        var_16 += 0x10;
    } while (var_18 >= 0);
}
