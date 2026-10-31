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

M2C_UNK SetStringValue__9VIGUIPagePCcT1b(s32, M2C_UNK *, void *, M2C_UNK); /* extern */
extern M2C_UNK D_011D9340;

void ShowGameDescription__16VIRealmInterfacei(void *arg0, s32 arg1) {
    SetStringValue__9VIGUIPagePCcT1b(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x34), &D_011D9340, arg0 + (arg1 << 8) + 0x2708, 0);
}
