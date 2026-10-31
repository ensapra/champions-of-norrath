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

M2C_UNK BlitBar__4VIUIPCcG10VIColor32FG8VIVect2I9VIUITexIdT4i16VIAlphaBlendModefUii(s32, M2C_UNK *, f32 *, s32 *, s32, s32, s16, M2C_UNK, f32, s32, s32); /* extern */
M2C_UNK BlitEx__4VIUI9VIUITexIdG8VIVect2I16VIAlphaBlendModefUi(s32, s32, s32 *, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK BlitFillFrame__4VIUIG8VIVect2IT1G14VIUIFrameParam9VIUITexId16VIAlphaBlendModefUc(s32, s32 *, s32 *, M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK BlitHorz__4VIUIG8VIVect2I9VIUITexIdi16VIAlphaBlendModefUi(s32, s32 *, s32, s16, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK BlitRect__4VIUI9VIUITexIdG8VIVect2IT216VIAlphaBlendModef(s32, s32, s32 *, s32 *, M2C_UNK, s16, s16, f32); /* extern */
M2C_UNK BlitVert__4VIUIG8VIVect2I9VIUITexIdi16VIAlphaBlendModefUi(s32, s32 *, s32, s16, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK Blit__4VIUIiG8VIVect2I16VIAlphaBlendModefUi(s32, s32, s32 *, M2C_UNK, M2C_UNK, s32 *, M2C_UNK); /* extern */
M2C_UNK FillRectangle__11VIGUIObjectPC8VIVect2IPC10VIColor32F16VIAlphaBlendMode(void *, s32 *, void *, M2C_UNK, s32, s32, s32 *, s32 *, f32); /* extern */
s32 GetAppPtr__5VIWnd(s32);                         /* extern */
extern M2C_UNK D_0118E860;
extern M2C_UNK D_011C6590;

void Render__11VIGUIObjectf(void *arg0) {
    s32 sp10;
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 sp40;
    s32 sp44;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp70;
    s32 sp74;
    s32 sp80;
    s32 sp84;
    s32 sp90;
    s32 sp94;
    s32 spA0;
    s32 spA4;
    M2C_UNK spF0;
    s32 sp130;
    s32 sp134;
    s32 sp138;
    s32 sp13C;
    s32 sp140;
    s32 sp144;
    s32 sp150;
    s32 sp154;
    s32 sp160;
    s32 sp164;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    s16 temp_10;
    s16 temp_16;
    s16 temp_24;
    s16 temp_2_3;
    s16 temp_4;
    s16 temp_9;
    s16 var_2_2;
    s16 var_3;
    s32 temp_12;
    s32 temp_13;
    s32 temp_14;
    s32 temp_15;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 temp_3_4;
    s32 temp_7;
    s32 temp_8;
    s32 temp_9_2;
    s32 var_5;
    u16 var_2;

    temp_2 = GetAppPtr__5VIWnd(M2C_FIELD(arg0, s32 *, 0x24));
    if (temp_2 != 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0x50);
        temp_7 = M2C_FIELD(arg0, s32 *, 0x64);
        sp10 = temp_3;
        if (temp_7 != 0) {
            temp_2_2 = M2C_FIELD(arg0, s32 *, 0x54);
            sp10 = (temp_2_2 != 0) ? temp_2_2 : temp_3;
        }
        temp_3_2 = M2C_FIELD(arg0, s32 *, 0x40);
        if (temp_3_2 != 2) {
            var_f12 = M2C_FIELD(arg0, f32 *, 0x70);
            if (temp_3_2 != 3) {

            } else {
                temp_f0 = M2C_FIELD(arg0, f32 *, 0x74);
                if (var_f12 != temp_f0) {
                    if (var_f12 < temp_f0) {
                        var_f0 = var_f12 + M2C_FIELD(arg0, f32 *, 0x80);
                    } else {
                        goto block_17;
                    }
                    goto block_18;
                }
            }
        } else {
            if (temp_7 == 0) {
                var_f0_2 = M2C_FIELD(arg0, f32 *, 0x78);
            } else {
                var_f0_2 = M2C_FIELD(arg0, f32 *, 0x7C);
            }
            M2C_FIELD(arg0, f32 *, 0x74) = var_f0_2;
            var_f12 = M2C_FIELD(arg0, f32 *, 0x70);
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x74);
            if (var_f12 != temp_f0_2) {
                if (var_f12 < temp_f0_2) {
                    var_f0 = var_f12 + M2C_FIELD(arg0, f32 *, 0x80);
                } else {
block_17:
                    var_f0 = var_f12 - M2C_FIELD(arg0, f32 *, 0x80);
                }
block_18:
                M2C_FIELD(arg0, f32 *, 0x70) = var_f0;
                var_f12 = var_f0;
            }
        }
        if ((temp_3_2 != 0) && (temp_3_2 == 1)) {
            if (temp_7 == 0) {
                var_2 = M2C_FIELD(arg0, u16 *, 0x36);
            } else {
                var_2 = M2C_FIELD(arg0, u16 *, 0x38);
            }
            M2C_FIELD(arg0, u16 *, 0x34) = var_2;
            temp_2_3 = M2C_FIELD(arg0, s16 *, 0x30);
            temp_4 = (s16) M2C_FIELD(arg0, u16 *, 0x34);
            var_3 = temp_2_3;
            if (temp_2_3 != temp_4) {
                if (temp_2_3 >= temp_4) {
                    var_2_2 = var_3 - 1;
                } else {
                    var_2_2 = var_3 + 1;
                }
                M2C_FIELD(arg0, s16 *, 0x30) = var_2_2;
                var_3 = var_2_2;
            }
        } else {
            var_3 = (s16) (u16) M2C_FIELD(arg0, s16 *, 0x30);
        }
        temp_14 = var_3 + M2C_FIELD(arg0, s16 *, 0x6C);
        temp_13 = temp_2 + 0xB3F0;
        temp_15 = M2C_FIELD(arg0, s16 *, 0x32) + M2C_FIELD(arg0, s16 *, 0x6E);
        if (sp10 != 0) {
            temp_12 = M2C_FIELD(arg0, s32 *, 0x48);
            switch (temp_12) {                      /* irregular */
            case 0:
                sp20 = temp_14;
                sp24 = temp_15;
                BlitEx__4VIUI9VIUITexIdG8VIVect2I16VIAlphaBlendModefUi(temp_13, sp10, &sp20, 3, 0, var_f12);
                return;
            case 1:
                temp_8 = M2C_FIELD(arg0, s32 *, 0x58);
                if (temp_8 == 0) {
                    sp30 = temp_14;
                    sp34 = temp_15;
                    BlitHorz__4VIUIG8VIVect2I9VIUITexIdi16VIAlphaBlendModefUi(temp_13, &sp30, sp10, M2C_FIELD(arg0, s16 *, 0x3A), 3, 0, var_f12);
                    return;
                }
                sp40 = temp_14;
                sp50 = 0.0f;
                sp44 = temp_15;
                sp5C = 0.0f;
                sp54 = 0.0f;
                sp58 = 0.0f;
                BlitBar__4VIUIPCcG10VIColor32FG8VIVect2I9VIUITexIdT4i16VIAlphaBlendModefUii(temp_13, &D_011C6590, &sp50, &sp40, temp_8, sp10, M2C_FIELD(arg0, s16 *, 0x3A), 3, var_f12, 0, temp_12);
                return;
            case 2:
                sp60 = temp_14;
                sp64 = temp_15;
                BlitVert__4VIUIG8VIVect2I9VIUITexIdi16VIAlphaBlendModefUi(temp_13, &sp60, sp10, M2C_FIELD(arg0, s16 *, 0x3C), 3, 0, var_f12);
                return;
            case 3:
                temp_9 = M2C_FIELD(arg0, s16 *, 0x3A);
                sp70 = temp_14;
                temp_10 = M2C_FIELD(arg0, s16 *, 0x3C);
                sp74 = temp_15;
                sp80 = (s32) temp_9;
                sp84 = (s32) temp_10;
                BlitRect__4VIUI9VIUITexIdG8VIVect2IT216VIAlphaBlendModef(temp_13, sp10, &sp70, &sp80, 3, temp_9, temp_10, var_f12);
                return;
            }
        } else {
            temp_9_2 = M2C_FIELD(arg0, s32 *, 0x44);
            if (temp_9_2 == -1) {
                if (M2C_FIELD(arg0, f32 *, 0x90) > 0.0009999999f) {
                    sp134 = 0;
                    temp_2_4 = temp_14 + M2C_FIELD(arg0, s16 *, 0x3A);
                    sp130 = 0;
                    sp138 = 0;
                    sp13C = 0;
                    sp140 = temp_14;
                    sp144 = temp_15;
                    sp130 = temp_14;
                    temp_3_3 = temp_15 + M2C_FIELD(arg0, s16 *, 0x3C);
                    sp134 = temp_15;
                    sp150 = temp_2_4;
                    sp154 = temp_3_3;
                    sp138 = temp_2_4;
                    sp13C = temp_3_3;
                    FillRectangle__11VIGUIObjectPC8VIVect2IPC10VIColor32F16VIAlphaBlendMode(arg0, &sp130, arg0 + 0x84, 3, temp_15, temp_14, &sp130, &sp150, var_f12);
                    return;
                }
                var_5 = M2C_FIELD(arg0, s32 *, 0x5C);
                if (temp_7 != 0) {
                    temp_3_4 = M2C_FIELD(arg0, s32 *, 0x60);
                    var_5 = ((temp_3_4 ^ -1) != 0) ? temp_3_4 : var_5;
                }
                sp160 = temp_14;
                sp164 = temp_15;
                Blit__4VIUIiG8VIVect2I16VIAlphaBlendModefUi(temp_13, var_5, &sp160, 3, 0, &sp130, 0x3F800000);
            } else {
                temp_24 = M2C_FIELD(arg0, s16 *, 0x3A);
                if (temp_24 != -1) {
                    temp_16 = M2C_FIELD(arg0, s16 *, 0x3C);
                    if (temp_16 != -1) {
                        sp90 = temp_14;
                        sp94 = temp_15;
                        spA0 = (s32) temp_24;
                        spA4 = (s32) temp_16;
                        M2C_ERROR(/* unknown instruction: ldl $v1, %lo(D_0118E827)($at) */);
                        M2C_ERROR(/* unknown instruction: ldr $v1, %lo(D_0118E820)($at) */);
                        M2C_ERROR(/* unknown instruction: ldl $a7, %lo(D_0118E82F)($at) */);
                        M2C_ERROR(/* unknown instruction: ldr $a7, %lo(D_0118E828)($at) */);
                        M2C_ERROR(/* unknown instruction: ldl $t1, %lo(D_0118E837)($at) */);
                        M2C_ERROR(/* unknown instruction: ldr $t1, %lo(D_0118E830)($at) */);
                        M2C_ERROR(/* unknown instruction: ldl $t2, %lo(D_0118E83F)($at) */);
                        M2C_ERROR(/* unknown instruction: ldr $t2, %lo(D_0118E838)($at) */);
                        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($t0) */);
                        M2C_ERROR(/* unknown instruction: sdr $v1, ($t0) */);
                        M2C_ERROR(/* unknown instruction: sdl $a7, 0xf($t0) */);
                        M2C_ERROR(/* unknown instruction: sdr $a7, 0x8($t0) */);
                        M2C_ERROR(/* unknown instruction: sdl $t1, 0x17($t0) */);
                        M2C_ERROR(/* unknown instruction: sdr $t1, 0x10($t0) */);
                        M2C_ERROR(/* unknown instruction: sdl $t2, 0x1f($t0) */);
                        M2C_ERROR(/* unknown instruction: sdr $t2, 0x18($t0) */);
                        M2C_ERROR(/* unknown instruction: ldl $v1, %lo(D_0118E847)($at) */);
                        M2C_ERROR(/* unknown instruction: ldr $v1, %lo(D_0118E840)($at) */);
                        M2C_ERROR(/* unknown instruction: ldl $a7, %lo(D_0118E84F)($at) */);
                        M2C_ERROR(/* unknown instruction: ldr $a7, %lo(D_0118E848)($at) */);
                        M2C_ERROR(/* unknown instruction: ldl $t1, %lo(D_0118E857)($at) */);
                        M2C_ERROR(/* unknown instruction: ldr $t1, %lo(D_0118E850)($at) */);
                        M2C_ERROR(/* unknown instruction: ldl $t2, %lo(D_0118E85F)($at) */);
                        M2C_ERROR(/* unknown instruction: ldr $t2, %lo(D_0118E858)($at) */);
                        M2C_ERROR(/* unknown instruction: sdl $v1, 0x27($t0) */);
                        M2C_ERROR(/* unknown instruction: sdr $v1, 0x20($t0) */);
                        M2C_ERROR(/* unknown instruction: sdl $a7, 0x2f($t0) */);
                        M2C_ERROR(/* unknown instruction: sdl $t1, 0x37($t0) */);
                        M2C_ERROR(/* unknown instruction: sdr $t1, 0x30($t0) */);
                        M2C_ERROR(/* unknown instruction: sdl $t2, 0x3f($t0) */);
                        M2C_ERROR(/* unknown instruction: sdr $t2, 0x38($t0) */);
                        BlitFillFrame__4VIUIG8VIVect2IT1G14VIUIFrameParam9VIUITexId16VIAlphaBlendModefUc(temp_13, &sp90, &spA0, &spF0, *(&D_0118E860 + (temp_9_2 * 4)), 3, 1, M2C_ERROR(/* unknown instruction: sdr $a7, 0x28($t0) */), 0x3F800000);
                    }
                }
            }
        }
    }
}
