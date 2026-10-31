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

s64 GetTime__7VIScene(s32);                         /* extern */
M2C_UNK __18VISpellActiveEventP12VISpellEventP7VIScene(void *, s32, s32); /* extern */
void *__builtin_new(M2C_UNK);                       /* extern */

s32 NewWait__18VISpellEventDriverP12VISpellEvent(void *arg0, s32 arg1) {
    void *temp_2;

    temp_2 = __builtin_new(0xB8);
    if (temp_2 != NULL) {
        __18VISpellActiveEventP12VISpellEventP7VIScene(temp_2, arg1, M2C_FIELD(arg0, s32 *, 0x14));
    }
    M2C_FIELD(arg0, void **, 0x20) = temp_2;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s64 *, 0xB0) = GetTime__7VIScene(M2C_FIELD(arg0, s32 *, 0x14));
    return 0;
}
