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

s32 func_00140020();                                /* extern */
M2C_UNK func_0017AE78(s32, M2C_UNK);                /* extern */
extern M2C_UNK OnDrawSelf__16VIWndReadMessage;
extern M2C_UNK func_00140088;

s32 func_001400F8(void *arg0) {
    s32 temp_2;

    temp_2 = func_00140020();
    if (temp_2 != 0) {
        return 0;
    }
    if (M2C_FIELD(&OnDrawSelf__16VIWndReadMessage, s32 *, 0x90) > 0) {
        M2C_FIELD(&OnDrawSelf__16VIWndReadMessage, s32 *, 0x90) = (s32) (M2C_FIELD(&OnDrawSelf__16VIWndReadMessage, s32 *, 0x90) - 1);
        return temp_2;
    }
    func_0017AE78(M2C_FIELD(&OnDrawSelf__16VIWndReadMessage, s32 *, 0x98), 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_00140088;
    return 0;
}
