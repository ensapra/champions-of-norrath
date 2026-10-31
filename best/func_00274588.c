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

extern M2C_UNK D_0034BEC0;
extern M2C_UNK D_0040DB70;
extern f32 D_004821D4;
extern f32 D_004821D8;
extern s32 D_00483F1C;
extern s8 D_00484318;

void func_00274588(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f1;
    s32 temp_2_4;
    s32 temp_4;
    s32 temp_4_2;
    s32 var_17;
    s8 temp_2_2;
    s8 temp_2_3;
    s8 var_3;
    void *temp_2;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;

    temp_f20 = D_004821D4;
    if (M2C_FIELD(arg0, s32 *, 0x864) == 0) {
        if (D_00484318 == 0) {
            temp_4 = M2C_FIELD(arg0, s32 *, 0x3BC);
            var_17 = 0;
            if ((temp_4 != -1) && (M2C_FIELD(arg0, s32 *, 0x40C) == 0) && (D_00483F1C == 0)) {
                temp_2 = *(&D_0040DB70 + (temp_4 * 0x5DB0));
                if ((temp_2 != NULL) && (M2C_FIELD(temp_2, s32 *, 0xC) & 0x400000)) {

                } else if (M2C_FIELD(arg0, s32 *, 0x868) != 0) {
                    var_17 = *(&D_0034BEC0 + (temp_4 * 0x58)) & 0x80;
                } else {
                    var_17 = *(&D_0034BEC0 + (temp_4 * 0x58)) & 0x40;
                }
            }
        } else {
            var_17 = M2C_FIELD(arg0, s32 *, 0x410);
        }
        temp_2_2 = M2C_FIELD(arg0, s8 *, 0x6D);
        var_3 = temp_2_2;
        if (temp_2_2 != 0) {
            temp_2_3 = var_3 - 1;
            M2C_FIELD(arg0, s8 *, 0x6D) = temp_2_3;
            var_3 = temp_2_3;
        }
        temp_2_4 = var_3 << 0x18;
        if (var_17 != 0) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x2E4);
            if (temp_2_4 == 0) {
                if (temp_f1 != 0.0f) {
                    var_f0 = temp_f1 + temp_f20;
                } else {
                    temp_2_5 = M2C_FIELD(arg0, void **, 0x48);
                    M2C_FIELD((temp_2_5 + 0xB0), M2C_UNK (**)(void *), 4)(arg0 + M2C_FIELD(temp_2_5, s16 *, 0xB0));
                    M2C_FIELD(arg0, s8 *, 0x6D) = 0x1E;
                    goto block_30;
                }
            } else {
block_30:
                var_f0 = M2C_FIELD(arg0, f32 *, 0x2E4) + temp_f20;
            }
        } else {
            if ((temp_2_4 == 0) && (M2C_FIELD(arg0, f32 *, 0x2E4) == 1.0f)) {
                temp_2_6 = M2C_FIELD(arg0, void **, 0x48);
                M2C_FIELD((temp_2_6 + 0xB8), M2C_UNK (**)(void *), 4)(arg0 + M2C_FIELD(temp_2_6, s16 *, 0xB8));
                M2C_FIELD(arg0, s8 *, 0x6D) = 0x1E;
            }
            var_f0 = M2C_FIELD(arg0, f32 *, 0x2E4) - temp_f20;
        }
        M2C_FIELD(arg0, f32 *, 0x2E4) = var_f0;
        var_f1 = M2C_FIELD(arg0, f32 *, 0x2E4);
        if (var_f1 < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x2E4) = 0.0f;
            var_f1 = 0.0f;
        }
        if (var_f1 > 1.0f) {
            M2C_FIELD(arg0, f32 *, 0x2E4) = 1.0f;
        }
        if (M2C_FIELD(arg0, s32 *, 0x868) != 0) {
            temp_4_2 = M2C_FIELD(arg0, s32 *, 0x3BC);
            if (temp_4_2 == -1) {
                M2C_FIELD(arg0, s32 *, 0x868) = 0;
            }
            if ((var_17 == 0) && (M2C_FIELD(arg0, f32 *, 0x348) < 1.0f)) {
                M2C_FIELD(arg0, s32 *, 0x868) = 0;
            }
            if ((M2C_FIELD(arg0, s32 *, 0x40C) == 0) && (D_00483F1C == 0) && ((temp_2_7 = *(&D_0040DB70 + (temp_4_2 * 0x5DB0)), (temp_2_7 == NULL)) || !(M2C_FIELD(temp_2_7, s32 *, 0xC) & 0x400000)) && (*(&D_0034BEC0 + (temp_4_2 * 0x58)) & 0x40)) {
                if (M2C_FIELD(arg0, f32 *, 0x348) < 4.0f) {
                    M2C_FIELD(arg0, s32 *, 0x868) = 0;
                    return;
                }
                M2C_FIELD(arg0, f32 *, 0x2E8) = 1.0f;
            }
        }
    } else {
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x340);
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2E4) + (((M2C_FIELD(arg0, f32 *, 0x350) / temp_f3) - (M2C_FIELD(arg0, f32 *, 0x348) / temp_f3)) * 0.5f * D_004821D8);
        M2C_FIELD(arg0, f32 *, 0x2E4) = temp_f1_2;
        if (temp_f1_2 < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x2E4) = 0.0f;
        }
        if (M2C_FIELD(arg0, f32 *, 0x2E4) > 1.0f) {
            M2C_FIELD(arg0, f32 *, 0x2E4) = 1.0f;
        }
    }
}
