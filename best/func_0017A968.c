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

M2C_UNK func_001AD740(s32);                         /* extern */
s32 func_001AD770(s32);                             /* extern */
M2C_UNK func_001AFE98(void *, M2C_UNK, void *);     /* extern */
s32 func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK *, void *); /* extern */
extern M2C_UNK func_0017A910;
extern M2C_UNK gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb;
extern M2C_UNK xmlParseConditionalSections;
extern M2C_UNK xmlParseReference;

s32 func_0017A968(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_2;
    void *temp_17;
    void *temp_22;
    void *temp_4;

    temp_22 = &xmlParseConditionalSections + 0x380;
    if (M2C_FIELD(temp_22, s32 *, 0x24) == 0) {
        return -0x64;
    }
    temp_17 = &xmlParseConditionalSections + 0x400;
    if (func_001AD770(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C)) < 0) {
        return -0xC8;
    }
    temp_4 = &xmlParseConditionalSections + 0x880;
    M2C_FIELD(temp_17, s32 *, 4) = arg0;
    M2C_FIELD(temp_17, s32 *, 8) = arg1;
    M2C_FIELD(temp_17, void **, 0x1C) = temp_4;
    if (arg2 != 0) {
        M2C_FIELD(temp_17, s32 *, 0x14) = 1;
    } else {
        M2C_FIELD(temp_17, s32 *, 0x14) = 0;
    }
    if (arg3 != 0) {
        M2C_FIELD(temp_17, s32 *, 0x10) = 1;
    } else {
        M2C_FIELD(temp_17, s32 *, 0x10) = 0;
    }
    if (arg4 != 0) {
        M2C_FIELD(temp_17, s32 *, 0xC) = 1;
    } else {
        M2C_FIELD(temp_17, s32 *, 0xC) = 0;
    }
    M2C_FIELD(&xmlParseConditionalSections, s32 *, 0x3A8) = arg2;
    M2C_FIELD(&xmlParseConditionalSections, s32 *, 0x3AC) = arg3;
    M2C_FIELD(&xmlParseConditionalSections, s32 *, 0x3B0) = arg4;
    func_001AFE98(temp_4, 0xC0, &xmlParseConditionalSections + 0x3B0);
    temp_2 = func_001B08B0(temp_22, 1, 1, temp_17, 0x30, &xmlParseReference + 0x5C8, 4, &func_0017A910, temp_4);
    if (temp_2 == 0) {
        M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x2268) = 1;
    } else {
        func_001AD740(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C));
    }
    return temp_2;
}
