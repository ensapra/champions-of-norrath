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

s32 CalcTerrainCell__C7VIWorldRC7VIVect3RiT2(void *arg0, void *arg1, f32 *arg2, f32 *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_3;
    f32 temp_3_2;
    f32 temp_3_3;
    f32 temp_3_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f7;
    s32 temp_5;
    s32 temp_8;
    void *temp_2;

    temp_2 = arg0 + 0x24;
    temp_f7 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_f1 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(temp_2, f32 *, 8);
    temp_f3 = temp_f7 * 0.5f;
    sp8 = temp_f1;
    temp_f2 = (M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x24)) + temp_f3;
    temp_f1_2 = temp_f1 + temp_f3;
    sp4 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(temp_2, f32 *, 4);
    sp0 = temp_f2;
    sp8 = temp_f1_2;
    *arg2 = temp_f2;
    *arg3 = temp_f1_2 * ((f32) M2C_FIELD(arg0, s32 *, 0x30) / temp_f7);
    temp_3 = *arg2;
    temp_3_2 = (M2C_BITWISE(s32, temp_3) < 0) ? 0.0f : temp_3;
    temp_8 = (M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s32 *, 0x30)) - 1;
    *arg2 = M2C_BITWISE(f32, ((temp_8 < M2C_BITWISE(s32, temp_3_2)) ? temp_8 : M2C_BITWISE(s32, temp_3_2)));
    temp_3_3 = *arg3;
    temp_3_4 = (M2C_BITWISE(s32, temp_3_3) < 0) ? 0.0f : temp_3_3;
    temp_5 = (M2C_FIELD(arg0, s32 *, 0x1C) * M2C_FIELD(arg0, s32 *, 0x30)) - 1;
    *arg3 = M2C_BITWISE(f32, ((temp_5 < M2C_BITWISE(s32, temp_3_4)) ? temp_5 : M2C_BITWISE(s32, temp_3_4)));
    return 0;
}
