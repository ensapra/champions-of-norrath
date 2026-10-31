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

s32 Vertex__10VIZoneRoomR7VIVect3(void *arg0, void *arg1) {
    s32 temp_7;
    void *temp_6;
    void *temp_8;

    temp_7 = M2C_FIELD(arg0, s32 *, 0x54);
    temp_8 = M2C_FIELD(arg0, s32 *, 0x60) + (temp_7 * 0xC);
    M2C_FIELD(temp_8, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (temp_7 + 1);
    temp_6 = (M2C_FIELD(arg0, s32 *, 0x4C) << 5) + M2C_FIELD(arg0, s32 *, 0x5C);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_6, s32 *, 0x14) = (s32) (M2C_FIELD(temp_6, s32 *, 0x14) + 1);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    return 0;
}
