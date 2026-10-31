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
s32 Open__6VIFileiPQ26VIFile7MemSegmil(void *, s32, s32, M2C_UNK, s32); /* extern */
s32 PostOpen__9VIObjFile(void *);                   /* extern */

s32 Open__9VIObjFileiPQ26VIFile7MemSegmlQ29VIObjFile8FileMode(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK var_7;

    if (M2C_FIELD(arg0, s32 *, 0x230) != 0) {
        Close__9VIObjFile();
    }
    var_7 = 0x21;
    if (arg4 != 0) {
        var_7 = ((arg4 ^ 1) != 0) ? 0x2A : 0x32;
    }
    if (Open__6VIFileiPQ26VIFile7MemSegmil(arg0, arg1, arg2, var_7, arg3) < 0) {
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0xC0) = arg4;
    M2C_FIELD(arg0, s32 *, 0x230) = 1;
    return PostOpen__9VIObjFile(arg0);
}
