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

void __11VIMatrix44DRC11VIMatrix44D(void *arg0, void *arg1) {
    s32 var_4;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;
    void *var_2;

    var_4 = 3;
    var_2 = arg0;
    do {
        var_4 -= 1;
        M2C_FIELD(var_2, s64 *, 0) = 0;
        M2C_FIELD(var_2, s64 *, 8) = 0;
        M2C_FIELD(var_2, s64 *, 0x10) = 0;
        M2C_FIELD(var_2, s64 *, 0x18) = 0;
        var_2 += 0x20;
    } while (var_4 != -1);
    temp_4 = arg1 + 0x20;
    temp_5 = arg0 + 0x20;
    temp_7 = arg1 + 0x40;
    M2C_FIELD(arg0, s64 *, 0) = (s64) M2C_FIELD(arg1, s64 *, 0);
    temp_6 = arg0 + 0x40;
    temp_8 = arg1 + 0x60;
    temp_9 = arg0 + 0x60;
    M2C_FIELD(arg0, s64 *, 8) = (s64) M2C_FIELD(arg1, s64 *, 8);
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) M2C_FIELD(arg1, s64 *, 0x10);
    M2C_FIELD(arg0, s64 *, 0x18) = (s64) M2C_FIELD(arg1, s64 *, 0x18);
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) M2C_FIELD(arg1, s64 *, 0x20);
    M2C_FIELD(temp_5, s64 *, 8) = (s64) M2C_FIELD(temp_4, s64 *, 8);
    M2C_FIELD(temp_5, s64 *, 0x10) = (s64) M2C_FIELD(temp_4, s64 *, 0x10);
    M2C_FIELD(temp_5, s64 *, 0x18) = (s64) M2C_FIELD(temp_4, s64 *, 0x18);
    M2C_FIELD(arg0, s64 *, 0x40) = (s64) M2C_FIELD(arg1, s64 *, 0x40);
    M2C_FIELD(temp_6, s64 *, 8) = (s64) M2C_FIELD(temp_7, s64 *, 8);
    M2C_FIELD(temp_6, s64 *, 0x10) = (s64) M2C_FIELD(temp_7, s64 *, 0x10);
    M2C_FIELD(temp_6, s64 *, 0x18) = (s64) M2C_FIELD(temp_7, s64 *, 0x18);
    M2C_FIELD(arg0, s64 *, 0x60) = (s64) M2C_FIELD(arg1, s64 *, 0x60);
    M2C_FIELD(temp_9, s64 *, 8) = (s64) M2C_FIELD(temp_8, s64 *, 8);
    M2C_FIELD(temp_9, s64 *, 0x10) = (s64) M2C_FIELD(temp_8, s64 *, 0x10);
    M2C_FIELD(temp_9, s64 *, 0x18) = (s64) M2C_FIELD(temp_8, s64 *, 0x18);
}
