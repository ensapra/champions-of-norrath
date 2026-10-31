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

M2C_UNK memset(M2C_UNK, M2C_UNK);                   /* extern */

void SetDefaults__13VIGameOptions(void *arg0) {
    memset(0, 0x400);
    M2C_FIELD(arg0, f32 *, 0xC) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x3FC) = 0x01234567;
    M2C_FIELD(arg0, s8 *, 0x97) = 1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 1;
    M2C_FIELD(arg0, f32 *, 8) = 1.0f;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 7) = 0;
}
