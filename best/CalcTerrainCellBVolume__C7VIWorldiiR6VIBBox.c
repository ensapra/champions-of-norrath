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

s32 CalcTerrainCellBVolume__C7VIWorldiiR6VIBBox(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    void *temp_8;
    void *temp_9;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x20) / (f32) M2C_FIELD(arg0, s32 *, 0x30);
    temp_8 = arg3 + 0xC;
    temp_9 = arg0 + 0x24;
    M2C_FIELD(arg3, f32 *, 0) = (f32) ((f32) arg2 * temp_f0);
    M2C_FIELD(arg3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg3, f32 *, 8) = (f32) ((f32) arg1 * temp_f0);
    M2C_FIELD(arg3, f32 *, 0xC) = (f32) ((f32) (arg2 + 1) * temp_f0);
    M2C_FIELD(arg3, f32 *, 0x14) = (f32) ((f32) (arg1 + 1) * temp_f0);
    M2C_FIELD(arg3, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    if (M2C_FIELD(arg0, s32 *, 0x48) == 1) {
        temp_f5 = -M2C_FIELD(temp_9, f32 *, 8);
        temp_f3 = -M2C_FIELD(arg0, f32 *, 0x24);
        temp_f4 = -M2C_FIELD(temp_9, f32 *, 4);
        M2C_FIELD(arg3, f32 *, 8) = (f32) (M2C_FIELD(arg3, f32 *, 8) + temp_f5);
        M2C_FIELD(arg3, f32 *, 0) = (f32) (M2C_FIELD(arg3, f32 *, 0) + temp_f3);
        M2C_FIELD(arg3, f32 *, 4) = (f32) (M2C_FIELD(arg3, f32 *, 4) + temp_f4);
        sp0 = temp_f3;
        sp4 = temp_f4;
        sp8 = temp_f5;
        M2C_FIELD(arg3, f32 *, 0xC) = (f32) (M2C_FIELD(arg3, f32 *, 0xC) + temp_f3);
        M2C_FIELD(temp_8, f32 *, 4) = (f32) (M2C_FIELD(temp_8, f32 *, 4) + temp_f4);
        M2C_FIELD(temp_8, f32 *, 8) = (f32) (M2C_FIELD(temp_8, f32 *, 8) + temp_f5);
    }
    return 0;
}
