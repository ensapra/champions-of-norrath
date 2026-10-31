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

M2C_UNK func_001403B8();                            /* extern */
s32 func_001404D0();                                /* extern */
M2C_UNK func_00140690(M2C_UNK, s32);                /* extern */
extern M2C_UNK OnDrawSelf__16VIWndReadMessage;
extern M2C_UNK objectRadialDamage__FP10GameObjectG6Point3iffiii;

s32 func_0013F6B0(void *arg0) {
    if (func_001404D0() == 0) {
        func_001403B8();
        func_00140690(1, M2C_FIELD(&OnDrawSelf__16VIWndReadMessage, s32 *, 0x60));
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &objectRadialDamage__FP10GameObjectG6Point3iffiii;
    }
    return 0;
}
