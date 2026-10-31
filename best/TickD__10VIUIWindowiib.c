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

M2C_UNK BlitEx__4VIUI9VIUITexIdG8VIVect2I16VIAlphaBlendModefUi(void *, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, f32); /* extern */
s32 GetHeight__6VIFontP8VIRasterP12VIDictionary(void *, s32, s32, s32, s32); /* extern */
f32 TickPulse__C10VIUIWindow(void *, s32, s32, s32); /* extern */

void TickD__10VIUIWindowiib(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp20;
    s32 sp24;
    f32 var_f0;
    s32 temp_5;
    s32 temp_6;
    s32 temp_7;
    void *temp_2;

    temp_2 = M2C_FIELD(arg0, void **, 0);
    var_f0 = 1.0f;
    temp_6 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_7 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_5 = (M2C_FIELD(arg0, s32 *, 0x10) - ((s32) M2C_FIELD(arg0, s32 *, 0x18) >> 1)) + temp_7 + ((GetHeight__6VIFontP8VIRasterP12VIDictionary(temp_2 + 0x38, M2C_FIELD(temp_2, s32 *, 0x48), M2C_FIELD(temp_2, s32 *, 0x50), 0, 0) - 4) * arg2);
    sp20 = ((temp_6 - ((s32) M2C_FIELD(arg0, s32 *, 0x14) >> 1)) + arg1) - 8;
    sp24 = temp_5;
    if (arg3 != 0) {
        var_f0 = TickPulse__C10VIUIWindow(arg0, temp_5, temp_6 - 8, temp_7);
    }
    BlitEx__4VIUI9VIUITexIdG8VIVect2I16VIAlphaBlendModefUi(M2C_FIELD(arg0, void **, 0), 0x57, &sp20, 3, 0, var_f0);
}
