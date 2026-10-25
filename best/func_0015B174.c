/* machine draft (m2c) for ee-gcc-2.96 -Os -G8, tried by autopilot */
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

M2C_UNK func_0015AFAC(void *);                      /* extern */
M2C_UNK func_0015B210(void *);                      /* extern */
M2C_UNK func_0015BA94(void *);                      /* extern */
M2C_UNK func_0015BBCC();                            /* extern */

s32 func_0015B174(void *arg0) {
    s32 temp_4;
    s32 var_2;

    if (M2C_FIELD(arg0, s32 *, 0xB8C) < M2C_FIELD(arg0, s32 *, 0xB94)) {
        func_0015BBCC();
        func_0015B210(arg0);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0xBF0);
    var_2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xB8C) < temp_4) {
        M2C_FIELD(arg0, s32 *, 0xB8C) = temp_4;
        func_0015B210(arg0);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        if (M2C_FIELD(arg0, s32 *, 0xD10) == 0) {
            func_0015AFAC(arg0);
        } else {
            func_0015BA94(arg0);
        }
        var_2 = 1;
    }
    return var_2;
}
