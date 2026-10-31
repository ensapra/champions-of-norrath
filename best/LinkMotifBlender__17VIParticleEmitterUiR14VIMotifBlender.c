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

M2C_UNK AddTail__7VILListP7VILNode(void *, void *); /* extern */
s32 FindMotif__C22VIParticleDefinitionExUi(s32);    /* extern */
M2C_UNK Remove__7VILNode(void *);                   /* extern */

s32 LinkMotifBlender__17VIParticleEmitterUiR14VIMotifBlender(void *arg0, void *arg2) {
    s32 temp_2;
    s32 var_2;

    temp_2 = FindMotif__C22VIParticleDefinitionExUi(M2C_FIELD(arg0, s32 *, 0x54));
    var_2 = -1;
    if (temp_2 != 0) {
        if (M2C_FIELD(arg2, s32 *, 0x10) != 0) {
            Remove__7VILNode(arg2);
        }
        AddTail__7VILListP7VILNode(arg0 + 0xB0, arg2);
        M2C_FIELD(arg2, s32 *, 0x14) = 0;
        M2C_FIELD(arg2, s32 *, 0x10) = temp_2;
        M2C_FIELD(arg2, s32 *, 0x18) = 1;
        var_2 = 0;
    }
    return var_2;
}
