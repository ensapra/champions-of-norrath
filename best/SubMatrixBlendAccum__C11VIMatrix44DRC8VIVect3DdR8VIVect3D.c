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

s64 dpadd(s64, s64);                                /* extern */
s64 dpmul(s64, s64);                                /* extern */

void SubMatrixBlendAccum__C11VIMatrix44DRC8VIVect3DdR8VIVect3D(void *arg0, void *arg1, s64 arg2, void *arg3) {
    M2C_FIELD(arg3, s64 *, 0) = dpadd(M2C_FIELD(arg3, s64 *, 0), dpmul(dpmul(M2C_FIELD(arg0, s64 *, 0), M2C_FIELD(arg1, s64 *, 0)), arg2));
    M2C_FIELD(arg3, s64 *, 8) = dpadd(M2C_FIELD(arg3, s64 *, 8), dpmul(dpmul(M2C_FIELD(arg0, s64 *, 8), M2C_FIELD(arg1, s64 *, 0)), arg2));
    M2C_FIELD(arg3, s64 *, 0x10) = dpadd(M2C_FIELD(arg3, s64 *, 0x10), dpmul(dpmul(M2C_FIELD(arg0, s64 *, 0x10), M2C_FIELD(arg1, s64 *, 0)), arg2));
    M2C_FIELD(arg3, s64 *, 0) = dpadd(M2C_FIELD(arg3, s64 *, 0), dpmul(dpmul(M2C_FIELD(arg0, s64 *, 0x20), M2C_FIELD(arg1, s64 *, 8)), arg2));
    M2C_FIELD(arg3, s64 *, 8) = dpadd(M2C_FIELD(arg3, s64 *, 8), dpmul(dpmul(M2C_FIELD(arg0, s64 *, 0x28), M2C_FIELD(arg1, s64 *, 8)), arg2));
    M2C_FIELD(arg3, s64 *, 0x10) = dpadd(M2C_FIELD(arg3, s64 *, 0x10), dpmul(dpmul(M2C_FIELD(arg0, s64 *, 0x30), M2C_FIELD(arg1, s64 *, 8)), arg2));
    M2C_FIELD(arg3, s64 *, 0) = dpadd(M2C_FIELD(arg3, s64 *, 0), dpmul(dpmul(M2C_FIELD(arg0, s64 *, 0x40), M2C_FIELD(arg1, s64 *, 0x10)), arg2));
    M2C_FIELD(arg3, s64 *, 8) = dpadd(M2C_FIELD(arg3, s64 *, 8), dpmul(dpmul(M2C_FIELD(arg0, s64 *, 0x48), M2C_FIELD(arg1, s64 *, 0x10)), arg2));
    M2C_FIELD(arg3, s64 *, 0x10) = dpadd(M2C_FIELD(arg3, s64 *, 0x10), dpmul(dpmul(M2C_FIELD(arg0, s64 *, 0x50), M2C_FIELD(arg1, s64 *, 0x10)), arg2));
}
