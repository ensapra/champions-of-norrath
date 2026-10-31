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

s32 CullByTop__11VIClipStackRC8VISphere(void *arg0, void *arg1) {
    s32 temp_5_2;
    s32 var_2;
    s32 var_8;
    void *temp_5;
    void *var_6;

    var_8 = 0;
    temp_5 = M2C_FIELD(arg0, s32 *, 8) + ((M2C_FIELD(arg0, s32 *, 0) - 1) * 0x10);
    temp_5_2 = M2C_FIELD(temp_5, s32 *, 0);
    var_6 = M2C_FIELD(arg0, s32 *, 0x20) + (M2C_FIELD(temp_5, s32 *, 4) * 0x10);
    if (temp_5_2 > 0) {
loop_2:
        var_2 = 1;
        var_6 += 0x10;
        if (!(M2C_FIELD(arg1, f32 *, 0xC) < ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(var_6, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(var_6, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(var_6, f32 *, 8)) + M2C_FIELD(var_6, f32 *, 0xC)))) {
            var_8 += 1;
            if (var_8 >= temp_5_2) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_2 = 0;
    }
    return var_2;
}
