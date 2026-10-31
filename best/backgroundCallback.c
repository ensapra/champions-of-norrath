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

M2C_UNK fillBuff(s32, M2C_UNK);                     /* extern */
extern s32 D_011E99EC;

s32 backgroundCallback(s32 arg0) {
    u32 temp_16;

    temp_16 = *(u32 *)0x10000800 + D_011E99EC;
    if ((u32) *(u32 *)0x10000800 < temp_16) {
        do {
            fillBuff(arg0, 0);
        } while ((u32) *(u32 *)0x10000800 < temp_16);
    }
    return 1;
}
