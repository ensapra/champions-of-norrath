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

M2C_UNK printf(M2C_UNK *);                          /* extern */
s32 sceInetClose(void *, s32, s32, M2C_UNK);        /* extern */
extern M2C_UNK D_011C4518;

s32 Close__12VITCPSocket2(void *arg0) {
    s32 temp_3;
    s32 var_2;

    printf(&D_011C4518);
    temp_3 = M2C_FIELD(arg0, s32 *, 0x4C);
    var_2 = -1;
    if (temp_3 != -1) {
        var_2 = sceInetClose(arg0 + 0x10, M2C_FIELD(arg0, s32 *, 0xC), temp_3, 0);
        M2C_FIELD(arg0, s32 *, 0x4C) = -1;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return var_2;
}
