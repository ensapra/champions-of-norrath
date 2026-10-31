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

M2C_UNK BlitEx__4VIUI9VIUITexIdG8VIVect2I16VIAlphaBlendModefUi(s32, s32, s32 *, s32, s32, f32); /* extern */
M2C_UNK BlitHorz__4VIUIG8VIVect2I9VIUITexIdi16VIAlphaBlendModefUi(s32 *, s32, s32, s32); /* extern */
void *GetUITexture__F9VIUITexId(s32);               /* extern */

s32 BlitStuddedHorz__4VIUIG8VIVect2I9VIUITexIdT2ii16VIAlphaBlendModefUi(s32 arg0, void *arg1, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 fparg0) {
    s32 sp0;
    s32 sp4;
    s32 sp10;
    s32 sp14;
    s32 sp20;
    s32 sp24;
    s32 temp_12;
    s32 temp_21;
    s32 temp_2_2;
    s32 temp_3;
    s32 var_16;
    s32 var_2;
    void *temp_2;

    var_2 = 0;
    temp_12 = M2C_FIELD(arg1, s32 *, 4);
    temp_3 = M2C_FIELD(arg1, s32 *, 0);
    sp4 = temp_12;
    sp0 = temp_3;
    if (arg4 > 0) {
        sp10 = temp_3;
        sp14 = temp_12;
        BlitHorz__4VIUIG8VIVect2I9VIUITexIdi16VIAlphaBlendModefUi(&sp10, arg4, arg6, arg7);
        temp_2 = GetUITexture__F9VIUITexId(arg3);
        var_2 = -1;
        if (temp_2 != NULL) {
            temp_21 = (arg4 / (s32) (arg5 + 1)) - ((s32) M2C_FIELD(temp_2, s32 *, 0x10) / 2);
            if (arg5 > 0) {
                var_16 = arg5;
                do {
                    var_16 -= 1;
                    temp_2_2 = sp0 + temp_21;
                    sp0 = temp_2_2;
                    sp20 = temp_2_2;
                    sp24 = sp4;
                    BlitEx__4VIUI9VIUITexIdG8VIVect2I16VIAlphaBlendModefUi(arg0, arg3, &sp20, arg6, arg7, fparg0);
                } while (var_16 != 0);
            }
            var_2 = 0;
        }
    }
    return var_2;
}
