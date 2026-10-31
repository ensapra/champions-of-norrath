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

M2C_UNK __7VILList(s32);                            /* extern */
M2C_UNK __7VILNode(s32);                            /* extern */
M2C_UNK __t6VIPool1ZP13VISpellEffect(s32);          /* extern */

void __19VISpellEffectSystem(void *arg0) {
    s32 var_16;
    s32 var_18;
    s32 var_4;

    var_18 = 0x17;
    __7VILList(arg0 + 0x64);
    var_16 = arg0 + 0x80;
    __7VILList(arg0 + 0x70);
    var_4 = var_16;
loop_1:
    var_16 += 0x28;
    var_18 -= 1;
    __7VILNode(var_4);
    if (var_18 != -1) {
        var_4 = var_16;
        goto loop_1;
    }
    __t6VIPool1ZP13VISpellEffect(arg0 + 0x458);
    M2C_FIELD(arg0, s32 *, 0x444) = 0;
}
