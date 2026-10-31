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

s32 __wrap_memalign(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK sceLibnetInitialize(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void __11VIUDPSocketi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 4) = __wrap_memalign(0x40, 0x5000);
    sceLibnetInitialize(arg0 + 8, 0x800, 0x2000, 0x20);
}
