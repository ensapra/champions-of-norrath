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

M2C_UNK AddTail__7VILListP7VILNode(void *, s32);    /* extern */
M2C_UNK Init__7VILList(void *);                     /* extern */
M2C_UNK ReleaseAllParticleDefinitions__16VIParticleSystemR12VIDictionary(void *, s32); /* extern */
M2C_UNK __builtin_vec_delete(s32);                  /* extern */

s32 Clear__16VIParticleSystemR12VIDictionary(void *arg0, s32 arg1) {
    M2C_UNK *temp_2;
    M2C_UNK *var_16;
    M2C_UNK *var_3;
    s32 temp_4;
    s32 temp_5;
    s32 var_16_2;
    s32 var_18;
    void *temp_19;

    var_16 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
    var_3 = *var_16;
    if (var_3 != NULL) {
        do {
            if (M2C_FIELD(var_16, s32 *, 0x50) != 0) {
                Init__7VILList(var_16 + 0xA0);
                M2C_FIELD(var_16, s32 *, 0xAC) = 0;
                var_3 = M2C_FIELD(var_16, M2C_UNK **, 0);
                M2C_FIELD(var_16, s32 *, 0x50) = 0;
                M2C_FIELD(var_16, s32 *, 0x54) = 0;
            }
            var_16 = var_3;
            temp_2 = *var_16;
            var_3 = temp_2;
        } while (temp_2 != NULL);
    }
    temp_19 = arg0 + 0x40;
    Init__7VILList(arg0 + 0x34);
    Init__7VILList(temp_19);
    var_18 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x4C) > 0) {
        var_16_2 = 0;
loop_6:
        var_18 += 1;
        temp_5 = M2C_FIELD(arg0, s32 *, 0x50) + var_16_2;
        var_16_2 += 0x68;
        AddTail__7VILListP7VILNode(temp_19, temp_5);
        if (var_18 < M2C_FIELD(arg0, s32 *, 0x4C)) {
            goto loop_6;
        }
    }
    ReleaseAllParticleDefinitions__16VIParticleSystemR12VIDictionary(arg0, arg1);
    temp_4 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_4 != 0) {
        __builtin_vec_delete(temp_4);
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    return 0;
}
