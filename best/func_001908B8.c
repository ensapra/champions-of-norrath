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

u8 func_001908B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 temp_2_2;
    u8 temp_3;
    void *temp_2;

    if (M2C_FIELD((&xmlParseTryOrFinish + 0xA38 + ((arg1 * 0x1C) + (arg0 * 0x70))), s32 *, 0x10) != 0) {
        temp_2 = func_001903E0(arg0, arg0);
        temp_3 = M2C_FIELD(temp_2, u8 *, 0x72);
        if ((temp_3 == 1) && ((u8) M2C_FIELD(temp_2, u8 *, 0x64) >= 2U)) {
            temp_2_2 = M2C_FIELD(temp_2, u8 *, 0x6B);
            if (arg2 == -1) {
                return temp_2_2;
            }
            if (arg2 < (s32) temp_2_2) {
                if (arg3 == 0) {
                    return M2C_FIELD((temp_2 + (arg2 * 4)), u8 *, 0x41);
                }
                if (arg3 <= 0) {
                    if (arg3 != -1) {
                        return 0U;
                    }
                    return M2C_FIELD((temp_2 + (arg2 * 4)), u8 *, 0x40);
                }
                if (arg3 != temp_3) {
                    if (arg3 != 2) {
                        return 0U;
                    }
                    return M2C_FIELD((temp_2 + (arg2 * 4)), u8 *, 0x43);
                }
                return M2C_FIELD((temp_2 + (arg2 * 4)), u8 *, 0x42);
            }
            goto block_19;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return 0U;
    }
block_19:
    return 0U;
}
