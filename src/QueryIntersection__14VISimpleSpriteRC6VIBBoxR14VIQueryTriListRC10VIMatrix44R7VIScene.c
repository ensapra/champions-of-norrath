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

M2C_UNK QueryObj__9VICollideRC6VIBBoxR14VIQueryTriListi(s32, s32, s32, s32); /* extern */
M2C_UNK SetWorld__9VICollideRC10VIMatrix44(s32, s32); /* extern */

void QueryIntersection__14VISimpleSpriteRC6VIBBoxR14VIQueryTriListRC10VIMatrix44R7VIScene(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 temp_16;

    temp_16 = M2C_FIELD(arg4, s32 *, 0x4BA4);
    SetWorld__9VICollideRC10VIMatrix44(temp_16, arg3);
    QueryObj__9VICollideRC6VIBBoxR14VIQueryTriListi(temp_16, arg1, arg2, M2C_FIELD(arg0, s32 *, 0x44));
}
