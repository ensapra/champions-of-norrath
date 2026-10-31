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

void *func_001903E0(s32, s32);                      /* extern */
extern M2C_UNK xmlParseTryOrFinish;

u32 func_001909D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_3;
    u8 temp_2_2;
    u8 temp_3;
    u8 temp_3_2;
    void *temp_2;

    if (M2C_FIELD((&xmlParseTryOrFinish + 0xA38 + ((arg1 * 0x1C) + (arg0 * 0x70))), s32 *, 0x10) != 0) {
        temp_2 = func_001903E0(arg0, arg0);
        temp_3_2 = M2C_FIELD(temp_2, u8 *, 0x72);
        if ((temp_3_2 == 1) && (M2C_FIELD(temp_2, u8 *, 0x71) != 2)) {
            if (arg2 != 2) {
                if (arg2 < 3) {
                    if (arg2 != temp_3_2) {
                        return 0U;
                    }
                    temp_3 = M2C_FIELD(temp_2, u8 *, 0x65);
                    if (temp_3 != 0xF3) {
                        return temp_3 >> 4;
                    }
                    goto block_21;
                }
                switch (arg2) {                     /* irregular */
                case 3:
                    if (M2C_FIELD(temp_2, u8 *, 0x64) != temp_3_2) {
                        return (u32) M2C_FIELD(temp_2, u8 *, 0x69);
                    }
                    /* Duplicate return node #22. Try simplifying control flow for better match */
                    return 0U;
                case 4:
                    if (M2C_FIELD(temp_2, u8 *, 0x64) != temp_3_2) {
                        temp_2_2 = M2C_FIELD(temp_2, u8 *, 0x68);
                        if (arg3 == -1) {
                            return (u32) temp_2_2;
                        }
                        var_3 = arg3 * 2;
                        if (arg3 < (s32) temp_2_2) {
                            goto block_20;
                        }
                        goto block_21;
                    }
                    goto block_21;
                default:
                    return 0U;
                }
            } else {
                if (M2C_FIELD(temp_2, u8 *, 0x64) != temp_3_2) {
                    var_3 = M2C_FIELD(temp_2, u8 *, 0x69) * 2;
block_20:
                    return (u32) M2C_FIELD((temp_2 + var_3), u16 *, 0x50);
                }
                /* Duplicate return node #22. Try simplifying control flow for better match */
                return 0U;
            }
        } else {
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return 0U;
        }
    } else {
block_21:
        return 0U;
    }
}
