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

M2C_UNK memcpy(s32, s64, s64);                      /* extern */

s32 MemoryWrite__6VIFilePCvi(void *arg0, s64 arg2) {
    s64 temp_17;
    s64 temp_3;
    s64 temp_3_2;
    s64 temp_4;
    s64 temp_7;

    M2C_FIELD(arg0, s32 *, 8) = 0;
    temp_7 = M2C_FIELD(arg0, s64 *, 0x10);
    temp_3 = M2C_FIELD(arg0, s64 *, 0x20) - temp_7;
    temp_17 = (s64) (((temp_3 < arg2) ? temp_3 : arg2) << 0x20) >> 0x20;
    if (temp_17 > 0) {
        memcpy(M2C_FIELD(arg0, s32 *, 0x30) + (s32) M2C_FIELD(arg0, s64 *, 0x10), temp_17, temp_7);
    }
    temp_4 = M2C_FIELD(arg0, s64 *, 0x28);
    temp_3_2 = temp_17 + M2C_FIELD(arg0, s64 *, 0x10);
    M2C_FIELD(arg0, s64 *, 0x10) = temp_3_2;
    M2C_FIELD(arg0, s64 *, 0x28) = (s64) ((temp_3_2 >= temp_4) ? temp_3_2 : temp_4);
    return ((temp_17 ^ arg2) == 0) ? 0 : -1;
}
