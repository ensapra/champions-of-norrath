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

M2C_UNK __4VIXm(void *);                            /* extern */
M2C_UNK __6VIWave(void *);                          /* extern */
void *__builtin_new(M2C_UNK);                       /* extern */

s32 CreateSound__13VISoundDeviceQ27VISound4TYPEi(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_2;
    s32 var_4;
    void **var_3;
    void *temp_2;
    void *var_16;
    void *var_6;

    switch (arg1) {                                 /* irregular */
    case 0:
        var_16 = __builtin_new(0x5C);
        var_6 = var_16;
        if (var_16 != NULL) {
            __6VIWave(var_16);
block_9:
            var_6 = var_16;
        }
block_10:
        var_2 = -1;
        if (var_6 != NULL) {
            var_3 = arg0 + 0xA18;
            var_4 = 0;
loop_15:
            if (*var_3 != NULL) {
                var_4 += 1;
                if (var_4 < 0x80) {
                    var_3 = (var_4 * 4) + arg0 + 0xA18;
                    goto loop_15;
                }
            } else {
                *var_3 = var_6;
            }
            if (var_4 == 0x80) {
                if (var_6 != NULL) {
                    temp_2 = M2C_FIELD(var_6, void **, 0xC);
                    M2C_FIELD((temp_2 + 8), M2C_UNK (**)(void *, M2C_UNK, void *), 4)(var_6 + M2C_FIELD(temp_2, s16 *, 8), 3, var_6);
                    return -1;
                }
            default:
                return -1;
            }
            var_2 = var_4;
            if (arg2 != 0) {
                M2C_FIELD(var_6, s32 *, 4) = (s32) (M2C_FIELD(var_6, s32 *, 4) + 1);
                var_2 = var_4;
            }
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return var_2;
        }
        return var_2;
    case 1:
        var_16 = __builtin_new(0x40);
        var_6 = var_16;
        if (var_16 != NULL) {
            __4VIXm(var_16);
            goto block_9;
        }
        goto block_10;
    }
}
