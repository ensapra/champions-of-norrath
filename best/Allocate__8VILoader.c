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

M2C_UNK __6VIFile(s32 *);                           /* extern */
s32 *__builtin_vec_new(s32);                        /* extern */
M2C_UNK __t7VIArray1Z14VIResourceElem(s32 *);       /* extern */

s32 Allocate__8VILoader(void *arg0) {
    s32 *temp_20;
    s32 *temp_2;
    s32 *var_16;
    s32 *var_3;
    s32 temp_18;
    s32 var_17;
    s32 var_2;

    temp_2 = __builtin_vec_new(M2C_FIELD(arg0, s32 *, 0x6B8) + 0x40);
    var_2 = -1;
    M2C_FIELD(arg0, s32 **, 0x6C0) = temp_2;
    if (temp_2 != NULL) {
        temp_18 = M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x6BC) = (s32) ((s32) (temp_2 + 0x40) & ~0x3F);
        var_3 = __builtin_vec_new((temp_18 * 0xC8) + 8);
        temp_20 = var_3 + 8;
        if (var_3 != NULL) {
            *var_3 = temp_18;
            var_16 = temp_20;
            var_17 = temp_18 - 1;
            if (temp_18 != 0) {
                do {
                    var_17 -= 1;
                    __6VIFile(var_16);
                    __t7VIArray1Z14VIResourceElem(var_16 + 0xC0);
                    var_16 += 0xC8;
                } while (var_17 != -1);
            }
            var_3 = temp_20;
        }
        M2C_FIELD(arg0, s32 **, 4) = var_3;
        var_2 = (var_3 != NULL) ? 0 : -1;
    }
    return var_2;
}
