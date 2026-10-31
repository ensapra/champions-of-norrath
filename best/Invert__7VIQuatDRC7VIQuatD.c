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

M2C_UNK Normalize__7VIQuatD(void *);                /* extern */
s64 dpsub(M2C_UNK, s64);                            /* extern */

void Invert__7VIQuatDRC7VIQuatD(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s64 *, 0) = dpsub(0, M2C_FIELD(arg1, s64 *, 0));
    M2C_FIELD(arg0, s64 *, 8) = dpsub(0, M2C_FIELD(arg1, s64 *, 8));
    M2C_FIELD(arg0, s64 *, 0x10) = dpsub(0, M2C_FIELD(arg1, s64 *, 0x10));
    M2C_FIELD(arg0, s64 *, 0x18) = (s64) M2C_FIELD(arg1, s64 *, 0x18);
    Normalize__7VIQuatD(arg0);
}
