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
extern void *D_0034B470;
extern void *D_0034B474;
extern void *D_0034B478;
extern f32 D_00481F34;
extern f32 D_00481F38;
extern f32 D_00481F3C;

void func_00246598(void *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    s16 *var_2;
    s16 *var_4;
    s16 *var_4_2;
    s16 *var_4_3;
    s16 temp_16;
    s16 temp_16_2;
    s16 temp_16_3;
    s16 temp_2;
    s16 temp_2_2;
    s16 temp_2_3;
    s16 temp_6;
    s16 temp_6_2;
    s16 temp_6_3;
    s32 temp_18;
    s32 temp_3;
    s32 var_3;
    s32 var_5;
    s32 var_5_2;
    s32 var_5_3;
    s8 var_2_2;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *var_3_2;
    void *var_3_3;
    void *var_3_4;

    var_3 = 3;
    temp_18 = arg0 + 0x408;
    var_2 = arg0 + 0x444;
    M2C_FIELD(arg0, s8 *, 0x9C) = 0;
    do {
        var_3 -= 1;
        *var_2 = -1;
        var_2 -= 8;
    } while (var_3 >= 0);
    temp_3 = M2C_FIELD(arg0, s32 *, 0xD0);
    switch (temp_3) {                               /* irregular */
    case 1:
        temp_3_2 = M2C_FIELD(D_0034B474, void **, 0x60);
        temp_16 = M2C_FIELD((temp_3_2 + 0x60), s16 (**)(void *, M2C_UNK, M2C_UNK, void *), 4)(D_0034B474 + M2C_FIELD(temp_3_2, s16 *, 0x60), 0, M2C_ERROR(/* Read from unset register $f1 */), D_0034B474);
        temp_f20 = (f32) temp_16 * D_00481F34;
        var_4 = temp_18 + 0x24;
        var_5 = 0;
        var_3_2 = temp_18 + 0x2A;
        temp_6 = temp_16 + M2C_BITWISE(s32, ((f32) func_00153FA8(arg0) * 0.000015258789f));
loop_9:
        temp_2 = *var_4;
        if (temp_2 != -1) {
            if (temp_2 != 0x15) {
                var_5 += 1;
                var_3_2 += 8;
                var_4 += 8;
                if (var_5 < 4) {
                    goto loop_9;
                }
            } else {
                goto block_13;
            }
        } else {
block_13:
            *var_4 = 0x15;
            M2C_FIELD(var_3_2, s16 *, 0) = 0;
            M2C_FIELD(var_3_2, s16 *, -4) = temp_16;
            M2C_FIELD(var_3_2, s16 *, -2) = temp_6;
        }
        var_2_2 = 2;
block_32:
        M2C_FIELD(arg0, s8 *, 0x9C) = var_2_2;
        return;
    case 2:
        temp_3_3 = M2C_FIELD(D_0034B478, void **, 0x60);
        temp_16_2 = M2C_FIELD((temp_3_3 + 0x60), s16 (**)(void *, M2C_UNK, M2C_UNK, void *), 4)(D_0034B478 + M2C_FIELD(temp_3_3, s16 *, 0x60), 0, M2C_ERROR(/* Read from unset register $f1 */), D_0034B478);
        temp_f20_2 = (f32) temp_16_2 * D_00481F38;
        var_4_2 = temp_18 + 0x24;
        var_5_2 = 0;
        var_3_3 = temp_18 + 0x2A;
        temp_6_2 = temp_16_2 + M2C_BITWISE(s32, ((f32) func_00153FA8(arg0) * 0.000015258789f));
loop_17:
        temp_2_2 = *var_4_2;
        if (temp_2_2 != -1) {
            if (temp_2_2 != 0x16) {
                var_5_2 += 1;
                var_3_3 += 8;
                var_4_2 += 8;
                if (var_5_2 < 4) {
                    goto loop_17;
                }
            } else {
                goto block_21;
            }
        } else {
block_21:
            *var_4_2 = 0x16;
            M2C_FIELD(var_3_3, s16 *, 0) = 0;
            M2C_FIELD(var_3_3, s16 *, -4) = temp_16_2;
            M2C_FIELD(var_3_3, s16 *, -2) = temp_6_2;
        }
        var_2_2 = 3;
        goto block_32;
    case 3:
        temp_3_4 = M2C_FIELD(D_0034B470, void **, 0x60);
        temp_16_3 = M2C_FIELD((temp_3_4 + 0x60), s16 (**)(void *, M2C_UNK, M2C_UNK, void *), 4)(D_0034B470 + M2C_FIELD(temp_3_4, s16 *, 0x60), 0, M2C_ERROR(/* Read from unset register $f1 */), D_0034B470);
        temp_f20_3 = (f32) temp_16_3 * D_00481F3C;
        var_4_3 = temp_18 + 0x24;
        var_5_3 = 0;
        var_3_4 = temp_18 + 0x2A;
        temp_6_3 = temp_16_3 + M2C_BITWISE(s32, ((f32) func_00153FA8(arg0) * 0.000015258789f));
loop_25:
        temp_2_3 = *var_4_3;
        if (temp_2_3 != -1) {
            if (temp_2_3 != 0x18) {
                var_5_3 += 1;
                var_3_4 += 8;
                var_4_3 += 8;
                if (var_5_3 < 4) {
                    goto loop_25;
                }
            } else {
                goto block_29;
            }
        } else {
block_29:
            *var_4_3 = 0x18;
            M2C_FIELD(var_3_4, s16 *, 0) = 0;
            M2C_FIELD(var_3_4, s16 *, -4) = temp_16_3;
            M2C_FIELD(var_3_4, s16 *, -2) = temp_6_3;
        }
        var_2_2 = 1;
        goto block_32;
    }
}
