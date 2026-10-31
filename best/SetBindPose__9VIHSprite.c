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

M2C_UNK Transform__10VIMatrix44RC6VIQuatfRC7VIVect3(void *, void *, void *, f32); /* extern */

s32 SetBindPose__9VIHSprite(void *arg0) {
    s32 temp_2;
    s32 var_17;
    void *temp_5;

    var_17 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x40) > 0) {
        do {
            temp_2 = var_17 << 8;
            var_17 += 1;
            temp_5 = M2C_FIELD((arg0 + 0x40), s32 *, 8) + temp_2;
            Transform__10VIMatrix44RC6VIQuatfRC7VIVect3(temp_5 + 0x30, temp_5 + 0x7C, temp_5 + 0x90, M2C_FIELD(temp_5, f32 *, 0x8C));
        } while (var_17 < M2C_FIELD(arg0, s32 *, 0x40));
    }
    return 0;
}
