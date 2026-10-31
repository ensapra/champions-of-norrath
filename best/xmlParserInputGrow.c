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

s32 xmlParserInputBufferGrow(void *, void *, s32);  /* extern */

s32 xmlParserInputGrow(void *arg0) {
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_4_2;
    s32 temp_6_2;
    s32 temp_7;
    s32 var_2;
    void *temp_2;
    void *temp_3_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;

    temp_6 = M2C_FIELD(arg0, void **, 0);
    var_2 = -1;
    if (temp_6 != NULL) {
        temp_7 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_7 != 0) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x10);
            if (temp_3 != 0) {
                temp_4 = M2C_FIELD(temp_6, void **, 0x10);
                if (temp_4 != NULL) {
                    var_2 = 0;
                    if ((u32) ((temp_3 - temp_7) + 0xFA) >= (u32) M2C_FIELD(temp_4, u32 *, 4)) {
                        if (M2C_FIELD(temp_6, s32 *, 4) == 0) {
                            return 0;
                        }
                        temp_6_2 = xmlParserInputBufferGrow(temp_6, temp_6, temp_7);
                        temp_5 = M2C_FIELD(arg0, void **, 0);
                        temp_4_2 = M2C_FIELD(arg0, s32 *, 0xC);
                        temp_2 = M2C_FIELD(temp_5, void **, 0x10);
                        temp_3_2 = M2C_FIELD(temp_2, s32 *, 0);
                        if (temp_4_2 != temp_3_2) {
                            M2C_FIELD(arg0, s32 *, 0xC) = temp_3_2;
                            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_2, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x10) - temp_4_2));
                        }
                        temp_3_3 = M2C_FIELD(temp_5, void **, 0x10);
                        var_2 = temp_6_2;
                        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(temp_3_3, s32 *, 0) + M2C_FIELD(temp_3_3, s32 *, 4));
                        /* Duplicate return node #11. Try simplifying control flow for better match */
                        return var_2;
                    }
                }
            }
        }
    }
    return var_2;
}
