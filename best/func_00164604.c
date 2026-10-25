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

void func_00164604(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5, void *arg6, void *arg7, void *arg_sp0, void *arg_sp8, void *arg_sp10, void *arg_sp18, void *arg_sp20, void *arg_sp28, void *arg_sp30) {
    s32 temp_2;
    s32 var_16;
    s64 temp_3;
    s64 temp_3_10;
    s64 temp_3_11;
    s64 temp_3_12;
    s64 temp_3_13;
    s64 temp_3_14;
    s64 temp_3_2;
    s64 temp_3_3;
    s64 temp_3_4;
    s64 temp_3_5;
    s64 temp_3_6;
    s64 temp_3_7;
    s64 temp_3_8;
    s64 temp_3_9;

    if (M2C_FIELD(arg0, s32 *, 0x944) != 0) {
        temp_3 = M2C_FIELD(arg0, s64 *, 0x9A0);
        M2C_FIELD(arg2, s64 *, 0) = temp_3;
        M2C_FIELD(arg2, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9A8);
        M2C_FIELD(arg1, s64 *, 0) = temp_3;
        M2C_FIELD(arg1, s64 *, 8) = (s64) M2C_FIELD(arg2, s64 *, 8);
        temp_3_2 = M2C_FIELD(arg0, s64 *, 0x990);
        M2C_FIELD(arg4, s64 *, 0) = temp_3_2;
        M2C_FIELD(arg4, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x998);
        M2C_FIELD(arg3, s64 *, 0) = temp_3_2;
        M2C_FIELD(arg3, s64 *, 8) = (s64) M2C_FIELD(arg4, s64 *, 8);
        temp_3_3 = M2C_FIELD(arg0, s64 *, 0x9C0);
        M2C_FIELD(arg6, s64 *, 0) = temp_3_3;
        M2C_FIELD(arg6, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9C8);
        M2C_FIELD(arg5, s64 *, 0) = temp_3_3;
        M2C_FIELD(arg5, s64 *, 8) = (s64) M2C_FIELD(arg6, s64 *, 8);
        temp_3_4 = M2C_FIELD(arg0, s64 *, 0x9B0);
        M2C_FIELD(arg_sp0, s64 *, 0) = temp_3_4;
        M2C_FIELD(arg_sp0, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9B8);
        M2C_FIELD(arg7, s64 *, 0) = temp_3_4;
        M2C_FIELD(arg7, s64 *, 8) = (s64) M2C_FIELD(arg_sp0, s64 *, 8);
        temp_3_5 = M2C_FIELD(arg0, s64 *, 0x9D0);
        M2C_FIELD(arg_sp10, s64 *, 0) = temp_3_5;
        M2C_FIELD(arg_sp10, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9D8);
        M2C_FIELD(arg_sp8, s64 *, 0) = temp_3_5;
        M2C_FIELD(arg_sp8, s64 *, 8) = (s64) M2C_FIELD(arg_sp10, s64 *, 8);
        temp_3_6 = M2C_FIELD(arg0, s64 *, 0x9E0);
        M2C_FIELD(arg_sp20, s64 *, 0) = temp_3_6;
        M2C_FIELD(arg_sp20, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9E8);
        M2C_FIELD(arg_sp18, s64 *, 0) = temp_3_6;
        M2C_FIELD(arg_sp18, s64 *, 8) = (s64) M2C_FIELD(arg_sp20, s64 *, 8);
        temp_3_7 = M2C_FIELD(arg0, s64 *, 0x9F0);
        M2C_FIELD(arg_sp30, s64 *, 0) = temp_3_7;
        M2C_FIELD(arg_sp30, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9F8);
        M2C_FIELD(arg_sp28, s64 *, 0) = temp_3_7;
        M2C_FIELD(arg_sp28, s64 *, 8) = (s64) M2C_FIELD(arg_sp30, s64 *, 8);
        return;
    }
    temp_3_8 = M2C_FIELD(arg0, s64 *, 0x990);
    var_16 = 0;
    M2C_FIELD(arg4, s64 *, 0) = temp_3_8;
    M2C_FIELD(arg4, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x998);
    M2C_FIELD(arg3, s64 *, 0) = temp_3_8;
    M2C_FIELD(arg3, s64 *, 8) = (s64) M2C_FIELD(arg4, s64 *, 8);
    temp_3_9 = M2C_FIELD(arg0, s64 *, 0x9A0);
    M2C_FIELD(arg2, s64 *, 0) = temp_3_9;
    M2C_FIELD(arg2, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9A8);
    M2C_FIELD(arg1, s64 *, 0) = temp_3_9;
    M2C_FIELD(arg1, s64 *, 8) = (s64) M2C_FIELD(arg2, s64 *, 8);
    temp_3_10 = M2C_FIELD(arg0, s64 *, 0x9B0);
    M2C_FIELD(arg_sp0, s64 *, 0) = temp_3_10;
    M2C_FIELD(arg_sp0, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9B8);
    M2C_FIELD(arg7, s64 *, 0) = temp_3_10;
    M2C_FIELD(arg7, s64 *, 8) = (s64) M2C_FIELD(arg_sp0, s64 *, 8);
    temp_3_11 = M2C_FIELD(arg0, s64 *, 0x9C0);
    M2C_FIELD(arg6, s64 *, 0) = temp_3_11;
    M2C_FIELD(arg6, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9C8);
    M2C_FIELD(arg5, s64 *, 0) = temp_3_11;
    M2C_FIELD(arg5, s64 *, 8) = (s64) M2C_FIELD(arg6, s64 *, 8);
    temp_3_12 = M2C_FIELD(arg0, s64 *, 0x9D0);
    M2C_FIELD(arg_sp10, s64 *, 0) = temp_3_12;
    M2C_FIELD(arg_sp10, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9D8);
    M2C_FIELD(arg_sp8, s64 *, 0) = temp_3_12;
    M2C_FIELD(arg_sp8, s64 *, 8) = (s64) M2C_FIELD(arg_sp10, s64 *, 8);
    temp_3_13 = M2C_FIELD(arg0, s64 *, 0x9E0);
    M2C_FIELD(arg_sp20, s64 *, 0) = temp_3_13;
    M2C_FIELD(arg_sp20, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9E8);
    M2C_FIELD(arg_sp18, s64 *, 0) = temp_3_13;
    M2C_FIELD(arg_sp18, s64 *, 8) = (s64) M2C_FIELD(arg_sp20, s64 *, 8);
    temp_3_14 = M2C_FIELD(arg0, s64 *, 0x9F0);
    M2C_FIELD(arg_sp30, s64 *, 0) = temp_3_14;
    M2C_FIELD(arg_sp30, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x9F8);
    M2C_FIELD(arg_sp28, s64 *, 0) = temp_3_14;
    M2C_FIELD(arg_sp28, s64 *, 8) = (s64) M2C_FIELD(arg_sp30, s64 *, 8);
    do {
        temp_2 = var_16 * 4;
        var_16 += 1;
        M2C_FIELD((arg_sp30 + temp_2), s8 *, 3) = 0;
        M2C_FIELD((arg_sp20 + temp_2), s8 *, 3) = 0;
        M2C_FIELD((arg_sp10 + temp_2), s8 *, 3) = 0;
        M2C_FIELD((arg6 + temp_2), s8 *, 3) = 0;
        M2C_FIELD((arg_sp0 + temp_2), s8 *, 3) = 0;
        M2C_FIELD((arg2 + temp_2), s8 *, 3) = 0;
        M2C_FIELD((arg4 + temp_2), s8 *, 3) = 0;
    } while (var_16 < 4);
}
