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

s32 Load__13VIStringTablePCc(void *, M2C_UNK *);    /* extern */
s32 ReloadWords__4VIUI();                           /* extern */
extern M2C_UNK D_011C5F98;
extern M2C_UNK D_011C5FB0;

s32 Init__4VIUIP8VIRasterP13VISoundDeviceP12VIDictionary(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_3;

    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x50) = arg3;
    var_3 = -1;
    if (ReloadWords__4VIUI() >= 0) {
        var_3 = Load__13VIStringTablePCc(arg0 + 0x10, &D_011C5F98);
        if (var_3 == 0) {
            var_3 = Load__13VIStringTablePCc(arg0 + 0x20, &D_011C5FB0);
            if (var_3 == 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0;
            }
        }
    }
    return var_3;
}
