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

M2C_UNK MainLoopBegin__7VISetup(s32);               /* extern */
M2C_UNK MainLoopEnd__7VISetup(s32);                 /* extern */
s32 McErrSyncIdle__FP5VIPad(s32);                   /* extern */
M2C_UNK McErrSyncSet__FRC8VIVect2Ii(s32 *, M2C_UNK, M2C_UNK); /* extern */

s32 HandleMemCardAbnormal__7VISetup(s32 arg0) {
    s32 sp10;
    s32 sp14;
    s32 temp_16;
    s32 var_16;
    s32 var_2;

    sp10 = 0x140;
    sp14 = 0xE0;
    McErrSyncSet__FRC8VIVect2Ii(&sp10, 4, 0xE0);
    do {
        MainLoopBegin__7VISetup(arg0);
        temp_16 = McErrSyncIdle__FP5VIPad(arg0 + 0xAE58);
        MainLoopEnd__7VISetup(arg0);
    } while (temp_16 == 0);
    var_2 = -1;
    if (temp_16 != 3) {
        var_16 = 3;
loop_4:
        var_16 -= 1;
        MainLoopBegin__7VISetup(arg0);
        MainLoopEnd__7VISetup(arg0);
        if (var_16 >= 0) {
            goto loop_4;
        }
        var_2 = 0;
    }
    return var_2;
}
