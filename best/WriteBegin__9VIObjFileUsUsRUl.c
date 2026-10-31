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

M2C_UNK Seek__6VIFilelQ26VIFile10SeekOrigin(void *, M2C_UNK, M2C_UNK); /* extern */
s64 Tell__6VIFile(void *, s32);                     /* extern */
M2C_UNK VIBufferSwap__FiPUc(M2C_UNK, void *);       /* extern */
M2C_UNK Write__6VIFilePCvi(void *, void *, M2C_UNK); /* extern */
extern s32 D_011B1FC8;

s32 WriteBegin__9VIObjFileUsUsRUl(void *arg0, s32 arg1, s32 arg2, s64 *arg3) {
    s32 temp_18;
    s32 temp_4;
    s32 temp_5;
    s32 var_3;
    s64 temp_2_3;
    void *temp_2;
    void *temp_2_2;

    if (M2C_FIELD(arg0, s32 *, 0x234) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x240) == 0) {
            temp_5 = M2C_FIELD(arg0, s32 *, 0xE8);
            if ((temp_5 != 9) && ((temp_5 == -1) || (temp_2 = arg0 + ((temp_5 << 5) + 0xF0), (M2C_FIELD(temp_2, s32 *, 4) == 0)) || (M2C_FIELD(temp_2, s32 *, 8) != 0))) {
                var_3 = temp_5 + 1;
                if ((u32) (M2C_FIELD(arg0, s32 *, 0xC0) - 1) >= 2U) {
                    Seek__6VIFilelQ26VIFile10SeekOrigin(arg0, 0, 2);
                    var_3 = M2C_FIELD(arg0, s32 *, 0xE8) + 1;
                }
                M2C_FIELD(arg0, s32 *, 0xE8) = var_3;
                temp_2_2 = arg0 + ((var_3 << 5) + 0xF0);
                M2C_FIELD(temp_2_2, s32 *, 4) = 0;
                M2C_FIELD(temp_2_2, s16 *, 2) = (s16) (arg2 & 0xFFFF);
                M2C_FIELD(temp_2_2, s16 *, 0) = (s16) (arg1 & 0xFFFF);
                M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + arg0), s32 *, 0xF8) = 0;
                temp_2_3 = Tell__6VIFile(arg0, M2C_FIELD(arg0, s32 *, 0xE8));
                temp_18 = D_011B1FC8;
                temp_4 = M2C_FIELD(arg0, s32 *, 0xE8) << 5;
                M2C_FIELD((temp_4 + arg0), s64 *, 0x100) = temp_2_3;
                *arg3 = temp_2_3;
                if (temp_18 != 1) {
                    VIBufferSwap__FiPUc(2, arg0 + temp_4 + 0xF0);
                    VIBufferSwap__FiPUc(2, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF2);
                    VIBufferSwap__FiPUc(4, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF4);
                    VIBufferSwap__FiPUc(4, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF8);
                }
                Write__6VIFilePCvi(arg0, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF0, 0xC);
                if (temp_18 != 1) {
                    VIBufferSwap__FiPUc(2, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF0);
                    VIBufferSwap__FiPUc(2, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF2);
                    VIBufferSwap__FiPUc(4, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF4);
                    VIBufferSwap__FiPUc(4, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF8);
                }
                M2C_FIELD(arg0, s32 *, 0x244) = 1;
                if (M2C_FIELD(arg0, s32 *, 0xE8) == 0) {
                    M2C_FIELD(arg0, s32 *, 0x24C) = 1;
                }
                M2C_FIELD(arg0, s32 *, 0x23C) = 1;
                return 0;
            }
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
