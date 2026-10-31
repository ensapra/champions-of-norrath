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

u32 func_00196464(void *arg0, void *arg1) {
    s32 *temp_6;
    s32 temp_3;
    s32 temp_4;
    s32 temp_5;
    s32 temp_7;
    s32 var_10;
    u32 temp_12;
    u32 var_11;
    u32 var_2;
    void *temp_9;

    var_11 = 0;
    temp_12 = M2C_FIELD(arg0, u32 *, 0x68);
    temp_5 = M2C_FIELD(arg1, s32 *, 4) + ((u16) M2C_FIELD(arg1, u16 *, 0xE) >> 1);
    temp_4 = M2C_FIELD(arg1, s32 *, 0) + ((u16) M2C_FIELD(arg1, u16 *, 0xC) >> 1);
    if (temp_12 != 0) {
        var_10 = 0;
loop_2:
        temp_9 = M2C_FIELD(arg0, s32 *, 0x78) + var_10;
        temp_6 = M2C_FIELD(arg0, s32 *, 0x6C) + (M2C_FIELD(temp_9, u16 *, 0x180) * 0x10);
        temp_3 = M2C_FIELD(temp_6, s32 *, 0);
        var_10 += 0x198;
        if ((temp_4 < temp_3) || (temp_7 = M2C_FIELD(temp_6, s32 *, 4), ((temp_5 < temp_7) != 0)) || (temp_4 >= (temp_3 + M2C_FIELD(temp_6, u16 *, 0xC))) || (temp_5 >= (temp_7 + M2C_FIELD(temp_6, u16 *, 0xE))) || (var_2 = var_11, ((M2C_FIELD(temp_9, u8 *, 0x18C) & 0x34) != 0))) {
            var_11 += 1;
            if (var_11 >= temp_12) {
                goto block_8;
            }
            goto loop_2;
        }
    } else {
block_8:
        var_2 = 0;
    }
    return var_2;
}
