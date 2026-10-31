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

M2C_UNK ReorderPalette__9VISurface(M2C_UNK);        /* extern */

s32 LockPalette__9VISurfaceRiR12VIPixelStorePPUc(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 temp_5;
    s32 var_2;

    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x1C) == -1) {
        ReorderPalette__9VISurface(-1);
        var_2 = 0;
        temp_5 = M2C_FIELD(arg0, s32 *, 0x28);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        if (temp_5 == 0) {
            *arg1 = 0;
            *arg3 = 0;
            *arg2 = M2C_FIELD(arg0, s32 *, 0x10);
            return 0;
        }
        *arg1 = temp_5;
        *arg2 = M2C_FIELD(arg0, s32 *, 0x34);
        *arg3 = M2C_FIELD(arg0, s32 *, 0x138) + M2C_FIELD(arg0, s32 *, 0x2C);
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
