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

M2C_UNK htmlParseTryOrFinish(void *, void *);       /* extern */
M2C_UNK xmlParserInputBufferPush(void *, s32, M2C_UNK *, void *, s32); /* extern */
extern M2C_UNK D_011CE620;
extern M2C_UNK D_011D2500;

s32 htmlParseChunk(void *arg0, M2C_UNK *arg1, s32 arg2, void *arg3) {
    M2C_UNK (*temp_2_2)(s32, M2C_UNK *);
    M2C_UNK (*temp_2_4)(s32);
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_17;
    s32 temp_2;
    s32 temp_3_2;
    void *temp_19;
    void *temp_2_3;
    void *temp_3;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *var_7;

    var_7 = arg3;
    temp_19 = var_7;
    if ((arg2 > 0) && (arg1 != NULL) && (var_7 = M2C_FIELD(arg0, void **, 0x24), (var_7 != NULL)) && (temp_4 = M2C_FIELD(var_7, void **, 0), (temp_4 != NULL))) {
        if ((M2C_FIELD(arg0, s32 *, 0xA0) != -1) && ((temp_16 = M2C_FIELD(var_7, s32 *, 0xC), temp_17 = M2C_FIELD(var_7, s32 *, 0x10) - temp_16, temp_16_2 = temp_16 - *M2C_FIELD(temp_4, s32 **, 0x10), xmlParserInputBufferPush(temp_4, arg2, arg1, var_7, arg2), temp_4_2 = M2C_FIELD(arg0, void **, 0x24), temp_3 = M2C_FIELD(M2C_FIELD(temp_4_2, void **, 0), void **, 0x10), temp_2 = M2C_FIELD(temp_3, s32 *, 0) + temp_16_2, M2C_FIELD(temp_4_2, s32 *, 0xC) = temp_2, M2C_FIELD(temp_4_2, s32 *, 0x10) = (s32) (temp_2 + temp_17), (temp_19 != NULL)) || ((u32) M2C_FIELD(temp_3, u32 *, 4) >= 0x51U))) {
            htmlParseTryOrFinish(arg0, temp_19);
        }
    } else if (M2C_FIELD(arg0, s32 *, 0xA0) != -1) {
        xmlParserInputBufferPush(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0), 0, &D_011CE620, var_7, arg2);
        htmlParseTryOrFinish(arg0, temp_19);
    }
    if (temp_19 != NULL) {
        temp_3_2 = M2C_FIELD(arg0, s32 *, 0xA0);
        switch (temp_3_2) {                         /* irregular */
        default:
            temp_4_3 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(arg0, s32 *, 0x60) = 5;
            if (temp_4_3 != NULL) {
                temp_2_2 = M2C_FIELD(temp_4_3, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
                if (temp_2_2 != NULL) {
                    temp_2_2(M2C_FIELD(arg0, s32 *, 4), &D_011D2500);
                }
            }
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
            /* fallthrough */
        case 14:
        case 1:
            if (M2C_FIELD(arg0, s32 *, 0xA0) != -1) {
                temp_2_3 = M2C_FIELD(arg0, void **, 0);
                if (temp_2_3 != NULL) {
                    temp_2_4 = M2C_FIELD(temp_2_3, M2C_UNK (**)(s32), 0x34);
                    if (temp_2_4 != NULL) {
                        temp_2_4(M2C_FIELD(arg0, s32 *, 4));
                    }
                }
            case -1:
            }
            break;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = -1;
    }
    return M2C_FIELD(arg0, s32 *, 0x60);
}
