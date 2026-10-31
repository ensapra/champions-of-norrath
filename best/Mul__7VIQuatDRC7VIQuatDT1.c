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
s64 dpsub(s64, s64);                                /* extern */

void Mul__7VIQuatDRC7VIQuatDT1(void *arg0, void *arg1, void *arg2) {
    s64 temp_18;
    s64 temp_18_10;
    s64 temp_18_11;
    s64 temp_18_12;
    s64 temp_18_2;
    s64 temp_18_3;
    s64 temp_18_4;
    s64 temp_18_5;
    s64 temp_18_6;
    s64 temp_18_7;
    s64 temp_18_8;
    s64 temp_18_9;

    temp_18 = dpmul(M2C_FIELD(arg2, s64 *, 8), M2C_FIELD(arg1, s64 *, 0x10));
    temp_18_2 = dpsub(temp_18, dpmul(M2C_FIELD(arg2, s64 *, 0x10), M2C_FIELD(arg1, s64 *, 8)));
    temp_18_3 = dpadd(temp_18_2, dpmul(M2C_FIELD(arg2, s64 *, 0x18), M2C_FIELD(arg1, s64 *, 0)));
    M2C_FIELD(arg0, s64 *, 0) = dpadd(temp_18_3, dpmul(M2C_FIELD(arg2, s64 *, 0), M2C_FIELD(arg1, s64 *, 0x18)));
    temp_18_4 = dpmul(M2C_FIELD(arg2, s64 *, 0x10), M2C_FIELD(arg1, s64 *, 0));
    temp_18_5 = dpsub(temp_18_4, dpmul(M2C_FIELD(arg2, s64 *, 0), M2C_FIELD(arg1, s64 *, 0x10)));
    temp_18_6 = dpadd(temp_18_5, dpmul(M2C_FIELD(arg2, s64 *, 0x18), M2C_FIELD(arg1, s64 *, 8)));
    M2C_FIELD(arg0, s64 *, 8) = dpadd(temp_18_6, dpmul(M2C_FIELD(arg2, s64 *, 8), M2C_FIELD(arg1, s64 *, 0x18)));
    temp_18_7 = dpmul(M2C_FIELD(arg2, s64 *, 0), M2C_FIELD(arg1, s64 *, 8));
    temp_18_8 = dpsub(temp_18_7, dpmul(M2C_FIELD(arg2, s64 *, 8), M2C_FIELD(arg1, s64 *, 0)));
    temp_18_9 = dpadd(temp_18_8, dpmul(M2C_FIELD(arg2, s64 *, 0x18), M2C_FIELD(arg1, s64 *, 0x10)));
    M2C_FIELD(arg0, s64 *, 0x10) = dpadd(temp_18_9, dpmul(M2C_FIELD(arg2, s64 *, 0x10), M2C_FIELD(arg1, s64 *, 0x18)));
    temp_18_10 = dpmul(M2C_FIELD(arg2, s64 *, 0x18), M2C_FIELD(arg1, s64 *, 0x18));
    temp_18_11 = dpsub(temp_18_10, dpmul(M2C_FIELD(arg2, s64 *, 0), M2C_FIELD(arg1, s64 *, 0)));
    temp_18_12 = dpsub(temp_18_11, dpmul(M2C_FIELD(arg2, s64 *, 8), M2C_FIELD(arg1, s64 *, 8)));
    M2C_FIELD(arg0, s64 *, 0x18) = dpsub(temp_18_12, dpmul(M2C_FIELD(arg2, s64 *, 0x10), M2C_FIELD(arg1, s64 *, 0x10)));
}
