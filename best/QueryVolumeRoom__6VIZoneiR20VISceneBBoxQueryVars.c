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

s32 QueryVolumeActor__7VISceneiR6VIBBoxR12VISceneQuery(s32, s32, s32, s32); /* extern */

s32 QueryVolumeRoom__6VIZoneiR20VISceneBBoxQueryVars(void *arg0, s32 arg1, void *arg2) {
    void *var_16;

    var_16 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x60) + (arg1 * 0x78)), void **, 0x68);
    if (var_16 != (void *)-1) {
loop_2:
        if (QueryVolumeActor__7VISceneiR6VIBBoxR12VISceneQuery(M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(var_16, s32 *, 4), arg2 + 8, M2C_FIELD(arg2, s32 *, 0x20)) >= 0) {
            var_16 = M2C_FIELD(var_16, void **, 0x10);
            if (var_16 == (void *)-1) {
                goto block_7;
            }
            goto loop_2;
        }
        return -1;
    }
block_7:
    return 0;
}
