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

s32 SetLayerUVRate__10VIMaterialiRC7VIVect2(void *arg0, s32 arg1, void *arg2) {
    void *temp_2;

    temp_2 = arg0 + (arg1 * 0x90);
    M2C_FIELD(temp_2, f32 *, 0x68) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD((temp_2 + 0x68), f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    if ((M2C_FIELD(arg2, f32 *, 0) != 0.0f) || (M2C_FIELD(arg2, f32 *, 4) != 0.0f)) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 4);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    return 0;
}
