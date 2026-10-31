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

extern s32 D_011EDB00;
extern s32 D_011EDF00;
extern s32 D_011EDF08;

void SetIopFunction__FUii(s32 arg0, s32 arg1) {
    s32 *temp_2;
    s32 *var_3;
    s32 *var_6;
    s32 temp_2_2;
    s32 var_4;

    if ((D_011EDF00 + arg1 + 3) < 0x80) {
        temp_2 = &(&D_011EDB00)[D_011EDF00];
        M2C_FIELD(temp_2, s32 *, 4) = arg0;
        M2C_FIELD(temp_2, s32 *, 8) = arg1;
        if (arg1 > 0) {
            var_6 = temp_2 + 0xC;
            var_3 = &D_011EDF08;
            var_4 = arg1;
            do {
                temp_2_2 = *var_3;
                var_3 += 4;
                var_4 -= 1;
                *var_6 = temp_2_2;
                var_6 += 4;
            } while (var_4 != 0);
        }
        D_011EDF00 = D_011EDF00 + 2 + arg1;
        D_011EDB00 += 1;
    }
}
