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

s32 xmlAddAttributeDecl(void *, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 xmlSplitQName(s32, s32 *);                      /* extern */
s32 xmlValidateAttributeDecl(void *, void *, s32);  /* extern */
extern M2C_UNK (*D_011B1E18)(s32);
extern M2C_UNK D_011DBD50;

void attributeDecl(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp10;
    M2C_UNK (*temp_2_2)(void *, M2C_UNK *, s32);
    s32 temp_18;
    s32 temp_2_3;
    s32 temp_3;
    s32 var_5;
    void *temp_2;
    void *temp_5;
    void *var_17;

    sp10 = 0;
    temp_3 = M2C_FIELD(arg0, s32 *, 0xD8);
    temp_18 = xmlSplitQName(arg2, &sp10);
    if (temp_3 == 1) {
        var_17 = arg0 + 0x78;
        var_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x2C);
        goto block_7;
    }
    if (temp_3 != 2) {
        temp_2 = M2C_FIELD(arg0, void **, 0);
        if (temp_2 != NULL) {
            temp_2_2 = M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK *, s32), 0x58);
            if (temp_2_2 != NULL) {
                temp_2_2(arg0, &D_011DBD50, temp_18);
            }
        }
    } else {
        var_17 = arg0 + 0x78;
        var_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x30);
block_7:
        temp_2_3 = xmlAddAttributeDecl(var_17, var_5, arg1, temp_18, sp10, arg3, arg4, arg5, arg6);
        if (temp_2_3 == 0) {
            M2C_FIELD(arg0, s32 *, 0x70) = 0;
        }
        if ((M2C_FIELD(arg0, s32 *, 0x74) != 0) && (M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
            temp_5 = M2C_FIELD(arg0, void **, 8);
            if ((temp_5 != NULL) && (M2C_FIELD(temp_5, s32 *, 0x2C) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) & xmlValidateAttributeDecl(var_17, temp_5, temp_2_3));
            }
        }
        if (sp10 != 0) {
            D_011B1E18(sp10);
        }
        if (temp_18 != 0) {
            D_011B1E18(temp_18);
        }
    }
}
