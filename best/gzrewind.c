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

s32 crc32(M2C_UNK, M2C_UNK, M2C_UNK);               /* extern */
s32 fseek(s32, s64, M2C_UNK);                       /* extern */
M2C_UNK inflateReset(void *);                       /* extern */
M2C_UNK rewind(s32);                                /* extern */

s32 gzrewind(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 0x5C) == 0x72) {
            M2C_FIELD(arg0, s32 *, 0x38) = 0;
            M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
            M2C_FIELD(arg0, s32 *, 0x3C) = 0;
            M2C_FIELD(arg0, s32 *, 4) = 0;
            M2C_FIELD(arg0, s32 *, 0x4C) = crc32(0, 0, 0);
            if (M2C_FIELD(arg0, s64 *, 0x60) == 0) {
                rewind(M2C_FIELD(arg0, s32 *, 0x40));
                return 0;
            }
            inflateReset(arg0);
            return fseek(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s64 *, 0x60), 0);
        }
        goto block_4;
    }
block_4:
    return -1;
}
