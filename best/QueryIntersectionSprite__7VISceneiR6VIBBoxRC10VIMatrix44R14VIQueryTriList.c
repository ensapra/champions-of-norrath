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

void QueryIntersectionSprite__7VISceneiR6VIBBoxRC10VIMatrix44R14VIQueryTriList(void *arg0, s32 arg1, s32 arg2, s32 arg4) {
    void **temp_9;
    void *temp_10;
    void *temp_3;

    temp_9 = M2C_FIELD(arg0, s32 *, 0x3EC) + (arg1 * 0xC);
    temp_10 = *temp_9;
    temp_3 = M2C_FIELD(temp_10, void **, 0x3C);
    M2C_FIELD((temp_3 + 0x40), M2C_UNK (**)(void *, s32, s32, void *, void **, void *), 4)(temp_10 + M2C_FIELD(temp_3, s16 *, 0x40), arg2, arg4, arg0, temp_9, temp_10);
}
