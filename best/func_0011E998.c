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

M2C_UNK func_0010C7E8(M2C_UNK, s32, s32, M2C_UNK);  /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E420(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00139550(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK Select__12VIWndOptions;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_0011E998(s32 arg0) {
    s32 temp_16;

    func_0011E420(0, 0);
    func_0011CEF0(M2C_FIELD(&Select__12VIWndOptions, s32 *, 8), arg0, 0x16);
    if (arg0 >= 0) {
        if (arg0 >= 7) {
            if (arg0 < 0xE) {
                func_00139550(0xFF, 0x14);
            }
        } else {
            func_00139550(0, 0x14);
            M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = (s32) M2C_FIELD(&Select__12VIWndOptions, s32 *, 8);
            temp_16 = func_0011BA18(2);
            func_0010C7E8(0, temp_16, func_0011BA18(3), 0);
        }
    }
}
