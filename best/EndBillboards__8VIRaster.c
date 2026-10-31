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

M2C_UNK FlushDMABufferIfFull__8VIRaster(void *, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK D_8;
extern M2C_UNK D_A8;

s32 EndBillboards__8VIRaster(void *arg0) {
    s32 temp_6;
    s32 temp_7_2;
    s32 temp_7_3;
    s32 var_2;
    void *temp_2;
    void *temp_5;
    void *temp_5_2;
    void *temp_6_2;
    void *temp_7;

    var_2 = -1;
    temp_6 = M2C_FIELD(arg0, s32 *, 0x45C4);
    if (temp_6 > 0) {
        temp_7 = M2C_FIELD(arg0, void **, 0x4C24);
        temp_6_2 = temp_7 + (temp_6 * 0x30);
        temp_7_2 = temp_7 + 0x10;
        M2C_FIELD(temp_6_2, s32 *, 0xC) = (s32) (M2C_FIELD(temp_6_2, s32 *, 0xC) | 0x100);
        temp_2 = temp_7_2 + (M2C_FIELD(arg0, s32 *, 0x45C4) * 0x30);
        temp_5 = temp_2 + 0x20;
        M2C_FIELD(temp_2, s32 *, 0x20) = 0;
        M2C_FIELD(temp_5, s32 *, 0xC) = (s32) (((s32) (&D_A8 - &D_8) >> 3) | 0x15000000);
        M2C_FIELD(temp_5, s32 *, 4) = 0;
        M2C_FIELD(temp_5, s32 *, 8) = 0;
        temp_7_3 = (s32) ((temp_2 + 0x30) - temp_7_2) >> 4;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C24), s8 *, 3) = 0x10;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C24), s32 *, 4) = 0;
        temp_5_2 = M2C_FIELD(arg0, void **, 0x4C24);
        M2C_FIELD(temp_5_2, s16 *, 0) = (s16) temp_7_3;
        M2C_FIELD(arg0, void **, 0x4C24) = (void *) (temp_5_2 + (temp_7_3 * 0x10) + 0x10);
        FlushDMABufferIfFull__8VIRaster(temp_5_2, 0x15000000, temp_7_3, 0x10, arg0 + 0x4C24);
        M2C_FIELD(arg0, s32 *, 0x45C4) = 0;
        var_2 = 0;
    }
    return var_2;
}
