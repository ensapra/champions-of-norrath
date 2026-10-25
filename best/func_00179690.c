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

extern M2C_UNK jtbl_004C006C;

void *func_00179690(void *arg0, void *arg1, void *arg2) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 var_2_2;
    s32 var_7;
    s32 var_7_2;
    s32 var_8;
    u32 temp_4;
    u32 temp_7;
    u64 temp_2_2;
    u64 temp_5;
    u64 var_10;
    u64 var_7_3;
    u64 var_9;
    void *var_2;

    temp_7 = M2C_FIELD(arg0, u32 *, 0);
    var_2 = arg0;
    if (temp_7 >= 2U) {
        temp_4 = M2C_FIELD(arg1, u32 *, 0);
        var_2 = arg1;
        if (temp_4 >= 2U) {
            if ((temp_7 ^ 4) == 0) {
                if (((temp_4 ^ 4) == 0) && (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(arg1, s32 *, 4))) {
                    return &jtbl_004C006C + 0xBFA4;
                }
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return arg0;
            }
            var_2 = arg1;
            if ((temp_4 ^ 4) != 0) {
                if ((temp_4 ^ 2) == 0) {
                    if ((temp_7 ^ 2) == 0) {
                        M2C_FIELD(arg2, s64 *, 0) = (s64) M2C_FIELD(arg0, u32 *, 0);
                        M2C_FIELD(arg2, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 8);
                        M2C_FIELD(arg2, u64 *, 0x10) = (u64) M2C_FIELD(arg0, u64 *, 0x10);
                        M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & M2C_FIELD(arg1, s32 *, 4));
                        return arg2;
                    }
                    return arg0;
                }
                var_2 = arg1;
                if ((temp_7 ^ 2) != 0) {
                    var_8 = (s32) M2C_FIELD(arg0, s64 *, 8);
                    var_7 = M2C_FIELD(arg1, s32 *, 8);
                    var_10 = M2C_FIELD(arg0, u64 *, 0x10);
                    temp_2 = var_8 - var_7;
                    var_9 = M2C_FIELD(arg1, u64 *, 0x10);
                    if (((temp_2 < 0) ? -temp_2 : temp_2) < 0x40) {
                        var_2_2 = var_8 < var_7;
                        if (var_7 < var_8) {
                            var_7_2 = var_8 - var_7;
                            do {
                                var_7_2 -= 1;
                                var_9 = (var_9 & 1) | (var_9 >> 1);
                            } while (var_7_2 != 0);
                            var_7 = var_8;
                            var_2_2 = var_8 < var_7;
                        }
                        if (var_2_2 != 0) {
                            do {
                                var_8 += 1;
                                var_10 = (var_10 & 1) | (var_10 >> 1);
                            } while (var_8 < var_7);
                        }
                    } else if (var_7 >= var_8) {
                        var_8 = var_7;
                        var_10 = 0;
                    } else {
                        var_9 = 0;
                    }
                    temp_4_2 = M2C_FIELD(arg0, s32 *, 4);
                    if (temp_4_2 != M2C_FIELD(arg1, s32 *, 4)) {
                        temp_3 = (temp_4_2 == 0) ? (var_10 - var_9) : (var_9 - var_10);
                        if (temp_3 < 0) {
                            M2C_FIELD(arg2, s32 *, 4) = 1;
                            M2C_FIELD(arg2, s64 *, 8) = var_8;
                            M2C_FIELD(arg2, u64 *, 0x10) = (u64) (0 - temp_3);
                        } else {
                            M2C_FIELD(arg2, s64 *, 8) = var_8;
                            M2C_FIELD(arg2, u64 *, 0x10) = (u64) temp_3;
                            M2C_FIELD(arg2, s32 *, 4) = 0;
                        }
                        var_7_3 = M2C_FIELD(arg2, u64 *, 0x10);
                        if ((u64) ((u64) (-1 << 5) >> 4) >= (u32) (var_7_3 - 1)) {
                            do {
                                temp_5 = var_7_3 * 2;
                                temp_4_3 = (u64) ((u64) (-1 << 5) >> 4) < (u32) (temp_5 - 1);
                                M2C_FIELD(arg2, s64 *, 8) = (s32) ((s32) M2C_FIELD(arg2, s64 *, 8) - 1);
                                var_7_3 = temp_5;
                                M2C_FIELD(arg2, u64 *, 0x10) = temp_5;
                            } while (temp_4_3 == 0);
                        }
                    } else {
                        temp_2_2 = var_10 + var_9;
                        M2C_FIELD(arg2, s32 *, 4) = temp_4_2;
                        M2C_FIELD(arg2, s64 *, 8) = var_8;
                        var_7_3 = temp_2_2;
                        M2C_FIELD(arg2, u64 *, 0x10) = temp_2_2;
                    }
                    M2C_FIELD(arg2, s64 *, 0) = 3;
                    if ((u64) (-1U >> 3) < var_7_3) {
                        M2C_FIELD(arg2, u64 *, 0x10) = (u64) ((var_7_3 & 1) | (var_7_3 >> 1));
                        M2C_FIELD(arg2, s64 *, 8) = (s32) ((s32) M2C_FIELD(arg2, s64 *, 8) + 1);
                    }
                    var_2 = arg2;
                }
                /* Duplicate return node #42. Try simplifying control flow for better match */
                return var_2;
            }
            /* Duplicate return node #42. Try simplifying control flow for better match */
            return var_2;
        }
    }
    return var_2;
}
