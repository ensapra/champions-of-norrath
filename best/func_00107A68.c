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

s32 func_00107BF0();                                /* extern */
extern M2C_UNK xmlListPopFront;
extern M2C_UNK xmlListSize;

s32 func_00107A68(void) {
    s32 *temp_8;
    s32 *var_2_2;
    s32 temp_3_2;
    s32 temp_4;
    s32 var_2;
    s32 var_4;
    s32 var_5;
    void *temp_3;

    temp_3 = &xmlListSize + 0x18 + (func_00107BF0() * 0x14);
    temp_4 = M2C_FIELD(temp_3, s32 *, 0xC);
    var_5 = 0;
    if (temp_4 > 0) {
        temp_8 = M2C_FIELD(temp_3, s32 **, 0);
        var_4 = 0;
        var_2_2 = temp_8;
loop_2:
        var_4 += 0x1C;
        temp_3_2 = *var_2_2;
        var_2 = temp_3_2;
        if (temp_3_2 != M2C_FIELD(&xmlListPopFront, s32 *, 8)) {
            var_5 += 1;
            var_2_2 = temp_8 + var_4;
            if (var_5 >= temp_4) {
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
