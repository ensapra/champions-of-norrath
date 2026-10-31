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

M2C_UNK func_00129D10(s32, s32);                    /* extern */
extern M2C_UNK Write__6VIFilePCvi;

void func_00129CA8(void *arg1) {
    s32 temp_5;

    temp_5 = M2C_FIELD(arg1, s32 *, 0x80);
    if (M2C_FIELD(arg1, s32 *, 0x1C) >= 3) {
        func_00129D10(*(&Write__6VIFilePCvi + 0x10 + (temp_5 * 4)), temp_5);
        M2C_FIELD(arg1, s32 *, 0xAC) = 0;
    }
}
