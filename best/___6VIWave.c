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

M2C_UNK Deallocate__6VIWave();                      /* extern */
M2C_UNK ___7VISound(void *, M2C_UNK);               /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
extern M2C_UNK D_01222C30;

void ___6VIWave(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_01222C30;
    Deallocate__6VIWave();
    ___7VISound(arg0, 0);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
