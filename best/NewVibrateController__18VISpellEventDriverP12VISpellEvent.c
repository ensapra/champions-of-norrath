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

s32 NewVibrateController__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1) {
    s32 temp_3;
    s32 var_6;
    u8 var_4;
    u8 var_5;
    void *temp_8;

    temp_8 = M2C_FIELD(arg0, void **, 0x10);
    if (M2C_FIELD(temp_8, s32 *, 0x60) == M2C_FIELD(arg0, s32 *, 0x18)) {
        var_4 = 1;
        if (M2C_FIELD(temp_8, M2C_UNK (**)(u8, u8, s32, s32, void *), 0x54) != NULL) {
            temp_3 = M2C_FIELD(arg1, s32 *, 4);
            var_5 = 0x64;
            var_6 = 0;
            switch (temp_3) {                       /* irregular */
            case 0:
                var_6 = M2C_FIELD(arg1, s32 *, 0x10);
                var_4 = M2C_FIELD(arg1, u8 *, 8);
                var_5 = M2C_FIELD(arg1, u8 *, 0xC);
                break;
            case 2:
                var_5 = 0xDC;
                var_6 = 0x8C;
                break;
            case 1:
                var_5 = 0x50;
                var_6 = 0xC8;
                break;
            }
            M2C_FIELD(temp_8, M2C_UNK (**)(u8, u8, s32, s32, void *), 0x54)(var_4, var_5, var_6, M2C_FIELD(temp_8, s32 *, 0x58), temp_8);
        }
    }
    return 0;
}
