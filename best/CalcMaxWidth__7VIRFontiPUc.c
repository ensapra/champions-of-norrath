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

s32 CalcMaxWidth__7VIRFontiPUc(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_4;
    s32 var_7;
    u8 *temp_2;
    u8 temp_3;

    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    var_7 = 0;
    if (arg1 > 0) {
        do {
            temp_2 = arg2 + var_7;
            var_7 += 1;
            temp_3 = *temp_2;
            temp_4 = M2C_FIELD(arg0, s32 *, 0x18);
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (((s32) temp_3 < temp_4) ? temp_4 : (s32) temp_3);
        } while (var_7 < arg1);
    }
    return 0;
}
