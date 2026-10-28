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

s32 func_002D8270(M2C_UNK *, s32, M2C_UNK, s32 *, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_002DC600();                                /* extern */
s32 func_002DC700();                                /* extern */
M2C_UNK func_00301FFC(void *, s32, s32);            /* extern */
M2C_UNK func_00305118(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern s32 D_008E1E80;
extern M2C_UNK D_008E1E88;
extern M2C_UNK D_008E2080;

s32 func_002DCDD8(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 arg4) {
    M2C_UNK *var_5;
    s32 var_2;
    s32 var_3;
    void *temp_2;
    void *var_4;

    var_2 = 0xFFFF0000;
    if (func_002DC600() >= 0) {
        if (func_002DC700() == 0) {
            func_00305118(&D_008E1E88, arg0, 0xFC);
            temp_2 = &D_008E1E88 - 8;
            M2C_FIELD(temp_2, s8 *, 0x103) = 0;
            if (arg2 != 0) {
                if (arg1 >= 0xFD) {
                    var_4 = &D_008E1E88 + 0xFC;
                    var_3 = arg2;
                    if ((arg2 | (s32) var_4) & 7) {
                        var_5 = (M2C_UNK *)0x8E0000;
                        do {
                            M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($v1) */);
                            M2C_ERROR(/* unknown instruction: ldr $a2, ($v1) */);
                            M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($v1) */);
                            M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($v1) */);
                            M2C_ERROR(/* unknown instruction: ldl $a4, 0x17($v1) */);
                            M2C_ERROR(/* unknown instruction: ldr $a4, 0x10($v1) */);
                            M2C_ERROR(/* unknown instruction: ldl $a5, 0x1f($v1) */);
                            M2C_ERROR(/* unknown instruction: ldr $a5, 0x18($v1) */);
                            M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $a2, ($a0) */);
                            M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a0) */);
                            M2C_ERROR(/* unknown instruction: sdl $a4, 0x17($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $a4, 0x10($a0) */);
                            M2C_ERROR(/* unknown instruction: sdl $a5, 0x1f($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $a5, 0x18($a0) */);
                            var_3 += 0x20;
                            var_4 += 0x20;
                        } while (var_3 != (arg2 + 0xE0));
                    } else {
                        var_5 = &D_008E2080;
                        do {
                            M2C_FIELD(var_4, s64 *, 0) = (s64) M2C_FIELD(var_3, s64 *, 0);
                            M2C_FIELD(var_4, s64 *, 8) = (s64) M2C_FIELD(var_3, s64 *, 8);
                            M2C_FIELD(var_4, s64 *, 0x10) = (s64) M2C_FIELD(var_3, s64 *, 0x10);
                            M2C_FIELD(var_4, s64 *, 0x18) = (s64) M2C_FIELD(var_3, s64 *, 0x18);
                            var_3 += 0x20;
                            var_4 += 0x20;
                        } while (var_3 != (arg2 + 0xE0));
                    }
                    M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a2, ($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $a4, 0x17($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a4, 0x10($v1) */);
                    M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a4, 0x17($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a4, 0x10($a0) */);
                    M2C_FIELD(var_4, M2C_UNK *, 0x18) = M2C_UNALIGNED32(M2C_FIELD(var_3, M2C_UNK *, 0x18));
                    M2C_FIELD(&D_008E1E80, s32 *, 0) = 0xFC;
                } else {
                    func_00301FFC(&D_008E1E88 + 0xFC, arg2, arg1);
                    M2C_FIELD(&D_008E1E88, s32 *, -8) = arg1;
                    goto block_16;
                }
            } else {
                M2C_FIELD(temp_2, s8 *, 0x104) = 0;
                M2C_FIELD(&D_008E1E88, s32 *, -8) = 0;
block_16:
                var_5 = &D_008E2080;
            }
            if (func_002D8270(var_5, arg4, 0, &D_008E1E80, 0x200, &D_008E1E80, 8, 0, 0) >= 0) {
                var_2 = M2C_FIELD(&D_008E1E80, s32 *, 0);
                *arg3 = M2C_FIELD(&D_008E1E80, s32 *, 4);
                /* Duplicate return node #22. Try simplifying control flow for better match */
                return var_2;
            }
            return 0xFFFEFFFF;
        }
        return 0xFFFEFFFC;
    }
    return var_2;
}
