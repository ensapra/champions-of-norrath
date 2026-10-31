/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G8, tried by autopilot */
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

extern M2C_UNK gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb;
extern M2C_UNK xmlParseConditionalSections;
extern M2C_UNK xmlParseReference;

void *func_0017A058(void **arg0, void **arg1) {
    void *temp_6;

    temp_6 = &xmlParseReference + 0x5C8;
    *arg0 = temp_6;
    *arg1 = &gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb + 0x2268;
    M2C_FIELD(temp_6, s32 *, 0x3C) = (s32) M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x226C);
    return &xmlParseConditionalSections + 0x380;
}
