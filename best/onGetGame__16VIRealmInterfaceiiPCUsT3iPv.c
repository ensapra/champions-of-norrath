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

M2C_UNK AddPage__20VIWndGenericRendererPCc(void *, M2C_UNK *); /* extern */
s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
M2C_UNK Hide__11VIGUIDialog(s32);                   /* extern */
M2C_UNK SetStringValue__9VIGUIPagePCcPCUsb(s32, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK SetStringValue__9VIGUIPagePCcT1b(s32, M2C_UNK *, void *, M2C_UNK); /* extern */
M2C_UNK SetText__11VIGUIDialogPCUsb(s32, s32, M2C_UNK); /* extern */
M2C_UNK __wrap_free(u8 *);                          /* extern */
u8 *__wrap_strdup(M2C_UNK *);                       /* extern */
M2C_UNK alloc__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uib(M2C_UNK **, s32, M2C_UNK); /* extern */
s32 atoi(s8 *);                                     /* extern */
u8 *clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *); /* extern */
M2C_UNK *clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *); /* extern */
M2C_UNK doClientDiscovery__Q212RealmService15RealmGatewayAPIPCUsiT1Pv(void *, void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
M2C_UNK replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(u8 **, M2C_UNK, M2C_UNK, u16 *, s32); /* extern */
M2C_UNK resize__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uic(M2C_UNK **, s32, M2C_UNK); /* extern */
M2C_UNK snprintf(void *, M2C_UNK, u8 *);            /* extern */
s8 *strstr(u8 *, M2C_UNK *);                        /* extern */
extern void *D_01192C70;
extern M2C_UNK D_011D8DF8;
extern M2C_UNK D_011D8E00;
extern M2C_UNK D_011D8E18;
extern M2C_UNK D_011D9398;
extern M2C_UNK D_011D93A8;
extern M2C_UNK D_011D93D0;
extern M2C_UNK D_011F290C;
extern M2C_UNK D_011F6CB8;
extern M2C_UNK D_011FD2E8;

void onGetGame__16VIRealmInterfaceiiPCUsT3iPv(void *arg0, s32 arg2, u16 *arg3, s32 arg5) {
    M2C_UNK *sp30;
    u8 *sp40;
    M2C_UNK *sp50;
    M2C_UNK *temp_3_4;
    M2C_UNK *temp_4;
    M2C_UNK *var_3_2;
    M2C_UNK *var_3_3;
    M2C_UNK *var_4_2;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_16_4;
    s32 temp_17;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_2_7;
    s32 temp_3_3;
    s32 temp_3_5;
    s32 temp_3_6;
    s32 var_21;
    s32 var_8;
    s8 *temp_2_9;
    u16 *temp_2;
    u16 *var_4;
    u8 **temp_2_3;
    u8 **temp_2_6;
    u8 **temp_2_8;
    u8 *temp_16;
    u8 *temp_3;
    u8 *temp_4_2;
    u8 *temp_4_3;
    u8 *temp_4_4;
    u8 *var_16;
    u8 *var_3;
    u8 temp_3_2;
    void *temp_18;
    void *temp_5;

    printf(&D_011D93A8);
    if (arg2 == 0) {
        AddPage__20VIWndGenericRendererPCc(M2C_FIELD(arg0, void **, 0xC), &D_011D93D0);
        M2C_FIELD(arg0, s32 *, 0xF28) = arg5;
        if (M2C_FIELD(&D_011FD2E8, s32 *, 0xC) != 0) {
            var_3 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(&D_011FD2E8);
        } else {
            var_3 = &D_011FD2E8 + 0x10;
            M2C_FIELD(&D_011FD2E8, s32 *, 8) = (s32) (M2C_FIELD(&D_011FD2E8, s32 *, 8) + 1);
        }
        var_8 = 0;
        sp40 = var_3;
        var_4 = arg3 + 2;
        if (*arg3 != 0) {
            do {
                temp_2 = var_4;
                var_4 += 2;
                var_8 += 1;
            } while (*temp_2 != 0);
        }
        replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(&sp40, 0, -1, arg3, var_8);
        if (M2C_FIELD(&D_011F6CB8, s32 *, 0xC) != 0) {
            var_3_2 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(&D_011F6CB8);
        } else {
            var_3_2 = &D_011F6CB8 + 0x10;
            M2C_FIELD(&D_011F6CB8, s32 *, 8) = (s32) (M2C_FIELD(&D_011F6CB8, s32 *, 8) + 1);
        }
        sp50 = var_3_2;
        var_21 = 0;
        resize__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uic(&sp50, M2C_FIELD(sp40, s32 *, -0x10), 0);
        temp_3 = sp40;
        var_16 = temp_3;
        temp_18 = temp_3 + (M2C_FIELD(temp_3, s32 *, -0x10) * 2);
        if (var_16 != temp_18) {
            do {
                temp_17 = var_21;
                temp_5 = sp50 - 0x10;
                var_21 = temp_17 + 1;
                if ((u32) M2C_FIELD(temp_5, u32 *, 8) >= 2U) {
                    alloc__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uib(&sp50, M2C_FIELD(temp_5, s32 *, 0), 1);
                }
                temp_3_2 = *var_16;
                var_16 += 2;
                M2C_FIELD(sp50, s32 *, -4) = 1;
                *(sp50 + temp_17) = temp_3_2;
            } while (var_16 != temp_18);
        }
        var_3_3 = sp50;
        temp_4 = var_3_3 - 0x10;
        if (M2C_FIELD(temp_4, s32 *, 0xC) != 0) {
            var_3_3 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(temp_4);
        } else {
            M2C_FIELD(temp_4, s32 *, 8) = (s32) (M2C_FIELD(temp_4, s32 *, 8) + 1);
        }
        sp30 = var_3_3;
        temp_4_2 = sp50 - 0x10;
        temp_2_2 = M2C_FIELD(temp_4_2, s32 *, 8) - 1;
        M2C_FIELD(temp_4_2, s32 *, 8) = temp_2_2;
        if (temp_2_2 == 0) {
            temp_3_3 = M2C_FIELD(temp_4_2, s32 *, 4);
            if ((u32) (temp_3_3 + 0x10) >= 0x81U) {
                __wrap_free(temp_4_2);
            } else {
                temp_2_3 = &D_011F290C + (((u32) (temp_3_3 + 0x17) >> 3) * 4);
                M2C_FIELD(temp_4_2, u8 **, 0) = (u8 *) *temp_2_3;
                *temp_2_3 = temp_4_2;
            }
        }
        temp_3_4 = sp30;
        temp_2_4 = M2C_FIELD(temp_3_4, s32 *, -0x10);
        if (temp_2_4 == 0) {
            var_4_2 = &D_011D8DF8;
        } else {
            *(temp_3_4 + temp_2_4) = 0;
            var_4_2 = sp30;
        }
        temp_16 = __wrap_strdup(var_4_2);
        temp_4_3 = sp30 - 0x10;
        temp_2_5 = M2C_FIELD(temp_4_3, s32 *, 8) - 1;
        M2C_FIELD(temp_4_3, s32 *, 8) = temp_2_5;
        if (temp_2_5 == 0) {
            temp_3_5 = M2C_FIELD(temp_4_3, s32 *, 4);
            if ((u32) (temp_3_5 + 0x10) >= 0x81U) {
                __wrap_free(temp_4_3);
            } else {
                temp_2_6 = &D_011F290C + (((u32) (temp_3_5 + 0x17) >> 3) * 4);
                M2C_FIELD(temp_4_3, u8 **, 0) = (u8 *) *temp_2_6;
                *temp_2_6 = temp_4_3;
            }
        }
        temp_4_4 = sp40 - 0x10;
        temp_2_7 = M2C_FIELD(temp_4_4, s32 *, 8) - 1;
        M2C_FIELD(temp_4_4, s32 *, 8) = temp_2_7;
        if (temp_2_7 == 0) {
            temp_3_6 = M2C_FIELD(temp_4_4, s32 *, 4) * 2;
            if ((u32) (temp_3_6 + 0x10) >= 0x81U) {
                __wrap_free(temp_4_4);
            } else {
                temp_2_8 = &D_011F290C + (((u32) (temp_3_6 + 0x17) >> 3) * 4);
                M2C_FIELD(temp_4_4, u8 **, 0) = (u8 *) *temp_2_8;
                *temp_2_8 = temp_4_4;
            }
        }
        temp_2_9 = strstr(temp_16, &D_011D9398);
        if (temp_2_9 != NULL) {
            *temp_2_9 = 0;
            M2C_FIELD(arg0, s32 *, 0xD2C) = atoi(temp_2_9 + 1);
            snprintf(arg0 + 0x92C, 0x3FF, temp_16);
        }
        __wrap_free(temp_16);
        doClientDiscovery__Q212RealmService15RealmGatewayAPIPCUsiT1Pv(arg0, arg0 + 0x10, M2C_FIELD(arg0, s32 *, 0xF28), 0, 0);
        temp_16_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x34);
        SetStringValue__9VIGUIPagePCcPCUsb(temp_16_2, &D_011D8E00, GetString__13VIStringTableii(D_01192C70, 0x72F, M2C_FIELD(D_01192C70, s32 *, 0x30)), 1);
        SetStringValue__9VIGUIPagePCcT1b(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x34), &D_011D8E18, arg0 + 0x114, 0);
        Hide__11VIGUIDialog(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38));
        return;
    }
    if (arg2 == 1) {
        temp_16_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16_3, GetString__13VIStringTableii(D_01192C70, 0x745, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        return;
    }
    temp_16_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
    SetText__11VIGUIDialogPCUsb(temp_16_4, GetString__13VIStringTableii(D_01192C70, 0x73D, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
}
