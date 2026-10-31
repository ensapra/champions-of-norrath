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

M2C_UNK func_0011B840(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_001A42B8(s32, s32);                    /* extern */
extern M2C_UNK Decrement__12VIWndOptions;

s32 func_0011B6B0(s32 arg0, s32 arg1) {
    func_0011B840(M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x17C), arg0, 0);
    func_001A42B8(M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x180), M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x180) + arg1);
    return 0;
}
