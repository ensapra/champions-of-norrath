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

s32 func_00153FA8(void *);                          /* extern */
extern void *D_0034B478;
extern void *D_0034B4A8;
extern f32 D_004810B4;
extern f32 D_004810B8;

void func_001FFB90(void *arg0) {
    f32 temp_6;
    f32 temp_6_2;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 *var_2;
    s16 *var_4;
    s16 *var_4_2;
    s16 temp_17;
    s16 temp_17_2;
    s16 temp_2;
    s16 temp_2_2;
    s32 temp_18;
    s32 temp_3;
    s32 temp_3_4;
    s32 var_3;
    s32 var_5;
    s32 var_5_2;
    s8 var_2_2;
    void *temp_3_2;
    void *temp_3_3;
    void *var_3_2;
    void *var_3_3;

    var_3 = 3;
    var_2 = arg0 + 0x444;
    temp_18 = arg0 + 0x408;
    do {
        var_3 -= 1;
        *var_2 = -1;
        var_2 -= 8;
    } while (var_3 >= 0);
    M2C_FIELD(arg0, s8 *, 0x9C) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x3C0) == 0x11) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0xD0);
        switch (temp_3) {                           /* irregular */
        case 1:
            temp_f20 = D_004810B4;
            temp_3_2 = M2C_FIELD(D_0034B4A8, void **, 0x60);
            temp_17 = M2C_FIELD((temp_3_2 + 0x60), s16 (**)(void *, M2C_UNK, M2C_UNK, void *), 4)(D_0034B4A8 + M2C_FIELD(temp_3_2, s16 *, 0x60), 0, M2C_ERROR(/* Read from unset register $f1 */), D_0034B4A8);
            var_4 = temp_18 + 0x24;
            var_5 = 0;
            var_3_2 = temp_18 + 0x2A;
            temp_6 = (f32) func_00153FA8(arg0) * 0.000015258789f;
loop_8:
            temp_2 = *var_4;
            if (temp_2 != -1) {
                if (temp_2 != 0x17) {
                    var_5 += 1;
                    var_3_2 += 8;
                    var_4 += 8;
                    if (var_5 < 4) {
                        goto loop_8;
                    }
                } else {
                    goto block_12;
                }
            } else {
block_12:
                *var_4 = 0x17;
                M2C_FIELD(var_3_2, s16 *, 0) = 0;
                M2C_FIELD(var_3_2, s16 *, -4) = temp_17;
                M2C_FIELD(var_3_2, s16 *, -2) = M2C_BITWISE(s16, temp_6);
            }
            var_2_2 = 4;
            goto block_29;
        case 2:
            temp_f20_2 = D_004810B8;
            temp_3_3 = M2C_FIELD(D_0034B478, void **, 0x60);
            temp_17_2 = M2C_FIELD((temp_3_3 + 0x60), s16 (**)(void *, M2C_UNK, M2C_UNK, void *), 4)(D_0034B478 + M2C_FIELD(temp_3_3, s16 *, 0x60), 0, M2C_ERROR(/* Read from unset register $f1 */), D_0034B478);
            var_4_2 = temp_18 + 0x24;
            var_5_2 = 0;
            var_3_3 = temp_18 + 0x2A;
            temp_6_2 = (f32) func_00153FA8(arg0) * 0.000015258789f;
loop_16:
            temp_2_2 = *var_4_2;
            if (temp_2_2 != -1) {
                if (temp_2_2 != 0x16) {
                    var_5_2 += 1;
                    var_3_3 += 8;
                    var_4_2 += 8;
                    if (var_5_2 < 4) {
                        goto loop_16;
                    }
                } else {
                    goto block_20;
                }
            } else {
block_20:
                *var_4_2 = 0x16;
                M2C_FIELD(var_3_3, s16 *, 0) = 0;
                M2C_FIELD(var_3_3, s16 *, -4) = temp_17_2;
                M2C_FIELD(var_3_3, s16 *, -2) = M2C_BITWISE(s16, temp_6_2);
            }
            var_2_2 = 3;
            goto block_29;
        }
    } else {
        temp_3_4 = M2C_FIELD(arg0, s32 *, 0xD0);
        var_2_2 = 3;
        if (temp_3_4 != 2) {
            if (temp_3_4 < 3) {
                var_2_2 = 4;
                if (temp_3_4 != 1) {
                    return;
                }
                goto block_29;
            }
            if (temp_3_4 < 5) {
                var_2_2 = 2;
                goto block_29;
            }
        } else {
block_29:
            M2C_FIELD(arg0, s8 *, 0x9C) = var_2_2;
        }
    }
}
