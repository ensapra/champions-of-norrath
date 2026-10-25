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

void func_0016BC44(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, void *arg7, void *arg_sp0, void *arg_sp8) {
    s16 temp_10;
    s16 temp_11;
    s16 temp_12;
    s16 temp_13;
    s16 temp_4_2;
    s16 temp_5_2;
    s16 temp_6_2;
    s16 temp_7;
    s16 temp_8_2;
    s16 temp_9;
    s32 temp_3;
    s32 temp_4;
    s32 temp_5;
    s32 var_16;
    s32 var_17;
    s32 var_25;
    u16 temp_6;
    u16 temp_8;
    void *temp_14;
    void *temp_14_2;
    void *temp_14_3;
    void *temp_14_4;
    void *temp_14_5;
    void *temp_15;
    void *temp_15_2;
    void *temp_15_3;
    void *temp_15_4;
    void *temp_15_5;
    void *temp_24;
    void *temp_24_2;
    void *temp_24_3;
    void *temp_24_4;
    void *temp_24_5;
    void *temp_3_2;
    void *temp_4_3;
    void *temp_7_2;
    void *var_14;
    void *var_15;
    void *var_24;

    var_17 = 1;
    var_25 = -1;
    if (arg1 != 1) {
        var_17 = -1;
        if (arg1 >= 2) {
            var_25 = 1;
            if (arg1 != 2) {
                if (arg1 != 3) {
                    var_25 = -1;
                } else {
                    var_17 = 1;
                }
            }
        }
    }
    temp_6 = M2C_FIELD(arg0, u16 *, 0x4E0);
    temp_8 = M2C_FIELD(arg0, u16 *, 0x4DC);
    temp_4 = (s32) ((arg6 < 0) ? (arg6 + 3) : arg6) >> 2;
    temp_3 = arg6 - temp_4;
    temp_5 = (s32) (arg6 + ((u32) arg6 >> 0x1F)) >> 1;
    temp_11 = temp_8 + arg2;
    temp_12 = temp_6 + ((var_25 * arg5) + arg3);
    M2C_FIELD(arg7, s16 *, 0x10) = temp_11;
    temp_13 = temp_8 + ((var_17 * arg4) + arg2);
    temp_7 = temp_6 + ((var_25 * (arg5 - temp_4)) + arg3);
    M2C_FIELD(arg7, s16 *, 0x12) = temp_7;
    temp_15 = arg7 + 0x20;
    M2C_FIELD(temp_15, s16 *, 0x10) = temp_11;
    M2C_FIELD(temp_15, s16 *, 0x12) = temp_12;
    temp_9 = temp_6 + ((var_25 * (arg5 + temp_5)) + arg3);
    temp_4_2 = temp_8 + ((var_17 * (arg4 - temp_4)) + arg2);
    temp_10 = temp_6 + ((var_25 * (arg5 + temp_3)) + arg3);
    temp_6_2 = temp_6 + arg3;
    M2C_FIELD(arg_sp0, s64 *, 0) = (s64) M2C_FIELD(arg7, s64 *, 0x20);
    temp_5_2 = temp_8 + ((var_17 * (arg4 + temp_5)) + arg2);
    var_16 = 0xB;
    M2C_FIELD(arg_sp0, s64 *, 8) = (s64) M2C_FIELD(temp_15, s64 *, 8);
    temp_8_2 = temp_8 + ((var_17 * (arg4 + temp_3)) + arg2);
    M2C_FIELD(arg_sp0, s64 *, 0x10) = (s64) M2C_FIELD(temp_15, s16 *, 0x10);
    temp_15_2 = temp_15 + 0x20;
    M2C_FIELD(arg_sp0, s64 *, 0x18) = (s64) M2C_FIELD(temp_15, s64 *, 0x18);
    temp_14 = arg_sp0 + 0x20;
    M2C_FIELD(temp_14, s16 *, 0x10) = temp_11;
    M2C_FIELD(temp_14, s16 *, 0x12) = temp_9;
    M2C_FIELD(arg_sp8, s64 *, 0) = (s64) M2C_FIELD(arg_sp0, s64 *, 0x20);
    M2C_FIELD(arg_sp8, s64 *, 8) = (s64) M2C_FIELD(temp_14, s64 *, 8);
    M2C_FIELD(arg_sp8, s64 *, 0x10) = (s64) M2C_FIELD(temp_14, s16 *, 0x10);
    temp_14_2 = temp_14 + 0x20;
    M2C_FIELD(arg_sp8, s64 *, 0x18) = (s64) M2C_FIELD(temp_14, s64 *, 0x18);
    temp_24 = arg_sp8 + 0x20;
    M2C_FIELD(temp_24, s16 *, 0x10) = temp_11;
    M2C_FIELD(temp_24, s16 *, 0x12) = temp_10;
    temp_24_2 = temp_24 + 0x20;
    M2C_FIELD(temp_15_2, s16 *, 0x12) = temp_7;
    M2C_FIELD(temp_15_2, s16 *, 0x10) = temp_4_2;
    temp_15_3 = temp_15_2 + 0x20;
    M2C_FIELD(temp_15_3, s16 *, 0x12) = temp_12;
    M2C_FIELD(temp_15_3, s16 *, 0x10) = temp_13;
    M2C_FIELD(temp_14, s64 *, 0x20) = (s64) M2C_FIELD(temp_15_2, s64 *, 0x20);
    M2C_FIELD(temp_14_2, s64 *, 8) = (s64) M2C_FIELD(temp_15_3, s64 *, 8);
    M2C_FIELD(temp_14_2, s64 *, 0x10) = (s64) M2C_FIELD(temp_15_3, s16 *, 0x10);
    temp_15_4 = temp_15_3 + 0x20;
    M2C_FIELD(temp_14_2, s64 *, 0x18) = (s64) M2C_FIELD(temp_15_3, s64 *, 0x18);
    temp_14_3 = temp_14_2 + 0x20;
    M2C_FIELD(temp_14_3, s16 *, 0x12) = temp_9;
    M2C_FIELD(temp_14_3, s16 *, 0x10) = temp_5_2;
    M2C_FIELD(temp_24, s64 *, 0x20) = (s64) M2C_FIELD(temp_14_2, s64 *, 0x20);
    M2C_FIELD(temp_24_2, s64 *, 8) = (s64) M2C_FIELD(temp_14_3, s64 *, 8);
    M2C_FIELD(temp_24_2, s64 *, 0x10) = (s64) M2C_FIELD(temp_14_3, s16 *, 0x10);
    temp_14_4 = temp_14_3 + 0x20;
    M2C_FIELD(temp_24_2, s64 *, 0x18) = (s64) M2C_FIELD(temp_14_3, s64 *, 0x18);
    temp_24_3 = temp_24_2 + 0x20;
    M2C_FIELD(temp_24_3, s16 *, 0x12) = temp_10;
    M2C_FIELD(temp_24_3, s16 *, 0x10) = temp_8_2;
    temp_24_4 = temp_24_3 + 0x20;
    M2C_FIELD(temp_15_4, s16 *, 0x10) = temp_4_2;
    M2C_FIELD(temp_15_4, s16 *, 0x12) = temp_6_2;
    temp_15_5 = temp_15_4 + 0x20;
    M2C_FIELD(temp_15_5, s16 *, 0x10) = temp_13;
    M2C_FIELD(temp_15_5, s16 *, 0x12) = temp_6_2;
    M2C_FIELD(temp_14_3, s64 *, 0x20) = (s64) M2C_FIELD(temp_15_4, s64 *, 0x20);
    M2C_FIELD(temp_14_4, s64 *, 8) = (s64) M2C_FIELD(temp_15_5, s64 *, 8);
    M2C_FIELD(temp_14_4, s64 *, 0x10) = (s64) M2C_FIELD(temp_15_5, s16 *, 0x10);
    var_15 = temp_15_5 + 0x20;
    temp_7_2 = var_15 - 0x20;
    M2C_FIELD(temp_14_4, s64 *, 0x18) = (s64) M2C_FIELD(temp_15_5, s64 *, 0x18);
    temp_14_5 = temp_14_4 + 0x20;
    M2C_FIELD(temp_14_5, s16 *, 0x10) = temp_5_2;
    M2C_FIELD(temp_14_5, s16 *, 0x12) = temp_6_2;
    M2C_FIELD(temp_24_3, s64 *, 0x20) = (s64) M2C_FIELD(temp_14_4, s64 *, 0x20);
    M2C_FIELD(temp_24_4, s64 *, 8) = (s64) M2C_FIELD(temp_14_5, s64 *, 8);
    M2C_FIELD(temp_24_4, s64 *, 0x10) = (s64) M2C_FIELD(temp_14_5, s16 *, 0x10);
    var_14 = temp_14_5 + 0x20;
    temp_4_3 = var_14 - 0x20;
    M2C_FIELD(temp_24_4, s64 *, 0x18) = (s64) M2C_FIELD(temp_14_5, s64 *, 0x18);
    temp_24_5 = temp_24_4 + 0x20;
    M2C_FIELD(temp_24_5, s16 *, 0x10) = temp_8_2;
    M2C_FIELD(temp_24_5, s16 *, 0x12) = temp_6_2;
    var_24 = temp_24_5 + 0x20;
    temp_3_2 = var_24 - 0x20;
    do {
        var_16 -= 1;
        M2C_FIELD(var_15, s64 *, 0) = (s64) M2C_FIELD(temp_7_2, s64 *, 0);
        M2C_FIELD(var_15, s64 *, 8) = (s64) M2C_FIELD(temp_7_2, s64 *, 8);
        M2C_FIELD(var_15, s64 *, 0x10) = (s64) M2C_FIELD(temp_7_2, s64 *, 0x10);
        M2C_FIELD(var_15, s64 *, 0x18) = (s64) M2C_FIELD(temp_7_2, s64 *, 0x18);
        var_15 += 0x20;
        M2C_FIELD(var_14, s64 *, 0) = (s64) M2C_FIELD(temp_4_3, s64 *, 0);
        M2C_FIELD(var_14, s64 *, 8) = (s64) M2C_FIELD(temp_4_3, s64 *, 8);
        M2C_FIELD(var_14, s64 *, 0x10) = (s64) M2C_FIELD(temp_4_3, s64 *, 0x10);
        M2C_FIELD(var_14, s64 *, 0x18) = (s64) M2C_FIELD(temp_4_3, s64 *, 0x18);
        var_14 += 0x20;
        M2C_FIELD(var_24, s64 *, 0) = (s64) M2C_FIELD(temp_3_2, s64 *, 0);
        M2C_FIELD(var_24, s64 *, 8) = (s64) M2C_FIELD(temp_3_2, s64 *, 8);
        M2C_FIELD(var_24, s64 *, 0x10) = (s64) M2C_FIELD(temp_3_2, s64 *, 0x10);
        M2C_FIELD(var_24, s64 *, 0x18) = (s64) M2C_FIELD(temp_3_2, s64 *, 0x18);
        var_24 += 0x20;
    } while (var_16 >= 0);
}
