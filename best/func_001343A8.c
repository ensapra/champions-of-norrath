/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

M2C_UNK func_0010A5E8(u8 *, M2C_UNK);               /* extern */
M2C_UNK func_00134020(s8 *, u8 *, s32, u8 *);       /* extern */
M2C_UNK func_00134238();                            /* extern */
extern M2C_UNK func_001BCB38;
extern M2C_UNK func_01000000;
extern M2C_UNK jtbl_00503023;

void func_001343A8(void *arg2) {
    s32 temp_3;
    s32 temp_3_3;
    s32 var_6;
    s32 var_6_2;
    s8 *var_4_2;
    u8 *temp_17;
    u8 *var_4;
    u8 *var_5;
    u8 *var_5_2;
    u8 *var_7;
    u8 temp_2;
    u8 temp_2_2;
    u8 temp_3_2;

    temp_3 = M2C_FIELD(arg2, s32 *, 0);
    switch (temp_3) {                               /* irregular */
    case 19:
        temp_3_2 = *M2C_FIELD(arg2, u8 **, 8);
        if ((u32) ((temp_3_2 + 0xD0) & 0xFF) >= 0xAU) {
            temp_3_3 = temp_3_2 & 0xFF;
            if ((temp_3_3 != 0x2D) && (temp_3_3 != 0x23) && (temp_3_3 != 0x2A) && (temp_3_3 != 0x2C)) {
                if (temp_3_3 != 9) {
                    M2C_FIELD(arg2, s32 *, 4) = 0;
                    return;
                }
                func_00134238();
                M2C_FIELD(arg2, s32 *, 4) = 0;
                return;
            }
        }
        return;
    case 18:
        temp_17 = &func_01000000 + 0xCDDE0;
        func_0010A5E8(temp_17, 0x258);
        var_6 = 0;
        if ((M2C_FIELD(&func_01000000, s8 *, 0xCDDE0) != 0) && (var_7 = &func_001BCB38 + 0x720, ((*(&jtbl_00503023 + 0x375E + M2C_FIELD(&func_01000000, s8 *, 0xCDDE0)) & 4) != 0))) {
            var_5 = temp_17;
            var_4 = var_7 + 0x304;
            do {
                temp_2 = *var_5;
                var_5 += 1;
                var_6 += 1;
                *var_4 = temp_2;
                var_4 += 1;
            } while (*(&jtbl_00503023 + 0x375E + *var_5) & 4);
        } else {
            var_7 = &func_001BCB38 + 0x720;
        }
        var_5_2 = var_7;
        var_4_2 = var_6 + temp_17;
        var_6_2 = 0;
        M2C_FIELD((var_6 + var_5_2), s8 *, 0x304) = 0;
        if (*var_4_2 != 0) {
            var_5_2 += 0x404;
            do {
                temp_2_2 = *var_4_2;
                var_4_2 += 1;
                var_6_2 += 1;
                *var_5_2 = temp_2_2;
                var_5_2 += 1;
            } while (*var_4_2 != 0);
        }
        M2C_FIELD((var_6_2 + var_7), s8 *, 0x404) = 0;
        func_00134020(var_4_2, var_5_2, var_6_2, var_7);
        break;
    }
}
