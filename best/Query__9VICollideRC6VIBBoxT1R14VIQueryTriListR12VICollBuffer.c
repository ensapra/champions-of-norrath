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

s32 QueryBufferPackVGF__9VICollideRC6VIBBoxT1R14VIQueryTriListR12VICollBuffer(s32); /* extern */
s32 QueryBufferPackV__9VICollideRC6VIBBoxT1R14VIQueryTriListR12VICollBuffer(s32); /* extern */
s32 QueryBufferV__9VICollideRC6VIBBoxT1R14VIQueryTriListR12VICollBuffer(s32); /* extern */

s32 Query__9VICollideRC6VIBBoxT1R14VIQueryTriListR12VICollBuffer(void *arg4) {
    s32 temp_3;
    s32 temp_9;

    temp_3 = M2C_FIELD(arg4, s32 *, 8);
    temp_9 = temp_3 < 2;
    if (temp_3 != 1) {
        if (temp_9 != 0) {
            if (temp_3 != 0) {
                return -1;
            }
            return QueryBufferV__9VICollideRC6VIBBoxT1R14VIQueryTriListR12VICollBuffer(temp_9);
        }
        if (temp_3 != 3) {
            return -1;
        }
        return QueryBufferPackVGF__9VICollideRC6VIBBoxT1R14VIQueryTriListR12VICollBuffer(temp_9);
    }
    return QueryBufferPackV__9VICollideRC6VIBBoxT1R14VIQueryTriListR12VICollBuffer(temp_9);
}
