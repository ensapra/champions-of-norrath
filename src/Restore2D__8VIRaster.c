/* machine draft (m2c) for ee-gcc-2.96 -O2 -G0 -mno-check-zero-division, tried by autopilot */
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

M2C_UNK sceVu0CopyMatrix(M2C_UNK, s32);             /* extern */

s32 Restore2D__8VIRaster(void *arg0) {
    sceVu0CopyMatrix(0x70000000, arg0 + 0x44B0);
    sceVu0CopyMatrix(0x70000040, arg0 + 0x44F0);
    *(u8 *)0x70000220 = M2C_FIELD(arg0, u8 *, 0x4530);
    *(u8 *)0x70000221 = M2C_FIELD(arg0, u8 *, 0x4531);
    M2C_FIELD(arg0, s32 *, 0x45E0) = 1;
    return 0;
}
