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

M2C_UNK SetCaretOffset__9VIWndEditi(void *, M2C_UNK); /* extern */
M2C_UNK __builtin_vec_delete(s16 *);                /* extern */
s16 *__builtin_vec_new(s32);                        /* extern */

void SetMaxTextLen__9VIWndEditi(void *arg0, s32 arg1) {
    s16 *temp_2;
    s16 *temp_4;
    s16 *temp_4_2;
    s16 *var_2;
    s32 var_3;

    M2C_FIELD(arg0, s32 *, 0x1AC) = arg1;
    temp_4 = M2C_FIELD(arg0, s16 **, 0x1A8);
    if (temp_4 != NULL) {
        __builtin_vec_delete(temp_4);
    }
    temp_4_2 = M2C_FIELD(arg0, s16 **, 0x1B0);
    if (temp_4_2 != NULL) {
        __builtin_vec_delete(temp_4_2);
    }
    M2C_FIELD(arg0, s16 **, 0x1A8) = __builtin_vec_new(arg1 * 2);
    temp_2 = __builtin_vec_new(arg1 * 8);
    var_3 = M2C_FIELD(arg0, s32 *, 0x1AC);
    M2C_FIELD(arg0, s16 **, 0x1B0) = temp_2;
    *M2C_FIELD(arg0, s16 **, 0x1A8) = 0;
    if (var_3 > 0) {
        var_2 = temp_2;
        do {
            var_3 -= 1;
            M2C_FIELD(var_2, s32 *, 0) = 0;
            M2C_FIELD(var_2, s16 *, 4) = 0;
            M2C_FIELD(var_2, s16 *, 6) = 0;
            var_2 += 8;
        } while (var_3 != 0);
    }
    M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    SetCaretOffset__9VIWndEditi(arg0, 0);
}
