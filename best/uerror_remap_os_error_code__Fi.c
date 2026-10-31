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

extern M2C_UNK D_011C3E68;

s32 uerror_remap_os_error_code__Fi(s32 arg0) {
    s32 var_5;
    s32 var_6;

    var_6 = -1;
    if (arg0 != -0x1FF) {
        var_5 = 0;
        if (arg0 == -0x1F4) {
            var_6 = -4;
        } else {
loop_4:
            if (var_5 < 0xF) {
                var_5 += 1;
                if (arg0 != *(&D_011C3E68 + (var_5 * 8))) {
                    goto loop_4;
                }
            }
        }
    } else {
        var_6 = -6;
    }
    return var_6;
}
