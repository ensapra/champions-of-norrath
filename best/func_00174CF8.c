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

M2C_UNK func_00171AE0(s32);                         /* extern */
extern s32 xmlParseTextDecl;

s32 func_00174CF8(void) {
    s32 temp_3;
    s32 temp_4;
    s32 var_2;

    var_2 = -1;
    temp_4 = xmlParseTextDecl - 1;
    if (xmlParseTextDecl != 0) {
        xmlParseTextDecl = temp_4;
        temp_3 = M2C_FIELD(&(&xmlParseTextDecl)[temp_4], s32 *, 0x90);
        if (temp_3 != 0) {
            func_00171AE0(temp_3);
            return M2C_FIELD(&(&xmlParseTextDecl)[xmlParseTextDecl], s32 *, 4);
        }
        var_2 = 0xFFFF;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
