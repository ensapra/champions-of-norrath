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

s32 func_001107E8(s32, void *, M2C_UNK, void *, M2C_UNK); /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E420(s32, M2C_UNK);                /* extern */
extern M2C_UNK message_destroy__FP9message_t;
extern M2C_UNK message_duplicate__FPP9message_tP9message_t;

void func_001351A8(void) {
    if ((M2C_FIELD(&message_destroy__FP9message_t, s32 *, 8) >= 0) && (M2C_FIELD(&message_destroy__FP9message_t, s32 *, 8) < 7)) {
        M2C_FIELD(&message_duplicate__FPP9message_tP9message_t, s32 *, 0x48) = func_001107E8(func_0011BA18(0xD7), &message_duplicate__FPP9message_tP9message_t + 0x4C, 1, &message_duplicate__FPP9message_tP9message_t + 0x5C, 0);
        M2C_FIELD(&message_duplicate__FPP9message_tP9message_t, s32 *, 0x60) = 0;
    }
    func_0011E420(M2C_FIELD(&message_duplicate__FPP9message_tP9message_t, s32 *, 0x5C), 0);
    func_0011CEF0(M2C_FIELD(&message_duplicate__FPP9message_tP9message_t, s32 *, 0x48), M2C_FIELD(&message_destroy__FP9message_t, s32 *, 8), 7);
}
