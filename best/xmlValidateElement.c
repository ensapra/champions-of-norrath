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

s32 xmlNodeListGetString(void *, s32, M2C_UNK);     /* extern */
s32 xmlValidateOneAttribute(s32, void *, void *, void *, s32); /* extern */
s32 xmlValidateOneElement(s32, void *, void *);     /* extern */
extern M2C_UNK (*D_011B1E18)(s32);

s32 xmlValidateElement(s32 arg0, void *arg1, void *arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 var_18;
    s32 var_2;
    void *var_16;
    void *var_17;

    var_2 = 0;
    if (arg2 != NULL) {
        var_2 = 1;
        if ((u32) (M2C_FIELD(arg2, s32 *, 4) - 0x13) >= 2U) {
            var_2 = 0;
            if (arg1 != NULL) {
                if (M2C_FIELD(arg1, s32 *, 0x2C) == 0) {
                    var_2 = 0;
                    if (M2C_FIELD(arg1, s32 *, 0x30) != 0) {
                        goto block_6;
                    }
                } else {
block_6:
                    var_17 = M2C_FIELD(arg2, void **, 0x2C);
                    var_18 = xmlValidateOneElement(arg0, arg1, arg2) & 1;
                    if (var_17 != NULL) {
                        do {
                            temp_2 = xmlNodeListGetString(arg1, M2C_FIELD(var_17, s32 *, 0xC), 0);
                            var_18 &= xmlValidateOneAttribute(arg0, arg1, arg2, var_17, temp_2);
                            if (temp_2 != 0) {
                                D_011B1E18(temp_2);
                            }
                            var_17 = M2C_FIELD(var_17, void **, 0x18);
                        } while (var_17 != NULL);
                    }
                    var_16 = M2C_FIELD(arg2, void **, 0xC);
                    var_2 = var_18;
                    if (var_16 != NULL) {
                        do {
                            temp_2_2 = xmlValidateElement(arg0, arg1, var_16);
                            var_16 = M2C_FIELD(var_16, void **, 0x18);
                            var_18 &= temp_2_2;
                        } while (var_16 != NULL);
                        var_2 = var_18;
                    }
                }
            }
        }
    }
    return var_2;
}
