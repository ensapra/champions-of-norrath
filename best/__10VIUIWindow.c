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

void __10VIUIWindow(void *arg0) {
    s32 var_6;
    void *var_2;

    M2C_FIELD((arg0 + 4), s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    var_2 = arg0 + 0x130;
    M2C_FIELD((arg0 + 0xC), s32 *, 4) = 0;
    var_6 = 2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD((arg0 + 0x14), s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    do {
        var_6 -= 1;
        M2C_FIELD(var_2, f32 *, 0) = 0.0f;
        M2C_FIELD(var_2, f32 *, 4) = 0.0f;
        M2C_FIELD(var_2, f32 *, 8) = 0.0f;
        M2C_FIELD(var_2, f32 *, 0xC) = 0.0f;
        var_2 += 0x10;
    } while (var_6 != -1);
    M2C_FIELD(arg0, s64 *, 0x160) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
}
