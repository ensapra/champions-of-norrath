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

M2C_UNK memset(s32, M2C_UNK, s32);                  /* extern */
s32 s_mp_pad__FP6mp_intUi(void *, s32);             /* extern */

void s_mp_2expt__FP6mp_intUs(void *arg0, s32 arg1) {
    u16 *temp_4;
    u32 temp_17;
    u32 temp_2;

    temp_2 = arg1 & 0xFFFF;
    temp_17 = temp_2 >> 4;
    if (arg0 != NULL) {
        memset(M2C_FIELD(arg0, s32 *, 0xC), 0, M2C_FIELD(arg0, s32 *, 4) * 2);
        M2C_FIELD(arg0, s32 *, 8) = 1;
        M2C_FIELD(arg0, s8 *, 0) = 0;
    }
    if (s_mp_pad__FP6mp_intUi(arg0, temp_17 + 1) == 0) {
        temp_4 = (temp_17 * 2) + M2C_FIELD(arg0, s32 *, 0xC);
        *temp_4 |= 1 << (temp_2 & 0xF);
    }
}
