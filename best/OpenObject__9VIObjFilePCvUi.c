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
s32 Open__6VIFilePCvlil(void *, s32, u64, M2C_UNK, u64); /* extern */

s32 OpenObject__9VIObjFilePCvUi(void *arg0, s32 arg1, s64 arg2) {
    u64 temp_6;

    if (M2C_FIELD(arg0, s32 *, 0x230) != 0) {
        Close__9VIObjFile();
    }
    temp_6 = (u64) (arg2 << 0x20) >> 0x20;
    if (Open__6VIFilePCvlil(arg0, arg1, temp_6, 0x21, temp_6) < 0) {
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = 0x4F424A46;
    M2C_FIELD(arg0, s64 *, 0xD8) = 0x20;
    M2C_FIELD(arg0, s64 *, 0xE0) = -1;
    M2C_FIELD(arg0, s32 *, 0x238) = 1;
    M2C_FIELD(arg0, s32 *, 0x24C) = 0;
    M2C_FIELD(arg0, s32 *, 0x230) = 1;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    M2C_FIELD(arg0, s32 *, 0x248) = 0;
    M2C_FIELD(arg0, s32 *, 0x244) = 0;
    return 0;
}
