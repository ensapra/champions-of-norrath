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

s32 Length__C7VILList(void *);                      /* extern */
s32 RemHead__7VILList(void *);                      /* extern */
M2C_UNK Reset__14VICameraEffect(s32);               /* extern */
M2C_UNK ___18VISpellEventDriver(s32, M2C_UNK);      /* extern */

void Destroy__19VISpellEffectDriver(void *arg0) {
    s32 *var_3;
    s32 temp_2;
    s32 var_4;
    void *temp_17;

    temp_17 = arg0 + 0x48;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        if (Length__C7VILList(temp_17) == 0) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        } else if (M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        } else {
            Reset__14VICameraEffect(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
loop_10:
        temp_2 = RemHead__7VILList(temp_17);
        if (temp_2 != 0) {
            ___18VISpellEventDriver(temp_2, 3);
            goto loop_10;
        }
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = -1;
        var_3 = arg0 + 0x30;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        var_4 = 7;
        M2C_FIELD(arg0, s32 *, 8) = -1;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        do {
            var_4 -= 1;
            *var_3 = -1;
            var_3 -= 4;
        } while (var_4 >= 0);
    }
}
