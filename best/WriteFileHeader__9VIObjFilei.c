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

M2C_UNK Seek__6VIFilelQ26VIFile10SeekOrigin(s32, s32, M2C_UNK); /* extern */
s32 Tell__6VIFile();                                /* extern */
M2C_UNK VIBufferSwap__FiPUc(M2C_UNK, s32);          /* extern */
M2C_UNK Write__6VIFilePCvi(s32, s32, M2C_UNK);      /* extern */
extern s32 D_011B1FC8;

s32 WriteFileHeader__9VIObjFilei(s32 arg0, s32 arg1) {
    s32 temp_18;
    s32 temp_2;
    s32 var_17;

    var_17 = arg0 + 0xC8;
    temp_2 = Tell__6VIFile();
    if (temp_2 != 0) {
        Seek__6VIFilelQ26VIFile10SeekOrigin(arg0, 0, 1);
    }
    temp_18 = D_011B1FC8;
    if (temp_18 != 1) {
        VIBufferSwap__FiPUc(4, var_17);
        VIBufferSwap__FiPUc(4, arg0 + 0xCC);
        VIBufferSwap__FiPUc(4, arg0 + 0xD0);
        VIBufferSwap__FiPUc(8, arg0 + 0xD8);
        VIBufferSwap__FiPUc(8, arg0 + 0xE0);
    } else {
        var_17 = arg0 + 0xC8;
    }
    Write__6VIFilePCvi(arg0, var_17, 0x20);
    if (temp_18 != 1) {
        VIBufferSwap__FiPUc(4, var_17);
        VIBufferSwap__FiPUc(4, arg0 + 0xCC);
        VIBufferSwap__FiPUc(4, arg0 + 0xD0);
        VIBufferSwap__FiPUc(8, arg0 + 0xD8);
        VIBufferSwap__FiPUc(8, arg0 + 0xE0);
    }
    if (arg1 != 0) {
        Seek__6VIFilelQ26VIFile10SeekOrigin(arg0, temp_2, 1);
    }
    return 0;
}
