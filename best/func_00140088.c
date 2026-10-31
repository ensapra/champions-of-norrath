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

s32 func_0017A848(M2C_UNK, void *, void *);         /* extern */
extern M2C_UNK OnDrawSelf__16VIWndReadMessage;

s32 func_00140088(void) {
    s32 var_2;

    var_2 = func_0017A848(1, &OnDrawSelf__16VIWndReadMessage + 0x88, &OnDrawSelf__16VIWndReadMessage + 0x8C);
    if (var_2 != 0) {
        if (M2C_FIELD(&OnDrawSelf__16VIWndReadMessage, s32 *, 0x8C) == 0) {
            M2C_FIELD(&OnDrawSelf__16VIWndReadMessage, s32 *, 0x94) = 0;
            return 1;
        }
        M2C_FIELD(&OnDrawSelf__16VIWndReadMessage, s32 *, 0x94) = 1;
        var_2 = 1;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
