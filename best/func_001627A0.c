/* machine draft (m2c), tried by autopilot */
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

M2C_UNK func_00161DF0(void *, s32);                     /* extern */
extern u8 D_006CA1C0[];

void func_001627A0(M2C_UNK **arg0, s32 arg1, void *arg2) {
    u8 *var_5;
    f32 *var_3;
    s16 *var_4;
    s16 temp_2_2;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_2;
    s32 var_6;
    s32 var_8;
    s32 var_9;
    void *temp_6;
    void *var_7;

    if (*arg0 == NULL) {
        func_00161DF0(arg0, 0);
    }
    var_5 = (u8*)*arg0;
    if (var_5 == NULL) {
        var_5 = D_006CA1C0;
    }
    temp_2 = M2C_FIELD(var_5, s16 *, 8) - 1;
    { s32 zero=0; if(!(zero<arg1)) arg1=zero; }
    var_8 = 0;
    if(arg1>=temp_2) arg1=temp_2;
    var_9 = 0;
    var_7 = (arg1 * 0x18) + var_5;
    do {
        var_4 = var_7 + 0x10;
        var_6 = 2;
        var_3 = (f32*)(((var_9 + var_8) * 4) + (u8*)arg2);
loop_6:
        temp_2_2 = *var_4;
        var_4 += 4;
        var_6 -= 1;
        *var_3 = (f32) temp_2_2 * (1.0f/4096.0f);
        var_3 += 1;
        if (var_6 >= 0) {
            goto loop_6;
        }
        var_8 += 1;
        var_9 += 2;
        var_7 += 2;
    } while (var_8 < 3);
    temp_6 = (arg1 * 0x18) + var_5;
    M2C_FIELD(arg2, f32 *, 0x24) = (f32) ((f32) M2C_FIELD(temp_6, s16 *, 0x16) * 0.015625f);
    M2C_FIELD(arg2, f32 *, 0x28) = (f32) ((f32) M2C_FIELD(temp_6, s16 *, 0x1E) * 0.015625f);
    M2C_FIELD(arg2, f32 *, 0x2C) = (f32) ((f32) M2C_FIELD(temp_6, s16 *, 0x26) * 0.015625f);
}
