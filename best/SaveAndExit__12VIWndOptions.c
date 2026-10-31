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

M2C_UNK McErrSetMode__Fi(M2C_UNK);                  /* extern */
M2C_UNK McErr__FP5VIWndRC8VIVect2Ii(void *, s32 *, M2C_UNK, void *, s32 *); /* extern */
s32 Save__13VIGameOptions(s32);                     /* extern */
M2C_UNK SetFocus__5VIWndP5VIWndb(void *, s32, M2C_UNK); /* extern */
s32 VIGetGameOptions__Fv(void *, s32 *, M2C_UNK, void *, s32 *); /* extern */
s32 VIMemCardStatus__FPi(M2C_UNK);                  /* extern */

s32 SaveAndExit__12VIWndOptions(void *arg0) {
    s32 sp10;
    s32 sp14;
    void *temp_7;

    temp_7 = arg0 + 0x34;
    if (VIMemCardStatus__FPi(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x4A0) = 1;
        sp10 = M2C_FIELD(arg0, s32 *, 0x34);
        sp14 = M2C_FIELD(temp_7, s32 *, 4);
        McErr__FP5VIWndRC8VIVect2Ii(arg0, &sp10, 4, temp_7, &sp10);
        McErrSetMode__Fi(1);
        return -1;
    }
    if (Save__13VIGameOptions(VIGetGameOptions__Fv(arg0, &sp10, 4, temp_7, &sp10)) < 0) {
        M2C_FIELD(arg0, s32 *, 0x4A8) = 1;
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    SetFocus__5VIWndP5VIWndb(arg0, M2C_FIELD(arg0, s32 *, 0x14), 1);
    return 0;
}
