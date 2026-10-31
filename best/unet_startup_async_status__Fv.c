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

M2C_UNK DeleteThread(s32);                          /* extern */
s32 ReferThreadStatus(s32, M2C_UNK);                /* extern */
M2C_UNK TerminateThread(s32);                       /* extern */
extern s32 D_0118E6B8;
extern s32 D_0118E6BC;

s32 unet_startup_async_status__Fv(void) {
    s32 var_2;

    if (D_0118E6BC != -1) {
        var_2 = 1;
        if (ReferThreadStatus(D_0118E6BC, 0) == 0x10) {
            D_0118E6B8 = 1;
            TerminateThread(D_0118E6BC);
            DeleteThread(D_0118E6BC);
            D_0118E6BC = -1;
            goto block_3;
        }
    } else {
block_3:
        var_2 = 0;
    }
    return var_2;
}
