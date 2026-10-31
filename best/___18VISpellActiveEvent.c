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

M2C_UNK ReleaseActor__7VIScenei(s32, s32);          /* extern */
M2C_UNK ___14VIMotifBlender(s32, M2C_UNK);          /* extern */
M2C_UNK ___17VIParticleEmitter(s32, M2C_UNK);       /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */

void ___18VISpellActiveEvent(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_5;
    s32 var_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x8C);
    if (temp_2 != -1) {
        ReleaseActor__7VIScenei(M2C_FIELD(arg0, s32 *, 0x10), temp_2);
    }
    temp_5 = M2C_FIELD(arg0, s32 *, 0x90);
    if (temp_5 != -1) {
        ReleaseActor__7VIScenei(M2C_FIELD(arg0, s32 *, 0x10), temp_5);
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0x78);
    if (temp_4 != 0) {
        ___17VIParticleEmitter(temp_4, 3);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x7C);
    if (temp_4_2 != 0) {
        ___17VIParticleEmitter(temp_4_2, 3);
    }
    temp_4_3 = M2C_FIELD(arg0, s32 *, 0x80);
    var_2 = arg1 & 1;
    if (temp_4_3 != 0) {
        ___14VIMotifBlender(temp_4_3, 3);
        var_2 = arg1 & 1;
    }
    if (var_2 != 0) {
        __builtin_delete(arg0);
    }
}
