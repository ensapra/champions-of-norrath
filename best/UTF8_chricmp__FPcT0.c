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

extern M2C_UNK D_0118ED60;

s32 UTF8_chricmp__FPcT0(void *arg0, void *arg1) {
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_7;
    s8 temp_3;
    s8 var_4;
    s8 var_8;
    u8 *var_5;
    u8 *var_6;
    u8 temp_2;
    u8 temp_2_2;
    u8 temp_2_3;
    u8 temp_3_2;
    u8 temp_3_3;
    u8 temp_3_4;
    u8 temp_3_5;
    u8 temp_3_6;

    temp_3 = M2C_FIELD(arg0, s8 *, 0);
    if (!(temp_3 & 0x80)) {
        var_7 = ((M2C_FIELD(arg1, s8 *, 0) ^ temp_3) & 0xDF) != 0;
    } else {
        temp_3_2 = (u8) M2C_FIELD(arg0, s8 *, 0);
        var_8 = 1;
        if (temp_3_2 & 0x80) {
            var_8 = *(&D_0118ED60 + ((u32) (temp_3_2 & 0x3C) >> 2));
        }
        temp_3_3 = (u8) M2C_FIELD(arg1, s8 *, 0);
        var_4 = 1;
        if (temp_3_3 & 0x80) {
            var_4 = *(&D_0118ED60 + ((u32) (temp_3_3 & 0x3C) >> 2));
        }
        var_5 = arg1 + 1;
        var_6 = arg0 + 1;
        var_7 = (var_8 != var_4) | ((((u8) M2C_FIELD(arg0, s8 *, 0) ^ (u8) M2C_FIELD(arg1, s8 *, 0)) << 0x18) != 0);
        if (var_8 >= 2) {
            var_5 += 1;
            var_6 += 1;
            var_7 |= M2C_FIELD(arg0, u8 *, 1) != M2C_FIELD(arg1, u8 *, 1);
        }
        var_2 = var_8 < 4;
        if (var_8 >= 3) {
            temp_3_4 = *var_5;
            var_5 += 1;
            temp_2 = *var_6;
            var_6 += 1;
            var_7 |= temp_2 != temp_3_4;
            var_2 = var_8 < 4;
        }
        var_2_2 = var_8 < 5;
        if (var_2 == 0) {
            temp_3_5 = *var_5;
            var_5 += 1;
            temp_2_2 = *var_6;
            var_6 += 1;
            var_7 |= temp_2_2 != temp_3_5;
            var_2_2 = var_8 < 5;
        }
        var_2_3 = var_8 < 6;
        if (var_2_2 == 0) {
            temp_3_6 = *var_5;
            var_5 += 1;
            temp_2_3 = *var_6;
            var_6 += 1;
            var_7 |= temp_2_3 != temp_3_6;
            var_2_3 = var_8 < 6;
        }
        if (var_2_3 == 0) {
            var_7 |= *var_6 != *var_5;
        }
    }
    return var_7;
}
