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

M2C_UNK Clear__12VIDictionary(s32);                 /* extern */
M2C_UNK Clear__7VIScene(s32);                       /* extern */
M2C_UNK Close__13VISoundDevice(s32);                /* extern */
M2C_UNK Close__4VIUI(s32);                          /* extern */
M2C_UNK Close__5VIPad(s32);                         /* extern */
M2C_UNK Close__8VIRaster(s32);                      /* extern */
M2C_UNK Close__9VICollide(s32);                     /* extern */
M2C_UNK Free__10VIWndLegal(s32);                    /* extern */
M2C_UNK Free__11VIWndSplash(s32);                   /* extern */
M2C_UNK Free__12VIWndPatcher(s32);                  /* extern */
M2C_UNK Free__7VIFader(s32);                        /* extern */
M2C_UNK Free__9VIWndDnas(s32);                      /* extern */
M2C_UNK Free__9VIWndEula(s32);                      /* extern */
M2C_UNK StopAmbientSoundtrack__7VISetup();          /* extern */
M2C_UNK VISplashFxFree__Fv();                       /* extern */

void Free__7VISetup(s32 arg0) {
    StopAmbientSoundtrack__7VISetup();
    Free__7VIFader(arg0 + 0xAE38);
    Free__9VIWndEula(arg0 + 0x12D68);
    Free__10VIWndLegal(arg0 + 0x15390);
    Free__9VIWndDnas(arg0 + 0x12060);
    Free__12VIWndPatcher(arg0 + 0xD5B0);
    Free__11VIWndSplash(arg0 + 0xAFE8);
    VISplashFxFree__Fv();
    Close__4VIUI(arg0 + 0xADE0);
    Clear__7VIScene(arg0 + 0x6220);
    Close__13VISoundDevice(arg0 + 0x5098);
    Clear__12VIDictionary(arg0 + 0x5080);
    Close__9VICollide(arg0 + 0x4C60);
    Close__8VIRaster(arg0);
    Close__5VIPad(arg0 + 0xAE58);
}
