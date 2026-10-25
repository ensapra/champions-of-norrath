/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_002DD640();                                /* extern */
M2C_UNK func_002DD698();                            /* extern */
s32 func_002DF8C8(s32, s8, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_002DF8F8(s32);                         /* extern */
extern M2C_UNK D_008DE610;
extern M2C_UNK D_008DE640;

s32 func_002D6470(s8 *arg0, s32 arg1) {
    s32 temp_22;
    s32 temp_6;
    s32 var_17;
    s32 var_18;
    s32 var_20;
    s32 var_2;
    s8 *var_16;
    u8 *var_4;

    var_20 = 0;
    var_18 = arg1;
    var_17 = 0;
    var_16 = arg0;
    var_2 = -1;
    if (M2C_FIELD(&D_008DE610, s32 *, 0xC) == 0) {
        temp_22 = func_002DD640();
        M2C_FIELD(&D_008DE610, s32 *, 0xC) = 1;
        temp_6 = (s32) &D_008DE640 | 0x20000000;
        M2C_FIELD(&D_008DE610, s32 *, 0x10) = temp_6;
        var_4 = temp_6 + 0xC;
loop_2:
        var_18 -= 1;
        if (var_18 != -1) {
            if (*var_16 == 0xA) {
                *var_4 = 0xD;
                var_17 += 1;
                var_4 += 1;
                if (var_17 < 0x100) {
                    goto block_6;
                }
            } else {
block_6:
                *var_4 = (u8) *var_16;
                var_17 += 1;
                var_16 += 1;
                var_4 += 1;
                var_20 += 1;
                if (var_17 < 0x100) {
                    goto loop_2;
                }
            }
        }
        M2C_FIELD(&D_008DE610, s32 *, 4) = (s32) (var_17 + 0xC);
        M2C_FIELD(temp_6, s16 *, 0) = (s16) M2C_FIELD(&D_008DE610, s32 *, 4);
        if (func_002DF8C8(M2C_FIELD(&D_008DE610, s32 *, 0), M2C_FIELD(temp_6, s8 *, 7), temp_6, 0xA, -1) < 0) {
            M2C_FIELD(&D_008DE610, s32 *, 0xC) = 0;
            var_2 = -1;
            if (temp_22 != 0) {
                func_002DD698();
                return -1;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return var_2;
        }
        if (M2C_FIELD(&D_008DE610, s32 *, 0xC) != 0) {
            do {
                func_002DF8F8(M2C_FIELD(&D_008DE610, s32 *, 0));
            } while (M2C_FIELD(&D_008DE610, s32 *, 0xC) != 0);
        }
        var_2 = var_20;
        if (temp_22 != 0) {
            func_002DD698();
            var_2 = var_20;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
