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

s32 SetGSDithering__8VIRasteri(void *arg0, s64 arg1) {
    void *temp_3;
    void *temp_6;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C24), s8 *, 3) = 0x10;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C24), s32 *, 4) = 0;
    temp_6 = M2C_FIELD(arg0, void **, 0x4C24);
    temp_3 = temp_6 + 0x10;
    M2C_FIELD(temp_6, s16 *, 0) = 3;
    M2C_FIELD(arg0, void **, 0x4C24) = (void *) (temp_6 + 0x40);
    M2C_FIELD(temp_3, s32 *, 0xC) = 0x50000002;
    M2C_FIELD(temp_3, s32 *, 8) = 0x10000000;
    M2C_FIELD(temp_6, s32 *, 0x10) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD((temp_6 + 0x20), s64 *, 8) = 0xE;
    M2C_FIELD(temp_6, s64 *, 0x20) = (s64) ((0x10000000 << 0x20) | 0x8001);
    M2C_FIELD((temp_6 + 0x30), s64 *, 8) = 0x45;
    M2C_FIELD(temp_6, s64 *, 0x30) = arg1;
    return 0;
}
