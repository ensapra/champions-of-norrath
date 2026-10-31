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
M2C_UNK func_00140500(void *);                      /* extern */
extern M2C_UNK Init__14VIQueryTriListiRC6VIBBoxRC7VIVect3f;

s32 func_0013E7E0(void) {
    s32 temp_2;
    s32 var_2;

    var_2 = 0;
    if (func_001404D0() == 0) {
        temp_2 = func_001404F0();
        M2C_FIELD(&Init__14VIQueryTriListiRC6VIBBoxRC7VIVect3f, s32 *, 0xA0) = temp_2;
        if (temp_2 >= 0) {
            func_00140500(&Init__14VIQueryTriListiRC6VIBBoxRC7VIVect3f + 0xB0);
        }
        var_2 = 1;
    }
    return var_2;
}
