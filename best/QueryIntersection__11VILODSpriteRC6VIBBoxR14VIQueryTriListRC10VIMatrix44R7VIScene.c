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

void *Sprite__7VIScenei(s32, s32);                  /* extern */

void QueryIntersection__11VILODSpriteRC6VIBBoxR14VIQueryTriListRC10VIMatrix44R7VIScene(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_2;
    void *temp_3;

    temp_2 = Sprite__7VIScenei(arg4, M2C_FIELD(arg0, s32 *, 0x4C));
    temp_3 = M2C_FIELD(temp_2, void **, 0x3C);
    M2C_FIELD((temp_3 + 0x40), M2C_UNK (**)(void *, s32, s32, s32, s32, void *), 4)(temp_2 + M2C_FIELD(temp_3, s16 *, 0x40), arg1, arg2, arg3, arg4, temp_2);
}
