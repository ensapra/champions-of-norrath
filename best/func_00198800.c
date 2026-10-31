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
extern M2C_UNK xmlCreateIOParserCtxt;
extern M2C_UNK xmlCreatePushParserCtxt;

s32 func_00198800(void *arg1) {
    s32 temp_16;
    s32 temp_17;
    s32 temp_18;
    s32 temp_4;
    s32 temp_5;
    s32 temp_7;
    s32 var_2;
    s32 var_2_2;
    s32 var_6;
    void *temp_3;

    temp_18 = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE8)(M2C_FIELD(arg1, s32 *, 0));
    temp_17 = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 4));
    temp_16 = M2C_FIELD(&xmlCreatePushParserCtxt, s32 *, 0x138);
    var_6 = 0;
    temp_7 = M2C_FIELD(D_00480488, s32 (**)(), 0x14)();
    if (temp_16 > 0) {
        var_2_2 = 0 * 0x10;
loop_2:
        temp_3 = &xmlCreateIOParserCtxt + 0x20 + var_2_2;
        temp_4 = M2C_FIELD(temp_3, s32 *, 0);
        if ((temp_18 < temp_4) || (temp_5 = M2C_FIELD(temp_3, s32 *, 4), ((temp_17 < temp_5) != 0)) || (temp_18 >= (temp_4 + M2C_FIELD(temp_3, u16 *, 0xC))) || (var_2 = var_6 - temp_7, ((temp_17 < (temp_5 + M2C_FIELD(temp_3, u16 *, 0xE))) == 0))) {
            var_6 += 1;
            var_2_2 = var_6 * 0x10;
            if (var_6 >= temp_16) {
                goto block_7;
            }
            goto loop_2;
        }
    } else {
block_7:
        var_2 = 0xF;
    }
    return var_2;
}
