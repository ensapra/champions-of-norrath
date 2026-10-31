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

s32 *__errno(void *);                               /* extern */
M2C_UNK check_header(void *);                       /* extern */
s32 crc32(s32, s32, s32);                           /* extern */
u32 fread(s32, M2C_UNK, u32, void *);               /* extern */
s32 getLong(void *);                                /* extern */
s32 inflate(void *, M2C_UNK);                       /* extern */
M2C_UNK inflateReset(void *);                       /* extern */
M2C_UNK memcpy(s32, s32, u32);                      /* extern */

s32 gzread(void *arg0, s32 arg1, u32 arg2) {
    s32 temp_16;
    s32 temp_17;
    s32 temp_20;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 var_19;
    s32 var_21;
    s32 var_2;
    u32 temp_16_2;
    u32 temp_16_3;
    u32 temp_2;
    u32 temp_3_2;
    u32 var_4;

    var_19 = arg1;
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 0x5C) == 0x72) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x38);
            var_2 = -1;
            switch (temp_3) {                       /* irregular */
            case -1:
                return -1;
            default:
                M2C_FIELD(arg0, s32 *, 0xC) = var_19;
                var_21 = var_19;
                M2C_FIELD(arg0, u32 *, 0x10) = arg2;
                if (arg2 != 0) {
loop_19:
                    if (M2C_FIELD(arg0, s32 *, 0x58) == 0) {
                        if ((M2C_FIELD(arg0, u32 *, 4) == 0) && (M2C_FIELD(arg0, s32 *, 0x3C) == 0)) {
                            *__errno(arg0) = 0;
                            temp_2 = fread(M2C_FIELD(arg0, s32 *, 0x44), 1, 0x4000U, M2C_FIELD(arg0, void **, 0x40));
                            M2C_FIELD(arg0, u32 *, 4) = temp_2;
                            if ((temp_2 != 0) || (M2C_FIELD(arg0, s32 *, 0x3C) = 1, ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u16 *, 0xC) & 0x40) == 0))) {
                                M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
                                goto block_35;
                            }
                            M2C_FIELD(arg0, s32 *, 0x38) = -1;
                            goto block_44;
                        }
block_35:
                        temp_2_2 = inflate(arg0, 0);
                        M2C_FIELD(arg0, s32 *, 0x38) = temp_2_2;
                        if (temp_2_2 == 1) {
                            temp_2_3 = crc32(M2C_FIELD(arg0, s32 *, 0x4C), var_19, M2C_FIELD(arg0, s32 *, 0xC) - var_19);
                            var_19 = M2C_FIELD(arg0, s32 *, 0xC);
                            M2C_FIELD(arg0, s32 *, 0x4C) = temp_2_3;
                            if (getLong(arg0) != M2C_FIELD(arg0, s32 *, 0x4C)) {
                                M2C_FIELD(arg0, s32 *, 0x38) = -3;
                            } else {
                                getLong(arg0);
                                check_header(arg0);
                                if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {
                                    temp_16 = M2C_FIELD(arg0, s32 *, 8);
                                    temp_17 = M2C_FIELD(arg0, s32 *, 0x14);
                                    inflateReset(arg0);
                                    M2C_FIELD(arg0, s32 *, 8) = temp_16;
                                    M2C_FIELD(arg0, s32 *, 0x14) = temp_17;
                                    M2C_FIELD(arg0, s32 *, 0x4C) = crc32(0, 0, 0);
                                }
                            }
                        }
                        if ((s64) M2C_FIELD(arg0, s32 *, 0x38) == 0) {
                            if (M2C_FIELD(arg0, u32 *, 0x10) != 0) {
                                goto loop_19;
                            }
                            goto block_44;
                        }
                        goto block_44;
                    }
                    temp_16_2 = M2C_FIELD(arg0, u32 *, 4);
                    var_4 = M2C_FIELD(arg0, u32 *, 0x10);
                    temp_16_3 = (var_4 < temp_16_2) ? var_4 : temp_16_2;
                    if (temp_16_3 != 0) {
                        var_21 = arg1 + temp_16_3;
                        memcpy(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0), temp_16_3);
                        M2C_FIELD(arg0, s32 *, 0xC) = var_21;
                        var_4 = M2C_FIELD(arg0, u32 *, 0x10) - temp_16_3;
                        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + temp_16_3);
                        M2C_FIELD(arg0, u32 *, 0x10) = var_4;
                        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) - temp_16_3);
                    }
                    if (var_4 != 0) {
                        temp_3_2 = M2C_FIELD(arg0, u32 *, 0x10) - fread(var_21, 1, var_4, M2C_FIELD(arg0, void **, 0x40));
                        M2C_FIELD(arg0, u32 *, 0x10) = temp_3_2;
                        var_4 = temp_3_2;
                    }
                    temp_20 = arg2 - var_4;
                    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + temp_20);
                    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + temp_20);
                    if (temp_20 == 0) {
                        M2C_FIELD(arg0, s32 *, 0x3C) = 1;
                    }
                    return temp_20;
                }
block_44:
                M2C_FIELD(arg0, s32 *, 0x4C) = crc32(M2C_FIELD(arg0, s32 *, 0x4C), var_19, M2C_FIELD(arg0, s32 *, 0xC) - var_19);
                var_2 = arg2 - M2C_FIELD(arg0, u32 *, 0x10);
            case -3:
                return var_2;
            case 1:
                return 0;
            }
        } else {
            goto block_4;
        }
    } else {
block_4:
        return -2;
    }
}
