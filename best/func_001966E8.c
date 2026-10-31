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

extern void *D_00480488;

u32 func_001966E8(void *arg0, void *arg1) {
    s32 *temp_3;
    s32 temp_10;
    s32 temp_18;
    s32 temp_4;
    s32 temp_5;
    s32 var_8;
    u32 temp_9;
    u32 var_2;
    u32 var_6;
    void *temp_7;

    temp_18 = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE8)(M2C_FIELD(arg1, s32 *, 0));
    temp_9 = M2C_FIELD(arg0, u32 *, 0x68);
    temp_10 = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 4));
    var_6 = 0;
    if (temp_9 != 0) {
        var_8 = 0;
loop_2:
        temp_7 = M2C_FIELD(arg0, s32 *, 0x78) + var_8;
        temp_3 = M2C_FIELD(arg0, s32 *, 0x6C) + (M2C_FIELD(temp_7, u16 *, 0x180) * 0x10);
        temp_4 = M2C_FIELD(temp_3, s32 *, 0);
        var_8 += 0x198;
        if ((temp_18 < temp_4) || (temp_5 = M2C_FIELD(temp_3, s32 *, 4), ((temp_10 < temp_5) != 0)) || (temp_18 >= (temp_4 + M2C_FIELD(temp_3, u16 *, 0xC))) || (temp_10 >= (temp_5 + M2C_FIELD(temp_3, u16 *, 0xE))) || (var_2 = var_6, ((M2C_FIELD(temp_7, s32 *, 0x18C) & 0x34) != 0))) {
            var_6 += 1;
            if (var_6 >= temp_9) {
                goto block_8;
            }
            goto loop_2;
        }
    } else {
block_8:
        var_2 = -1U;
    }
    return var_2;
}
