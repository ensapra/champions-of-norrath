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

M2C_UNK func_00171AE0(s32, void *, s32, void *);    /* extern */
extern M2C_UNK xmlParseElementDecl;

s32 func_00175178(s32 arg0) {
    s32 temp_6;
    void *temp_16;
    void *temp_2;
    void *temp_5;

    temp_16 = &xmlParseElementDecl + 0xB20;
    if ((u32) M2C_FIELD(&xmlParseElementDecl, u32 *, 0xB20) < 0x20U) {
        M2C_FIELD((temp_16 + (M2C_FIELD(&xmlParseElementDecl, u32 *, 0xB20) * 4)), s32 *, 4) = arg0;
        if (arg0 != 0xFFFF) {
            temp_6 = *(&xmlParseElementDecl + 0x3B8 + (arg0 * 0x28));
            temp_5 = (M2C_FIELD(&xmlParseElementDecl, u32 *, 0xB20) * 4) + temp_16;
            M2C_FIELD(&xmlParseElementDecl, u32 *, 0xB20) = (u32) (M2C_FIELD(&xmlParseElementDecl, u32 *, 0xB20) + 1);
            M2C_FIELD(temp_5, s32 *, 0x90) = temp_6;
            func_00171AE0(temp_6, temp_5, temp_6, temp_16);
        } else {
            temp_2 = (M2C_FIELD(&xmlParseElementDecl, u32 *, 0xB20) * 4) + temp_16;
            M2C_FIELD(&xmlParseElementDecl, u32 *, 0xB20) = (u32) (M2C_FIELD(&xmlParseElementDecl, u32 *, 0xB20) + 1);
            M2C_FIELD(temp_2, s32 *, 0x90) = 0;
        }
        if ((u32) M2C_FIELD(&xmlParseElementDecl, u32 *, 0xB20) >= 2U) {
            return M2C_FIELD((temp_16 + ((M2C_FIELD(&xmlParseElementDecl, u32 *, 0xB20) - 2) * 4)), s32 *, 4);
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
