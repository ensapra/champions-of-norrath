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

M2C_UNK Close__9VIObjFile();                        /* extern */
s32 Open__6VIFilePCci(void *, s32, M2C_UNK);        /* extern */
s32 PostOpen__9VIObjFile(void *);                   /* extern */

s32 Open__9VIObjFilePCcQ29VIObjFile8FileMode(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK var_6;

    if (M2C_FIELD(arg0, s32 *, 0x230) != 0) {
        Close__9VIObjFile();
    }
    var_6 = 0x21;
    if (arg2 != 0) {
        var_6 = ((arg2 ^ 1) != 0) ? 0x2A : 0x32;
    }
    if (Open__6VIFilePCci(arg0, arg1, var_6) < 0) {
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0xC0) = arg2;
    M2C_FIELD(arg0, s32 *, 0x230) = 1;
    return PostOpen__9VIObjFile(arg0);
}
