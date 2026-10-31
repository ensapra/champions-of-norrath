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

s32 FlushIop__Fi(M2C_UNK);                          /* extern */
extern s32 D_011E25C0;
extern s32 D_011E2640;
extern s32 D_011E2644;

s32 VICdStreamCancel__Fv(void) {
    s32 temp_16;

    temp_16 = D_011E2640;
    if (temp_16 != 1) {
        D_011E2644 = 0;
        return -1;
    }
    D_011E25C0 = 6;
    if (FlushIop__Fi(0) < 0) {
        D_011E2644 = temp_16;
        return -1;
    }
    D_011E2644 = 0;
    D_011E2640 = 2;
    return 0;
}
