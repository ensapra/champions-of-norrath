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

void connection_get_ping_time__FP12connection_tPi(void *arg0, s32 *arg1) {
    s32 temp_4;
    s32 var_7;
    u16 *var_6;
    u16 temp_2;

    var_6 = arg0 + 0x1128;
    var_7 = 0xE;
    *arg1 = (s32) M2C_FIELD(arg0, u16 *, 0x1126);
    do {
        temp_2 = *var_6;
        var_6 += 2;
        temp_4 = *arg1;
        var_7 -= 1;
        *arg1 = (temp_4 < (s32) temp_2) ? temp_4 : (s32) temp_2;
    } while (var_7 >= 0);
}
