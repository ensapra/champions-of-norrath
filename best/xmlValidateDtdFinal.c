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

M2C_UNK xmlHashScan(s32, M2C_UNK *, void *);        /* extern */
extern M2C_UNK xmlValidateAttributeCallback;

s32 xmlValidateDtdFinal(void *arg0, void *arg1) {
    s32 temp_4_2;
    s32 temp_4_4;
    s32 var_2;
    void *temp_4;
    void *temp_4_3;

    var_2 = 0;
    if ((arg1 != NULL) && ((temp_4 = M2C_FIELD(arg1, void **, 0x2C), (temp_4 != NULL)) || (M2C_FIELD(arg1, void **, 0x30) != NULL))) {
        M2C_FIELD(arg0, void **, 0x20) = arg1;
        M2C_FIELD(arg0, s32 *, 0x24) = 1;
        if (temp_4 != NULL) {
            temp_4_2 = M2C_FIELD(temp_4, s32 *, 0x2C);
            if (temp_4_2 != 0) {
                xmlHashScan(temp_4_2, &xmlValidateAttributeCallback, arg0);
            }
        }
        temp_4_3 = M2C_FIELD(arg1, void **, 0x30);
        if (temp_4_3 != NULL) {
            temp_4_4 = M2C_FIELD(temp_4_3, s32 *, 0x2C);
            if (temp_4_4 != 0) {
                xmlHashScan(temp_4_4, &xmlValidateAttributeCallback, arg0);
            }
        }
        var_2 = M2C_FIELD(arg0, s32 *, 0x24);
    }
    return var_2;
}
