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

M2C_UNK SignalSema_2(s32);                          /* extern */
M2C_UNK WaitSema_2(s32);                            /* extern */
M2C_UNK func_002E8E88(void *);                      /* extern */
M2C_UNK func_003021B0(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK D_008EBDD8;

s32 func_002E6B70(s32 arg0, void *arg1) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_6;
    s32 var_2;
    s32 var_5;
    s32 var_8;
    s8 var_20;
    u8 var_19;
    void *temp_17;
    void *temp_18;
    void *temp_6_2;

    temp_6 = arg0 - 1;
    var_19 = 0;
    var_20 = 0;
    if ((M2C_FIELD(&D_008EBDD8, s32 *, 0x44) >= temp_6) && (temp_6 >= 0)) {
        if (arg1 != NULL) {
            temp_18 = (temp_6 * 0x68) + (&D_008EBDD8 + 0x4C8);
            temp_3 = M2C_FIELD(temp_18, s32 *, 0x1C);
            var_5 = 1;
            if (temp_3 != 4) {
                if (temp_3 < 5) {
                    if ((temp_3 < 3) && (temp_3 > 0)) {
                        var_5 = 0x8000000F;
                    } else {
                        goto block_13;
                    }
                } else {
                    var_5 = 0x80000006;
                    if (temp_3 != 6) {
block_13:
                        var_5 = 0x80000000;
                    }
                }
            }
            var_2 = var_5;
            if (var_5 == 1) {
                temp_3_2 = M2C_FIELD(temp_18, s32 *, 0x10);
                var_2 = temp_3_2;
                if (temp_3_2 == 0) {
                    temp_17 = temp_18 + 0x28;
                    func_003021B0(arg1, 0, 0x14);
                    WaitSema_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x2C));
                    var_8 = 0;
                    if (M2C_FIELD(temp_17, u16 *, 0x14) != 0) {
                        do {
                            temp_2 = M2C_FIELD(temp_18, s32 *, 0x20) + var_8;
                            var_8 += 1;
                            M2C_ERROR(/* unknown instruction: ldl $a0, 0x1f($v0) */);
                            M2C_ERROR(/* unknown instruction: ldr $a0, 0x18($v0) */);
                            M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($a3) */);
                            M2C_ERROR(/* unknown instruction: sdr $a0, ($a3) */);
                            temp_6_2 = temp_17 + (((temp_2 % 5) * 8) + 0x10);
                            M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) + M2C_FIELD(temp_6_2, s8 *, 0xD));
                            M2C_FIELD(arg1, s32 *, 0xC) = (s32) (M2C_FIELD(arg1, s32 *, 0xC) + M2C_FIELD(temp_6_2, s8 *, 0xE));
                            M2C_FIELD(arg1, s32 *, 0x10) = (s32) (M2C_FIELD(arg1, s32 *, 0x10) + M2C_FIELD(temp_6_2, s8 *, 0xF));
                            if (var_19 != 0) {
                                var_20 = ((var_19 ^ M2C_FIELD(temp_6_2, u8 *, 0xC)) != 0) ? 1 : var_20;
                            }
                            var_19 = M2C_FIELD(temp_6_2, u8 *, 0xC);
                        } while (var_8 < (s32) M2C_FIELD(temp_17, u16 *, 0x14));
                    }
                    M2C_FIELD(arg1, s8 *, 4) = var_20;
                    M2C_FIELD(arg1, u16 *, 0x14) = (u16) M2C_FIELD(temp_17, u16 *, 0x14);
                    func_002E8E88(temp_18);
                    SignalSema_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x2C));
                    var_2 = 0;
                }
            }
            return var_2;
        }
        goto block_5;
    }
block_5:
    return 0x80000004;
}
