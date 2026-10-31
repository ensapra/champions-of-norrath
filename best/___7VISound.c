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

M2C_UNK __builtin_delete(s32);                      /* extern */
extern M2C_UNK D_01227760;

void ___7VISound(void *arg0, s32 arg1) {
    s32 temp_5;

    temp_5 = arg1 & 1;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_01227760;
    if (temp_5 != 0) {
        __builtin_delete(temp_5);
    }
}
