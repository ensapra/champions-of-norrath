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

void vtree_insert_raw__FP7vtree_tPv(void *arg0, s32 arg1) {
    s32 temp_4;
    void **temp_3;
    void *temp_2;
    void *temp_2_2;
    void *var_16;
    void *var_17;
    void *var_19;

    if (arg1 == 0) {
        var_17 = arg0 + 0x14;
        var_19 = var_17;
    } else {
        var_19 = arg0 + 0x14;
        var_17 = arg1 + M2C_FIELD(arg0, s32 *, 8);
    }
    M2C_FIELD(var_17, void **, 4) = var_19;
    M2C_FIELD(var_17, void **, 8) = var_19;
    M2C_FIELD(var_17, void **, 0xC) = var_19;
    M2C_FIELD(var_17, s32 *, 0) = 1;
    temp_2 = M2C_FIELD(arg0, void **, 0);
    var_16 = temp_2;
    if (temp_2 == var_19) {
        M2C_FIELD(arg0, void **, 0) = var_17;
        return;
    }
loop_7:
    temp_4 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_3 = var_16 + 8 + (((u32) ~M2C_FIELD(arg0, s32 (**)(void *, void *), 0xC)(var_17 + temp_4, var_16 + temp_4) >> 0x1F) * 4);
    temp_2_2 = *temp_3;
    if (temp_2_2 != var_19) {
        var_16 = temp_2_2;
        goto loop_7;
    }
    *temp_3 = var_17;
    M2C_FIELD(var_17, void **, 4) = var_16;
}
