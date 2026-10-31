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

M2C_UNK func_0017B760(void *, M2C_UNK, s32);        /* extern */
extern M2C_UNK DuplicateEx__C22VIParticleDefinitionExP22VIParticleDefinitionEx;

void func_001047E8(s32 arg0, s32 arg1) {
    func_0017B760(&DuplicateEx__C22VIParticleDefinitionExP22VIParticleDefinitionEx + 0x598, 0, ((arg0 & 0x7F) << 8) | ((arg1 & 0x7F) << 0x10) | 0x90);
}
