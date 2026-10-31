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

s32 GetHeight__6VIFontP8VIRasterP12VIDictionary(void *, s32, s32, s32, s32); /* extern */

void *RowCenter__10VIUIWindowi(void *arg0, void *arg1, s32 arg2) {
    s32 temp_3;
    void *temp_2;

    temp_2 = M2C_FIELD(arg1, void **, 0);
    temp_3 = (M2C_FIELD(arg1, s32 *, 0x10) - ((s32) M2C_FIELD(arg1, s32 *, 0x18) >> 1)) + M2C_FIELD(arg1, s32 *, 0x1C) + ((GetHeight__6VIFontP8VIRasterP12VIDictionary(temp_2 + 0x38, M2C_FIELD(temp_2, s32 *, 0x48), M2C_FIELD(temp_2, s32 *, 0x50), 0, 0) - 4) * arg2);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0xC) - 8);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_3 + 5);
    return arg0;
}
