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

M2C_UNK s_mp_free__FPv(s32);                        /* extern */
M2C_UNK s_mp_setz__FPUsUi(s32, s32);                /* extern */

void mp_clear(void *arg0) {
    s32 temp_2;

    if (arg0 != NULL) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_2) {
            s_mp_setz__FPUsUi(temp_2, M2C_FIELD(arg0, s32 *, 4));
            s_mp_free__FPv(M2C_FIELD(arg0, s32 *, 0xC));
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
        }
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}
