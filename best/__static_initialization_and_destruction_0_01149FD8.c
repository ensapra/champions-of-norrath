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

extern M2C_UNK D_011B0298;
extern M2C_UNK D_011B0DD8;
extern M2C_UNK D_011B0F58;

void __static_initialization_and_destruction_0_01149FD8(s32 arg0, s32 arg1) {
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    M2C_UNK *var_2_3;
    M2C_UNK *var_3;
    M2C_UNK *var_3_2;
    M2C_UNK *var_3_3;
    M2C_UNK *var_7;
    s32 var_10;
    s32 var_4;
    s32 var_5;
    s32 var_6;
    s32 var_6_2;
    s32 var_7_2;
    s32 var_8;

    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            var_2 = &D_011B0298;
            var_10 = 1;
            do {
                var_7 = var_2;
                var_8 = 0x1D;
loop_4:
                var_3 = var_7;
                var_6 = 3;
loop_5:
                var_6 -= 1;
                M2C_FIELD(var_3, f32 *, 0) = 0.0f;
                M2C_FIELD(var_3, f32 *, 4) = 0.0f;
                M2C_FIELD(var_3, f32 *, 8) = 0.0f;
                var_3 += 0xC;
                if (var_6 != -1) {
                    goto loop_5;
                }
                var_8 -= 1;
                var_7 += 0x30;
                if (var_8 != -1) {
                    goto loop_4;
                }
                var_10 -= 1;
                var_2 += 0x5A0;
            } while (var_10 != -1);
        }
        if (arg1 == 0xFFFF) {
            if (arg0 == 1) {
                var_2_2 = &D_011B0DD8;
                var_7_2 = 7;
                do {
                    var_3_2 = var_2_2;
                    var_6_2 = 3;
loop_13:
                    var_6_2 -= 1;
                    M2C_FIELD(var_3_2, f32 *, 0) = 0.0f;
                    M2C_FIELD(var_3_2, f32 *, 4) = 0.0f;
                    M2C_FIELD(var_3_2, f32 *, 8) = 0.0f;
                    var_3_2 += 0xC;
                    if (var_6_2 != -1) {
                        goto loop_13;
                    }
                    var_7_2 -= 1;
                    var_2_2 += 0x30;
                } while (var_7_2 != -1);
            }
            if ((arg1 == 0xFFFF) && (arg0 == 1)) {
                var_2_3 = &D_011B0F58;
                var_5 = 0x3B;
                do {
                    var_3_3 = var_2_3;
                    var_4 = 3;
loop_20:
                    var_4 -= 1;
                    M2C_FIELD(var_3_3, f32 *, 0) = 0.0f;
                    M2C_FIELD(var_3_3, f32 *, 4) = 0.0f;
                    M2C_FIELD(var_3_3, f32 *, 8) = 0.0f;
                    var_3_3 += 0xC;
                    if (var_4 != -1) {
                        goto loop_20;
                    }
                    var_5 -= 1;
                    var_2_3 += 0x30;
                } while (var_5 != -1);
            }
        }
    }
}
