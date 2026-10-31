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

s32 Begin__Ct6VIPool1ZP20VIParticleDefinition(s32); /* extern */
M2C_UNK Clear__t6VIPool1ZP20VIParticleDefinition(s32, s32, s32); /* extern */
s32 End__Ct6VIPool1ZP20VIParticleDefinition(s32);   /* extern */
M2C_UNK ReleaseParticleDefinition__16VIParticleSystemiR12VIDictionary(s32, s32, s32); /* extern */

s32 ReleaseAllParticleDefinitions__16VIParticleSystemR12VIDictionary(s32 arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_17;

    temp_17 = arg0 + 0x54;
loop_2:
    temp_16 = Begin__Ct6VIPool1ZP20VIParticleDefinition(temp_17);
    if (temp_16 != End__Ct6VIPool1ZP20VIParticleDefinition(temp_17)) {
        ReleaseParticleDefinition__16VIParticleSystemiR12VIDictionary(arg0, temp_16, arg1);
        goto loop_2;
    }
    Clear__t6VIPool1ZP20VIParticleDefinition(temp_17, temp_16, arg1);
    return 0;
}
