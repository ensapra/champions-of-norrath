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
s32 dpcmp(s64, M2C_UNK);                            /* extern */
s32 dpmul(s64, s64);                                /* extern */
s64 dpsub(M2C_UNK, s64);                            /* extern */
s64 sqrt(s32);                                      /* extern */

void ConvertToEulerXYZ__C11VIMatrix44DR8VIVect3D(void *arg0, void *arg1) {
    s32 temp_16;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_4;
    s64 temp_4_2;

    temp_4 = M2C_FIELD(arg0, s64 *, 0);
    temp_4_2 = M2C_FIELD(arg0, s64 *, 8);
    temp_16 = dpmul(temp_4, temp_4);
    temp_2 = sqrt(dpadd(temp_16, dpmul(temp_4_2, temp_4_2)));
    if (dpcmp(temp_2, 0) > 0) {
        M2C_FIELD(arg1, s64 *, 0x10) = atan2(M2C_FIELD(arg0, s64 *, 0x30), M2C_FIELD(arg0, s64 *, 0x50));
        M2C_FIELD(arg1, s64 *, 8) = atan2(dpsub(0, M2C_FIELD(arg0, s64 *, 0x10)), temp_2);
        M2C_FIELD(arg1, s64 *, 0) = atan2(M2C_FIELD(arg0, s64 *, 8), M2C_FIELD(arg0, s64 *, 0));
        return;
    }
    M2C_FIELD(arg1, s64 *, 0x10) = atan2(dpsub(0, M2C_FIELD(arg0, s64 *, 0x48)), M2C_FIELD(arg0, s64 *, 0x28));
    temp_2_2 = atan2(dpsub(0, M2C_FIELD(arg0, s64 *, 0x10)), temp_2);
    M2C_FIELD(arg1, s64 *, 0) = 0;
    M2C_FIELD(arg1, s64 *, 8) = temp_2_2;
}
