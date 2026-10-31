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

s32 EndMaterial__12VIPrimBuffer(void *arg0) {
    void *temp_5;

    temp_5 = (M2C_FIELD(arg0, s32 *, 0x40) * 0x10) + M2C_FIELD(arg0, s32 *, 0x58);
    M2C_FIELD(temp_5, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) - M2C_FIELD(temp_5, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + 1);
    return 0;
}
