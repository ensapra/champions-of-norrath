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

M2C_UNK __22VIParticleDefinitionEx();               /* extern */

void __20VIParticleDefinition(void *arg0) {
    __22VIParticleDefinitionEx();
    M2C_FIELD(arg0, s32 *, 0x2FC) = 0;
    M2C_FIELD((arg0 + 0x2FC), s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2F4) = 1;
    M2C_FIELD(arg0, s32 *, 0x2F8) = 1;
    M2C_FIELD(arg0, s32 *, 0x308) = -1;
    M2C_FIELD(arg0, s32 *, 0x2EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x2F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x30C) = -1;
    M2C_FIELD(arg0, s32 *, 0x304) = 0;
}
