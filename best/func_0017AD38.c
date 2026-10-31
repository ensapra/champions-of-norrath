/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_001A4738(void *, s8 *, M2C_UNK);       /* extern */
M2C_UNK func_001AD740(s32);                         /* extern */
s32 func_001AD770(s32);                             /* extern */
M2C_UNK func_001AFE98(void *, M2C_UNK);             /* extern */
s32 func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_0017ACA8;
extern M2C_UNK gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb;
extern M2C_UNK xmlParseConditionalSections;
extern M2C_UNK xmlParseReference;

s32 func_0017AD38(s32 arg0, s32 arg1, s8 *arg2, s32 arg3) {
    s32 temp_2_3;
    s32 var_2;
    void *temp_16;
    void *temp_2;
    void *temp_2_2;

    temp_2 = &xmlParseConditionalSections + 0x380;
    if (M2C_FIELD(temp_2, s32 *, 0x24) == 0) {
        return -0x64;
    }
    var_2 = -0xC8;
    if (func_001AD770(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C)) >= 0) {
        if ((arg2 == NULL) || (temp_2_2 = &xmlParseConditionalSections + 0x430, (*arg2 == 0))) {
            func_001AD740(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C));
            return -0xD2;
        }
        temp_16 = &xmlParseConditionalSections + 0x940;
        M2C_FIELD(&xmlParseConditionalSections, s32 *, 0x430) = arg0;
        M2C_FIELD(temp_2_2, void **, 0x10) = temp_16;
        M2C_FIELD(temp_2_2, s32 *, 4) = arg1;
        func_001A4738(temp_2_2 + 0x14, arg2, 0x3FF);
        M2C_FIELD(temp_2_2, s8 *, 0x413) = 0;
        func_001AFE98(temp_16, 0x400);
        temp_2_3 = func_001B08B0(temp_2, 0xC, 1, temp_2_2, 0x414, &xmlParseReference + 0x5C8, 4, &func_0017ACA8, arg3);
        if (temp_2_3 == 0) {
            M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x2268) = 0xC;
        } else {
            func_001AD740(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C));
        }
        var_2 = temp_2_3;
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
