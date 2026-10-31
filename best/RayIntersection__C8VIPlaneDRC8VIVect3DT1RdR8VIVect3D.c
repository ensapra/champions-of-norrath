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
s32 dpcmp(s64, M2C_UNK);                            /* extern */
s64 dpdiv(s32, s64);                                /* extern */
s64 dpmul(s64, s64);                                /* extern */
s32 dpsub(M2C_UNK, s64);                            /* extern */

s32 RayIntersection__C8VIPlaneDRC8VIVect3DT1RdR8VIVect3D(void *arg0, void *arg1, void *arg2, s64 *arg3, void *arg4) {
    s64 temp_16;
    s64 temp_17;
    s64 temp_17_2;
    s64 temp_17_3;
    s64 temp_17_4;
    s64 temp_17_5;
    s64 temp_18;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_2_3;
    s64 temp_2_4;
    s64 temp_2_5;
    s64 temp_4;

    temp_17 = dpmul(M2C_FIELD(arg1, s64 *, 0), M2C_FIELD(arg0, s64 *, 0));
    temp_17_2 = dpadd(temp_17, dpmul(M2C_FIELD(arg1, s64 *, 8), M2C_FIELD(arg0, s64 *, 8)));
    temp_2 = dpadd(dpadd(temp_17_2, dpmul(M2C_FIELD(arg1, s64 *, 0x10), M2C_FIELD(arg0, s64 *, 0x10))), M2C_FIELD(arg0, s64 *, 0x18));
    *arg3 = temp_2;
    temp_17_3 = dpmul(M2C_FIELD(arg2, s64 *, 0), M2C_FIELD(arg0, s64 *, 0));
    temp_17_4 = dpadd(temp_17_3, dpmul(M2C_FIELD(arg2, s64 *, 8), M2C_FIELD(arg0, s64 *, 8)));
    temp_2_2 = dpadd(temp_17_4, dpmul(M2C_FIELD(arg2, s64 *, 0x10), M2C_FIELD(arg0, s64 *, 0x10)));
    if (dpcmp(temp_2_2, 0) == 0) {
        *arg3 = 0;
        M2C_FIELD(arg4, s64 *, 0x10) = 0;
        M2C_FIELD(arg4, s64 *, 0) = 0;
        M2C_FIELD(arg4, s64 *, 8) = 0;
        return 0;
    }
    *arg3 = dpdiv(dpsub(0, temp_2), temp_2_2);
    temp_4 = M2C_FIELD(arg2, s64 *, 0);
    M2C_FIELD(arg4, s64 *, 0) = temp_4;
    temp_17_5 = M2C_FIELD(arg2, s64 *, 8);
    M2C_FIELD(arg4, s64 *, 8) = temp_17_5;
    temp_18 = M2C_FIELD(arg2, s64 *, 0x10);
    M2C_FIELD(arg4, s64 *, 0x10) = temp_18;
    temp_16 = *arg3;
    temp_2_3 = dpmul(temp_4, temp_16);
    M2C_FIELD(arg4, s64 *, 0) = temp_2_3;
    temp_2_4 = dpmul(temp_17_5, temp_16);
    M2C_FIELD(arg4, s64 *, 8) = temp_2_4;
    temp_2_5 = dpmul(temp_18, temp_16);
    M2C_FIELD(arg4, s64 *, 0x10) = temp_2_5;
    M2C_FIELD(arg4, s64 *, 0) = dpadd(temp_2_3, M2C_FIELD(arg1, s64 *, 0));
    M2C_FIELD(arg4, s64 *, 8) = dpadd(temp_2_4, M2C_FIELD(arg1, s64 *, 8));
    M2C_FIELD(arg4, s64 *, 0x10) = dpadd(temp_2_5, M2C_FIELD(arg1, s64 *, 0x10));
    return 1;
}
