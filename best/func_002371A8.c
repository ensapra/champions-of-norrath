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

M2C_UNK func_001092F0(void *, s32, f32, f32, f32, f32, f32); /* extern */
s32 func_00153FA8(void *);                          /* extern */
extern void *D_0034B474;
extern void *D_0034B478;
extern void *D_0034B4A4;
extern f32 D_00481B1C;
extern f32 D_00481B20;
extern f32 D_00481B24;
extern f32 D_00481B28;
extern f32 D_00481B2C;
extern f32 D_00481B30;
extern f32 D_00481B34;
extern f32 D_00481B38;
extern f32 D_00481B3C;
extern f32 D_00481B40;
extern f32 D_00481B44;
extern f32 D_00481B48;
extern f32 D_00481B4C;
extern f32 D_00481B50;
extern f32 D_00481B54;

void func_002371A8(void *arg0, s32 arg1) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f13;
    f32 var_f14;
    f32 var_f15;
    f32 var_f15_2;
    f32 var_f16;
    f32 var_f16_2;
    s16 *var_2;
    s16 *var_4;
    s16 *var_4_2;
    s16 *var_4_3;
    s16 temp_17;
    s16 temp_17_2;
    s16 temp_17_3;
    s16 temp_2;
    s16 temp_2_2;
    s16 temp_2_3;
    s16 temp_6;
    s16 temp_6_2;
    s16 temp_6_3;
    s32 temp_3_2;
    s32 var_3;
    s32 var_5;
    s32 var_5_2;
    s32 var_5_3;
    s32 var_5_4;
    s32 var_5_5;
    u32 temp_3;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *var_18;
    void *var_3_2;
    void *var_3_3;
    void *var_3_4;

    M2C_FIELD(arg0, s8 *, 0x9C) = 0;
    temp_3 = M2C_FIELD(arg0, u32 *, 0x3C0);
    switch (temp_3) {                               /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_18 = arg0 + 0x408;
        break;
    case 0:                                         /* switch 1 */
        var_f12 = 1.0f;
        var_5 = arg1 ^ 1;
        var_f13 = 1.0f;
        var_f14 = 1.0f;
        var_f15 = 1.0f;
        var_f16 = 1.0f;
block_13:
        var_18 = arg0 + 0x408;
        func_001092F0(arg0, var_5, var_f12, var_f13, var_f14, var_f15, var_f16);
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) D_00481B30;
        M2C_FIELD(arg0, f32 *, 0x64) = 0.5f;
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) D_00481B34;
        break;
    case 2:                                         /* switch 1 */
        var_f12 = D_00481B1C;
        var_5 = arg1 ^ 1;
        var_f13 = var_f12;
        var_f14 = var_f12;
        var_f15 = var_f12;
        var_f16 = var_f12;
        goto block_13;
    case 1:                                         /* switch 1 */
        var_f12_2 = 1.0f;
        var_5_2 = arg1 ^ 1;
        var_f15_2 = 1.0f;
        var_f16_2 = 1.0f;
