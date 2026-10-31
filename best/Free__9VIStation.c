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

M2C_UNK CleanUp__11VIGUIObject();                   /* extern */
M2C_UNK Clear__12VIDictionary(s32);                 /* extern */
M2C_UNK Clear__7VIScene(s32);                       /* extern */
M2C_UNK Close__13VISoundDevice(s32);                /* extern */
M2C_UNK Close__4VIUI(s32);                          /* extern */
M2C_UNK Close__8VIRaster(s32);                      /* extern */
M2C_UNK Close__9VICollide(s32);                     /* extern */
M2C_UNK Free__10VIKeyboard(s32);                    /* extern */
M2C_UNK Free__15VIWindowManager(s32);               /* extern */
M2C_UNK Free__7VIFader(s32);                        /* extern */
M2C_UNK Free__9VIWndEula(s32);                      /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
extern M2C_UNK D_011C3C00;
extern M2C_UNK D_011C3C08;
extern M2C_UNK D_011C3C10;
extern M2C_UNK D_011C3C18;

void Free__9VIStation(s32 arg0) {
    Free__9VIWndEula(arg0 + 0x15408);
    Close__4VIUI(arg0 + 0xB3F0);
    printf(&D_011C3C00);
    Clear__7VIScene(arg0 + 0x6830);
    printf(&D_011C3C08);
    Close__13VISoundDevice(arg0 + 0x56A8);
    printf(&D_011C3C10);
    Clear__12VIDictionary(arg0 + 0x5690);
    Close__9VICollide(arg0 + 0x5270);
    Free__7VIFader(arg0 + 0xB448);
    printf(&D_011C3C18);
    Close__8VIRaster(arg0 + 0x610);
    CleanUp__11VIGUIObject();
    Free__15VIWindowManager(arg0 + 0xB798);
    Free__10VIKeyboard(arg0 + 0xB4D0);
}
