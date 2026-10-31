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

M2C_UNK MainLoopBegin__7VISetup(void *);            /* extern */
M2C_UNK MainLoopEnd__7VISetup(void *);              /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
extern M2C_UNK D_011DC1D8;

s32 OnFile__7VISetupPCc(void *arg0) {
    s32 var_17;

    printf(&D_011DC1D8);
    if (M2C_FIELD(arg0, s32 *, 0x153D8) == 0) {
        var_17 = 3;
        M2C_FIELD(arg0, s32 *, 0xDA2C) = 3;
loop_2:
        var_17 -= 1;
        MainLoopBegin__7VISetup(arg0);
        MainLoopEnd__7VISetup(arg0);
        if (var_17 >= 0) {
            goto loop_2;
        }
    }
    return 1;
}
