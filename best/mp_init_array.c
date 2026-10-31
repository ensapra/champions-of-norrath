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

M2C_UNK mp_clear(s32);                              /* extern */
s32 mp_init_size(s32, s32);                         /* extern */
extern s32 D_011B2138;

s32 mp_init_array(s32 arg0, s32 arg1) {
    s32 temp_2;
    s32 var_16;

    if ((arg0 == 0) || (var_16 = 0, (arg1 <= 0))) {
        return -4;
    }
loop_6:
    if (var_16 < arg1) {
        temp_2 = mp_init_size(arg0 + (var_16 * 0x10), D_011B2138);
        if (temp_2 == 0) {
            var_16 += 1;
            goto loop_6;
        }
loop_12:
        var_16 -= 1;
        if (var_16 >= 0) {
            mp_clear(arg0 + (var_16 * 0x10));
            goto loop_12;
        }
        return temp_2;
    }
    return 0;
}
