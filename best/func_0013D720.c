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

s32 func_001404D0();                                /* extern */
s32 func_001404F0();                                /* extern */
M2C_UNK func_00140A60(s32, void *);                 /* extern */
extern M2C_UNK SetLayerMagFilter__10VIMaterialii;

s32 func_0013D720(void) {
    s32 var_2;

    var_2 = 0;
    if (func_001404D0() == 0) {
        M2C_FIELD(&SetLayerMagFilter__10VIMaterialii, s32 *, 0x10) = func_001404F0();
        func_00140A60(M2C_FIELD(&SetLayerMagFilter__10VIMaterialii, s32 *, 8), &SetLayerMagFilter__10VIMaterialii + 8);
        var_2 = 1;
    }
    return var_2;
}
