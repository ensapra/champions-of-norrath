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

M2C_UNK VIDisplayScreen16__FPCcib(M2C_UNK *, s32, s32, s32 *); /* extern */
s32 rand();                                         /* extern */
extern s32 D_0118F2A4;
extern M2C_UNK D_011CD910;

void VIDisplayLoadingScreen__Fb(s32 arg0) {
    s32 temp_4;

    if (arg0 == 0) {
        D_0118F2A4 = rand() & 3;
    } else {
        temp_4 = D_0118F2A4 + 1;
        D_0118F2A4 = temp_4 - (((s32) ((temp_4 < 0) ? (D_0118F2A4 + 4) : temp_4) >> 2) * 4);
    }
    VIDisplayScreen16__FPCcib(&D_011CD910, D_0118F2A4, arg0 == 0, &D_0118F2A4);
}
