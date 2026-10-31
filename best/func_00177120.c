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

M2C_UNK func_00192560(void *, s32);                 /* extern */
extern M2C_UNK gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb;
extern M2C_UNK xmlParseTextDecl;

void func_00177120(s32 arg0) {
    func_00192560(&xmlParseTextDecl + 0x690 + (M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x21A8) << 6), arg0);
    func_00192560(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb + 0x21B8, arg0);
    M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x21A8) = (s32) (M2C_FIELD(&gameAttackResolver__FP10GameObjectT0ffiiiiPQ24item11descriptionb, s32 *, 0x21A8) + 1);
}
