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

extern s32 D_011B01A0;

s32 UploadPreTrans__8VIRasterPP10_sceDmaTag(void *arg0, void **arg1) {
    f32 temp_f0;
    s32 var_12;
    void *temp_10;
    void *temp_3;
    void *var_10;
    void *var_11;

    M2C_FIELD(*arg1, s8 *, 3) = 0x10;
    var_12 = 0x1F;
    var_11 = arg0;
    M2C_FIELD(*arg1, s32 *, 4) = 0;
    temp_3 = *arg1;
    temp_10 = temp_3 + 0x10;
    *arg1 = temp_3 + 0x220;
    M2C_FIELD(temp_3, s16 *, 0) = 0x21;
    M2C_FIELD(temp_10, s32 *, 8) = 0x10000000;
    M2C_FIELD(temp_3, s32 *, 0x10) = 0;
    M2C_FIELD(temp_10, s32 *, 4) = 0;
    M2C_FIELD(temp_10, s32 *, 0xC) = (s32) (D_011B01A0 | 0x6C200000);
    var_10 = temp_3 + 0x20;
    do {
        var_12 -= 1;
        M2C_FIELD(var_10, f32 *, 0) = (f32) M2C_FIELD(var_11, f32 *, 0x49F8);
        M2C_FIELD(var_10, f32 *, 4) = (f32) M2C_FIELD(var_11, f32 *, 0x49FC);
        temp_f0 = M2C_FIELD(var_11, f32 *, 0x4A00);
        var_11 += 0xC;
        M2C_FIELD(var_10, s32 *, 0xC) = 0;
        M2C_FIELD(var_10, f32 *, 8) = temp_f0;
        var_10 += 0x10;
    } while (var_12 >= 0);
    M2C_FIELD(arg0, s32 *, 0x45E8) = 0;
    return 0;
}
