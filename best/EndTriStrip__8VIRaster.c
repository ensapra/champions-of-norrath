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

M2C_UNK FlushDMABufferIfFull__8VIRaster(void *, s32, s32, void *, M2C_UNK, void *, M2C_UNK); /* extern */
extern s32 D_011B01B8;

s32 EndTriStrip__8VIRaster(void *arg0) {
    s32 *temp_2;
    s32 *temp_3;
    s32 *temp_7;
    s32 temp_6;
    s32 temp_7_2;
    void *temp_3_2;
    void *temp_8;

    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 4) = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 8) = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 0xC) = (s32) (D_011B01B8 | 0x14000000);
    temp_3 = M2C_FIELD(arg0, s32 **, 0x38);
    temp_7 = M2C_FIELD(arg0, s32 **, 0x34);
    M2C_FIELD(arg0, s32 **, 0x34) = temp_3;
    *temp_3 = 0;
    temp_7_2 = (s32) ((temp_7 + 0x10) - temp_3) >> 4;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 4) = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 8) = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 0xC) = (s32) (((temp_7_2 - 2) << 0x10) | 0x6C008000);
    temp_2 = M2C_FIELD(arg0, s32 **, 0x34);
    temp_6 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 **, 0x34) = (s32 *) (temp_2 + 0x10);
    M2C_FIELD(temp_2, s32 *, 0x10) = temp_6;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 4) = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 8) = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 **, 0x34) = (s32 *) (M2C_FIELD(arg0, s32 **, 0x34) + 0x10);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C24), s8 *, 3) = 0x10;
    M2C_FIELD(arg0, s32 *, 0x45DC) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C24), s32 *, 4) = 0;
    temp_3_2 = M2C_FIELD(arg0, void **, 0x4C24);
    M2C_FIELD(temp_3_2, s16 *, 0) = (s16) temp_7_2;
    temp_8 = temp_3_2 + (temp_7_2 * 0x10) + 0x10;
    M2C_FIELD(arg0, void **, 0x4C24) = temp_8;
    FlushDMABufferIfFull__8VIRaster(arg0, temp_6, temp_7_2, temp_8, 0x6C008000, arg0 + 0x4C24, 0x10);
    return 0;
}
