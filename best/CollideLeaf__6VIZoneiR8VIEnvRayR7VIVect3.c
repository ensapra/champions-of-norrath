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

s32 CollideLeaf__6VIZoneiR8VIEnvRayR7VIVect3(void *arg0, s32 arg1, void *arg2, void *arg3) {
    f32 temp_f20;
    f32 temp_f3;
    f32 temp_f6;
    f32 temp_f7;
    s32 temp_17;
    s32 var_9;
    void *temp_3;
    void *temp_8;

    temp_8 = arg2 + 0x18;
    var_9 = 0;
    temp_17 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x50) + (arg1 * 8)), s32 *, 4) & M2C_FIELD(arg2, s32 *, 0x2C);
    if ((M2C_FIELD(arg2, s32 *, 0x34) != 0) || (M2C_FIELD(arg2, s32 *, 0x30) != temp_17)) {
        temp_f3 = M2C_FIELD(arg2, f32 *, 0x18);
        temp_f6 = M2C_FIELD(temp_8, f32 *, 4);
        temp_f7 = M2C_FIELD(temp_8, f32 *, 8);
        temp_3 = M2C_FIELD(arg2, void **, 0x3C);
        temp_f20 = (((M2C_FIELD(arg3, f32 *, 0) * temp_f3) + (M2C_FIELD(arg3, f32 *, 4) * temp_f6) + (M2C_FIELD(arg3, f32 *, 8) * temp_f7)) - ((M2C_FIELD(arg2, f32 *, 0) * temp_f3) + (M2C_FIELD(arg2, f32 *, 4) * temp_f6) + (M2C_FIELD(arg2, f32 *, 8) * temp_f7))) * M2C_FIELD(arg2, f32 *, 0x28);
        var_9 = M2C_FIELD((temp_3 + 8), s32 (**)(void *, s32, void *, void *, M2C_UNK, f32), 4)(arg2 + M2C_FIELD(temp_3, s16 *, 8), temp_17, arg3, temp_8, 0, temp_f20);
        if (var_9 != 0) {
            M2C_FIELD(arg2, f32 *, 0x38) = temp_f20;
        }
        M2C_FIELD(arg2, s32 *, 0x30) = temp_17;
        M2C_FIELD(arg2, s32 *, 0x34) = 0;
    }
    return var_9;
}
