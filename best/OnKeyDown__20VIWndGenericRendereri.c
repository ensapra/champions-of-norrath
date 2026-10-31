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

M2C_UNK ActionOccured__20VIWndGenericRendererPCc(void *, M2C_UNK *); /* extern */
s32 GetName__9VIGUIPage(void *);                    /* extern */
void *GetObjectByName__9VIGUIPagePCc(void *, M2C_UNK *, s64); /* extern */
u16 *GetSessionId__16VIRealmInterface(void *);      /* extern */
s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
s64 GetTime__7VITimer();                            /* extern */
M2C_UNK GoBack__20VIWndGenericRenderer(void *);     /* extern */
s32 IsOpen__11VIGUIDialog(void *);                  /* extern */
M2C_UNK OnKeyDown__9VIWndEditi(void *, s32);        /* extern */
M2C_UNK SetText__11VIGUIDialogPCUsb(void *, s32, M2C_UNK); /* extern */
M2C_UNK Show__11VIGUIDialogPCUsPCc(void *, s32, M2C_UNK *); /* extern */
s32 Size__Ct6VIList1ZP9VIGUIPage(void *, s32);      /* extern */
M2C_UNK __Q212RealmService14MatchGameAttrs(M2C_UNK *); /* extern */
M2C_UNK ___Q212RealmService14MatchGameAttrs(M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK __dynamic_cast_2(s32, M2C_UNK *, M2C_UNK, void *, M2C_UNK *, void *); /* extern */
M2C_UNK __wrap_free(u8 *);                          /* extern */
M2C_UNK alloc__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uib(M2C_UNK **, s32, M2C_UNK); /* extern */
M2C_UNK clientLeaveGame__16VIRealmInterface(void *); /* extern */
u8 *clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *); /* extern */
M2C_UNK *clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *); /* extern */
M2C_UNK logout__Q212RealmService15RealmGatewayAPIPCUsPv(void *, u16 *, M2C_UNK); /* extern */
M2C_UNK matchGame__Q212RealmService15RealmGatewayAPIPCUssUiUiiRCQ212RealmService14MatchGameAttrsbUiUiPv(void *, u16 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK printf(M2C_UNK *, M2C_UNK *);               /* extern */
M2C_UNK replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(u8 **, M2C_UNK, M2C_UNK, u16 *, s32); /* extern */
M2C_UNK resize__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uic(M2C_UNK **, s32, M2C_UNK); /* extern */
s32 strstr(s32, M2C_UNK *);                         /* extern */
extern s64 D_01192C60;
extern void *D_01192C70;
extern M2C_UNK D_011D45C8;
extern M2C_UNK D_011D4888;
extern M2C_UNK D_011D48E0;
extern M2C_UNK D_011D48E8;
extern M2C_UNK D_011D4908;
extern M2C_UNK D_011D49F8;
extern M2C_UNK D_011D4A08;
extern M2C_UNK D_011D4A18;
extern M2C_UNK D_011D4A20;
extern M2C_UNK D_011F290C;
extern M2C_UNK D_011F6CB8;
extern M2C_UNK D_011FD2E8;
extern M2C_UNK __tf11VIGUIObject;
extern M2C_UNK __tf13VIGUIComboBox;

void OnKeyDown__20VIWndGenericRendereri(void *arg0, s32 arg1) {
    u8 *sp20;
    M2C_UNK *sp30;
    M2C_UNK *sp40;
    M2C_UNK sp50;
    M2C_UNK *temp_3_4;
    M2C_UNK *temp_4_2;
    M2C_UNK *var_3_2;
    M2C_UNK *var_3_3;
    M2C_UNK *var_5_2;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_2_11;
    s32 temp_2_6;
    s32 temp_2_8;
    s32 temp_2_9;
    s32 temp_3_3;
    s32 temp_3_5;
    s32 temp_3_6;
    s32 var_17;
    s32 var_20;
    s32 var_5;
    s32 var_8;
    s64 temp_2_2;
    u16 *temp_16;
    u16 *temp_2_5;
    u16 *var_4;
    u8 **temp_2_10;
    u8 **temp_2_12;
    u8 **temp_2_7;
    u8 *temp_3;
    u8 *temp_4_3;
    u8 *temp_4_4;
    u8 *temp_4_5;
    u8 *var_16;
    u8 *var_3;
    u8 temp_3_2;
    void *temp_16_2;
    void *temp_16_3;
    void *temp_18;
    void *temp_22;
    void *temp_2;
    void *temp_2_13;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_4;
    void *temp_5;
    void *temp_6;

    var_5 = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x578) == 0) {
        temp_17 = ((var_5 ^ 0x1B) == 0) ? 0x87 : var_5;
        switch (temp_17) {                          /* irregular */
        case 19:
            var_17 = 0x8A;
            break;
        case 20:
            var_17 = 0x8B;
            break;
        case 18:
            var_17 = 0x89;
            break;
        case 17:
            var_17 = 0x88;
            break;
        default:
            var_17 = ((temp_17 ^ 0xD) == 0) ? 0x86 : temp_17;
            break;
        }
        temp_4 = M2C_FIELD(arg0, void **, 0x38);
        if ((temp_4 != NULL) && (var_5 = var_17, (IsOpen__11VIGUIDialog(temp_4) != 0))) {
            temp_6 = M2C_FIELD(arg0, void **, 0x38);
            temp_2 = M2C_FIELD(temp_6, void **, 0x78);
            M2C_FIELD((temp_2 + 0x18), M2C_UNK (**)(void *, s32, void *), 4)(temp_6 + M2C_FIELD(temp_2, s16 *, 0x18), var_5, temp_6);
        } else if (M2C_FIELD(arg0, s32 *, 0x58C) != 0) {
            OnKeyDown__9VIWndEditi(arg0 + 0x590, var_17);
        } else if (Size__Ct6VIList1ZP9VIGUIPage(arg0 + 0x28, var_5) == 1) {
            if (var_17 != 0x87) {
                goto block_21;
            }
            if (IsOpen__11VIGUIDialog(M2C_FIELD(arg0, void **, 0x38)) == 0) {
                ActionOccured__20VIWndGenericRendererPCc(arg0, &D_011D45C8);
            } else {
                goto block_21;
            }
        } else {
block_21:
            if ((var_17 == 0x84) && (strstr(GetName__9VIGUIPage(M2C_FIELD(arg0, void **, 0x34)), &D_011D49F8) != 0)) {
                temp_2_2 = GetTime__7VITimer();
                if ((temp_2_2 - D_01192C60) >= 0x1388) {
                    D_01192C60 = temp_2_2;
                    temp_2_3 = GetObjectByName__9VIGUIPagePCc(M2C_FIELD(arg0, void **, 0x34), &D_011D4888, temp_2_2);
                    if (temp_2_3 != NULL) {
                        temp_2_4 = M2C_FIELD(temp_2_3, void **, 0x94);
                        __dynamic_cast_2(M2C_FIELD(temp_2_4, s32 *, 4), &__tf13VIGUIComboBox, 0, temp_2_3 + M2C_FIELD(temp_2_4, s16 *, 0), &__tf11VIGUIObject, temp_2_3);
                    }
                    temp_22 = arg0 + 0x758;
                    temp_16 = GetSessionId__16VIRealmInterface(temp_22);
                    if (M2C_FIELD(&D_011FD2E8, s32 *, 0xC) == 0) {
                        var_3 = &D_011FD2E8 + 0x10;
                        M2C_FIELD(&D_011FD2E8, s32 *, 8) = (s32) (M2C_FIELD(&D_011FD2E8, s32 *, 8) + 1);
                    } else {
                        var_3 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(&D_011FD2E8);
                    }
                    var_8 = 0;
                    sp20 = var_3;
                    var_4 = temp_16 + 2;
                    if (*temp_16 != 0) {
                        do {
                            temp_2_5 = var_4;
                            var_4 += 2;
                            var_8 += 1;
                        } while (*temp_2_5 != 0);
                    }
                    replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(&sp20, 0, -1, temp_16, var_8);
                    if (M2C_FIELD(&D_011F6CB8, s32 *, 0xC) != 0) {
                        var_3_2 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(&D_011F6CB8);
                    } else {
                        var_3_2 = &D_011F6CB8 + 0x10;
                        M2C_FIELD(&D_011F6CB8, s32 *, 8) = (s32) (M2C_FIELD(&D_011F6CB8, s32 *, 8) + 1);
                    }
                    sp40 = var_3_2;
                    var_20 = 0;
                    resize__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uic(&sp40, M2C_FIELD(sp20, s32 *, -0x10), 0);
                    temp_3 = sp20;
                    var_16 = temp_3;
                    temp_18 = temp_3 + (M2C_FIELD(temp_3, s32 *, -0x10) * 2);
                    if (var_16 != temp_18) {
                        do {
                            temp_17_2 = var_20;
                            temp_5 = sp40 - 0x10;
                            var_20 = temp_17_2 + 1;
                            if ((u32) M2C_FIELD(temp_5, u32 *, 8) >= 2U) {
                                alloc__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uib(&sp40, M2C_FIELD(temp_5, s32 *, 0), 1);
                            }
                            temp_3_2 = *var_16;
                            var_16 += 2;
                            M2C_FIELD(sp40, s32 *, -4) = 1;
                            *(sp40 + temp_17_2) = temp_3_2;
                        } while (var_16 != temp_18);
                    }
                    var_3_3 = sp40;
                    temp_4_2 = var_3_3 - 0x10;
                    if (M2C_FIELD(temp_4_2, s32 *, 0xC) != 0) {
                        var_3_3 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(temp_4_2);
                    } else {
                        M2C_FIELD(temp_4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_4_2, s32 *, 8) + 1);
                    }
                    sp30 = var_3_3;
                    temp_4_3 = sp40 - 0x10;
                    temp_2_6 = M2C_FIELD(temp_4_3, s32 *, 8) - 1;
                    M2C_FIELD(temp_4_3, s32 *, 8) = temp_2_6;
                    if (temp_2_6 == 0) {
                        temp_3_3 = M2C_FIELD(temp_4_3, s32 *, 4);
                        if ((u32) (temp_3_3 + 0x10) >= 0x81U) {
                            __wrap_free(temp_4_3);
                        } else {
                            temp_2_7 = &D_011F290C + (((u32) (temp_3_3 + 0x17) >> 3) * 4);
                            M2C_FIELD(temp_4_3, u8 **, 0) = (u8 *) *temp_2_7;
                            *temp_2_7 = temp_4_3;
                        }
                    }
                    temp_3_4 = sp30;
                    temp_2_8 = M2C_FIELD(temp_3_4, s32 *, -0x10);
                    if (temp_2_8 == 0) {
                        var_5_2 = &D_011D48E0;
                    } else {
                        *(temp_3_4 + temp_2_8) = 0;
                        var_5_2 = sp30;
                    }
                    printf(&D_011D48E8, var_5_2);
                    temp_4_4 = sp30 - 0x10;
                    temp_2_9 = M2C_FIELD(temp_4_4, s32 *, 8) - 1;
                    M2C_FIELD(temp_4_4, s32 *, 8) = temp_2_9;
                    if (temp_2_9 == 0) {
                        temp_3_5 = M2C_FIELD(temp_4_4, s32 *, 4);
                        if ((u32) (temp_3_5 + 0x10) >= 0x81U) {
                            __wrap_free(temp_4_4);
                        } else {
                            temp_2_10 = &D_011F290C + (((u32) (temp_3_5 + 0x17) >> 3) * 4);
                            M2C_FIELD(temp_4_4, u8 **, 0) = (u8 *) *temp_2_10;
                            *temp_2_10 = temp_4_4;
                        }
                    }
                    __Q212RealmService14MatchGameAttrs(&sp50);
                    matchGame__Q212RealmService15RealmGatewayAPIPCUssUiUiiRCQ212RealmService14MatchGameAttrsbUiUiPv(temp_22, GetSessionId__16VIRealmInterface(temp_22), 2, 0, 0, -1, &sp50, 1, 0x64, 0x400, 0);
                    ___Q212RealmService14MatchGameAttrs(&sp50, 2);
                    temp_4_5 = sp20 - 0x10;
                    temp_2_11 = M2C_FIELD(temp_4_5, s32 *, 8) - 1;
                    M2C_FIELD(temp_4_5, s32 *, 8) = temp_2_11;
                    if (temp_2_11 == 0) {
                        temp_3_6 = M2C_FIELD(temp_4_5, s32 *, 4) * 2;
                        if ((u32) (temp_3_6 + 0x10) >= 0x81U) {
                            __wrap_free(temp_4_5);
                        } else {
                            temp_2_12 = &D_011F290C + (((u32) (temp_3_6 + 0x17) >> 3) * 4);
                            M2C_FIELD(temp_4_5, u8 **, 0) = (u8 *) *temp_2_12;
                            *temp_2_12 = temp_4_5;
                        }
                    }
                }
            } else if ((strstr(GetName__9VIGUIPage(M2C_FIELD(arg0, void **, 0x34)), &D_011D4A08) != 0) && (var_17 == 0x87) && (IsOpen__11VIGUIDialog(M2C_FIELD(arg0, void **, 0x38)) == 0)) {
                Show__11VIGUIDialogPCUsPCc(M2C_FIELD(arg0, void **, 0x38), GetString__13VIStringTableii(D_01192C70, 0x72B, M2C_FIELD(D_01192C70, s32 *, 0x30)), &D_011D4908);
                SetText__11VIGUIDialogPCUsb(M2C_FIELD(arg0, void **, 0x38), GetString__13VIStringTableii(D_01192C70, 0x72C, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
            } else {
                if (strstr(GetName__9VIGUIPage(M2C_FIELD(arg0, void **, 0x34)), &D_011D4A18) != 0) {
                    temp_16_2 = arg0 + 0x758;
                    if (var_17 == 0x87) {
                        logout__Q212RealmService15RealmGatewayAPIPCUsPv(temp_16_2, GetSessionId__16VIRealmInterface(temp_16_2), 0);
                    }
                }
                if ((strstr(GetName__9VIGUIPage(M2C_FIELD(arg0, void **, 0x34)), &D_011D4A20) != 0) && (var_17 == 0x87)) {
                    clientLeaveGame__16VIRealmInterface(arg0 + 0x758);
                    GoBack__20VIWndGenericRenderer(arg0);
                }
                temp_16_3 = M2C_FIELD(arg0, void **, 0x34);
                if (temp_16_3 != NULL) {
                    temp_2_13 = M2C_FIELD(temp_16_3, void **, 0x78);
                    M2C_FIELD((temp_2_13 + 0x18), M2C_UNK (**)(void *, s32), 4)(temp_16_3 + M2C_FIELD(temp_2_13, s16 *, 0x18), var_17);
                }
            }
        }
    }
}
