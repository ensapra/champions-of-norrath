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

M2C_UNK CalcSlotWorldTransform__9VICSprite15VICSpriteNodeIDiR7VISceneR10VIMatrix44(void *, s32, s32, s32, s32); /* extern */
void *GetActorSpritePtr__C7VIScenei(s32);           /* extern */
M2C_UNK GetActorTransform__7VISceneiR10VIMatrix44(s32, s32, s32); /* extern */

s32 GetNodeTransform__18VISpellEventDriveri15VICSpriteNodeIDR10VIMatrix44(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_2;
    void *temp_2;

    var_2 = -1;
    if (arg1 != -1) {
        temp_2 = GetActorSpritePtr__C7VIScenei(M2C_FIELD(arg0, s32 *, 0x14));
        var_2 = -1;
        if (temp_2 != NULL) {
            if (M2C_FIELD(temp_2, s32 *, 0x34) != 5) {
                GetActorTransform__7VISceneiR10VIMatrix44(M2C_FIELD(arg0, s32 *, 0x14), arg1, arg3);
            } else {
                CalcSlotWorldTransform__9VICSprite15VICSpriteNodeIDiR7VISceneR10VIMatrix44(temp_2, arg2, arg1, M2C_FIELD(arg0, s32 *, 0x14), arg3);
            }
            var_2 = 0;
        }
    }
    return var_2;
}
