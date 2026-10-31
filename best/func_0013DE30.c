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

extern M2C_UNK UnitRotate__C6VIQuatRC7VIVect3R7VIVect3;

void func_0013DE30(void) {
    M2C_FIELD(&UnitRotate__C6VIQuatRC7VIVect3R7VIVect3, s32 *, 0xAC) = -1;
    M2C_FIELD(&UnitRotate__C6VIQuatRC7VIVect3R7VIVect3, s32 *, 0x98) = 0;
    M2C_FIELD(&UnitRotate__C6VIQuatRC7VIVect3R7VIVect3, s32 *, 0x9C) = 0;
    M2C_FIELD(&UnitRotate__C6VIQuatRC7VIVect3R7VIVect3, s32 *, 0xA0) = 0;
    M2C_FIELD(&UnitRotate__C6VIQuatRC7VIVect3R7VIVect3, s32 *, 0xA4) = 0;
    M2C_FIELD(&UnitRotate__C6VIQuatRC7VIVect3R7VIVect3, s32 *, 0xA8) = 0;
    M2C_FIELD(&UnitRotate__C6VIQuatRC7VIVect3R7VIVect3, s32 *, 0xB0) = 0;
}
