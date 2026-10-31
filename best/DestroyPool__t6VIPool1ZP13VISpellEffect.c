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

s32 Begin__Ct6VIPool1ZP13VISpellEffect();           /* extern */
s32 End__Ct6VIPool1ZP13VISpellEffect(s32);          /* extern */
s32 Next__Ct6VIPool1ZP13VISpellEffecti(s32, s32);   /* extern */

s32 DestroyPool__t6VIPool1ZP13VISpellEffect(s32 arg0) {
    s32 var_2;

    var_2 = Begin__Ct6VIPool1ZP13VISpellEffect();
loop_2:
    if (var_2 != End__Ct6VIPool1ZP13VISpellEffect(arg0)) {
        var_2 = Next__Ct6VIPool1ZP13VISpellEffecti(arg0, var_2);
        goto loop_2;
    }
    return 0;
}
