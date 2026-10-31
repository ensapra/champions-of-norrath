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
M2C_UNK Clear__9VITrailFx();                        /* extern */
M2C_UNK __7VILNode(s32);                            /* extern */
s32 __builtin_vec_new(s32);                         /* extern */

s32 Init__9VITrailFxlif(void *arg0, s64 arg1, s32 arg2, f32 fparg0) {
    s32 temp_2;
    s32 temp_5;
    s32 var_16;
    s32 var_16_2;
    s32 var_17;
    s32 var_18;
    s32 var_3;
    s32 var_3_2;
    void *var_2;
    void *var_2_2;

    Clear__9VITrailFx();
    M2C_FIELD(arg0, s64 *, 0x10) = arg1;
    M2C_FIELD(arg0, f32 *, 0x18) = fparg0;
    temp_2 = __builtin_vec_new(arg2 * 0x4C);
    var_16 = temp_2;
    if (temp_2 != 0) {
        var_18 = arg2 - 1;
        if (arg2 != 0) {
            do {
                __7VILNode(var_16);
                var_2 = var_16 + 0x10;
                var_3 = 1;
loop_4:
                var_3 -= 1;
                M2C_FIELD(var_2, f32 *, 0) = 0.0f;
                M2C_FIELD(var_2, f32 *, 4) = 0.0f;
                M2C_FIELD(var_2, f32 *, 8) = 0.0f;
                var_2 += 0xC;
                if (var_3 != -1) {
                    goto loop_4;
                }
                var_2_2 = var_16 + 0x28;
                var_3_2 = 1;
loop_6:
                var_3_2 -= 1;
                M2C_FIELD(var_2_2, f32 *, 0) = 0.0f;
                M2C_FIELD(var_2_2, f32 *, 4) = 0.0f;
                M2C_FIELD(var_2_2, f32 *, 8) = 0.0f;
                M2C_FIELD(var_2_2, f32 *, 0xC) = 0.0f;
                var_2_2 += 0x10;
                if (var_3_2 != -1) {
                    goto loop_6;
                }
                var_18 -= 1;
                var_16 += 0x4C;
            } while (var_18 != -1);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x34) = temp_2;
    if (arg2 > 0) {
        var_16_2 = arg2;
        var_17 = 0;
        do {
            var_16_2 -= 1;
            temp_5 = M2C_FIELD(arg0, s32 *, 0x34) + var_17;
            var_17 += 0x4C;
            AddTail__7VILListP7VILNode(arg0 + 0x28, temp_5);
        } while (var_16_2 != 0);
    }
    return 0;
}
