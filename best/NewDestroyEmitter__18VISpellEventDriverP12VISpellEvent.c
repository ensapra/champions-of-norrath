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

M2C_UNK AddTail__7VILListP7VILNode(void *, M2C_UNK *); /* extern */
M2C_UNK Remove__7VILNode(M2C_UNK *, M2C_UNK *, s32, s32); /* extern */

s32 NewDestroyEmitter__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1, s32 arg3) {
    M2C_UNK *temp_2;
    M2C_UNK *var_16;
    M2C_UNK *var_4;
    M2C_UNK *var_5;
    s32 temp_6;
    s32 var_7;
    void *temp_3;

    var_7 = arg3;
    var_4 = M2C_FIELD(arg0, M2C_UNK **, 0x4C);
    temp_6 = M2C_FIELD(arg1, s32 *, 4);
    var_5 = *var_4;
    var_16 = NULL;
    if (var_5 != NULL) {
        var_7 = 3;
loop_2:
        temp_3 = M2C_FIELD(var_4, void **, 0x74);
        if ((M2C_FIELD(temp_3, s32 *, 4) != temp_6) || (var_16 = var_4, (M2C_FIELD(temp_3, s32 *, 0) != 3))) {
            var_4 = var_5;
            temp_2 = *var_4;
            var_5 = temp_2;
            if (temp_2 == NULL) {
                var_16 = NULL;
            } else {
                goto loop_2;
            }
        }
    }
    if (var_16 != NULL) {
        Remove__7VILNode(var_16, var_5, temp_6, var_7);
        AddTail__7VILListP7VILNode(arg0 + 0x58, var_16);
    }
    return 0;
}
