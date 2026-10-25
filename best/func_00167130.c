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

M2C_UNK func_001675F8();                            /* extern */
M2C_UNK func_001677F8(void *);                      /* extern */
M2C_UNK func_001679C8(void *, s64, s64, s64, s64);  /* extern */
M2C_UNK func_00167C44(void *, s64, s64, s64, s64, s64, s64); /* extern */
s32 func_00170894(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00167130(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s64 temp_10;
    s64 temp_5;
    s64 temp_5_4;
    s64 temp_6;
    s64 temp_6_4;
    s64 temp_7;
    s64 temp_7_2;
    s64 temp_8;
    s64 temp_8_2;
    s64 temp_9;
    void *temp_17;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_5_2;
    void *temp_5_3;
    void *temp_5_5;
    void *temp_5_6;
    void *temp_6_2;
    void *temp_6_3;
    void *temp_6_5;
    void *temp_6_6;
    void *temp_6_7;
    void *var_2;
    void *var_2_10;
    void *var_2_11;
    void *var_2_12;
    void *var_2_13;
    void *var_2_14;
    void *var_2_15;
    void *var_2_2;
    void *var_2_3;
    void *var_2_4;
    void *var_2_5;
    void *var_2_6;
    void *var_2_7;
    void *var_2_8;
    void *var_2_9;
    void *var_3;
    void *var_3_10;
    void *var_3_11;
    void *var_3_2;
    void *var_3_3;
    void *var_3_4;
    void *var_3_5;
    void *var_3_6;
    void *var_3_7;
    void *var_3_8;
    void *var_3_9;
    void *var_4;
    void *var_4_2;
    void *var_4_3;
    void *var_4_4;

    func_001675F8();
    func_001677F8(arg0);
    M2C_FIELD(arg0, s32 *, 0x914) = 0;
    M2C_FIELD(arg0, s32 *, 0x910) = 0x1000008A;
    M2C_FIELD(arg0, s32 *, 0x918) = 0;
    temp_2 = func_00170894(0x50, 0, 0x8A, 0);
    var_4 = arg0 + 0x11D0;
    M2C_FIELD(arg0, s32 *, 0x11C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x11CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x91C) = temp_2;
    var_2 = arg0 + 0x910;
    M2C_FIELD(arg0, s32 *, 0x11C0) = 0x60000000;
    temp_3 = var_4;
    do {
        temp_5 = M2C_FIELD(var_2, s64 *, 0);
        temp_6 = M2C_FIELD(var_2, s64 *, 8);
        temp_7 = M2C_FIELD(var_2, s64 *, 0x10);
        temp_8 = M2C_FIELD(var_2, s64 *, 0x18);
        M2C_FIELD(var_4, s64 *, 0) = temp_5;
        M2C_FIELD(var_4, s64 *, 8) = temp_6;
        M2C_FIELD(var_4, s64 *, 0x10) = temp_7;
        M2C_FIELD(var_4, s64 *, 0x18) = temp_8;
        var_2 += 0x20;
        var_4 += 0x20;
    } while (var_2 != temp_3);
    func_001679C8(arg0, temp_5, temp_6, temp_7, temp_8);
    M2C_FIELD(arg0, s32 *, 0x1A94) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A90) = 0x10000072;
    M2C_FIELD(arg0, s32 *, 0x1A98) = 0;
    temp_2_2 = func_00170894(0x50, 0, 0x72, 0);
    var_4_2 = arg0 + 0x21D0;
    M2C_FIELD(arg0, s32 *, 0x21C0) = 0x60000000;
    M2C_FIELD(arg0, s32 *, 0x21C4) = 0;
    temp_3_2 = arg0 + 0x1A90;
    M2C_FIELD(arg0, s32 *, 0x21C8) = 0;
    temp_5_2 = var_4_2;
    M2C_FIELD(arg0, s32 *, 0x21CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A9C) = temp_2_2;
    var_2_2 = temp_3_2;
    do {
        M2C_FIELD(var_4_2, s64 *, 0) = (s64) M2C_FIELD(var_2_2, s64 *, 0);
        M2C_FIELD(var_4_2, s64 *, 8) = (s64) M2C_FIELD(var_2_2, s64 *, 8);
        M2C_FIELD(var_4_2, s64 *, 0x10) = (s64) M2C_FIELD(var_2_2, s64 *, 0x10);
        M2C_FIELD(var_4_2, s64 *, 0x18) = (s64) M2C_FIELD(var_2_2, s64 *, 0x18);
        var_2_2 += 0x20;
        var_4_2 += 0x20;
    } while (var_2_2 != temp_5_2);
    temp_4 = arg0 + 0x4D50;
    var_2_3 = temp_3_2;
    var_3 = temp_4;
    do {
        M2C_FIELD(var_3, s64 *, 0) = (s64) M2C_FIELD(var_2_3, s64 *, 0);
        M2C_FIELD(var_3, s64 *, 8) = (s64) M2C_FIELD(var_2_3, s64 *, 8);
        M2C_FIELD(var_3, s64 *, 0x10) = (s64) M2C_FIELD(var_2_3, s64 *, 0x10);
        M2C_FIELD(var_3, s64 *, 0x18) = (s64) M2C_FIELD(var_2_3, s64 *, 0x18);
        var_2_3 += 0x20;
        var_3 += 0x20;
    } while (var_2_3 != temp_5_2);
    temp_6_2 = arg0 + 0x4610;
    var_2_4 = temp_4;
    var_3_2 = temp_6_2;
    temp_17 = arg0 + 0x5490;
    do {
        M2C_FIELD(var_3_2, s64 *, 0) = (s64) M2C_FIELD(var_2_4, s64 *, 0);
        M2C_FIELD(var_3_2, s64 *, 8) = (s64) M2C_FIELD(var_2_4, s64 *, 8);
        M2C_FIELD(var_3_2, s64 *, 0x10) = (s64) M2C_FIELD(var_2_4, s64 *, 0x10);
        M2C_FIELD(var_3_2, s64 *, 0x18) = (s64) M2C_FIELD(var_2_4, s64 *, 0x18);
        var_2_4 += 0x20;
        var_3_2 += 0x20;
    } while (var_2_4 != temp_17);
    temp_5_3 = arg0 + 0x3ED0;
    var_2_5 = temp_6_2;
    var_3_3 = temp_5_3;
    do {
        M2C_FIELD(var_3_3, s64 *, 0) = (s64) M2C_FIELD(var_2_5, s64 *, 0);
        M2C_FIELD(var_3_3, s64 *, 8) = (s64) M2C_FIELD(var_2_5, s64 *, 8);
        M2C_FIELD(var_3_3, s64 *, 0x10) = (s64) M2C_FIELD(var_2_5, s64 *, 0x10);
        M2C_FIELD(var_3_3, s64 *, 0x18) = (s64) M2C_FIELD(var_2_5, s64 *, 0x18);
        var_2_5 += 0x20;
        var_3_3 += 0x20;
    } while (var_2_5 != temp_4);
    temp_4_2 = arg0 + 0x3790;
    var_2_6 = temp_5_3;
    var_3_4 = temp_4_2;
    do {
        M2C_FIELD(var_3_4, s64 *, 0) = (s64) M2C_FIELD(var_2_6, s64 *, 0);
        M2C_FIELD(var_3_4, s64 *, 8) = (s64) M2C_FIELD(var_2_6, s64 *, 8);
        M2C_FIELD(var_3_4, s64 *, 0x10) = (s64) M2C_FIELD(var_2_6, s64 *, 0x10);
        M2C_FIELD(var_3_4, s64 *, 0x18) = (s64) M2C_FIELD(var_2_6, s64 *, 0x18);
        var_2_6 += 0x20;
        var_3_4 += 0x20;
    } while (var_2_6 != temp_6_2);
    temp_6_3 = arg0 + 0x3050;
    var_2_7 = temp_4_2;
    var_3_5 = temp_6_3;
    do {
        temp_9 = M2C_FIELD(var_2_7, s64 *, 0x10);
        temp_10 = M2C_FIELD(var_2_7, s64 *, 0x18);
        M2C_FIELD(var_3_5, s64 *, 0) = (s64) M2C_FIELD(var_2_7, s64 *, 0);
        M2C_FIELD(var_3_5, s64 *, 8) = (s64) M2C_FIELD(var_2_7, s64 *, 8);
        M2C_FIELD(var_3_5, s64 *, 0x10) = temp_9;
        M2C_FIELD(var_3_5, s64 *, 0x18) = temp_10;
        var_2_7 += 0x20;
        var_3_5 += 0x20;
    } while (var_2_7 != temp_5_3);
    var_2_8 = temp_6_3;
    var_3_6 = arg0 + 0x2910;
    do {
        temp_5_4 = M2C_FIELD(var_2_8, s64 *, 0);
        temp_6_4 = M2C_FIELD(var_2_8, s64 *, 8);
        temp_7_2 = M2C_FIELD(var_2_8, s64 *, 0x10);
        temp_8_2 = M2C_FIELD(var_2_8, s64 *, 0x18);
        M2C_FIELD(var_3_6, s64 *, 0) = temp_5_4;
        M2C_FIELD(var_3_6, s64 *, 8) = temp_6_4;
        M2C_FIELD(var_3_6, s64 *, 0x10) = temp_7_2;
        M2C_FIELD(var_3_6, s64 *, 0x18) = temp_8_2;
        var_2_8 += 0x20;
        var_3_6 += 0x20;
    } while (var_2_8 != temp_4_2);
    func_00167C44(arg0, temp_5_4, temp_6_4, temp_7_2, temp_8_2, temp_9, temp_10);
    M2C_FIELD(arg0, s32 *, 0x5494) = 0;
    M2C_FIELD(arg0, s32 *, 0x5490) = 0x10000012;
    M2C_FIELD(arg0, s32 *, 0x5498) = 0;
    temp_2_3 = func_00170894(0x50, 0, 0x12, 0);
    var_4_3 = arg0 + 0x55D0;
    M2C_FIELD(arg0, s32 *, 0x55C0) = 0x60000000;
    M2C_FIELD(arg0, s32 *, 0x55C4) = 0;
    temp_6_5 = var_4_3;
    M2C_FIELD(arg0, s32 *, 0x55C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x55CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x549C) = temp_2_3;
    var_2_9 = temp_17;
    do {
        M2C_FIELD(var_4_3, s64 *, 0) = (s64) M2C_FIELD(var_2_9, s64 *, 0);
        M2C_FIELD(var_4_3, s64 *, 8) = (s64) M2C_FIELD(var_2_9, s64 *, 8);
        M2C_FIELD(var_4_3, s64 *, 0x10) = (s64) M2C_FIELD(var_2_9, s64 *, 0x10);
        M2C_FIELD(var_4_3, s64 *, 0x18) = (s64) M2C_FIELD(var_2_9, s64 *, 0x18);
        var_2_9 += 0x20;
        var_4_3 += 0x20;
    } while (var_2_9 != temp_6_5);
    temp_5_5 = arg0 + 0x5D50;
    var_2_10 = temp_17;
    var_3_7 = temp_5_5;
    do {
        M2C_FIELD(var_3_7, s64 *, 0) = (s64) M2C_FIELD(var_2_10, s64 *, 0);
        M2C_FIELD(var_3_7, s64 *, 8) = (s64) M2C_FIELD(var_2_10, s64 *, 8);
        M2C_FIELD(var_3_7, s64 *, 0x10) = (s64) M2C_FIELD(var_2_10, s64 *, 0x10);
        M2C_FIELD(var_3_7, s64 *, 0x18) = (s64) M2C_FIELD(var_2_10, s64 *, 0x18);
        var_2_10 += 0x20;
        var_3_7 += 0x20;
    } while (var_2_10 != temp_6_5);
    temp_6_6 = arg0 + 0x5C10;
    var_2_11 = temp_5_5;
    var_3_8 = temp_6_6;
    do {
        M2C_FIELD(var_3_8, s64 *, 0) = (s64) M2C_FIELD(var_2_11, s64 *, 0);
        M2C_FIELD(var_3_8, s64 *, 8) = (s64) M2C_FIELD(var_2_11, s64 *, 8);
        M2C_FIELD(var_3_8, s64 *, 0x10) = (s64) M2C_FIELD(var_2_11, s64 *, 0x10);
        M2C_FIELD(var_3_8, s64 *, 0x18) = (s64) M2C_FIELD(var_2_11, s64 *, 0x18);
        var_2_11 += 0x20;
        var_3_8 += 0x20;
    } while (var_2_11 != (arg0 + 0x5E90));
    temp_4_3 = arg0 + 0x5AD0;
    var_2_12 = temp_6_6;
    var_3_9 = temp_4_3;
    do {
        M2C_FIELD(var_3_9, s64 *, 0) = (s64) M2C_FIELD(var_2_12, s64 *, 0);
        M2C_FIELD(var_3_9, s64 *, 8) = (s64) M2C_FIELD(var_2_12, s64 *, 8);
        M2C_FIELD(var_3_9, s64 *, 0x10) = (s64) M2C_FIELD(var_2_12, s64 *, 0x10);
        M2C_FIELD(var_3_9, s64 *, 0x18) = (s64) M2C_FIELD(var_2_12, s64 *, 0x18);
        var_2_12 += 0x20;
        var_3_9 += 0x20;
    } while (var_2_12 != temp_5_5);
    temp_5_6 = arg0 + 0x5990;
    var_2_13 = temp_4_3;
    var_3_10 = temp_5_6;
    do {
        M2C_FIELD(var_3_10, s64 *, 0) = (s64) M2C_FIELD(var_2_13, s64 *, 0);
        M2C_FIELD(var_3_10, s64 *, 8) = (s64) M2C_FIELD(var_2_13, s64 *, 8);
        M2C_FIELD(var_3_10, s64 *, 0x10) = (s64) M2C_FIELD(var_2_13, s64 *, 0x10);
        M2C_FIELD(var_3_10, s64 *, 0x18) = (s64) M2C_FIELD(var_2_13, s64 *, 0x18);
        var_2_13 += 0x20;
        var_3_10 += 0x20;
    } while (var_2_13 != temp_6_6);
    temp_6_7 = arg0 + 0x5850;
    var_2_14 = temp_5_6;
    var_3_11 = temp_6_7;
    do {
        M2C_FIELD(var_3_11, s64 *, 0) = (s64) M2C_FIELD(var_2_14, s64 *, 0);
        M2C_FIELD(var_3_11, s64 *, 8) = (s64) M2C_FIELD(var_2_14, s64 *, 8);
        M2C_FIELD(var_3_11, s64 *, 0x10) = (s64) M2C_FIELD(var_2_14, s64 *, 0x10);
        M2C_FIELD(var_3_11, s64 *, 0x18) = (s64) M2C_FIELD(var_2_14, s64 *, 0x18);
        var_2_14 += 0x20;
        var_3_11 += 0x20;
    } while (var_2_14 != temp_4_3);
    var_4_4 = arg0 + 0x5710;
    var_2_15 = temp_6_7;
    do {
        M2C_FIELD(var_4_4, s64 *, 0) = (s64) M2C_FIELD(var_2_15, s64 *, 0);
        M2C_FIELD(var_4_4, s64 *, 8) = (s64) M2C_FIELD(var_2_15, s64 *, 8);
        M2C_FIELD(var_4_4, s64 *, 0x10) = (s64) M2C_FIELD(var_2_15, s64 *, 0x10);
        M2C_FIELD(var_4_4, s64 *, 0x18) = (s64) M2C_FIELD(var_2_15, s64 *, 0x18);
        var_2_15 += 0x20;
        var_4_4 += 0x20;
    } while (var_2_15 != temp_5_6);
}
