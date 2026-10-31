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

M2C_UNK func_0019FEC8(void *);                      /* extern */
extern M2C_UNK onLogin__16VIRealmInterfaceUiiPCUsPv;

void func_0019FF88(void) {
    if (M2C_FIELD(&onLogin__16VIRealmInterfaceUiiPCUsPv, s32 *, 0x718) == 0) {
        M2C_FIELD(&onLogin__16VIRealmInterfaceUiiPCUsPv, s32 *, 0x718) = 1;
        func_0019FEC8(&onLogin__16VIRealmInterfaceUiiPCUsPv + 0x718);
    }
}
