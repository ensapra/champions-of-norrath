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

extern void *D_00480488;

void func_00195924(void *arg0) {
    M2C_UNK var_16;
    s32 temp_5;

    temp_5 = M2C_FIELD(arg0, u8 *, 0x52) & 1;
    if (temp_5 & 0xFF) {
        var_16 = 0x804C;
        if (M2C_FIELD(D_00480488, u8 *, 0xB8) != 0) {
            var_16 = (M2C_FIELD(D_00480488, s32 (**)(M2C_UNK, s32), 0x2C)(0, temp_5) != 0) ? 0x802A : 0x804C;
        }
        M2C_FIELD(D_00480488, M2C_UNK (**)(M2C_UNK, s32, M2C_UNK), 0x20)(0, M2C_FIELD(arg0, u8 *, 0x52) & 1, var_16);
        return;
    }
    M2C_FIELD(D_00480488, M2C_UNK (**)(M2C_UNK, s32, M2C_UNK), 0x20)(0, temp_5, 0x802A);
}
