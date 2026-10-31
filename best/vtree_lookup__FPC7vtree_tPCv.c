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

s32 vtree_lookup__FPC7vtree_tPCv(void *arg0, s32 arg1) {
    s32 temp_18;
    s32 temp_2;
    void *var_16;

    temp_18 = arg0 + 0x14;
    var_16 = M2C_FIELD(arg0, void **, 0);
loop_1:
    if (var_16 != temp_18) {
        temp_2 = M2C_FIELD(arg0, s32 (**)(s32, s32), 0xC)(arg1, var_16 + M2C_FIELD(arg0, s32 *, 0x10));
        if (temp_2 < 0) {
            var_16 = M2C_FIELD(var_16, void **, 8);
            goto loop_1;
        }
        if (temp_2 > 0) {
            var_16 = M2C_FIELD(var_16, void **, 0xC);
            goto loop_1;
        }
        if (var_16 != temp_18) {
            return var_16 - M2C_FIELD(arg0, s32 *, 8);
        }
        goto block_9;
    }
block_9:
    return 0;
}
