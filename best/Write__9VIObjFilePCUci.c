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

M2C_UNK Write__6VIFilePCvi();                       /* extern */

s32 Write__9VIObjFilePCUci(void *arg0, s32 arg2) {
    void *temp_3;

    if (M2C_FIELD(arg0, s32 *, 0x244) != 0) {
        Write__6VIFilePCvi();
        temp_3 = arg0 + ((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0xF0);
        M2C_FIELD(temp_3, s32 *, 4) = (s32) (M2C_FIELD(temp_3, s32 *, 4) + arg2);
        return 0;
    }
    return -1;
}
