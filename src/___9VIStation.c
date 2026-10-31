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

M2C_UNK ___10VIKeyboard(s32, M2C_UNK);              /* extern */
M2C_UNK ___10VIMatrix44(s32, M2C_UNK);              /* extern */
M2C_UNK ___12VIDictionary(s32, M2C_UNK);            /* extern */
M2C_UNK ___13VISoundDevice(s32, M2C_UNK);           /* extern */
M2C_UNK ___15VIWindowManager(s32, M2C_UNK);         /* extern */
M2C_UNK ___20VIWndGenericRenderer(s32, M2C_UNK);    /* extern */
M2C_UNK ___4VIUI(s32, M2C_UNK);                     /* extern */
M2C_UNK ___5VIPad(s32, M2C_UNK);                    /* extern */
M2C_UNK ___7VIFader(s32, M2C_UNK);                  /* extern */
M2C_UNK ___7VIScene(s32, M2C_UNK);                  /* extern */
M2C_UNK ___8VIRaster(s32, M2C_UNK);                 /* extern */
M2C_UNK ___9VICollide(s32, M2C_UNK);                /* extern */
M2C_UNK ___9VIWndEula(s32, M2C_UNK);                /* extern */
M2C_UNK __builtin_delete(s32);                      /* extern */

void ___9VIStation(s32 arg0, s32 arg1) {
    ___9VIWndEula(arg0 + 0x15408, 2);
    ___20VIWndGenericRenderer(arg0 + 0xB820, 2);
    ___15VIWindowManager(arg0 + 0xB798, 2);
    ___10VIKeyboard(arg0 + 0xB4D0, 2);
    ___5VIPad(arg0 + 0xB470, 2);
    ___7VIFader(arg0 + 0xB448, 2);
    ___4VIUI(arg0 + 0xB3F0, 2);
    ___7VIScene(arg0 + 0x6830, 2);
    ___13VISoundDevice(arg0 + 0x56A8, 2);
    ___12VIDictionary(arg0 + 0x5690, 2);
    ___10VIMatrix44(arg0 + 0x5590, 2);
    ___10VIMatrix44(arg0 + 0x5550, 2);
    ___10VIMatrix44(arg0 + 0x5510, 2);
    ___10VIMatrix44(arg0 + 0x54D0, 2);
    ___9VICollide(arg0 + 0x5270, 2);
    ___8VIRaster(arg0 + 0x610, 2);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
