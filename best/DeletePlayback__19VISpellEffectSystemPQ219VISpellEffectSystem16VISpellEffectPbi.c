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

M2C_UNK AddTail__7VILListP7VILNode(s32, s32);       /* extern */
M2C_UNK Remove__7VILNode(s32);                      /* extern */

void DeletePlayback__19VISpellEffectSystemPQ219VISpellEffectSystem16VISpellEffectPbi(s32 arg0, s32 arg1) {
    Remove__7VILNode(arg1);
    AddTail__7VILListP7VILNode(arg0 + 0x70, arg1);
}
