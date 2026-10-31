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

s32 s_mp_alloc__FUiUi(s32, M2C_UNK);                /* extern */

s32 mp_init_size(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 var_2;

    if ((arg0 == NULL) || (arg1 == 0)) {
        return -4;
    }
    temp_2 = s_mp_alloc__FUiUi(arg1, 2);
    var_2 = -2;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_2;
    if (temp_2 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        M2C_FIELD(arg0, s32 *, 8) = 1;
        var_2 = 0;
        M2C_FIELD(arg0, s8 *, 0) = 0;
    }
    return var_2;
}
