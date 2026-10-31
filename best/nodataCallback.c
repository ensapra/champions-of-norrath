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

s32 fillBuff(s32, M2C_UNK);                         /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
extern M2C_UNK D_011D8C08;
extern s32 D_011EDA08;
extern s32 D_011EDA0C;
extern s32 D_011EDA10;
extern u32 D_011EDA14;
extern u32 D_011EDA18;

s32 nodataCallback(s32 arg0) {
    s32 temp_6;
    s32 var_16;
    s32 var_2;
    s32 var_3;
    s32 var_6;
    u32 temp_5;
    u32 var_8;

    var_16 = D_011EDA10 - D_011EDA18;
    D_011EDA14 = D_011EDA18;
    if (var_16 < 0) {
        var_16 += D_011EDA0C;
    }
loop_7:
    var_2 = var_16 < 0x1000;
loop_8:
    if (var_2 != 0) {
        if (fillBuff(arg0, 1) == 0) {
            var_16 += 0xF;
            printf(&D_011D8C08);
        } else {
            var_16 = D_011EDA10 - D_011EDA18;
            var_2 = var_16 < 0x1000;
            if (var_16 < 0) {
                var_16 += D_011EDA0C;
                goto loop_7;
            }
            goto loop_8;
        }
    }
    temp_6 = var_16 & ~0xF;
    var_6 = (temp_6 >= 0x1001) ? 0x1000 : temp_6;
    var_8 = D_011EDA14 + var_6;
    temp_5 = D_011EDA08 + D_011EDA0C;
    var_3 = var_6 + 0xF;
    if (temp_5 < var_8) {
        var_6 = temp_5 - D_011EDA14;
        var_8 = D_011EDA14 + var_6;
        var_3 = var_6 + 0xF;
    }
    *(s32 *)0x1000B420 = (s32) ((var_6 < 0) ? var_3 : var_6) >> 4;
    *(u32 *)0x1000B410 = D_011EDA14;
    *(s32 *)0x1000B400 = 0x101;
    D_011EDA18 = var_8;
    if (var_8 >= temp_5) {
        D_011EDA18 = var_8 - D_011EDA0C;
    }
    return 1;
}
