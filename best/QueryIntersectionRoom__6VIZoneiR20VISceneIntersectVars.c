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

s32 QueryIntersectionActor__7VISceneiR6VIBBoxR13VIActorFilterR14VIQueryTriList(void *, s32, void *, s32, s32); /* extern */
s32 QueryIntersectionSprite__7VISceneiR6VIBBoxRC10VIMatrix44R14VIQueryTriList(void *, s32, void *, M2C_UNK *, s32, void *); /* extern */
extern M2C_UNK D_011B0200;

s32 QueryIntersectionRoom__6VIZoneiR20VISceneIntersectVars(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_5;
    s32 temp_6;
    s32 var_2;
    void *temp_19;
    void *temp_4;
    void *temp_9;
    void *var_16;

    temp_19 = arg0 + 0x5C;
    temp_9 = M2C_FIELD(arg2, void **, 0x1C);
    temp_4 = M2C_FIELD(temp_19, s32 *, 4) + (arg1 * 0x78);
    temp_6 = M2C_FIELD(temp_9, s32 *, 0x544);
    if (M2C_FIELD(temp_4, s32 *, 0x24) != temp_6) {
        temp_5 = M2C_FIELD(temp_4, s32 *, 0x1C);
        M2C_FIELD(temp_4, s32 *, 0x24) = temp_6;
        if ((temp_5 != -1) && (QueryIntersectionSprite__7VISceneiR6VIBBoxRC10VIMatrix44R14VIQueryTriList(temp_9, temp_5, arg2 + 4, &D_011B0200, M2C_FIELD(arg2, s32 *, 0x28), temp_9) < 0)) {
            return -1;
        }
    }
    var_16 = M2C_FIELD((M2C_FIELD(temp_19, s32 *, 4) + (arg1 * 0x78)), void **, 0x68);
    if (var_16 != (void *)-1) {
loop_6:
        var_2 = -1;
        if (QueryIntersectionActor__7VISceneiR6VIBBoxR13VIActorFilterR14VIQueryTriList(M2C_FIELD(arg2, void **, 0x1C), M2C_FIELD(var_16, s32 *, 4), arg2 + 4, M2C_FIELD(arg2, s32 *, 0x20), M2C_FIELD(arg2, s32 *, 0x28)) >= 0) {
            var_16 = M2C_FIELD(var_16, void **, 0x10);
            if (var_16 == (void *)-1) {
                goto block_8;
            }
            goto loop_6;
        }
    } else {
block_8:
        var_2 = 0;
    }
    return var_2;
}
