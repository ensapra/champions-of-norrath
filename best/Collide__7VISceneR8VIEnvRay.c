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

M2C_UNK Collide__7VIWorldR8VIEnvRay(s32);           /* extern */

void Collide__7VISceneR8VIEnvRay(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x34) = 1;
    Collide__7VIWorldR8VIEnvRay(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x544) = (s32) (M2C_FIELD(arg0, s32 *, 0x544) + 1);
}
