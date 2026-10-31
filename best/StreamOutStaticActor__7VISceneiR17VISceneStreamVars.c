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

s32 ReleaseSprite__7VIScenei(s32, s32);             /* extern */
s32 ReleaseStaticLighting__7VIScenei(s32, s32);     /* extern */
s32 Release__8VILoaderiR7VIScene(s32, s32, s32);    /* extern */
s32 UpdateProxyActor__7VIScenei(s32, void *);       /* extern */

s32 StreamOutStaticActor__7VISceneiR17VISceneStreamVars(s32 arg0, void *arg1, void *arg2) {
    s32 temp_5;
    s32 temp_5_2;
    s32 var_2;

    temp_5 = M2C_FIELD(arg1, s32 *, 0x68);
    if (temp_5 != -1) {
        var_2 = -1;
        if (Release__8VILoaderiR7VIScene(M2C_FIELD(arg2, s32 *, 0x18), temp_5, arg0) >= 0) {
            M2C_FIELD(arg1, s32 *, 0x68) = -1;
            goto block_3;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_2;
    }
block_3:
    temp_5_2 = M2C_FIELD(arg1, s32 *, 0x60);
    if (temp_5_2 == -1) {
        goto block_8;
    }
    var_2 = -1;
    if (ReleaseSprite__7VIScenei(arg0, temp_5_2) >= 0) {
        M2C_FIELD(arg1, s32 *, 0x60) = -1;
block_8:
        if (M2C_FIELD(arg1, s32 *, 0x6C) != -1) {
            if (ReleaseStaticLighting__7VIScenei(arg0, M2C_FIELD(arg1, s32 *, 0x6C)) >= 0) {
                M2C_FIELD(arg1, s32 *, 0x6C) = -1;
                goto block_14;
            }
            return -1;
        }
block_14:
        M2C_FIELD(arg1, s32 *, 0x40) = (s32) (M2C_FIELD(arg1, s32 *, 0x40) | 4);
        var_2 = (UpdateProxyActor__7VIScenei(arg0, arg1) >= 0) ? 0 : -1;
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
