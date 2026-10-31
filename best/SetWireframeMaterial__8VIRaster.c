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

s32 AddMaterial__8VIRasteriPP10_sceDmaTag(s32, s32); /* extern */
M2C_UNK FlushDMABufferIfFull__8VIRaster(void *);    /* extern */

s32 SetWireframeMaterial__8VIRaster(void *arg0) {
    s32 var_3;

    var_3 = -1;
    if (AddMaterial__8VIRasteriPP10_sceDmaTag(M2C_FIELD(arg0, s32 *, 0x45B0), arg0 + 0x4C24) >= 0) {
        FlushDMABufferIfFull__8VIRaster(arg0);
        var_3 = 0;
    }
    return (var_3 >= 0) ? 0 : -1;
}
