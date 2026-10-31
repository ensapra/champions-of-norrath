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
s32 *GetAppPtr__5VIWnd(void *);                     /* extern */
s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
M2C_UNK SetText__11VIGUIDialogPCUsb(s32, s32, M2C_UNK); /* extern */
M2C_UNK SetText__11VIGUIDialogib(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK UnLock__11VIGUIDialog(s32);                 /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
s32 strlenWide__FPCUs(void *);                      /* extern */
M2C_UNK strncpyWide__FPUsPCUsUi(void *, s32, M2C_UNK); /* extern */
extern void *D_01192C70;
extern M2C_UNK D_011D9268;
extern M2C_UNK D_011D9298;
extern M2C_UNK D_011D92B0;

void onCreateAccount__16VIRealmInterfaceUiiPCUsPv(void *arg0, s32 arg2, s32 arg3) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_16_4;
    void *temp_16_5;

    printf(&D_011D9268);
    UnLock__11VIGUIDialog(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38));
    switch (arg2) {                                 /* irregular */
    case 36:
        SetText__11VIGUIDialogib(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38), 0x55B, 0);
        return;
    case 37:
        temp_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16, GetString__13VIStringTableii(D_01192C70, 0x734, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        return;
    case 38:
        temp_16_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16_2, GetString__13VIStringTableii(D_01192C70, 0x735, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        return;
    case 39:
        temp_16_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16_3, GetString__13VIStringTableii(D_01192C70, 0x736, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        return;
    case 1:
        temp_16_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16_4, GetString__13VIStringTableii(D_01192C70, 0x745, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        return;
    case 0:
        temp_16_5 = arg0 + 0x10;
        SetText__11VIGUIDialogib(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38), 0x568, 0);
        strncpyWide__FPUsPCUsUi(temp_16_5, arg3, 0x100);
        M2C_FIELD(arg0, s32 *, 0x110) = strlenWide__FPCUs(temp_16_5);
        if (*GetAppPtr__5VIWnd(M2C_FIELD(arg0, void **, 0xC)) == 1) {
            AddPage__20VIWndGenericRendererPCc(M2C_FIELD(arg0, void **, 0xC), &D_011D9298);
            return;
        }
        AddPage__20VIWndGenericRendererPCc(M2C_FIELD(arg0, void **, 0xC), &D_011D92B0);
        return;
    }
}
