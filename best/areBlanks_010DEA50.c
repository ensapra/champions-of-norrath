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

s32 xmlGetLastChild(void *, void *, void *);        /* extern */
s32 xmlIsMixedElement(s32, s32, s32, s32, u8 *, s32); /* extern */
s32 xmlNodeIsText(s32);                             /* extern */

s32 areBlanks_010DEA50(void *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg6) {
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_4;
    s32 temp_4_2;
    s32 var_10;
    s32 var_2;
    s32 var_4;
    s32 var_7;
    s32 var_8;
    u8 *var_2_2;
    u8 temp_2_2;
    void *temp_5;
    void *temp_6;

    var_7 = arg3;
    var_8 = arg4;
    var_10 = arg6;
    var_2 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0xD0) == 0) && (*M2C_FIELD(arg0, s32 **, 0xE8) != 1)) {
        var_4 = 0;
        if (arg2 > 0) {
            var_10 = 0x20;
            var_8 = 9;
            var_7 = 0xA;
            var_2_2 = arg1;
loop_4:
            var_4 += 1;
            temp_2_2 = *var_2_2;
            if ((temp_2_2 == 0x20) || (temp_2_2 == 9) || (temp_2_2 == 0xA) || (var_2 = 0, (temp_2_2 == 0xD))) {
                var_2_2 = arg1 + var_4;
                if (var_4 >= arg2) {
                    goto block_9;
                }
                goto loop_4;
            }
            goto block_25;
        }
block_9:
        temp_4 = M2C_FIELD(arg0, s32 *, 8);
        if ((temp_4 == 0) || ((temp_2_3 = xmlIsMixedElement(temp_4, M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 8), var_7, var_8, arg1, var_10), var_2 = 1, (temp_2_3 != 0)) && (var_2 = 0, (temp_2_3 != 1)))) {
            var_2 = 0;
            if (M2C_FIELD(arg0, s32 *, 0xA4) == 0) {
                temp_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x10);
                var_2 = 0;
                if (M2C_FIELD(temp_6, u8 *, 0) == 0x3C) {
                    temp_5 = M2C_FIELD(arg0, void **, 0x34);
                    if ((temp_5 != NULL) && ((M2C_FIELD(temp_5, s32 *, 0xC) != 0) || (var_2 = 0, (M2C_FIELD(temp_6, u8 *, 1) != 0x2F)))) {
                        temp_2 = xmlGetLastChild(temp_5, temp_5, temp_6);
                        if (temp_2 == 0) {
                            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x28) != 0) {
                                return temp_2;
                            }
                            goto block_24;
                        }
                        var_2 = 0;
                        if ((xmlNodeIsText(temp_2) == 0) && ((temp_4_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0xC), (temp_4_2 == 0)) || (var_2 = 0, (xmlNodeIsText(temp_4_2) == 0)))) {
block_24:
                            var_2 = 1;
                        }
                        goto block_25;
                    }
                }
            }
        }
        goto block_25;
    }
block_25:
    return var_2;
}
