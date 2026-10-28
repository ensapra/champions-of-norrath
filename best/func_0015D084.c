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

void func_0015D084(void *arg0) {
    volatile s32 keep;
    s32 temp_10;
    s32 temp_15;
    s32 temp_24;
    s32 temp_2;
    s32 temp_3;
    s32 temp_4;
    s32 temp_8;
    s32 temp_9;
    s32 var_11;
    s32 var_12;
    s32 var_13;
    s32 var_14;

    keep = 0;
    var_14 = M2C_FIELD(arg0, s32 *, 0xCE0);
    var_13 = M2C_FIELD(arg0, s32 *, 0xCE4);
    var_12 = M2C_FIELD(arg0, s32 *, 0xCE8);
    var_11 = M2C_FIELD(arg0, s32 *, 0xCEC);
    temp_15 = M2C_FIELD(arg0, s32 *, 0x5AC);
    temp_8 = (var_14 + var_13) * 2;
    temp_9 = (var_12 + var_11) * 2;
    temp_24 = M2C_FIELD(arg0, s32 *, 0xD00);
    temp_10 = M2C_FIELD(arg0, s32 *, 0x5B0);
    if (temp_15 < temp_8) {
        var_14 = (s32) (var_14 * temp_15) / temp_8;
        var_13 = (s32) (var_13 * temp_15) / temp_8;
    }
    if (temp_10 < temp_9) {
        var_12 = (s32) (var_12 * temp_10) / temp_9;
        var_11 = (s32) (var_11 * temp_10) / temp_9;
    }
    temp_3 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_2 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_3;
    temp_4 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_3;
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) ((temp_2 + var_14) - temp_24);
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (((temp_2 + temp_15) - var_13) + temp_24);
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (((temp_4 + temp_10) - var_11) + temp_24);
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) ((temp_4 + var_12) - temp_24);
}
