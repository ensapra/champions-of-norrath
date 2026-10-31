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

s32 CollideBufferPackVGF__9VICollideR9VICollRayR12VICollBuffer(s32); /* extern */
s32 CollideBufferPackV__9VICollideR9VICollRayR12VICollBuffer(s32); /* extern */
s32 CollideBufferV__9VICollideR9VICollRayR12VICollBuffer(s32); /* extern */

s32 Collide__9VICollideR9VICollRayR12VICollBuffer(void *arg2) {
    s32 temp_3;
    s32 temp_7;

    temp_3 = M2C_FIELD(arg2, s32 *, 8);
    temp_7 = temp_3 < 2;
    if (temp_3 != 1) {
        if (temp_7 != 0) {
            if (temp_3 != 0) {
                return -1;
            }
            return CollideBufferV__9VICollideR9VICollRayR12VICollBuffer(temp_7);
        }
        if (temp_3 != 3) {
            return -1;
        }
        return CollideBufferPackVGF__9VICollideR9VICollRayR12VICollBuffer(temp_7);
    }
    return CollideBufferPackV__9VICollideR9VICollRayR12VICollBuffer(temp_7);
}
