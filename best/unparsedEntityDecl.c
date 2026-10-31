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

M2C_UNK xmlAddDocEntity(void *, s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK xmlAddDtdEntity(void *, s32, M2C_UNK, s32, s32, s32); /* extern */
s32 xmlValidateNotationUse(void *, void *, s32);    /* extern */
extern M2C_UNK D_011DBDF0;

void unparsedEntityDecl(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK (*temp_2_2)(void *, M2C_UNK *, s32);
    s32 temp_3;
    void *temp_2;
    void *temp_5;

    if ((M2C_FIELD(arg0, s32 *, 0x74) != 0) && (M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
        temp_5 = M2C_FIELD(arg0, void **, 8);
        if ((temp_5 != NULL) && (M2C_FIELD(temp_5, s32 *, 0x30) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) & xmlValidateNotationUse(arg0 + 0x78, temp_5, arg4));
        }
    }
    temp_3 = M2C_FIELD(arg0, s32 *, 0xD8);
    switch (temp_3) {                               /* irregular */
    case 1:
        xmlAddDocEntity(M2C_FIELD(arg0, void **, 8), arg1, 3, arg2, arg3, arg4);
        return;
    default:
        temp_2 = M2C_FIELD(arg0, void **, 0);
        if (temp_2 != NULL) {
            temp_2_2 = M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK *, s32), 0x58);
            if (temp_2_2 != NULL) {
                temp_2_2(arg0, &D_011DBDF0, arg1);
            }
        }
        return;
    case 2:
        xmlAddDtdEntity(M2C_FIELD(arg0, void **, 8), arg1, 3, arg2, arg3, arg4);
        return;
    }
}
