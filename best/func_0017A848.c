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
M2C_UNK func_001AD760(s32);                         /* extern */
s32 func_001AD770(s32);                             /* extern */
extern M2C_UNK gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb;
extern M2C_UNK xmlParseReference;

s32 func_0017A848(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_16;
    s32 var_16;

    if (M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x2268) == 0) {
        return -1;
    }
    var_16 = func_001AD770(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x2270)) < 0;
    if ((arg0 == 0) && (var_16 != 0)) {
        var_16 = 0;
        func_001AD760(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x2270));
    }
    temp_16 = var_16 == 0;
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x2268);
    }
    if (temp_16 != 0) {
        M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x2268) = 0;
        if (arg2 != NULL) {
            *arg2 = M2C_FIELD(&xmlParseReference, s32 *, 0x5C8);
        }
        func_001AD740(M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C));
    }
    return temp_16;
}
