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

M2C_UNK CalcMatrices__8VIRaster(void *);            /* extern */
M2C_UNK UploadMatrices__8VIRasterPP10_sceDmaTag(void *, void *); /* extern */
M2C_UNK UploadRasterMicro__8VIRasterPP10_sceDmaTag(void *); /* extern */

s32 BeginTriFan__8VIRaster(void *arg0) {
    u32 temp_3;

    if (M2C_FIELD(arg0, s32 *, 0x4C4C) != 1) {
        UploadRasterMicro__8VIRasterPP10_sceDmaTag(arg0 + 0x4C24);
    }
    if (M2C_FIELD(arg0, s32 *, 0x45E0) != 0) {
        CalcMatrices__8VIRaster(arg0);
        UploadMatrices__8VIRasterPP10_sceDmaTag(arg0, arg0 + 0x4C24);
    }
    temp_3 = M2C_FIELD(arg0, s32 *, 0x4C24);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_3 + 0x10);
    M2C_FIELD(arg0, s32 *, 0x45DC) = 2;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_3 + 0x30);
    return 0;
}
