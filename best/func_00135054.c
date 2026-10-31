/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8 -mno-check-zero-division, tried by autopilot */
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

s32 func_0011C6C8();                                /* extern */
s32 func_0011C6F0(s32);                             /* extern */
M2C_UNK func_001350B8();                            /* extern */
extern M2C_UNK HUDRunFrame__Fv;

s32 func_00135054(void) {
    if (!(func_0011C6C8() & M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x2C))) {
        return 0;
    }
    if (func_0011C6F0(M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x2C)) & M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x2C)) {
        return 0;
    }
    func_001350B8();
    return 1;
}
