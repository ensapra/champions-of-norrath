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

void Union__6VIBBoxRC6VIBBoxT1(void *arg0, void *arg1, void *arg2) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;

    var_f0 = M2C_FIELD(arg2, f32 *, 0);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0);
    if (!(var_f0 < temp_f1)) {
        var_f0 = temp_f1;
    }
    M2C_FIELD(arg0, f32 *, 0) = var_f0;
    var_f0_2 = M2C_FIELD(arg2, f32 *, 4);
    temp_f1_2 = M2C_FIELD(arg1, f32 *, 4);
    if (!(var_f0_2 < temp_f1_2)) {
        var_f0_2 = temp_f1_2;
    }
    M2C_FIELD(arg0, f32 *, 4) = var_f0_2;
    var_f0_3 = M2C_FIELD(arg2, f32 *, 8);
    temp_f1_3 = M2C_FIELD(arg1, f32 *, 8);
    if (!(var_f0_3 < temp_f1_3)) {
        var_f0_3 = temp_f1_3;
    }
    M2C_FIELD(arg0, f32 *, 8) = var_f0_3;
    var_f0_4 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_f1_4 = M2C_FIELD(arg2, f32 *, 0xC);
    if (!(temp_f1_4 < var_f0_4)) {
        var_f0_4 = temp_f1_4;
    }
    M2C_FIELD(arg0, f32 *, 0xC) = var_f0_4;
    var_f0_5 = M2C_FIELD(arg1, f32 *, 0x10);
    temp_f1_5 = M2C_FIELD(arg2, f32 *, 0x10);
    if (!(temp_f1_5 < var_f0_5)) {
        var_f0_5 = temp_f1_5;
    }
    M2C_FIELD(arg0, f32 *, 0x10) = var_f0_5;
    var_f0_6 = M2C_FIELD(arg1, f32 *, 0x14);
    temp_f1_6 = M2C_FIELD(arg2, f32 *, 0x14);
    if (!(temp_f1_6 < var_f0_6)) {
        var_f0_6 = temp_f1_6;
    }
    M2C_FIELD(arg0, f32 *, 0x14) = var_f0_6;
}
