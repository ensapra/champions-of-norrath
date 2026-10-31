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

void CollideSprite__7VISceneR12VICollSphereR13VISceneFilteri(void *arg0, void *arg2, s32 arg3) {
    void **temp_9;
    void *temp_10;
    void *temp_3;

    temp_9 = M2C_FIELD(arg0, s32 *, 0x3EC) + (arg3 * 0xC);
    temp_10 = *temp_9;
    temp_3 = M2C_FIELD(temp_10, void **, 0x3C);
    if (M2C_FIELD((temp_3 + 0x20), s32 (**)(void *, void *, s32, void **, void *), 4)(temp_10 + M2C_FIELD(temp_3, s16 *, 0x20), arg0, M2C_FIELD(arg0, s32 *, 0x4BA4), temp_9, temp_10) != 0) {
        M2C_FIELD(arg2, s32 *, 0xC) = -1;
        M2C_FIELD(arg2, s32 *, 8) = arg3;
        M2C_FIELD(arg2, s32 *, 4) = -1;
    }
}
