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

void *Sprite__7VIScenei(s32, s32);                  /* extern */

s32 GetInstType__C13VIGroupSpriteR7VIScene(void *arg0, s32 arg1) {
    s32 *var_16;
    s32 var_19;
    s32 var_2;
    s32 var_5;
    void *temp_2;
    void *temp_3;

    var_19 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x40) > 0) {
        var_16 = arg0 + 0x44;
        var_5 = M2C_FIELD(arg0, s32 *, 0x44);
loop_2:
        var_16 += 0x20;
        temp_2 = Sprite__7VIScenei(arg1, var_5);
        temp_3 = M2C_FIELD(temp_2, void **, 0x3C);
        var_2 = M2C_FIELD((temp_3 + 0x10), s32 (**)(void *, s32, void *), 4)(temp_2 + M2C_FIELD(temp_3, s16 *, 0x10), arg1, temp_2);
        var_19 += 1;
        if (var_2 != 1) {
            if (var_19 < M2C_FIELD(arg0, s32 *, 0x40)) {
                var_5 = *var_16;
                goto loop_2;
            }
            goto block_6;
        }
    } else {
block_6:
        var_2 = 0;
    }
    return var_2;
}
