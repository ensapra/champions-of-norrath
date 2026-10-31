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

M2C_UNK __wrap_free(s32);                           /* extern */
M2C_UNK sceSifFreeIopHeap(s32);                     /* extern */
extern M2C_UNK D_011E9440;

void VIMovieShutdown__Fv(void) {
    if (M2C_FIELD(&D_011E9440, s32 *, 0) != 0) {
        __wrap_free(M2C_FIELD(&D_011E9440, s32 *, 0));
    }
    if (M2C_FIELD(&D_011E9440, s32 *, 8) != 0) {
        __wrap_free(M2C_FIELD(&D_011E9440, s32 *, 8));
    }
    if (M2C_FIELD(&D_011E9440, s32 *, 0xC) != 0) {
        __wrap_free(M2C_FIELD(&D_011E9440, s32 *, 0xC));
    }
    if (M2C_FIELD(&D_011E9440, s32 *, 0x10) != 0) {
        __wrap_free(M2C_FIELD(&D_011E9440, s32 *, 0x10));
    }
    if (M2C_FIELD(&D_011E9440, s32 *, 0x18) != 0) {
        __wrap_free(M2C_FIELD(&D_011E9440, s32 *, 0x18));
    }
    if (M2C_FIELD(&D_011E9440, s32 *, 0x20) != 0) {
        sceSifFreeIopHeap(M2C_FIELD(&D_011E9440, s32 *, 0x20));
    }
    if (M2C_FIELD(&D_011E9440, s32 *, 0x28) != 0) {
        __wrap_free(M2C_FIELD(&D_011E9440, s32 *, 0x28));
    }
    if (M2C_FIELD(&D_011E9440, s32 *, 0x2C) != 0) {
        sceSifFreeIopHeap(M2C_FIELD(&D_011E9440, s32 *, 0x2C));
    }
}
