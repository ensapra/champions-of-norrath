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

void *GetAppPtr__5VIWnd(void *);                    /* extern */
s8 *GetString__20VIGUIStringDataModel(void *);      /* extern */
M2C_UNK SetFocus__5VIWndP5VIWndb(void *, void *, M2C_UNK); /* extern */
M2C_UNK SetMaxTextLen__9VIWndEditi(void *, s32);    /* extern */
M2C_UNK SetText__9VIWndEditPCc(void *, s8 *);       /* extern */
M2C_UNK SetTitle__9VIWndEditPCc(void *, s8 *);      /* extern */
extern s8 D_011CAC78;

void *OnKeyDown__9VIGUITexti(void *arg0, s32 arg1) {
    s32 temp_5;
    s8 *temp_19;
    s8 *temp_2;
    void *temp_16;
    void *temp_18;
    void *temp_4;
    void *temp_4_2;
    void *var_2;

    var_2 = NULL;
    temp_4 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_4 != NULL) {
        var_2 = GetAppPtr__5VIWnd(temp_4);
        temp_18 = var_2;
        if ((temp_18 != NULL) && ((arg1 == 0xD) || (var_2 = NULL, (arg1 == 0x86)))) {
            temp_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x24);
            var_2 = NULL;
            if (temp_16 != NULL) {
                temp_4_2 = M2C_FIELD(arg0, void **, 0x28);
                if (temp_4_2 != NULL) {
                    temp_19 = GetString__20VIGUIStringDataModel(temp_4_2);
                    if (M2C_FIELD(arg0, s32 *, 0xC0) != 0) {
                        M2C_FIELD(temp_16, s32 *, 0x18C) = 1;
                    } else {
                        M2C_FIELD(temp_16, s32 *, 0x18C) = 0;
                    }
                    temp_5 = M2C_FIELD(arg0, s32 *, 0xC4);
                    if (temp_5 <= 0) {
                        SetMaxTextLen__9VIWndEditi(temp_16, 0x80);
                    } else {
                        SetMaxTextLen__9VIWndEditi(temp_16, temp_5);
                    }
                    temp_2 = GetString__20VIGUIStringDataModel(arg0 + 0xCC);
                    if (temp_2 == NULL) {
                        goto block_21;
                    }
                    if (*temp_2 == 0) {
block_21:
                        SetTitle__9VIWndEditPCc(temp_16, &D_011CAC78);
                    } else {
                        SetTitle__9VIWndEditPCc(temp_16, temp_2);
                    }
                    if (temp_19 != NULL) {
                        SetText__9VIWndEditPCc(temp_16, temp_19);
                    }
                    M2C_FIELD(temp_18, void **, 0xB81C) = temp_16;
                    SetFocus__5VIWndP5VIWndb(temp_18 + 0xB798, temp_16, 1);
                    M2C_FIELD(temp_16, s32 *, 0x1C) = 1;
                    var_2 = NULL;
                }
            }
        }
    }
    return var_2;
}
