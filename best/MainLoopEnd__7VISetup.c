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

M2C_UNK EndScene__8VIRaster(s32);                   /* extern */
s32 GetTime__7VITimer();                            /* extern */
M2C_UNK Update__7VIFader(s32);                      /* extern */
M2C_UNK ezNetCtlGetStatus(M2C_UNK *);               /* extern */
extern M2C_UNK D_011B1E40;

s32 MainLoopEnd__7VISetup(s32 arg0) {
    s32 temp_16;
    s32 var_2;
    void *temp_3;
    void *temp_3_2;

    Update__7VIFader(arg0 + 0xAE38);
    EndScene__8VIRaster(arg0);
    temp_16 = GetTime__7VITimer();
    do {

    } while ((GetTime__7VITimer() - temp_16) < 0x12);
    ezNetCtlGetStatus(&D_011B1E40);
    if (M2C_FIELD(&D_011B1E40, s32 *, 0xC) >= 5) {
        if (M2C_FIELD(&D_011B1E40, s32 *, 0xC) == 5) {
            temp_3 = arg0 + 0xAFE8;
            M2C_FIELD(temp_3, s32 *, 0x25B4) = 1;
            var_2 = -1;
            M2C_FIELD(temp_3, s32 *, 0x25B0) = 0;
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return var_2;
        }
        return 0;
    }
    var_2 = 0;
    if (M2C_FIELD(&D_011B1E40, s32 *, 0xC) <= 0) {
        if (M2C_FIELD(&D_011B1E40, s32 *, 0xC) == 0) {
            temp_3_2 = arg0 + 0xAFE8;
            M2C_FIELD(temp_3_2, s32 *, 0x25B0) = 1;
            M2C_FIELD(temp_3_2, s32 *, 0x25B4) = 0;
            return -1;
        }
        return 0;
    }
    return var_2;
}
