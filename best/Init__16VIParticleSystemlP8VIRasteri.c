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
M2C_UNK __7VILNode(void *);                         /* extern */
void *__builtin_vec_new(s32);                       /* extern */

s32 Init__16VIParticleSystemlP8VIRasteri(void *arg0, s64 arg1, s32 arg2, s32 arg3) {
    f32 *var_2;
    s32 temp_5_2;
    s32 var_16_2;
    s32 var_16_3;
    s32 var_17;
    s32 var_19;
    void *temp_19;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *var_16;

    M2C_FIELD(arg0, s64 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg3;
    temp_2 = __builtin_vec_new(arg3 * 0x68);
    if (temp_2 != NULL) {
        var_16 = temp_2;
        var_19 = arg3 - 1;
        if (arg3 != 0) {
            do {
                var_19 -= 1;
                __7VILNode(var_16);
                temp_3 = var_16 + 0x20;
                temp_4 = var_16 + 0x38;
                temp_5 = var_16 + 0x48;
                temp_2_2 = var_16 + 0x2C;
                var_16 += 0x68;
                M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
                M2C_FIELD(temp_3, f32 *, 0) = 0.0f;
                M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
                M2C_FIELD(temp_2_2, f32 *, 8) = 0.0f;
                M2C_FIELD(temp_2_2, f32 *, 0) = 0.0f;
                M2C_FIELD(temp_2_2, f32 *, 4) = 0.0f;
                M2C_FIELD(temp_4, f32 *, 0xC) = 0.0f;
                M2C_FIELD(temp_4, f32 *, 0) = 0.0f;
                M2C_FIELD(temp_4, f32 *, 4) = 0.0f;
                M2C_FIELD(temp_4, f32 *, 8) = 0.0f;
                M2C_FIELD(temp_5, f32 *, 0xC) = 0.0f;
                M2C_FIELD(temp_5, f32 *, 0) = 0.0f;
                M2C_FIELD(temp_5, f32 *, 4) = 0.0f;
                M2C_FIELD(temp_5, f32 *, 8) = 0.0f;
            } while (var_19 != -1);
        }
    }
    M2C_FIELD(arg0, void **, 0x50) = temp_2;
    temp_19 = arg0 + 0x40;
    var_16_2 = 0;
    Init__7VILList(temp_19);
    if (M2C_FIELD(arg0, s32 *, 0x4C) > 0) {
        var_17 = 0;
loop_6:
        var_16_2 += 1;
        temp_5_2 = M2C_FIELD(arg0, void **, 0x50) + var_17;
        var_17 += 0x68;
        AddTail__7VILListP7VILNode(temp_19, temp_5_2);
        if (var_16_2 < M2C_FIELD(arg0, s32 *, 0x4C)) {
            goto loop_6;
        }
    }
    var_16_3 = 7;
    var_2 = arg0 + 0x30;
    do {
        var_16_3 -= 1;
        *var_2 = 0.03333333f;
        var_2 -= 4;
    } while (var_16_3 >= 0);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return 0;
}
