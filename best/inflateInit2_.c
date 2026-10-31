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

M2C_UNK inflate_blocks_free(s32, void *);           /* extern */
s32 inflate_blocks_new(void *, M2C_UNK *, s32);     /* extern */
M2C_UNK inflate_blocks_reset(s32, void *, M2C_UNK, void *); /* extern */
void *zcalloc(s32, M2C_UNK, M2C_UNK);               /* extern */
M2C_UNK zcfree(s32, void *);                        /* extern */
extern M2C_UNK adler32;

s32 inflateInit2_(void *arg0, s32 arg1, s8 *arg2, s32 arg3) {
    M2C_UNK (*temp_2_4)(s32, void *);
    M2C_UNK *var_5;
    s32 temp_2_3;
    s32 temp_4;
    s32 var_17;
    s32 var_2;
    void *(*var_3)(s32, M2C_UNK, M2C_UNK);
    void *temp_2;
    void *temp_2_2;
    void *temp_5;
    void *temp_7;

    var_17 = arg1;
    if (arg2 != NULL) {
        var_2 = -6;
        if (*arg2 == 0x31) {
            if (arg3 != 0x38) {
                goto block_3;
            }
            var_2 = -2;
            if (arg0 != NULL) {
                var_3 = M2C_FIELD(arg0, void *(**)(s32, M2C_UNK, M2C_UNK), 0x20);
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
                if (var_3 == NULL) {
                    M2C_FIELD(arg0, s32 *, 0x28) = 0;
                    M2C_FIELD(arg0, void *(**)(s32, M2C_UNK, M2C_UNK), 0x20) = zcalloc;
                    var_3 = zcalloc;
                }
                if (M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24) == NULL) {
                    M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24) = zcfree;
                }
                temp_2 = var_3(M2C_FIELD(arg0, s32 *, 0x28), 1, 0x18);
                var_2 = -4;
                M2C_FIELD(arg0, void **, 0x1C) = temp_2;
                if (temp_2 != NULL) {
                    M2C_FIELD(temp_2, s32 *, 0x14) = 0;
                    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
                    if (var_17 < 0) {
                        var_17 = -var_17;
                        M2C_FIELD(temp_2, s32 *, 0xC) = 1;
                    }
                    if ((u32) (var_17 - 8) < 8U) {
                        temp_2_2 = M2C_FIELD(arg0, void **, 0x1C);
                        M2C_FIELD(temp_2_2, s32 *, 0x10) = var_17;
                        if (M2C_FIELD(temp_2_2, s32 *, 0xC) == 0) {
                            var_5 = &adler32;
                        } else {
                            var_5 = NULL;
                        }
                        temp_2_3 = inflate_blocks_new(arg0, var_5, 1 << var_17);
                        temp_7 = M2C_FIELD(arg0, void **, 0x1C);
                        M2C_FIELD(temp_7, s32 *, 0x14) = temp_2_3;
                        if (temp_2_3 == 0) {
                            var_2 = -4;
                            if ((arg0 != NULL) && (temp_7 != NULL)) {
                                temp_2_4 = M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24);
                                if (temp_2_4 == NULL) {
                                    return -4;
                                }
                                temp_2_4(M2C_FIELD(arg0, s32 *, 0x28), temp_7);
                                M2C_FIELD(arg0, void **, 0x1C) = NULL;
                                return -4;
                            }
                            /* Duplicate return node #36. Try simplifying control flow for better match */
                            return var_2;
                        }
                        var_2 = 0;
                        if (arg0 != NULL) {
                            if (temp_7 != NULL) {
                                M2C_FIELD(arg0, s32 *, 0x14) = 0;
                                M2C_FIELD(arg0, s32 *, 8) = 0;
                                M2C_FIELD(arg0, s32 *, 0x18) = 0;
                                M2C_FIELD(temp_7, s32 *, 0) = (s32) ((M2C_FIELD(temp_7, s32 *, 0xC) == 0) ? 0 : 7);
                                inflate_blocks_reset(temp_2_3, arg0, 0, temp_7);
                            }
                            var_2 = 0;
                        }
                        /* Duplicate return node #36. Try simplifying control flow for better match */
                        return var_2;
                    }
                    temp_5 = M2C_FIELD(arg0, void **, 0x1C);
                    var_2 = -2;
                    if (temp_5 != NULL) {
                        if (M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24) == NULL) {
                            return -2;
                        }
                        temp_4 = M2C_FIELD(temp_5, s32 *, 0x14);
                        if (temp_4 != 0) {
                            inflate_blocks_free(temp_4, arg0);
                        }
                        M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, void **, 0x1C));
                        M2C_FIELD(arg0, void **, 0x1C) = NULL;
                        return -2;
                    }
                    /* Duplicate return node #36. Try simplifying control flow for better match */
                    return var_2;
                }
                /* Duplicate return node #36. Try simplifying control flow for better match */
                return var_2;
            }
            /* Duplicate return node #36. Try simplifying control flow for better match */
            return var_2;
        }
        return var_2;
    }
block_3:
    return -6;
}
