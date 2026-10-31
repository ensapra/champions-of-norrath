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
s64 dpsub(M2C_UNK, s64);                            /* extern */

void *Project__C8VIPlaneDRC8VIVect3D(void *arg0, void *arg1, void *arg2) {
    s64 sp20;
    s64 temp_16;
    s64 temp_17;
    s64 temp_17_2;
    s64 temp_17_3;
    s64 temp_17_4;
    s64 temp_18;
    s64 temp_19;
    s64 temp_19_2;
    s64 temp_21;
    s64 temp_22;
    s64 temp_23;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_2_3;
    s64 temp_30;

    temp_2 = M2C_FIELD(arg2, s64 *, 0);
    temp_19 = M2C_FIELD(arg1, s64 *, 0);
    sp20 = temp_2;
    temp_30 = M2C_FIELD(arg2, s64 *, 8);
    temp_21 = M2C_FIELD(arg1, s64 *, 8);
    temp_17 = dpmul(temp_2, temp_19);
    temp_22 = M2C_FIELD(arg1, s64 *, 0x10);
    temp_23 = M2C_FIELD(arg2, s64 *, 0x10);
    temp_17_2 = dpadd(temp_17, dpmul(temp_30, temp_21));
    temp_2_2 = dpsub(0, dpadd(dpadd(temp_17_2, dpmul(temp_23, temp_22)), M2C_FIELD(arg1, s64 *, 0x18)));
    temp_17_3 = dpmul(temp_19, temp_2_2);
    temp_18 = dpmul(temp_21, temp_2_2);
    temp_19_2 = dpmul(temp_22, temp_2_2);
    temp_17_4 = dpadd(temp_17_3, sp20);
    temp_16 = dpadd(temp_18, temp_30);
    temp_2_3 = dpadd(temp_19_2, temp_23);
    M2C_FIELD(arg0, s64 *, 0) = temp_17_4;
    M2C_FIELD(arg0, s64 *, 0x10) = temp_2_3;
    M2C_FIELD(arg0, s64 *, 8) = temp_16;
    return arg0;
}
