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

void ipaddress_to_sceaddr__FPC11ipaddress_tP14sceInetAddress(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u8 *, 7) = (u8) M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 1);
    M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 2);
    M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 3);
}
