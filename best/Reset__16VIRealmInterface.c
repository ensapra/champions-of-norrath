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

M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */

void Reset__16VIRealmInterface(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD90) = 0;
    M2C_FIELD(arg0, s32 *, 0xD94) = 0;
    M2C_FIELD(arg0, s32 *, 0xF28) = 0;
    memset(arg0 + 0x114, 0, 0x400);
    memset(arg0 + 0x514, 0, 0x400);
    memset(arg0 + 0x918, 0, 0x14);
    memset(arg0 + 0x92C, 0, 0x400);
    memset(arg0 + 0xD30, 0, 0x14);
    memset(arg0 + 0x13E0, 0, 0x11E0);
    M2C_FIELD(arg0, s32 *, 0xD8C) = 0;
    memset(arg0 + 0x2608, 0, 0x100);
    memset(arg0 + 0x2708, 0, 0x6400);
    memset(arg0 + 0x8B08, 0, 0x14);
    memset(arg0 + 0x8B1C, 0, 0x960);
}
