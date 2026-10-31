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

s64 acos(s64);                                      /* extern */
s64 dpadd(s64, s64);                                /* extern */
s32 dpcmp(s64, s64);                                /* extern */
s64 dpdiv(s64, s64);                                /* extern */
s64 dpmul(s64, s64);                                /* extern */
s64 dpsub(s64, s64);                                /* extern */
s64 sin(s64);                                       /* extern */
extern s64 D_011D5708;
extern s64 D_011D5710;

void Slerp__7VIQuatDRC7VIQuatDT1d(void *arg0, void *arg1, void *arg2, s64 arg3) {
    void *sp0;
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_16_3;
    s64 temp_16_4;
    s64 temp_16_5;
    s64 temp_16_6;
    s64 temp_16_7;
    s64 temp_18;
    s64 temp_18_2;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_2_3;
    s64 temp_2_4;
    s64 var_17;
    s64 var_17_2;
    s64 var_18;
    s64 var_2;

    sp0 = arg0;
    temp_16 = dpmul(M2C_FIELD(arg1, s64 *, 0), M2C_FIELD(arg2, s64 *, 0));
    temp_16_2 = dpadd(temp_16, dpmul(M2C_FIELD(arg1, s64 *, 8), M2C_FIELD(arg2, s64 *, 8)));
    temp_16_3 = dpadd(temp_16_2, dpmul(M2C_FIELD(arg1, s64 *, 0x10), M2C_FIELD(arg2, s64 *, 0x10)));
    temp_2 = dpadd(temp_16_3, dpmul(M2C_FIELD(arg1, s64 *, 0x18), M2C_FIELD(arg2, s64 *, 0x18)));
    if (dpcmp(temp_2, 0) > 0) {
        temp_18 = 0xFFC0 << 0x2E;
        if (dpcmp(dpsub(temp_18, temp_2), D_011D5708) <= 0) {
            var_17 = arg3;
            var_18 = dpsub(temp_18, arg3);
        } else {
            temp_2_2 = acos(temp_2);
            var_17_2 = dpdiv(temp_18, sin(temp_2_2));
            var_18 = dpmul(sin(dpmul(dpsub(temp_18, arg3), temp_2_2)), var_17_2);
            var_2 = sin(dpmul(arg3, temp_2_2));
            goto block_8;
        }
    } else {
        temp_2_3 = dpsub(0, temp_2);
        temp_18_2 = 0xFFC0 << 0x2E;
        if (dpcmp(dpsub(temp_18_2, temp_2_3), D_011D5710) > 0) {
            temp_2_4 = acos(temp_2_3);
            var_17_2 = dpdiv(temp_18_2, sin(temp_2_4));
            var_18 = dpmul(sin(dpmul(dpsub(temp_18_2, arg3), temp_2_4)), var_17_2);
            var_2 = dpsub(0, sin(dpmul(arg3, temp_2_4)));
block_8:
            var_17 = dpmul(var_2, var_17_2);
        } else {
            var_18 = dpsub(temp_18_2, arg3);
            var_17 = dpsub(0, arg3);
        }
    }
    temp_16_4 = dpmul(M2C_FIELD(arg1, s64 *, 0), var_18);
    M2C_FIELD(sp0, s64 *, 0) = dpadd(temp_16_4, dpmul(M2C_FIELD(arg2, s64 *, 0), var_17));
    temp_16_5 = dpmul(M2C_FIELD(arg1, s64 *, 8), var_18);
    M2C_FIELD(sp0, s64 *, 8) = dpadd(temp_16_5, dpmul(M2C_FIELD(arg2, s64 *, 8), var_17));
    temp_16_6 = dpmul(M2C_FIELD(arg1, s64 *, 0x10), var_18);
    M2C_FIELD(sp0, s64 *, 0x10) = dpadd(temp_16_6, dpmul(M2C_FIELD(arg2, s64 *, 0x10), var_17));
    temp_16_7 = dpmul(M2C_FIELD(arg1, s64 *, 0x18), var_18);
    M2C_FIELD(sp0, s64 *, 0x18) = dpadd(temp_16_7, dpmul(M2C_FIELD(arg2, s64 *, 0x18), var_17));
}
