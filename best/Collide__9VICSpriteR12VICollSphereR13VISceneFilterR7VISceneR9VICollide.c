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

s32 CollideObj__9VICollideR12VICollSphereR9VICapsule(s32, void *); /* extern */

s32 Collide__9VICSpriteR12VICollSphereR13VISceneFilterR7VISceneR9VICollide(void *arg0, s32 arg4) {
    if (M2C_FIELD(arg0, s32 *, 0x1168) == 0) {
        return CollideObj__9VICollideR12VICollSphereR9VICapsule(arg4, arg0 + 0x1148);
    }
    return 0;
}
