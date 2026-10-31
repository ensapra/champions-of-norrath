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

M2C_UNK __builtin_vec_delete(s8 *);                 /* extern */
s8 *__builtin_vec_new(s32);                         /* extern */
M2C_UNK strncpy(s8 *, s8 *, s32);                   /* extern */

s32 Allocate__8VIString(void *arg0) {
    s32 temp_2;
    s32 var_2;
    s8 *temp_2_2;
    s8 *temp_2_3;
    s8 *temp_2_4;

    temp_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_2 != 0) {
        temp_2_2 = __builtin_vec_new(temp_2);
        var_2 = -1;
        if (temp_2_2 != NULL) {
            *temp_2_2 = 0;
            temp_2_3 = M2C_FIELD(arg0, s8 **, 8);
            if (temp_2_3 != NULL) {
                strncpy(temp_2_2, temp_2_3, M2C_FIELD(arg0, s32 *, 0));
                temp_2_2[M2C_FIELD(arg0, s32 *, 0)] = 0;
                temp_2_4 = M2C_FIELD(arg0, s8 **, 8);
                if (temp_2_4 != NULL) {
                    __builtin_vec_delete(temp_2_4);
                }
            }
            M2C_FIELD(arg0, s8 **, 8) = temp_2_2;
            goto block_6;
        }
    } else {
block_6:
        var_2 = 0;
    }
    return var_2;
}
