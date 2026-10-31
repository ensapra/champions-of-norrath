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

M2C_UNK func_0010C7E8(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E420(M2C_UNK, s32);                /* extern */
M2C_UNK func_00139550(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0014D240(s32, M2C_UNK);                /* extern */
M2C_UNK func_0014D270(s32);                         /* extern */
extern M2C_UNK __10VIMaterial;

void func_00137F38(s32 arg0) {
    func_0011E420(0, M2C_FIELD(&__10VIMaterial, s32 *, 0xE8));
    func_0011CEF0(M2C_FIELD(&__10VIMaterial, s32 *, 0xC8), arg0, 2);
    if (arg0 >= 0) {
        if (arg0 < 7) {
            if (M2C_FIELD(&__10VIMaterial, s32 *, 0xC8) != 0) {
                func_0014D240(M2C_FIELD(&__10VIMaterial, s32 *, 0xC8), 0x14);
            }
            func_00139550(0, 0x14);
            func_0010C7E8(0, func_0011BA18(2), 0, 0);
            return;
        }
        if (arg0 < 0xE) {
            if (M2C_FIELD(&__10VIMaterial, s32 *, 0xC8) != 0) {
                func_0014D270(M2C_FIELD(&__10VIMaterial, s32 *, 0xC8));
            }
            func_00139550(0xFF, 0x14);
        }
    }
}
