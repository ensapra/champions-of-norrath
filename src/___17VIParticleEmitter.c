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

M2C_UNK Destroy__17VIParticleEmitter();             /* extern */
M2C_UNK ___10VIMatrix33(s32, M2C_UNK);              /* extern */
M2C_UNK ___10VIMatrix44(s32, M2C_UNK);              /* extern */
M2C_UNK ___20VIParticleAttributes(s32, M2C_UNK);    /* extern */
M2C_UNK ___7VILList(s32, M2C_UNK);                  /* extern */
M2C_UNK __builtin_delete(s32);                      /* extern */

void ___17VIParticleEmitter(s32 arg0, s32 arg1) {
    Destroy__17VIParticleEmitter();
    ___20VIParticleAttributes(arg0 + 0xBC, 2);
    ___7VILList(arg0 + 0xB0, 2);
    ___7VILList(arg0 + 0xA0, 2);
    ___10VIMatrix44(arg0 + 0x60, 2);
    ___10VIMatrix33(arg0 + 0x28, 2);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
