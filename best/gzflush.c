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

u32 deflate(void *, s32);                           /* extern */
M2C_UNK fflush(s32);                                /* extern */
s32 fwrite(s32, M2C_UNK, s32, s32);                 /* extern */

u32 gzflush(void *arg0, s32 arg1) {
    s32 temp_17;
    s32 var_19;
    s32 var_2_2;
    u32 temp_2;
    u32 temp_2_2;
    u32 temp_3;
    u32 var_2;
    u32 var_3;
    u32 var_4;

    var_19 = 0;
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 0x5C) != 0x77) {
            var_3 = -2U;
        } else {
            M2C_FIELD(arg0, s32 *, 4) = 0;
loop_14:
            temp_17 = 0x4000 - M2C_FIELD(arg0, s32 *, 0x10);
            if (temp_17 != 0) {
                if (fwrite(M2C_FIELD(arg0, s32 *, 0x48), 1, temp_17, M2C_FIELD(arg0, s32 *, 0x40)) == temp_17) {
                    M2C_FIELD(arg0, s32 *, 0x10) = 0x4000;
                    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x48);
                    goto block_17;
                }
                var_3 = -1U;
                M2C_FIELD(arg0, u32 *, 0x38) = -1U;
            } else {
block_17:
                if (var_19 != 0) {
                    goto block_19;
                }
                temp_2 = deflate(arg0, arg1);
                M2C_FIELD(arg0, u32 *, 0x38) = temp_2;
                if ((temp_17 == 0) && (temp_2 == -5U)) {
                    M2C_FIELD(arg0, u32 *, 0x38) = 0U;
                }
                var_19 = 0;
                if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
                    temp_3 = M2C_FIELD(arg0, u32 *, 0x38);
                    var_2_2 = temp_3 < 2U;
                    if (temp_3 == 1) {
                        var_19 = 1;
                    }
                } else {
                    var_19 = 1;
                    var_2_2 = (u32) M2C_FIELD(arg0, u32 *, 0x38) < 2U;
                }
                if (var_2_2 != 0) {
                    goto loop_14;
                }
block_19:
                var_4 = 0;
                if (M2C_FIELD(arg0, u32 *, 0x38) != 1) {
                    var_4 = M2C_FIELD(arg0, u32 *, 0x38);
                }
                var_3 = var_4;
            }
        }
    } else {
        var_3 = -2U;
    }
    var_2 = var_3;
    if (var_3 == 0) {
        fflush(M2C_FIELD(arg0, s32 *, 0x40));
        temp_2_2 = M2C_FIELD(arg0, u32 *, 0x38);
        var_2 = ((temp_2_2 ^ 1) == 0) ? 0U : temp_2_2;
    }
    return var_2;
}
