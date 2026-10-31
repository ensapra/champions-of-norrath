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

extern M2C_UNK D_01192B40;

void __static_initialization_and_destruction_0_010A9900(s32 arg0, s32 arg1) {
    M2C_UNK *var_2;
    s32 var_3;

    if ((arg1 == 0xFFFF) && (arg0 == 1)) {
        var_3 = 0xE;
        var_2 = &D_01192B40;
        do {
            var_3 -= 1;
            M2C_FIELD(var_2, s8 *, 0) = 0;
            M2C_FIELD(var_2, s8 *, 1) = 0;
            M2C_FIELD(var_2, s8 *, 2) = 0;
            M2C_FIELD(var_2, s8 *, 3) = -1;
            var_2 += 4;
        } while (var_3 != -1);
    }
}
