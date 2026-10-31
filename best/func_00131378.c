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

M2C_UNK func_001050A8(M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_00105190(M2C_UNK *);                   /* extern */
s32 func_00110720(s32, void *);                     /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E420(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK helpMessageFrame__Fv;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00131378(void) {
    M2C_UNK sp10;
    s32 *var_16;
    s32 var_16_2;

    var_16 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x20;
    if (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x39C) >= 0) {
        if (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x39C) >= 7) {
            if (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x39C) < 0xE) {
                var_16_2 = 0;
loop_9:
                if (var_16_2 < 3) {
                    if (!(((s32) M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0xCAC) >> var_16_2) & 1)) {
                        func_001050A8(&sp10, *(&Slerp__7VIQuatDRC7VIQuatDT1d + 0x28 + (var_16_2 * 4)), 0xB, 0, 0xA, 0, 0x10, 6, 0x150, 6);
                        func_00105190(&sp10);
                    }
                    var_16_2 += 1;
                    goto loop_9;
                }
                var_16 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x20;
            }
        } else {
            var_16 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x20;
            M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x20) = func_00110720(func_0011BA18(0x9B), &Slerp__7VIQuatDRC7VIQuatDT1d + 0x10);
            M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x388) = -1;
            M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x68) = 0;
            M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x384) = 0;
        }
    }
    func_0011E420(0, 0);
    func_0011CEF0(*var_16, M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x39C), 1);
}
