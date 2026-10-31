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

void InternalInit__9VIGUIPage(void *arg0) {
    memset(0, 0x40);
    M2C_FIELD(arg0, s16 *, 0x6E) = -1;
    M2C_FIELD(arg0, f32 *, 0x74) = 0.03f;
    M2C_FIELD(arg0, f32 *, 0x70) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s16 *, 0x6C) = -1;
}
