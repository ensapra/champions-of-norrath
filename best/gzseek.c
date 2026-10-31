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

s32 __wrap_malloc(M2C_UNK);                         /* extern */
s32 crc32(s32, s32, s64);                           /* extern */
s32 deflate(void *, M2C_UNK);                       /* extern */
s32 fseek(s32, s64, M2C_UNK);                       /* extern */
s32 fwrite(s32, M2C_UNK, M2C_UNK, s32);             /* extern */
s32 gzread(void *, s32, s64);                       /* extern */
s32 gzrewind(s64);                                  /* extern */
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);              /* extern */

s64 gzseek(void *arg0, s64 arg1, s32 arg2) {
    s32 temp_19;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_3;
    s32 temp_4;
    s64 temp_18;
    s64 temp_3_2;
    s64 var_17;
    s64 var_18;
    u32 temp_3_3;
    u32 var_2;

    var_17 = arg1;
    if (arg0 != NULL) {
        var_2 = -1U;
        if (arg2 != 2) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x38);
            var_2 = -1U;
            if (temp_3 != -1) {
                var_2 = -1U;
                if (temp_3 != -3) {
                    if (M2C_FIELD(arg0, s8 *, 0x5C) != 0x77) {
                        if (arg2 == 1) {
                            var_17 += M2C_FIELD(arg0, u32 *, 0x14);
                        }
                        var_2 = -1U;
                        if (var_17 >= 0) {
                            if (M2C_FIELD(arg0, s32 *, 0x58) != 0) {
                                M2C_FIELD(arg0, s32 *, 4) = 0;
                                M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
                                if (fseek(M2C_FIELD(arg0, s32 *, 0x40), var_17, 0) < 0) {
                                    return -1;
                                }
                                temp_3_2 = (s64) (var_17 << 0x20) >> 0x20;
                                M2C_FIELD(arg0, u32 *, 8) = (u32) temp_3_2;
                                M2C_FIELD(arg0, u32 *, 0x14) = (u32) temp_3_2;
                                return var_17;
                            }
                            temp_3_3 = M2C_FIELD(arg0, u32 *, 0x14);
                            if ((u32) ((s64) (var_17 << 0x20) >> 0x20) >= temp_3_3) {
                                var_17 -= (u64) ((s64) temp_3_3 << 0x20) >> 0x20;
                                goto block_48;
                            }
                            if (gzrewind(var_17) < 0) {
                                goto block_47;
                            }
block_48:
                            if (var_17 != 0) {
                                if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
                                    M2C_FIELD(arg0, s32 *, 0x48) = __wrap_malloc(0x4000);
                                }
                                if (var_17 > 0) {
loop_53:
                                    temp_2 = gzread(arg0, M2C_FIELD(arg0, s32 *, 0x48), (var_17 >= 0x4000) ? 0x4000 : ((s64) (var_17 << 0x20) >> 0x20));
                                    var_2 = -1U;
                                    var_17 -= temp_2;
                                    if (temp_2 > 0) {
                                        if (var_17 <= 0) {
                                            goto block_55;
                                        }
                                        goto loop_53;
                                    }
                                } else {
                                    goto block_55;
                                }
                            } else {
block_55:
                                var_2 = M2C_FIELD(arg0, u32 *, 0x14);
                            }
                            /* Duplicate return node #56. Try simplifying control flow for better match */
                            return (s64) var_2;
                        }
                        /* Duplicate return node #56. Try simplifying control flow for better match */
                        return (s64) var_2;
                    }
                    if (arg2 == 0) {
                        var_17 -= M2C_FIELD(arg0, u32 *, 8);
                    }
                    var_2 = -1U;
                    if (var_17 >= 0) {
                        if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
                            temp_2_2 = __wrap_malloc(0x4000);
                            M2C_FIELD(arg0, s32 *, 0x44) = temp_2_2;
                            memset(temp_2_2, 0, 0x4000);
                        }
                        if (var_17 <= 0) {
                            return (s64) M2C_FIELD(arg0, u32 *, 8);
                        }
loop_16:
                        temp_19 = M2C_FIELD(arg0, s32 *, 0x44);
                        temp_18 = (var_17 < 0x4000) ? ((s64) (var_17 << 0x20) >> 0x20) : 0x4000;
                        if (arg0 != NULL) {
                            if (M2C_FIELD(arg0, s8 *, 0x5C) == 0x77) {
                                M2C_FIELD(arg0, s32 *, 0) = temp_19;
                                M2C_FIELD(arg0, s32 *, 4) = (s32) temp_18;
loop_23:
                                if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                                    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
                                        temp_4 = M2C_FIELD(arg0, s32 *, 0x48);
                                        M2C_FIELD(arg0, s32 *, 0xC) = temp_4;
                                        temp_2_3 = fwrite(temp_4, 1, 0x4000, M2C_FIELD(arg0, s32 *, 0x40));
                                        if (temp_2_3 != 0x4000) {
                                            M2C_FIELD(arg0, s32 *, 0x38) = -1;
                                        } else {
                                            M2C_FIELD(arg0, s32 *, 0x10) = temp_2_3;
                                            goto block_29;
                                        }
                                    } else {
block_29:
                                        temp_2_4 = deflate(arg0, 0);
                                        M2C_FIELD(arg0, s32 *, 0x38) = temp_2_4;
                                        if (temp_2_4 == 0) {
                                            goto loop_23;
                                        }
                                    }
                                }
                                M2C_FIELD(arg0, s32 *, 0x4C) = crc32(M2C_FIELD(arg0, s32 *, 0x4C), temp_19, temp_18);
                                var_18 = temp_18 - M2C_FIELD(arg0, s32 *, 4);
                            } else {
                                goto block_20;
                            }
                        } else {
block_20:
                            var_18 = -2;
                        }
                        var_2 = -1U;
                        if (var_18 != 0) {
                            var_17 -= (u64) (var_18 << 0x20) >> 0x20;
                            if (var_17 <= 0) {
                                return (s64) M2C_FIELD(arg0, u32 *, 8);
                            }
                            goto loop_16;
                        }
                        /* Duplicate return node #56. Try simplifying control flow for better match */
                        return (s64) var_2;
                    }
                    /* Duplicate return node #56. Try simplifying control flow for better match */
                    return (s64) var_2;
                }
            }
        }
        return (s64) var_2;
    }
block_47:
    return -1;
}
