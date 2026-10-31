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

s32 func_001107E8(s32, void *, M2C_UNK, M2C_UNK, void *); /* extern */
s32 func_0011BA18(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E420(M2C_UNK, s32);                /* extern */
extern M2C_UNK Normalize__7VIQuatD;
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK helpMessageFrame__Fv;

void func_001323B8(void) {
    s32 temp_2;

    if (M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x48) >= 0) {
        if (M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x48) < 7) {
            temp_2 = func_001107E8(func_0011BA18(0xC9, M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x2C)), &Slerp__7VIQuatDRC7VIQuatDT1d + 0x408, 2, 0, &Normalize__7VIQuatD + 0x2C);
            M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x3BC) = -1;
            M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x400) = temp_2;
            M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x30) = 0;
        }
    }
    func_0011E420(0, M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x2C));
    func_0011CEF0(M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x400), M2C_FIELD(&Normalize__7VIQuatD, s32 *, 0x48), 6);
}
