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

M2C_UNK DeleteSema(s32);                            /* extern */
M2C_UNK DeleteThread(s32);                          /* extern */
s32 ReferThreadStatus(s32, M2C_UNK);                /* extern */
M2C_UNK RotateThreadReadyQueue(M2C_UNK);            /* extern */
M2C_UNK SignalSema(s32);                            /* extern */
extern s32 D_0118F29C;
extern s32 D_0118F2A0;
extern s32 D_0118F2AC;

void unpreparePowerOff__Fv(void) {
    if ((D_0118F2AC != -1) && (D_0118F29C != -1)) {
        D_0118F2A0 = 1;
        SignalSema(D_0118F29C);
loop_5:
        if (ReferThreadStatus(D_0118F2AC, 0) != 0x10) {
            RotateThreadReadyQueue(1);
            goto loop_5;
        }
        DeleteThread(D_0118F2AC);
        DeleteSema(D_0118F29C);
        D_0118F29C = -1;
        D_0118F2AC = -1;
    }
}
