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

s32 xmlBufferShrink(void *, s32, void *, void *);   /* extern */
M2C_UNK xmlParserInputBufferRead(void *, M2C_UNK);  /* extern */

void xmlParserInputShrink(void *arg0) {
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 temp_4;
    s32 temp_5;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_3_2;
    void *temp_5_2;
    void *temp_6;
    void *temp_7;

    temp_7 = M2C_FIELD(arg0, void **, 0);
    if ((temp_7 != NULL) && (M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_3 != 0) {
            temp_6 = M2C_FIELD(temp_7, void **, 0x10);
            if (temp_6 != NULL) {
                temp_5 = temp_3 - M2C_FIELD(temp_6, s32 *, 0);
                if ((temp_5 + 0x1F4) >= M2C_FIELD(temp_6, s32 *, 4)) {
                    if (temp_5 >= 0xFB) {
                        temp_2 = xmlBufferShrink(temp_6, temp_5 - 0x50, temp_6, temp_7);
                        if (temp_2 > 0) {
                            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - temp_2);
                            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + temp_2);
                        }
                        temp_2_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10);
                        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(temp_2_2, s32 *, 0) + M2C_FIELD(temp_2_2, s32 *, 4));
                    }
                    if ((u32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10), u32 *, 4) < 0xFBU) {
                        xmlParserInputBufferRead(M2C_FIELD(arg0, void **, 0), 0x1F4);
                        temp_5_2 = M2C_FIELD(arg0, void **, 0);
                        temp_4 = M2C_FIELD(arg0, s32 *, 0xC);
                        temp_3_2 = M2C_FIELD(temp_5_2, void **, 0x10);
                        temp_2_3 = M2C_FIELD(temp_3_2, s32 *, 0);
                        if (temp_4 != temp_2_3) {
                            M2C_FIELD(arg0, s32 *, 0xC) = temp_2_3;
                            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_3_2, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x10) - temp_4));
                        }
                        temp_2_4 = M2C_FIELD(temp_5_2, void **, 0x10);
                        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(temp_2_4, s32 *, 0) + M2C_FIELD(temp_2_4, s32 *, 4));
                    }
                }
            }
        }
    }
}
