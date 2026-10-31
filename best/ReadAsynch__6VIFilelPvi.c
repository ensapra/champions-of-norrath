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

s32 BufferedRead__6VIFilePvi(void *, s32, s32);     /* extern */
s32 CDRead__6VIFileUiUiPvP10sceCdRMode(void *, s32, s32, s32, void *); /* extern */
s32 CDSync__6VIFilei(M2C_UNK);                      /* extern */
s32 MemoryRead__6VIFilePvi(void *, s32, s32);       /* extern */
s32 MemorySeek__6VIFilelQ26VIFile10SeekOrigin(M2C_UNK); /* extern */
s32 MemorySegmRead__6VIFilePvi(void *, s32, s32);   /* extern */

s32 ReadAsynch__6VIFilelPvi(void *arg0, s64 arg1, s32 arg2, s32 arg3) {
    s32 var_2;
    s32 var_3;

    if (M2C_FIELD(arg0, s32 *, 0) >= 0) {
        var_2 = -1;
        if (!(arg1 & 0x7FF) && !(arg3 & 0x7FF) && !(arg2 & 0xF)) {
            var_2 = -1;
            if (CDSync__6VIFilei(0) == 0) {
                return (CDRead__6VIFileUiUiPvP10sceCdRMode(arg0, ((s64) (((arg1 < 0) ? (arg1 + 0x7FF) : arg1) << 0x15) >> 0x20) + M2C_FIELD(arg0, s32 *, 0x48), (s32) ((arg3 < 0) ? (arg3 + 0x7FF) : arg3) >> 0xB, arg2, arg0 + 0x6C) != 0) ? 0 : -1;
            }
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_2;
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        return -1;
    }
    var_2 = -1;
    if (MemorySeek__6VIFilelQ26VIFile10SeekOrigin(1) >= 0) {
        if (M2C_FIELD(arg0, s32 *, 0) >= 0) {
            var_3 = ((BufferedRead__6VIFilePvi(arg0, arg2, arg3) ^ arg3) == 0) ? 0 : -1;
        } else if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
            var_3 = MemoryRead__6VIFilePvi(arg0, arg2, arg3);
        } else if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
            var_3 = MemorySegmRead__6VIFilePvi(arg0, arg2, arg3);
        } else {
            var_3 = -1;
        }
        var_2 = (var_3 >= 0) ? 0 : -1;
    }
    return var_2;
}
