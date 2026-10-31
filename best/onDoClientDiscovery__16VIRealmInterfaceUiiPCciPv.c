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

s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
M2C_UNK GoBack__20VIWndGenericRenderer(void *);     /* extern */
M2C_UNK Reset__16VIRealmInterface(void *);          /* extern */
M2C_UNK SetText__11VIGUIDialogPCUsb(s32, s32, M2C_UNK); /* extern */
M2C_UNK Show__11VIGUIDialogPCUsPCc(s32, s32, M2C_UNK); /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
M2C_UNK snprintf(void *, M2C_UNK, M2C_UNK *);       /* extern */
s32 strcmp(M2C_UNK *, M2C_UNK *);                   /* extern */
extern void *D_01192C70;
extern M2C_UNK D_011D92F8;
extern M2C_UNK D_011D9308;
extern M2C_UNK D_011D9410;

void onDoClientDiscovery__16VIRealmInterfaceUiiPCciPv(void *arg0, s32 arg2, M2C_UNK *arg3, s32 arg4) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_17;
    void *temp_4;

    printf(&D_011D9410);
    switch (arg2) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x914) = arg4;
        if (arg3 != NULL) {
            temp_4 = arg0 + 0x514;
            if (strcmp(arg3, &D_011D92F8) == 0) {
                snprintf(temp_4, 0x3FF, &D_011D9308);
            } else {
                snprintf(temp_4, 0x3FF, arg3);
            }
        }
        M2C_FIELD(arg0, s32 *, 0xD8C) = 5;
        return;
    case 1:
        temp_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16, GetString__13VIStringTableii(D_01192C70, 0x745, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        return;
    default:
        GoBack__20VIWndGenericRenderer(M2C_FIELD(arg0, void **, 0xC));
        temp_17 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        Show__11VIGUIDialogPCUsPCc(temp_17, GetString__13VIStringTableii(D_01192C70, 0x730, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        temp_16_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16_2, GetString__13VIStringTableii(D_01192C70, 0x731, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        M2C_FIELD(arg0, s32 *, 0xD8C) = 0;
        Reset__16VIRealmInterface(arg0);
        return;
    }
}
