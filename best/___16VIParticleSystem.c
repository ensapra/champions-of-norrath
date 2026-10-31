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

M2C_UNK ___7VILList(s32, M2C_UNK);                  /* extern */
M2C_UNK ___t6VIPool1ZP20VIParticleDefinition(s32, M2C_UNK); /* extern */
M2C_UNK __builtin_delete(s32);                      /* extern */

void ___16VIParticleSystem(s32 arg0, s32 arg1) {
    ___t6VIPool1ZP20VIParticleDefinition(arg0 + 0x54, 2);
    ___7VILList(arg0 + 0x40, 2);
    ___7VILList(arg0 + 0x34, 2);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
