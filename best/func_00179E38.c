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

M2C_UNK func_0017A848(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_001AD720(M2C_UNK *);                       /* extern */
M2C_UNK func_001AD740(s32);                         /* extern */
M2C_UNK func_001AD760(s32);                         /* extern */
M2C_UNK func_001AF710(void *);                      /* extern */
M2C_UNK func_001AFF48(M2C_UNK);                     /* extern */
s32 func_001B06E0(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_FFFFF;
extern M2C_UNK gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK xmlParseConditionalSections;
extern M2C_UNK xmlParseReference;

s32 func_00179E38(void) {
    M2C_UNK sp10;
    s32 sp14;
    s32 sp18;
    s32 sp24;
    M2C_UNK *var_2;
    s32 temp_16;
    void *temp_16_2;
    void *temp_20;

    if (M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C) < 0) {
        sp24 = 0;
        sp18 = 1;
        sp14 = 1;
        M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C) = func_001AD720(&sp10);
        sp14 = 1;
        sp18 = 0;
        sp24 = 0;
        M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x2270) = func_001AD720(&sp10);
    }
    func_0017A848(0, 0, 0);
    func_001AD760(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C));
    func_001AFF48(0);
    temp_16_2 = &xmlParseConditionalSections + 0x380;
    temp_20 = &xmlParseReference + 0x5C8;
loop_5:
    if (func_001B06E0(temp_16_2, 0x80000400, 0) < 0) {
        func_001AF710(&jtbl_004C006C + 0xC384);
loop_7:
        goto loop_7;
    }
    if (M2C_FIELD(temp_16_2, s32 *, 0x24) != 0) {
        temp_16 = func_001B08B0(temp_16_2, 0xFE, 0, &xmlParseConditionalSections + 0x400, 0x30, temp_20, 0xC, 0, 0);
        func_001AD740(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C));
        if (temp_16 >= 0) {
            if (M2C_FIELD(temp_20, s32 *, 4) < 0x20A) {
                func_001AF710(&jtbl_004C006C + 0xC39C);
                M2C_FIELD(temp_16_2, s32 *, 0x24) = 0;
                return -0x78;
            }
            if (M2C_FIELD(temp_20, s32 *, 8) < 0x20E) {
                func_001AF710(&jtbl_004C006C + 0xC3C4);
                M2C_FIELD(temp_16_2, s32 *, 0x24) = 0;
                return -0x79;
            }
            return M2C_FIELD(&xmlParseReference, s32 *, 0x5C8);
        }
        M2C_FIELD(temp_16_2, s32 *, 0x24) = 0;
        return temp_16 - 0x64;
    }
    var_2 = &D_FFFFF;
    do {

    } while (var_2 != NULL);
    goto loop_5;
}
