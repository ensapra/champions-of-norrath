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

M2C_UNK func_00171AE0(s32, u32 *, s32, u32 *);      /* extern */
extern M2C_UNK xmlParseElementDecl;
extern u32 xmlParseTextDecl;

s32 func_00174C20(s32 arg0) {
    s32 temp_6;
    u32 *temp_2;
    u32 *temp_5;

    if ((u32) xmlParseTextDecl < 0x20U) {
        M2C_FIELD(&(&xmlParseTextDecl)[xmlParseTextDecl], s32 *, 4) = arg0;
        if (arg0 != 0xFFFF) {
            temp_6 = *(&xmlParseElementDecl + 0x3C0 + (arg0 * 0x28));
            temp_5 = &(&xmlParseTextDecl)[xmlParseTextDecl];
            xmlParseTextDecl += 1;
            M2C_FIELD(temp_5, s32 *, 0x90) = temp_6;
            func_00171AE0(temp_6, temp_5, temp_6, &xmlParseTextDecl);
        } else {
            temp_2 = &(&xmlParseTextDecl)[xmlParseTextDecl];
            xmlParseTextDecl += 1;
            M2C_FIELD(temp_2, s32 *, 0x90) = 0;
        }
        if ((u32) xmlParseTextDecl >= 2U) {
            return M2C_FIELD(&(&xmlParseTextDecl)[xmlParseTextDecl - 2], s32 *, 4);
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
