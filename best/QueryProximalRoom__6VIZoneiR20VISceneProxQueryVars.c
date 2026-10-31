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

s32 CullIntersect__C6VIBBoxRC8VISphere(s32, s32);   /* extern */
s32 QueryProximalActor__7VISceneiR8VISphereR12VISceneQuery(s32, s32, s32, s32); /* extern */

s32 QueryProximalRoom__6VIZoneiR20VISceneProxQueryVars(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_16;
    s32 temp_18;
    s32 var_2;
    void *temp_19;
    void *var_16;

    temp_18 = arg2 + 8;
    temp_19 = arg0 + 0x5C;
    temp_16 = arg1 * 0x78;
    var_2 = 0;
    if (CullIntersect__C6VIBBoxRC8VISphere(M2C_FIELD(temp_19, s32 *, 4) + temp_16 + 4, temp_18) == 0) {
        var_16 = M2C_FIELD((M2C_FIELD(temp_19, s32 *, 4) + temp_16), void **, 0x68);
        if (var_16 != (void *)-1) {
loop_2:
            var_2 = -1;
            if (QueryProximalActor__7VISceneiR8VISphereR12VISceneQuery(M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(var_16, s32 *, 4), temp_18, M2C_FIELD(arg2, s32 *, 0x18)) >= 0) {
                var_16 = M2C_FIELD(var_16, void **, 0x10);
                if (var_16 == (void *)-1) {
                    goto block_4;
                }
                goto loop_2;
            }
        } else {
block_4:
            var_2 = 0;
        }
    }
    return var_2;
}
