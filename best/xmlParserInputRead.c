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

s32 xmlBufferShrink(s32 *, s32, s32);               /* extern */
s32 xmlParserInputBufferRead(void *, s32);          /* extern */

s32 xmlParserInputRead(void *arg0, s32 arg1) {
    s32 *temp_3_2;
    s32 *temp_4;
    s32 *temp_4_2;
    s32 temp_2;
    s32 temp_3;
    s32 temp_5_2;
    s32 temp_6;
    s32 var_2;
    void *temp_5;
    void *temp_6_2;

    temp_5 = M2C_FIELD(arg0, void **, 0);
    var_2 = -1;
    if ((temp_5 != NULL) && (M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
        temp_6 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_6 != 0) {
            temp_4 = M2C_FIELD(temp_5, s32 **, 0x10);
            if ((temp_4 != NULL) && (M2C_FIELD(temp_5, s32 *, 4) != 0)) {
                temp_2 = xmlBufferShrink(temp_4, temp_6 - *temp_4, temp_6);
                if (temp_2 > 0) {
                    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - temp_2);
                    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + temp_2);
                }
                var_2 = xmlParserInputBufferRead(M2C_FIELD(arg0, void **, 0), arg1);
                temp_6_2 = M2C_FIELD(arg0, void **, 0);
                temp_5_2 = M2C_FIELD(arg0, s32 *, 0xC);
                temp_4_2 = M2C_FIELD(temp_6_2, s32 **, 0x10);
                temp_3 = M2C_FIELD(temp_4_2, s32 *, 0);
                if (temp_5_2 != temp_3) {
                    M2C_FIELD(arg0, s32 *, 0xC) = temp_3;
                    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_4_2, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x10) - temp_5_2));
                }
                temp_3_2 = M2C_FIELD(temp_6_2, s32 **, 0x10);
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(temp_3_2, s32 *, 0) + M2C_FIELD(temp_3_2, s32 *, 4));
            }
        }
    }
    return var_2;
}
