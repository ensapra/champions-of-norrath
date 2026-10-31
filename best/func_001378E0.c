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

s32 func_00110770(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_00137C60();                            /* extern */
extern M2C_UNK message_is_valid__FPC9message_t;

void func_001378E0(void) {
    M2C_FIELD(&message_is_valid__FPC9message_t, s32 *, 0x18) = func_00110770(func_0011BA18(0x136), 0, 0, 0);
    func_00137C60();
}
