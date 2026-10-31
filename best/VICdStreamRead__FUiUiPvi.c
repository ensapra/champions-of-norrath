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

s32 FlushIop__Fi(M2C_UNK, M2C_UNK, s32, s32);       /* extern */
extern s32 D_0118E544;
extern M2C_UNK D_011E25C0;
extern s32 D_011E2640;
extern s32 D_011E2644;

s32 VICdStreamRead__FUiUiPvi(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_011E2640 != 0) {
        D_011E2644 = 2;
        return -1;
    }
    D_0118E544 = arg2;
    M2C_FIELD(&D_011E25C0, s32 *, 0) = 4;
    M2C_FIELD(&D_011E25C0, s32 *, 4) = arg0;
    M2C_FIELD(&D_011E25C0, s32 *, 8) = arg1;
    M2C_FIELD(&D_011E25C0, s32 *, 0xC) = arg3;
    M2C_FIELD(&D_011E25C0, s32 *, 0x10) = arg2;
    if (FlushIop__Fi(0, 4, arg1, arg0) < 0) {
        D_011E2644 = 1;
        return -1;
    }
    D_011E2644 = 0;
    D_011E2640 = 1;
    return 0;
}
