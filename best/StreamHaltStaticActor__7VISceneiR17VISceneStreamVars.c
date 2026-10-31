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

s32 Release__8VILoaderiR7VIScene(s32, s32, s32);    /* extern */

s32 StreamHaltStaticActor__7VISceneiR17VISceneStreamVars(s32 arg0, void *arg1, void *arg2) {
    s32 temp_2;

    temp_2 = M2C_FIELD(arg1, s32 *, 0x68);
    if (temp_2 != -1) {
        if (Release__8VILoaderiR7VIScene(M2C_FIELD(arg2, s32 *, 0x18), temp_2, arg0) >= 0) {
            M2C_FIELD(arg1, s32 *, 0x68) = -1;
            goto block_6;
        }
        return -1;
    }
block_6:
    return 0;
}
