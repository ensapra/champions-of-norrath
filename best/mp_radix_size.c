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

s32 s_mp_outlen__Fii(s32);                          /* extern */

s32 mp_radix_size(void *arg0) {
    s32 temp_2;
    s32 temp_6;
    s32 var_2;
    s32 var_4;
    s32 var_4_2;
    u16 var_3;

    var_2 = 0;
    if (arg0 != NULL) {
        temp_2 = M2C_FIELD(arg0, s32 *, 8);
        var_3 = M2C_FIELD((M2C_FIELD(arg0, u16 **, 0xC) + (temp_2 * 2)), u16 *, -2);
        var_4 = (temp_2 - 1) * 0x10;
        if (var_3 != 0) {
            do {
                var_3 = (u16) (var_3 >> 1);
                var_4 += 1;
            } while (var_3 != 0);
        }
        temp_6 = s_mp_outlen__Fii(var_4) + 1;
        var_4_2 = -1;
        if (M2C_FIELD(arg0, s8 *, 0) != 1) {
            var_4_2 = 1;
            if (M2C_FIELD(arg0, s32 *, 8) == 1) {
                var_4_2 = 0;
                if (*M2C_FIELD(arg0, u16 **, 0xC) != 0) {
                    var_4_2 = 1;
                }
            }
        }
        var_2 = temp_6 + (var_4_2 < 0);
    }
    return var_2;
}
