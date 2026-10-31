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

s32 ConstructDMAPacket__13VIEESurfCacheR9VISurfaceR17VIEESurfCacheInfoPP10_sceDmaTag(); /* extern */
extern s32 D_011B0254;

s32 Download__13VIEESurfCacheR9VISurfaceR17VIEESurfCacheInfoPP10_sceDmaTag(void *arg0, void *arg2) {
    if (ConstructDMAPacket__13VIEESurfCacheR9VISurfaceR17VIEESurfCacheInfoPP10_sceDmaTag() < 0) {
        return -1;
    }
    M2C_FIELD(arg2, s32 *, 0x50) = (s32) D_011B0254;
    D_011B0254 += 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    return 0;
}
