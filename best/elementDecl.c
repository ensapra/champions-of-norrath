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

s32 xmlAddElementDecl(void *, s32, s32, s32, s32, s32); /* extern */
s32 xmlValidateElementDecl(void *, void *, s32);    /* extern */
extern M2C_UNK D_011DBD88;

void elementDecl(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK (*temp_2_2)(M2C_UNK *, s32, s32, s32);
    s32 temp_2_3;
    s32 temp_9;
    s32 var_5;
    void *temp_2;
    void *temp_5;
    void *var_17;

    temp_9 = M2C_FIELD(arg0, s32 *, 0xD8);
    if (temp_9 == 1) {
        var_17 = arg0 + 0x78;
        var_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x2C);
        goto block_7;
    }
    if (temp_9 != 2) {
        temp_2 = M2C_FIELD(arg0, void **, 0);
        if (temp_2 != NULL) {
            temp_2_2 = M2C_FIELD(temp_2, M2C_UNK (**)(M2C_UNK *, s32, s32, s32), 0x58);
            if (temp_2_2 != NULL) {
                temp_2_2(&D_011DBD88, arg1, arg3, temp_9);
            }
        }
    } else {
        var_17 = arg0 + 0x78;
        var_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x30);
block_7:
        temp_2_3 = xmlAddElementDecl(var_17, var_5, arg1, arg2, arg3, temp_9);
        if (temp_2_3 == 0) {
            M2C_FIELD(arg0, s32 *, 0x70) = 0;
        }
        if ((M2C_FIELD(arg0, s32 *, 0x74) != 0) && (M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
            temp_5 = M2C_FIELD(arg0, void **, 8);
            if ((temp_5 != NULL) && (M2C_FIELD(temp_5, s32 *, 0x2C) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) & xmlValidateElementDecl(var_17, temp_5, temp_2_3));
            }
        }
    }
}
