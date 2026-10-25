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
s32 func_002E8D88(void *);                          /* extern */
M2C_UNK func_002E8DD0(void *);                      /* extern */
extern M2C_UNK D_008EBDD8;

s32 func_002E64F0(s32 arg0, void *arg1) {
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_4;
    s32 var_17;
    s32 var_2;
    s32 var_6;
    u16 temp_19;
    u16 temp_2;
    u32 temp_21;
    void *temp_16;

    temp_4 = arg0 - 1;
    if ((M2C_FIELD(&D_008EBDD8, s32 *, 0x40) >= temp_4) && (temp_4 >= 0)) {
        if (arg1 != NULL) {
            temp_16 = (temp_4 * 0x110) + (&D_008EBDD8 + 0x88);
            temp_3 = M2C_FIELD(temp_16, s32 *, 0x1C);
            var_17 = 1;
            if (temp_3 != 4) {
                if (temp_3 < 5) {
                    if ((temp_3 < 3) && (temp_3 > 0)) {
                        var_17 = 0x8000000F;
                    } else {
                        goto block_14;
                    }
                } else {
                    var_17 = 0x80000006;
                    if (temp_3 != 6) {
block_14:
                        var_17 = 0x80000000;
                    }
                }
            }
            var_2 = var_17;
            if (var_17 == 1) {
                temp_3_2 = M2C_FIELD(temp_16, s32 *, 0x10);
                var_2 = temp_3_2;
                if (temp_3_2 == 0) {
                    temp_21 = M2C_FIELD(&D_008EBDD8, u32 (**)(M2C_UNK), 0x80)(4);
                    WaitSema_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x2C));
                    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(temp_16, u16 *, 0x26);
                    temp_2 = M2C_FIELD(temp_16, u16 *, 0x26);
                    if (temp_2 != 0) {
                        var_6 = 0;
                        if (temp_2 != 0) {
                            do {
                                M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a0) */);
                                M2C_ERROR(/* unknown instruction: ldr $v0, ($a0) */);
                                M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a0) */);
                                M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a0) */);
                                M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a1) */);
                                M2C_ERROR(/* unknown instruction: sdr $v0, ($a1) */);
                                M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a1) */);
                                var_6 += 1;
                                M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a1) */);
                            } while (var_6 < (s32) M2C_FIELD(temp_16, u16 *, 0x26));
                        }
                        M2C_ERROR(/* unknown instruction: ldl $v1, 0x1f($v0) */);
                        M2C_ERROR(/* unknown instruction: ldr $v1, 0x18($v0) */);
                        M2C_ERROR(/* unknown instruction: ldl $a1, 0x27($v0) */);
                        M2C_ERROR(/* unknown instruction: ldr $a1, 0x20($v0) */);
                        M2C_ERROR(/* unknown instruction: sdl $v1, 0xcf($s0) */);
                        M2C_ERROR(/* unknown instruction: sdr $v1, 0xc8($s0) */);
                        M2C_ERROR(/* unknown instruction: sdl $a1, 0xd7($s0) */);
                        M2C_ERROR(/* unknown instruction: sdr $a1, 0xd0($s0) */);
                        M2C_FIELD(temp_16, u64 *, 0xD8) = (u64) (temp_21 + M2C_FIELD(&D_008EBDD8, s32 *, 0x78));
                    } else if (M2C_FIELD(&D_008EBDD8, s32 *, 0x60) != 0) {
                        temp_19 = M2C_FIELD(temp_16, u16 *, 0xD4);
                        if ((temp_19 == var_17) && (temp_21 >= (u64) M2C_FIELD(temp_16, u64 *, 0xD8)) && (func_002E8D88(temp_16 + 0xC8) == 0)) {
                            M2C_ERROR(/* unknown instruction: ldl $a4, 0x7($s1) */);
                            M2C_ERROR(/* unknown instruction: ldr $a4, ($s1) */);
                            M2C_ERROR(/* unknown instruction: ldl $v0, 0xf($s1) */);
                            M2C_ERROR(/* unknown instruction: ldr $v0, 0x8($s1) */);
                            M2C_ERROR(/* unknown instruction: sdl $a4, 0xb($s2) */);
                            M2C_ERROR(/* unknown instruction: sdr $a4, 0x4($s2) */);
                            M2C_ERROR(/* unknown instruction: sdl $v0, 0x13($s2) */);
                            M2C_ERROR(/* unknown instruction: sdr $v0, 0xc($s2) */);
                            M2C_FIELD(arg1, u16 *, 2) = temp_19;
                            M2C_FIELD(arg1, s16 *, 0x10) = 3;
                            M2C_FIELD(temp_16, u64 *, 0xD8) = (u64) (temp_21 + M2C_FIELD(&D_008EBDD8, s64 *, 0x70));
                        }
                    }
                    M2C_FIELD(arg1, s16 *, 0) = 0;
                    func_002E8DD0(temp_16);
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
