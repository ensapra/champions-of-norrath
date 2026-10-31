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

M2C_UNK setBITBLTBUF(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK setDMAscTag(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK setGIFtag(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK setTRXDIR(s32, M2C_UNK);                    /* extern */
M2C_UNK setTRXPOS(s32, M2C_UNK, s32, s32);          /* extern */
M2C_UNK setTRXREG(s32, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK D_20000010;

void setLoadImageTagsYX(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_17_3;
    s32 temp_17_4;
    s32 temp_17_5;
    s32 temp_17_6;
    s32 temp_17_7;
    s32 temp_17_8;
    s32 temp_21;
    s32 temp_2;
    s32 temp_6;
    s32 temp_7;
    s32 var_17;
    s32 var_18;
    s32 var_19;
    s32 var_20;
    s32 var_23;

    temp_17 = (arg0 & 0x0FFFFFFF) | (s32) &D_20000010;
    var_20 = arg1;
    temp_21 = arg6 >> 4;
    sp0 = arg2;
    sp4 = arg3;
    sp8 = arg4;
    spC = arg5 >> 4;
    var_23 = 0;
    setDMAscTag(temp_17, 0, 0, 0, 1, 0, 3);
    temp_17_2 = temp_17 + 0x10;
    setGIFtag(temp_17, 0xE, 1, 0, 0, 0, 0, 2);
    temp_17_3 = temp_17_2 + 0x10;
    setBITBLTBUF(temp_17_2, 0, 0xA, 0);
    setTRXREG(temp_17_3, 0x10, 0x10);
    var_17 = temp_17_3 + 0x10;
    if (spC > 0) {
        do {
            var_19 = 0;
            if (temp_21 > 0) {
                var_18 = sp8;
                sp10 = var_23 ^ (spC - 1);
                sp14 = temp_21 - 1;
                do {
                    temp_2 = var_19 ^ sp14;
                    var_19 += 1;
                    temp_17_4 = var_17 + 0x10;
                    setDMAscTag(var_17, 0, 0, 0, 1, 0, 4);
                    temp_17_5 = temp_17_4 + 0x10;
                    setGIFtag(temp_17_4, 0xE, 1, 0, 0, 0, 0, 2);
                    temp_7 = var_18;
                    temp_17_6 = temp_17_5 + 0x10;
                    var_18 += 0x10;
                    setTRXPOS(temp_17_5, 0, sp4 + (var_23 * 0x10), temp_7);
                    temp_17_7 = temp_17_6 + 0x10;
                    setTRXDIR(temp_17_6, 0);
                    temp_17_8 = temp_17_7 + 0x10;
                    setGIFtag(temp_17_7, 0, 0, 2, 0, 0, (temp_2 != 0) ? 0 : (sp10 == 0), 0x40);
                    temp_6 = var_20 & 0x0FFFFFFF;
                    var_20 += sp0;
                    setDMAscTag(temp_17_8, 0, temp_6, 0, 3, 0, 0x40);
                    var_17 = temp_17_8 + 0x10;
                } while (var_19 < temp_21);
            }
            var_23 += 1;
        } while (var_23 < spC);
    }
    setDMAscTag(var_17, 0, 0, 0, 7, 0, 0);
}
