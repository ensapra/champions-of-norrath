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

void *GetAppPtr__5VIWnd();                          /* extern */
s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
M2C_UNK SetFocus__5VIWndP5VIWndb(void *, void *, M2C_UNK); /* extern */
M2C_UNK SetText__11VIGUIDialogPCUsb(s32, s32, M2C_UNK); /* extern */
M2C_UNK Show__11VIGUIDialogPCUsPCc(s32, s32, M2C_UNK *); /* extern */
M2C_UNK StopEula__9VIStation(void *);               /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
extern void *D_01192C70;
extern M2C_UNK D_011D45C8;
extern M2C_UNK D_011D49E0;

void ForceDisconnect__20VIWndGenericRenderer(void *arg0) {
    void *temp_2;

    temp_2 = GetAppPtr__5VIWnd();
    StopEula__9VIStation(temp_2);
    M2C_FIELD(temp_2, void **, 0xB81C) = arg0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x1C) = 0;
    SetFocus__5VIWndP5VIWndb(temp_2 + 0xB798, arg0, 1);
    printf(&D_011D49E0);
    SetText__11VIGUIDialogPCUsb(M2C_FIELD(arg0, s32 *, 0x38), GetString__13VIStringTableii(D_01192C70, 0x573, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
    Show__11VIGUIDialogPCUsPCc(M2C_FIELD(arg0, s32 *, 0x38), GetString__13VIStringTableii(D_01192C70, 0x51A, M2C_FIELD(D_01192C70, s32 *, 0x30)), &D_011D45C8);
}
