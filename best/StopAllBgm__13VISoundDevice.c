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

M2C_UNK SetIopFunction__FUii(M2C_UNK, M2C_UNK);     /* extern */
extern s32 D_011EDF08;

void StopAllBgm__13VISoundDevice(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xD6C) = 0;
    M2C_FIELD(arg0, s8 *, 0xE6C) = 0;
    if (M2C_FIELD(arg0, s8 *, 0xF6C) != 0) {
        D_011EDF08 = 0;
        SetIopFunction__FUii(0xE, 1);
        M2C_FIELD(arg0, s8 *, 0xF6C) = 0;
    }
}
