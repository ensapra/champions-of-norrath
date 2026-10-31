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

s32 BufferedWrite__6VIFilePCvi();                   /* extern */
s32 MemorySegmWrite__6VIFilePCvi();                 /* extern */
s32 MemoryWrite__6VIFilePCvi();                     /* extern */

s32 Write__6VIFilePCvi(void *arg0, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0) >= 0) {
        return ((BufferedWrite__6VIFilePCvi() ^ arg2) == 0) ? 0 : -1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        return MemoryWrite__6VIFilePCvi();
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        return MemorySegmWrite__6VIFilePCvi();
    }
    return -1;
}
