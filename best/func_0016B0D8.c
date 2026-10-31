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

f32 func_0014C97C(s32, M2C_UNK);                    /* extern */
f32 func_0014CA18(s32);                             /* extern */

void func_0016B0D8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 temp_16;
    s32 temp_lo;
    s32 var_19;
    s32 var_20;
    void *temp_17;
    void *temp_17_2;
    void *temp_17_3;
    void *var_17;

    var_20 = -0x4000;
    if ((arg1 != 1) && ((arg1 < 2) || ((var_20 = 0x4000, (arg1 != 2)) && (var_20 = 0, (arg1 != 3))))) {
        var_20 = 0x8000;
    }
    var_19 = 0;
    M2C_FIELD(arg6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + arg2);
    M2C_FIELD(arg6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + arg3);
    temp_17 = arg6 + 0x20;
    M2C_FIELD(temp_17, s64 *, 0x10) = (s64) M2C_FIELD(temp_17, s64 *, -0x10);
    temp_17_2 = temp_17 + 0x20;
    M2C_FIELD(temp_17_2, s64 *, 0x10) = (s64) M2C_FIELD(temp_17_2, s64 *, -0x10);
    temp_17_3 = temp_17_2 + 0x20;
    M2C_FIELD(temp_17_3, s64 *, 0x10) = (s64) M2C_FIELD(temp_17_3, s64 *, -0x10);
    var_17 = temp_17_3 + 0x20;
    do {
        temp_lo = (s32) (var_19 << 0xE) / 7;
        var_19 += 1;
        temp_16 = var_20 + temp_lo;
        M2C_FIELD(var_17, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (arg2 + M2C_BITWISE(s32, func_0014CA18(temp_16))));
        M2C_FIELD(var_17, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (arg3 + M2C_BITWISE(s32, func_0014C97C(temp_16, 7))));
        var_17 += 0x20;
    } while (var_19 < 8);
}
