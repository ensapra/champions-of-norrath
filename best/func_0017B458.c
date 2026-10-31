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

M2C_UNK func_001AD740(s32);                         /* extern */
s32 func_001AD770(s32);                             /* extern */
s32 func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_0017A088;
extern M2C_UNK gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb;
extern M2C_UNK xmlParseConditionalSections;
extern M2C_UNK xmlParseReference;

s32 func_0017B458(s32 arg0, s32 arg1) {
    s32 temp_2;
    void *temp_2_2;
    void *temp_7;

    temp_2_2 = &xmlParseConditionalSections + 0x380;
    if (M2C_FIELD(temp_2_2, s32 *, 0x24) == 0) {
        return -0x64;
    }
    temp_7 = &xmlParseConditionalSections + 0x400;
    if (func_001AD770(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C)) < 0) {
        return -0xC8;
    }
    M2C_FIELD(temp_7, s32 *, 4) = arg0;
    M2C_FIELD(temp_7, s32 *, 8) = arg1;
    temp_2 = func_001B08B0(temp_2_2, 0x11, 1, temp_7, 0x30, &xmlParseReference + 0x5C8, 4, &func_0017A088, 0);
    if (temp_2 == 0) {
        M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x2268) = 0x11;
    } else {
        func_001AD740(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C));
    }
    return temp_2;
}
