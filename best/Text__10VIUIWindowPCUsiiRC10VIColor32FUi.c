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

s32 GetHeight__6VIFontP8VIRasterP12VIDictionary(void *, s32, s32); /* extern */
M2C_UNK TextBox__10VIUIWindowPCUsiiiiRC10VIColor32FUi(void *, s32, s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */

void Text__10VIUIWindowPCUsiiRC10VIColor32FUi(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp10;
    s32 sp14;
    f32 sp2C;
    f32 temp_f2;
    s32 temp_12;
    s32 temp_3;
    void *temp_2;

    sp10 = 0;
    temp_2 = M2C_FIELD(arg0, void **, 0);
    sp14 = 0;
    temp_12 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_f2 = 1.0f - M2C_FIELD(arg0, f32 *, 0x28);
    temp_3 = (M2C_FIELD(arg0, s32 *, 0x10) - ((s32) M2C_FIELD(arg0, s32 *, 0x18) >> 1)) + M2C_FIELD(arg0, s32 *, 0x1C) + ((GetHeight__6VIFontP8VIRasterP12VIDictionary(temp_2 + 0x38, M2C_FIELD(temp_2, s32 *, 0x48), M2C_FIELD(temp_2, s32 *, 0x50)) - 4) * arg3) + 5;
    sp10 = temp_12 - 8;
    sp14 = temp_3;
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s3) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($s3) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($s3) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($s3) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x27($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x20($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x2f($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x28($sp) */);
    sp2C *= 1.0f - (temp_f2 * temp_f2);
    TextBox__10VIUIWindowPCUsiiiiRC10VIColor32FUi(arg0, arg1, arg2, arg3, 0x280, 1, arg4, arg5, arg2 + (temp_12 - ((s32) M2C_FIELD(arg0, s32 *, 0x14) >> 1)), temp_3);
}
