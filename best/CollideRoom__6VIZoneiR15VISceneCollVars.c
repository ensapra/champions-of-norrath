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

s32 CollideActor__7VISceneR12VICollSphereR13VISceneFilteri(void *, s32, s32, s32); /* extern */
s32 CollideSprite__7VISceneR12VICollSphereR13VISceneFilteri(void *, s32, s32, s32); /* extern */
M2C_UNK SetWorld__9VICollideRC10VIMatrix44(s32, M2C_UNK *); /* extern */
extern M2C_UNK D_011B0200;

s32 CollideRoom__6VIZoneiR15VISceneCollVars(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_18;
    s32 temp_2;
    s32 temp_4;
    s32 var_19;
    void *temp_21;
    void *temp_3;
    void *var_16;

    temp_21 = arg0 + 0x5C;
    temp_3 = M2C_FIELD(temp_21, s32 *, 4) + (arg1 * 0x78);
    temp_4 = M2C_FIELD(M2C_FIELD(arg2, void **, 4), s32 *, 0x544);
    var_19 = 0;
    if (M2C_FIELD(temp_3, s32 *, 0x24) != temp_4) {
        temp_18 = M2C_FIELD(temp_3, s32 *, 0x1C);
        M2C_FIELD(temp_3, s32 *, 0x24) = temp_4;
        if (temp_18 != -1) {
            SetWorld__9VICollideRC10VIMatrix44(M2C_FIELD(arg2, s32 *, 0x10), &D_011B0200);
            var_19 = CollideSprite__7VISceneR12VICollSphereR13VISceneFilteri(M2C_FIELD(arg2, void **, 4), M2C_FIELD(arg2, s32 *, 0xC), M2C_FIELD(arg2, s32 *, 8), temp_18) != 0;
        }
    }
    var_16 = M2C_FIELD((M2C_FIELD(temp_21, s32 *, 4) + (arg1 * 0x78)), void **, 0x68);
    if (var_16 != (void *)-1) {
        do {
            temp_2 = CollideActor__7VISceneR12VICollSphereR13VISceneFilteri(M2C_FIELD(arg2, void **, 4), M2C_FIELD(arg2, s32 *, 0xC), M2C_FIELD(arg2, s32 *, 8), M2C_FIELD(var_16, s32 *, 4));
            var_16 = M2C_FIELD(var_16, void **, 0x10);
            var_19 = (temp_2 != 0) ? 1 : var_19;
        } while (var_16 != (void *)-1);
    }
    return var_19;
}
