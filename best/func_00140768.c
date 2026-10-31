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

M2C_UNK func_00140540(void *, void *, s32);         /* extern */
M2C_UNK func_001A42B8(void *, s32);                 /* extern */
M2C_UNK func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK OnDrawSelf__16VIWndReadMessage;

void func_00140768(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_16;

    temp_16 = &OnDrawSelf__16VIWndReadMessage + 0x150;
    M2C_FIELD(temp_16, s32 *, 8) = arg0;
    M2C_FIELD(temp_16, s32 *, 0x10) = arg1;
    func_001A42B8(temp_16 + 0x30, arg2);
    func_00140540(temp_16 + 0x230, temp_16 + 0x20, arg3);
    func_001B08B0(&OnDrawSelf__16VIWndReadMessage + 0xD0, 2, 1, temp_16, 0x1000, temp_16, 0x1000, 0, 0);
}
