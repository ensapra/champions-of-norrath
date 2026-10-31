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

M2C_UNK Seek__6VIFilelQ26VIFile10SeekOrigin(void *, s32, M2C_UNK); /* extern */
s32 Tell__6VIFile();                                /* extern */
M2C_UNK VIBufferSwap__FiPUc(M2C_UNK, void *);       /* extern */
M2C_UNK Write__6VIFilePCvi(void *, void *, M2C_UNK); /* extern */
extern s32 D_011B1FC8;

s32 WriteEnd__9VIObjFileRUi(void *arg0, s32 *arg1) {
    s32 temp_17;
    s32 temp_20;
    s32 temp_2;
    s32 temp_3;
    void *temp_2_2;
    void *temp_3_2;
    void *temp_4;

    if (M2C_FIELD(arg0, s32 *, 0x23C) != 0) {
        temp_20 = Tell__6VIFile();
        Seek__6VIFilelQ26VIFile10SeekOrigin(arg0, M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + arg0), s64 *, 0x100) + 4, 1);
        temp_17 = D_011B1FC8;
        *arg1 = M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + arg0), s32 *, 0xF4) + 0xC;
        if (temp_17 != 1) {
            VIBufferSwap__FiPUc(4, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF4);
            VIBufferSwap__FiPUc(4, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF8);
        }
        Write__6VIFilePCvi(arg0, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF4, 8);
        if (temp_17 != 1) {
            VIBufferSwap__FiPUc(4, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF4);
            VIBufferSwap__FiPUc(4, arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF8);
        }
        Seek__6VIFilelQ26VIFile10SeekOrigin(arg0, temp_20, 1);
        temp_3 = M2C_FIELD(arg0, s32 *, 0xE8) - 1;
        M2C_FIELD(arg0, s32 *, 0xE8) = temp_3;
        if (temp_3 == -1) {
            M2C_FIELD(arg0, s32 *, 0x23C) = 0;
            M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) + 1);
        } else {
            temp_2 = temp_3 << 5;
            temp_4 = arg0 + (temp_2 + 0xF0);
            M2C_FIELD(temp_4, s32 *, 4) = (s32) (M2C_FIELD(temp_4, s32 *, 4) + M2C_FIELD((temp_2 + arg0), s32 *, 0x114));
            temp_2_2 = arg0 + ((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF0);
            M2C_FIELD(temp_2_2, s32 *, 4) = (s32) (M2C_FIELD(temp_2_2, s32 *, 4) + 0xC);
            temp_3_2 = arg0 + ((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF0);
            M2C_FIELD(temp_3_2, s32 *, 8) = (s32) (M2C_FIELD(temp_3_2, s32 *, 8) + 1);
        }
        M2C_FIELD(arg0, s32 *, 0x244) = 0;
        return 0;
    }
    return -1;
}
