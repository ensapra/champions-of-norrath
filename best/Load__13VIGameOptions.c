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

M2C_UNK SetDefaults__13VIGameOptions(void *);       /* extern */
s32 VIMemCardReadFile__FPCcPvi(M2C_UNK *, void *, M2C_UNK); /* extern */
M2C_UNK memset(M2C_UNK, M2C_UNK);                   /* extern */
extern M2C_UNK D_011C3EE8;

s32 Load__13VIGameOptions(void *arg0) {
    s32 temp_2;

    memset(0, 0x400);
    temp_2 = VIMemCardReadFile__FPCcPvi(&D_011C3EE8, arg0, 0x400);
    if (temp_2 < 0) {
        SetDefaults__13VIGameOptions(arg0);
        return temp_2;
    }
    if (temp_2 >= 0x400) {
        if ((M2C_FIELD(arg0, s32 *, 0) != 0) || (M2C_FIELD(arg0, s32 *, 0x3FC) != 0x01234567)) {
            SetDefaults__13VIGameOptions(arg0);
        }
        return 0;
    }
    SetDefaults__13VIGameOptions(arg0);
    return -1;
}
