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

extern M2C_UNK _ctype_;

void strupr__4BasePc(s8 *arg0) {
    s8 *var_5;
    u8 temp_3;

    var_5 = arg0;
loop_2:
    temp_3 = (u8) *var_5;
    if (*var_5 != 0) {
        *var_5 = (*(&_ctype_ + 1 + (s8) temp_3) & 2) ? ((s8) temp_3 - 0x20) : (s8) temp_3;
        var_5 += 1;
        goto loop_2;
    }
}
