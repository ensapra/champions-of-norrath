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

extern s32 D_0118F970;
extern s32 D_0118FE30;
extern s32 *D_011E7D90;

void htmlInitAutoClose(void) {
    s32 **var_2;
    s32 **var_4;
    s32 *var_3;
    s32 *var_5;
    s32 var_6;
    s32 var_7;
    s32 var_7_2;

    if (D_0118FE30 == 0) {
        var_7 = 0x63;
        var_2 = &D_011E7D90 + 0x18C;
        do {
            var_7 -= 1;
            *var_2 = NULL;
            var_2 -= 4;
        } while (var_7 >= 0);
        var_7_2 = 0;
        if (D_0118F970 != 0) {
            var_6 = 0 * 4;
            var_4 = &D_011E7D90;
            var_3 = &(&D_0118F970)[0];
loop_5:
            var_7_2 += 1;
            *var_4 = var_3;
            var_4 += 4;
            if (*var_3 != 0) {
                var_5 = var_6 + &D_0118F970;
                do {
                    var_5 += 4;
                    var_6 += 4;
                    var_3 += 4;
                } while (*var_5 != 0);
            }
            var_3 += 4;
            var_6 += 4;
            if ((*var_3 != 0) && (var_7_2 < 0x63)) {
                goto loop_5;
            }
        }
        D_0118FE30 = 1;
    }
}
