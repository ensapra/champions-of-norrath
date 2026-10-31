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

void func_00160FD4(void *arg0) {
    s32 var_5;
    void *temp_10;
    void *temp_10_2;
    void *temp_10_3;
    void *temp_10_4;
    void *temp_10_5;
    void *temp_11;
    void *temp_13;
    void *var_10;

    temp_11 = arg0 + 0x910;
    temp_13 = temp_11 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x19C0);
    var_10 = temp_13 + 0x70;
    if (M2C_FIELD(temp_11, s32 *, 0x33B0) != 0) {
        M2C_FIELD(temp_13, u8 *, 0x70) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A0);
        M2C_FIELD(var_10, u8 *, 1) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A1);
        M2C_FIELD(var_10, u8 *, 2) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A2);
        M2C_FIELD(var_10, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_11, u8 *, 0x33A3)) / 255);
        temp_10 = temp_13 + 0x90;
        M2C_FIELD(temp_13, u8 *, 0x90) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A0);
        M2C_FIELD(temp_10, u8 *, 1) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A1);
        M2C_FIELD(temp_10, u8 *, 2) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A2);
        M2C_FIELD(temp_10, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_11, u8 *, 0x33A3)) / 255);
        temp_10_2 = temp_13 + 0xB0;
        M2C_FIELD(temp_13, u8 *, 0xB0) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A4);
        M2C_FIELD(temp_10_2, u8 *, 1) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A5);
        M2C_FIELD(temp_10_2, u8 *, 2) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A6);
        M2C_FIELD(temp_10_2, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_11, u8 *, 0x33A7)) / 255);
        temp_10_3 = temp_13 + 0xD0;
        M2C_FIELD(temp_13, u8 *, 0xD0) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A4);
        M2C_FIELD(temp_10_3, u8 *, 1) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A5);
        M2C_FIELD(temp_10_3, u8 *, 2) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A6);
        M2C_FIELD(temp_10_3, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_11, u8 *, 0x33A7)) / 255);
        temp_10_4 = temp_13 + 0xF0;
        M2C_FIELD(temp_13, u8 *, 0xF0) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A8);
        M2C_FIELD(temp_10_4, u8 *, 1) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A9);
        M2C_FIELD(temp_10_4, u8 *, 2) = (u8) M2C_FIELD(temp_11, u8 *, 0x33AA);
        M2C_FIELD(temp_10_4, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_11, u8 *, 0x33AB)) / 255);
        temp_10_5 = temp_13 + 0x110;
        M2C_FIELD(temp_13, u8 *, 0x110) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A8);
        M2C_FIELD(temp_10_5, u8 *, 1) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A9);
        M2C_FIELD(temp_10_5, u8 *, 2) = (u8) M2C_FIELD(temp_11, u8 *, 0x33AA);
        M2C_FIELD(temp_10_5, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_11, u8 *, 0x33AB)) / 255);
        return;
    }
    var_5 = 5;
    do {
        var_5 -= 1;
        M2C_FIELD(var_10, u8 *, 0) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A0);
        M2C_FIELD(var_10, u8 *, 1) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A1);
        M2C_FIELD(var_10, u8 *, 2) = (u8) M2C_FIELD(temp_11, u8 *, 0x33A2);
        M2C_FIELD(var_10, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_11, u8 *, 0x33A3)) / 255);
        var_10 += 0x20;
    } while (var_5 >= 0);
}
