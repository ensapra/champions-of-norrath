/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

void func_0016CDF8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    void *spC;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_30;
    s32 temp_3;
    s32 var_11;
    s32 var_12;
    s32 var_13;
    s32 var_14;
    s32 var_15;
    s32 var_16;
    s32 var_17;
    s32 var_18;
    s32 var_22;
    s32 var_23;
    s32 var_25;
    s32 var_3;
    s32 var_4;
    s32 var_5;
    s32 var_6;
    s32 var_8;
    u16 temp_19;
    u16 temp_21;
    void *temp_10;
    void *temp_10_2;
    void *temp_10_3;
    void *temp_10_4;
    void *temp_10_5;
    void *temp_10_6;

    sp8 = arg5 < 0;
    temp_2 = arg5 + 3;
    temp_30 = arg5 >> 0x1F;
    var_11 = arg2;
    var_17 = var_11;
    temp_3 = (s32) ((sp8 != 0) ? temp_2 : arg5) >> 2;
    var_16 = arg3 - temp_3;
    sp4 = temp_2;
    sp0 = arg4;
    var_14 = arg3;
    var_15 = var_14 + (arg5 - temp_3);
    temp_21 = M2C_FIELD(arg0, u16 *, 0x4E0);
    var_23 = var_14 + ((s32) (arg5 + ((u32) temp_30 >> 0x1F)) >> 1);
    spC = arg6 + 0x20;
    var_3 = var_11;
    var_6 = arg2 + arg4;
    var_8 = var_14;
    temp_19 = M2C_FIELD(arg0, u16 *, 0x4DC);
    var_22 = var_6;
    var_13 = var_6;
    var_5 = var_6;
    var_25 = var_11;
    var_4 = var_16;
    var_18 = var_23;
    var_12 = var_15;
    if (arg1 != 1) {
        if (arg1 < 2) {
            temp_2_2 = (s32) ((sp8 != 0) ? sp4 : arg5) >> 2;
            var_6 = arg2 - sp0;
            var_23 = var_14 - ((s32) (arg5 + ((u32) temp_30 >> 0x1F)) >> 1);
            var_15 = var_14 - (arg5 - temp_2_2);
            var_11 = arg2;
            var_16 = arg3 + temp_2_2;
            var_22 = var_6;
            var_13 = var_6;
            var_5 = var_6;
            var_3 = var_11;
            var_4 = var_16;
            var_18 = var_23;
            var_12 = var_15;
            if (arg1 != 0) {
                goto block_6;
            }
        } else {
            if (arg1 == 2) {
                var_13 = arg2;
                temp_2_3 = (s32) ((sp8 != 0) ? sp4 : arg5) >> 2;
                var_15 = arg3 + sp0;
                var_12 = arg3;
                var_22 = var_13 - ((s32) (arg5 + ((u32) temp_30 >> 0x1F)) >> 1);
                var_6 = var_13 - (arg5 - temp_2_3);
                var_4 = var_12;
                var_5 = arg2 + temp_2_3;
            } else {
block_6:
                var_13 = arg2;
                temp_2_4 = (s32) ((sp8 != 0) ? sp4 : arg5) >> 2;
                var_15 = arg3 - sp0;
                var_12 = arg3;
                var_22 = var_13 + ((s32) (arg5 + ((u32) temp_30 >> 0x1F)) >> 1);
                var_6 = var_13 + (arg5 - temp_2_4);
                var_4 = var_12;
                var_5 = arg2 - temp_2_4;
            }
            var_23 = var_15;
            var_14 = var_15;
            var_16 = var_15;
            var_18 = var_12;
            var_8 = var_12;
            var_3 = var_5;
            var_25 = var_13;
            var_17 = var_22;
            var_11 = var_6;
        }
    }
    M2C_FIELD(arg6, s16 *, 0x12) = (s16) (temp_21 + var_4);
    M2C_FIELD(arg6, s16 *, 0x10) = (s16) (temp_19 + var_3);
    M2C_FIELD(spC, s16 *, 0x10) = (s16) (temp_19 + var_5);
    M2C_FIELD(spC, s16 *, 0x12) = (s16) (temp_21 + var_16);
    temp_10 = spC + 0x20;
    M2C_FIELD(temp_10, s16 *, 0x12) = (s16) (temp_21 + var_8);
    M2C_FIELD(temp_10, s16 *, 0x10) = (s16) (temp_19 + var_25);
    temp_10_2 = temp_10 + 0x20;
    M2C_FIELD(temp_10_2, s16 *, 0x10) = (s16) (temp_19 + var_13);
    M2C_FIELD(temp_10_2, s16 *, 0x12) = (s16) (temp_21 + var_14);
    temp_10_3 = temp_10_2 + 0x20;
    M2C_FIELD(temp_10_3, s16 *, 0x10) = (s16) (temp_19 + var_17);
    M2C_FIELD(temp_10_3, s16 *, 0x12) = (s16) (temp_21 + var_18);
    temp_10_4 = temp_10_3 + 0x20;
    M2C_FIELD(temp_10_4, s16 *, 0x10) = (s16) (temp_19 + var_22);
    M2C_FIELD(temp_10_4, s16 *, 0x12) = (s16) (temp_21 + var_23);
    temp_10_5 = temp_10_4 + 0x20;
    M2C_FIELD(temp_10_5, s16 *, 0x10) = (s16) (temp_19 + var_11);
    M2C_FIELD(temp_10_5, s16 *, 0x12) = (s16) (temp_21 + var_12);
    temp_10_6 = temp_10_5 + 0x20;
    M2C_FIELD(temp_10_6, s16 *, 0x10) = (s16) (temp_19 + var_6);
    M2C_FIELD(temp_10_6, s16 *, 0x12) = (s16) (temp_21 + var_15);
}
