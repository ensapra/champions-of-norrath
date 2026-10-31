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

extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern s32 (*D_011B1E1C)(u32, s32, u32);
extern s32 (*D_011B1E20)(s32, u32, u32);
extern M2C_UNK D_011C2C48;

s32 xmlBufferResize(void *arg0, u32 arg1) {
    s32 temp_3_2;
    s32 temp_4;
    s32 temp_5;
    s32 var_2;
    u32 temp_3;
    u32 var_16;

    temp_3 = M2C_FIELD(arg0, u32 *, 8);
    temp_5 = arg1 < temp_3;
    var_16 = (temp_3 != 0) ? (temp_3 * 2) : arg1;
    if (temp_5 == 0) {
        temp_3_2 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_3_2 == 0) {
            if (var_16 < arg1) {
                var_16 *= 2;
loop_8:
                if (var_16 < arg1) {
                    var_16 *= 2;
                    goto loop_8;
                }
            }
        } else {
            var_16 = arg1 + 0xA;
            if (temp_3_2 != 1) {

            }
        }
        temp_4 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_4 == 0) {
            var_2 = D_011B1E1C(var_16, temp_5, arg1);
        } else {
            var_2 = D_011B1E20(temp_4, var_16, arg1);
        }
        if (var_2 != 0) {
            M2C_FIELD(arg0, u32 *, 8) = var_16;
            M2C_FIELD(arg0, s32 *, 0) = var_2;
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return 1;
        }
        D_0118EDD0(D_0118EDD4, &D_011C2C48, D_0118EDD0);
        return 0;
    }
    return 1;
}
