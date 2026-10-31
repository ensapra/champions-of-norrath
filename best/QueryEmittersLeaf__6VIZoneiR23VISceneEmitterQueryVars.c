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

s32 QueryEmittersRoom__6VIZoneiR23VISceneEmitterQueryVars(s32, s32 *, void *, s32); /* extern */

s32 QueryEmittersLeaf__6VIZoneiR23VISceneEmitterQueryVars(void *arg0, s32 arg1, s32 *arg2) {
    s32 *temp_7;
    s32 temp_3;
    s32 temp_9;
    void *temp_8;

    temp_9 = *arg2;
    temp_7 = M2C_FIELD(arg0, s32 *, 0x50) + (arg1 * 8);
    temp_3 = *temp_7;
    temp_8 = M2C_FIELD(arg0, s32 *, 0x60) + (temp_3 * 0x78);
    if (M2C_FIELD(temp_8, s32 *, 0x20) == temp_9) {
        return 0;
    }
    M2C_FIELD(temp_8, s32 *, 0x20) = temp_9;
    if (QueryEmittersRoom__6VIZoneiR23VISceneEmitterQueryVars(temp_3, temp_7, temp_8, temp_9) >= 0) {
        return 0;
    }
    return -1;
}
