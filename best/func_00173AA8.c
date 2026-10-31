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

M2C_UNK func_00173B00(s32, s16, s16, s16, s16, s16); /* extern */
extern M2C_UNK xmlParseElementDecl;

void func_00173AA8(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    func_00173B00(*(&xmlParseElementDecl + 0x3B4 + (arg0 * 0x28)), arg1, arg2, arg3, arg4, arg5);
}
