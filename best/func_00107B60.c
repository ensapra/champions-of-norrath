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

extern M2C_UNK xmlListPopFront;
extern M2C_UNK xmlListSize;

s32 func_00107B60(void) {
    s32 *var_3;
    s32 var_11;
    s32 var_12;
    s32 var_6;
    s32 var_9;
    void *temp_2;
    void *temp_2_2;
    void *temp_7;
    void *var_5;

    temp_2 = &xmlListSize + 0x18;
    var_3 = temp_2 + 0xC;
    var_12 = 0;
    var_11 = 0;
loop_1:
    var_9 = 0;
    if (*var_3 > 0) {
        temp_2_2 = var_11 + temp_2;
        var_6 = 0;
        temp_7 = M2C_FIELD(temp_2_2, void **, 0);
        var_5 = temp_7;
loop_3:
        var_6 += 0x1C;
        if (M2C_FIELD(var_5, s32 *, 0) == M2C_FIELD(&xmlListPopFront, s32 *, 8)) {
            return M2C_FIELD(var_5, s32 *, 4) & 2;
        }
        var_9 += 1;
        var_5 = temp_7 + var_6;
        if (var_9 >= M2C_FIELD(temp_2_2, s32 *, 0xC)) {
            goto block_6;
        }
        goto loop_3;
    }
block_6:
    var_12 += 1;
    var_11 += 0x14;
    var_3 += 0x14;
    if (var_12 >= 2) {
        return 0;
    }
    goto loop_1;
}
