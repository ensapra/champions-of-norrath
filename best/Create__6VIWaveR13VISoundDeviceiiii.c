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

s32 Allocate__6VIWaveR13VISoundDevice(void *, s32); /* extern */

s32 Create__6VIWaveR13VISoundDeviceiiii(void *arg0, s32 arg1, s32 arg2, s32 arg4, s32 arg5) {
    s32 var_4;
    void *temp_2;
    void *temp_2_2;

    var_4 = 2;
    if (arg2 < 2) {
        var_4 = (arg2 <= 0) ? 1 : arg2;
    }
    temp_2 = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(arg0, s32 *, 0x14) = var_4;
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x18) = 4;
    M2C_FIELD(arg0, s32 *, 0x24) = arg5;
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD((temp_2 + 0x18), M2C_UNK (**)(void *, M2C_UNK, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_2, s16 *, 0x18), 1, 0x3F800000);
    temp_2_2 = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD((temp_2_2 + 0x28), M2C_UNK (**)(void *, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_2_2, s16 *, 0x28), 0);
    if (Allocate__6VIWaveR13VISoundDevice(arg0, arg1) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 0;
    }
    return -1;
}
