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

s64 atan2(s64, s64);                                /* extern */
s32 dpadd(s32, s32);                                /* extern */
s32 dpmul(s64, s64);                                /* extern */
s64 dpsub(M2C_UNK, s64);                            /* extern */
s64 sqrt(s32);                                      /* extern */

void HPR__C8VIVect3DPdN21(void *arg0, s64 *arg1, s64 *arg2, s64 *arg3) {
    s32 temp_17;
    s64 temp_4;
    s64 temp_4_2;

    *arg1 = atan2(M2C_FIELD(arg0, s64 *, 0), M2C_FIELD(arg0, s64 *, 0x10));
    temp_4 = M2C_FIELD(arg0, s64 *, 0);
    temp_4_2 = M2C_FIELD(arg0, s64 *, 0x10);
    temp_17 = dpmul(temp_4, temp_4);
    *arg2 = dpsub(0, atan2(M2C_FIELD(arg0, s64 *, 8), sqrt(dpadd(temp_17, dpmul(temp_4_2, temp_4_2)))));
    *arg3 = 0;
}
