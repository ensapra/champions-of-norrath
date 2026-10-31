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

s32 cos(s32);                                       /* extern */
s64 dpmul(s32, s32);                                /* extern */
s64 dpsub(M2C_UNK, s32);                            /* extern */
s32 sin(s32);                                       /* extern */

void HPR__8VIVect3Dddd(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_16_2;

    temp_16 = sin(arg1);
    M2C_FIELD(arg0, s64 *, 0) = dpmul(temp_16, cos(arg2));
    M2C_FIELD(arg0, s64 *, 8) = dpsub(0, sin(arg2));
    temp_16_2 = cos(arg1);
    M2C_FIELD(arg0, s64 *, 0x10) = dpmul(temp_16_2, cos(arg2));
}
