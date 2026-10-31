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

s32 SetNodeFixScale__9VIHSpriteiRC7VIVect3(void *arg0, s32 arg1, void *arg2) {
    void *temp_3;
    void *temp_3_2;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x48) + (arg1 << 8);
    temp_3_2 = temp_3 + 0x70;
    M2C_FIELD(temp_3, f32 *, 0x70) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    return 0;
}
