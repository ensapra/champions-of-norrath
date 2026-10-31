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

s32 dpadd(s32, s32);                                /* extern */
s32 dpmul(s32, s32);                                /* extern */
s32 dpsub(s64, s64);                                /* extern */

void DistanceSquared__C8VIVect4DRC8VIVect4D(void *arg0, void *arg1) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_17_2;
    s32 temp_18_2;
    s32 temp_19_2;
    s32 temp_20;
    s64 temp_17;
    s64 temp_18;
    s64 temp_19;

    temp_17 = M2C_FIELD(arg0, s64 *, 8);
    temp_18 = M2C_FIELD(arg0, s64 *, 0x10);
    temp_19 = M2C_FIELD(arg0, s64 *, 0x18);
    temp_20 = dpsub(M2C_FIELD(arg0, s64 *, 0), M2C_FIELD(arg1, s64 *, 0));
    temp_17_2 = dpsub(temp_17, M2C_FIELD(arg1, s64 *, 8));
    temp_18_2 = dpsub(temp_18, M2C_FIELD(arg1, s64 *, 0x10));
    temp_19_2 = dpsub(temp_19, M2C_FIELD(arg1, s64 *, 0x18));
    temp_16 = dpmul(temp_20, temp_20);
    temp_16_2 = dpadd(temp_16, dpmul(temp_17_2, temp_17_2));
    temp_16_3 = dpadd(temp_16_2, dpmul(temp_18_2, temp_18_2));
    dpadd(temp_16_3, dpmul(temp_19_2, temp_19_2));
}
