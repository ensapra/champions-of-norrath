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

extern s32 D_011B0194;
extern s32 D_011B0198;
extern M2C_UNK D_011EE950;

s32 UploadRasterMicro__8VIRasterPP10_sceDmaTag(void *arg0, void **arg1) {
    void *temp_3;
    void *temp_3_2;
    void *temp_6;
    void *temp_6_2;
    void *temp_6_3;
    void *temp_7;

    M2C_FIELD(*arg1, s8 *, 3) = 0x10;
    M2C_FIELD(*arg1, M2C_UNK **, 4) = NULL;
    temp_3 = *arg1;
    temp_6 = temp_3 + 0x10;
    *arg1 = temp_3 + 0x20;
    M2C_FIELD(temp_3, s16 *, 0) = 1;
    M2C_FIELD(temp_3, s32 *, 0x10) = 0;
    M2C_FIELD(temp_6, s32 *, 0xC) = 0x13000000;
    M2C_FIELD(temp_6, s32 *, 4) = 0;
    M2C_FIELD(temp_6, s32 *, 8) = 0;
    M2C_FIELD(*arg1, s8 *, 3) = 0x50;
    M2C_FIELD(*arg1, M2C_UNK **, 4) = &D_011EE950;
    temp_3_2 = *arg1;
    temp_6_2 = temp_3_2 + 0x10;
    M2C_FIELD(temp_3_2, s16 *, 0) = 0;
    *arg1 = temp_6_2;
    M2C_FIELD(temp_6_2, s8 *, 3) = 0x10;
    M2C_FIELD(*arg1, M2C_UNK **, 4) = NULL;
    temp_6_3 = *arg1;
    temp_7 = temp_6_3 + 0x10;
    M2C_FIELD(temp_6_3, s16 *, 0) = 1;
    *arg1 = temp_6_3 + 0x20;
    M2C_FIELD(temp_6_3, s32 *, 0x10) = 0;
    M2C_FIELD(temp_7, s32 *, 4) = 0;
    M2C_FIELD(temp_7, s32 *, 8) = (s32) (D_011B0194 | 0x03000000);
    M2C_FIELD(temp_7, s32 *, 0xC) = (s32) ((D_011B0198 - D_011B0194) | 0x02000000);
    M2C_FIELD(arg0, s32 *, 0x45E8) = 1;
    M2C_FIELD(arg0, s32 *, 0x4C4C) = 1;
    M2C_FIELD(arg0, s32 *, 0x45E0) = 1;
    return 0;
}