block_15:
        var_18 = arg0 + 0x408;
        func_001092F0(arg0, var_5_2, var_f12_2, 1.0f, 1.0f, var_f15_2, var_f16_2);
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) D_00481B40;
        M2C_FIELD(arg0, f32 *, 0x64) = 0.5f;
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) D_00481B44;
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) D_00481B48;
        M2C_FIELD(arg0, s8 *, 0x9C) = 6;
        break;
    case 3:                                         /* switch 1 */
        var_5_2 = arg1 ^ 1;
        var_f12_2 = D_00481B20;
        var_f15_2 = 1.0f;
        var_f16_2 = 1.0f;
        goto block_15;
    case 4:                                         /* switch 1 */
        var_f13 = D_00481B24;
        var_5 = arg1 ^ 1;
        var_f12 = 1.5f;
        var_f14 = D_00481B28;
        var_f16 = var_f13;
        var_f15 = D_00481B2C;
        goto block_13;
    case 5:                                         /* switch 1 */
        var_5_2 = arg1 ^ 1;
        var_f15_2 = D_00481B38;
        var_f12_2 = D_00481B3C;
        var_f16_2 = var_f15_2;
        goto block_15;
    }
    var_3 = 3;
    var_2 = arg0 + 0x444;
    do {
        var_3 -= 1;
        *var_2 = -1;
        var_2 -= 8;
    } while (var_3 >= 0);
    temp_3_2 = M2C_FIELD(arg0, s32 *, 0xD0);
    switch (temp_3_2) {                             /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        temp_3_3 = M2C_FIELD(D_0034B4A4, void **, 0x60);
        temp_17 = M2C_FIELD((temp_3_3 + 0x60), s16 (**)(void *, M2C_UNK, M2C_UNK, void *), 4)(D_0034B4A4 + M2C_FIELD(temp_3_3, s16 *, 0x60), 0, M2C_ERROR(/* Read from unset register $f1 */), D_0034B4A4);
        temp_f20 = (f32) temp_17 * D_00481B4C;
        var_4 = var_18 + 0x24;
        var_5_3 = 0;
        var_3_2 = var_18 + 0x2A;
        temp_6 = temp_17 + M2C_BITWISE(s32, ((f32) func_00153FA8(arg0) * 0.000015258789f));
loop_26:
        temp_2 = *var_4;
        if (temp_2 != -1) {
            if (temp_2 != 0x26) {
                var_5_3 += 1;
                var_3_2 += 8;
                var_4 += 8;
                if (var_5_3 < 4) {
                    goto loop_26;
                }
            } else {
                goto block_30;
            }
        } else {
block_30:
            *var_4 = 0x26;
            M2C_FIELD(var_3_2, s16 *, 0) = 0;
            M2C_FIELD(var_3_2, s16 *, -4) = temp_17;
            M2C_FIELD(var_3_2, s16 *, -2) = temp_6;
        }
        M2C_FIELD(arg0, s8 *, 0x9C) = 7;
        return;
    case 2:                                         /* switch 2 */
        if (M2C_FIELD(arg0, u32 *, 0x3C0) == temp_3_2) {
            temp_3_4 = M2C_FIELD(D_0034B478, void **, 0x60);
            temp_17_2 = M2C_FIELD((temp_3_4 + 0x60), s16 (**)(void *, M2C_UNK, M2C_UNK, void *), 4)(D_0034B478 + M2C_FIELD(temp_3_4, s16 *, 0x60), 0, M2C_ERROR(/* Read from unset register $f1 */), D_0034B478);
            temp_f20_2 = (f32) temp_17_2 * D_00481B50;
            var_4_2 = var_18 + 0x24;
            var_5_4 = 0;
            var_3_3 = var_18 + 0x2A;
            temp_6_2 = temp_17_2 + M2C_BITWISE(s32, ((f32) func_00153FA8(arg0) * 0.000015258789f));
loop_36:
            temp_2_2 = *var_4_2;
            if (temp_2_2 != -1) {
                if (temp_2_2 != 0x16) {
                    var_5_4 += 1;
                    var_3_3 += 8;
                    var_4_2 += 8;
                    if (var_5_4 < 4) {
                        goto loop_36;
                    }
                } else {
                    goto block_40;
                }
            } else {
block_40:
                *var_4_2 = 0x16;
                M2C_FIELD(var_3_3, s16 *, 0) = 0;
                M2C_FIELD(var_3_3, s16 *, -4) = temp_17_2;
                M2C_FIELD(var_3_3, s16 *, -2) = temp_6_2;
            }
            M2C_FIELD(arg0, s8 *, 0x9C) = 3;
            return;
        }
        temp_3_5 = M2C_FIELD(D_0034B474, void **, 0x60);
        temp_17_3 = M2C_FIELD((temp_3_5 + 0x60), s16 (**)(void *, M2C_UNK, M2C_UNK, void *), 4)(D_0034B474 + M2C_FIELD(temp_3_5, s16 *, 0x60), 0, M2C_ERROR(/* Read from unset register $f1 */), D_0034B474);
        temp_f20_3 = (f32) temp_17_3 * D_00481B54;
        var_4_3 = var_18 + 0x24;
        var_5_5 = 0;
        var_3_4 = var_18 + 0x2A;
        temp_6_3 = temp_17_3 + M2C_BITWISE(s32, ((f32) func_00153FA8(arg0) * 0.000015258789f));
loop_45:
        temp_2_3 = *var_4_3;
        if (temp_2_3 != -1) {
            if (temp_2_3 != 0x15) {
                var_5_5 += 1;
                var_3_4 += 8;
                var_4_3 += 8;
                if (var_5_5 < 4) {
                    goto loop_45;
                }
            } else {
                goto block_49;
            }
        } else {
block_49:
            *var_4_3 = 0x15;
            M2C_FIELD(var_3_4, s16 *, 0) = 0;
            M2C_FIELD(var_3_4, s16 *, -4) = temp_17_3;
            M2C_FIELD(var_3_4, s16 *, -2) = temp_6_3;
        }
        M2C_FIELD(arg0, s8 *, 0x9C) = 2;
        return;
    case 3:                                         /* switch 2 */
        M2C_FIELD(arg0, s8 *, 0x9C) = 8;
        return;
    case 4:                                         /* switch 2 */
        M2C_FIELD(arg0, s8 *, 0x9C) = 8;
        M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        return;
    }
}
