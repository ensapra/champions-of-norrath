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

M2C_UNK BlitEx__4VIUI9VIUITexIdG8VIVect2I16VIAlphaBlendModefUi(s32, s32, s32 *, s32, M2C_UNK, f32); /* extern */
M2C_UNK BlitEx__4VIUI9VIUITexIdG8VIVect2IT216VIAlphaBlendModefUi(s32, s32, s32 *, s32 *, s32, M2C_UNK, s32 *, s32 *, f32); /* extern */
M2C_UNK BlitVert__4VIUIG8VIVect2I9VIUITexIdi16VIAlphaBlendModefUi(s32, s32 *, s32, s32, s32, M2C_UNK, f32); /* extern */
void *GetUITexture__F9VIUITexId(s32);               /* extern */

s32 BlitVertBar__4VIUIG8VIVect2I9VIUITexIdN22i16VIAlphaBlendModef(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 fparg0) {
    s32 sp0;
    s32 sp4;
    s32 sp10;
    s32 sp14;
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 sp40;
    s32 sp44;
    s32 sp50;
    s32 sp54;
    s32 sp60;
    s32 sp64;
    s32 sp70;
    s32 temp_2;
    s32 var_2;
    void *temp_16;
    void *temp_17;
    void *temp_18;

    sp70 = arg3;
    sp0 = M2C_FIELD(arg1, s32 *, 0);
    sp4 = M2C_FIELD(arg1, s32 *, 4);
    temp_17 = GetUITexture__F9VIUITexId(arg2);
    temp_18 = GetUITexture__F9VIUITexId(sp70);
    temp_16 = GetUITexture__F9VIUITexId(arg4);
    if (temp_17 != NULL) {
        var_2 = -1;
        if (temp_18 != NULL) {
            if (temp_16 == NULL) {
                goto block_3;
            }
            sp10 = sp0;
            sp14 = sp4;
            BlitEx__4VIUI9VIUITexIdG8VIVect2I16VIAlphaBlendModefUi(arg0, arg2, &sp10, arg6, 0, fparg0);
            sp4 += M2C_FIELD(temp_17, s32 *, 0x14);
            if (M2C_FIELD(temp_16, s32 *, 4) == 1) {
                sp20 = sp0;
                sp24 = sp4;
                BlitVert__4VIUIG8VIVect2I9VIUITexIdi16VIAlphaBlendModefUi(arg0, &sp20, arg4, (arg5 - M2C_FIELD(temp_17, s32 *, 0x14)) - M2C_FIELD(temp_18, s32 *, 0x14), arg6, 0, fparg0);
            } else {
                sp30 = M2C_FIELD(temp_16, s32 *, 0x10);
                sp34 = (arg5 - M2C_FIELD(temp_17, s32 *, 0x14)) - M2C_FIELD(temp_18, s32 *, 0x14);
                sp40 = sp0;
                sp44 = sp4;
                sp50 = sp30;
                sp54 = sp34;
                BlitEx__4VIUI9VIUITexIdG8VIVect2IT216VIAlphaBlendModefUi(arg0, M2C_FIELD(temp_16, s32 *, 0), &sp40, &sp50, arg6, 0, &sp50, &sp30, fparg0);
            }
            temp_2 = (M2C_FIELD(arg1, s32 *, 4) + arg5) - M2C_FIELD(temp_18, s32 *, 0x14);
            sp4 = temp_2;
            sp60 = sp0;
            sp64 = temp_2;
            BlitEx__4VIUI9VIUITexIdG8VIVect2I16VIAlphaBlendModefUi(arg0, sp70, &sp60, arg6, 0, fparg0);
            var_2 = 0;
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_2;
        }
        return var_2;
    }
block_3:
    return -1;
}
