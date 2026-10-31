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

extern M2C_UNK Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f;

void func_0013E8D0(void) {
    M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0x18) = -1;
    M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0) = 0;
    M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 4) = 0;
    M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 8) = 0;
    M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0xC) = 0;
    M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0x10) = 0;
    M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0x14) = 0;
    M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0x1C) = 0;
}
