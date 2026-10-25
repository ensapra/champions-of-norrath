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

M2C_UNK WaitSema_2(s32);                            /* extern */
s32 func_002D8270(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_002E7CE8(M2C_UNK *);                   /* extern */
M2C_UNK func_002E7E38(M2C_UNK *);                   /* extern */
M2C_UNK func_002E7F58(s16);                         /* extern */
M2C_UNK func_002E8490(void *);                      /* extern */
M2C_UNK func_002E86D8(void *);                      /* extern */
M2C_UNK func_002E8898(M2C_UNK *, M2C_UNK, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_008E8C80;
extern M2C_UNK D_008E8E80;
extern M2C_UNK D_008E8E84;
extern M2C_UNK D_008EBDD8;
extern M2C_UNK func_002E9068;

void func_002E89A8(void) {
    M2C_UNK *temp_17;
    M2C_UNK *var_16;
    M2C_UNK *var_16_2;
    M2C_UNK var_5;
    s16 *var_3;
    s16 *var_3_2;
    s16 temp_2;
    s16 temp_2_3;
    s16 temp_2_4;
    s32 temp_2_2;
    s32 temp_3;
    s32 var_17;
    s32 var_17_2;
    s32 var_18;
    s32 var_7;
    s32 var_7_2;
    u8 temp_7;
    u8 var_4;
    void *var_16_3;

    var_5 = 0x10;
    var_7 = 0;
    var_4 = M2C_FIELD(&D_008EBDD8, u8 *, 0x44);
    M2C_FIELD(&D_008E8C80, s8 *, 3) = 0x10;
    M2C_FIELD(&D_008E8C80, s8 *, 0x202) = (s8) (M2C_FIELD(&D_008EBDD8, u8 *, 0x40) + var_4);
    M2C_FIELD(&D_008E8C80, u8 *, 0x200) = 0U;
    M2C_FIELD(&D_008E8C80, u8 *, 0x201) = 0U;
    if ((s32) M2C_FIELD(&D_008EBDD8, u8 *, 0x40) > 0) {
        var_4 = (u8) &D_008EBDD8;
        var_5 = -1;
        var_3 = (u8) &D_008EBDD8 + 0x8C;
        do {
            *var_3 = -1;
            var_7 += 1;
            var_3 += 0x110;
        } while (var_7 < M2C_FIELD((u8) &D_008EBDD8, s32 *, 0x40));
    }
    var_7_2 = 0;
    if ((s32) M2C_FIELD(&D_008EBDD8, u8 *, 0x44) > 0) {
        var_4 = (u8) &D_008EBDD8;
        var_5 = -1;
        var_3_2 = (u8) &D_008EBDD8 + 0x4CC;
        do {
            *var_3_2 = -1;
            var_7_2 += 1;
            var_3_2 += 0x68;
        } while (var_7_2 < M2C_FIELD((u8) &D_008EBDD8, s32 *, 0x44));
    }
    func_002E8898((M2C_UNK *) var_4, var_5, (s32) M2C_FIELD(&D_008EBDD8, u8 *, 0x40), var_7_2, &D_008EBDD8);
    if (M2C_FIELD(&D_008EBDD8, s64 *, 0x50) == 0) {
loop_8:
        func_002D8270(&D_008EBDD8, 1, 1, &D_008E8E80, 0x90, &D_008E8E80, 0x90, &func_002E9068, &D_008E8E80);
        WaitSema_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x28));
        if ((s32) M2C_FIELD(&D_008EBDD8, s64 *, 0x50) != M2C_FIELD(&D_008E8E80, u8 *, 0)) {
            M2C_FIELD(&D_008EBDD8, s64 *, 0x50) = (s32) M2C_FIELD(&D_008E8E80, u8 *, 0);
        }
        if (M2C_FIELD(&D_008EBDD8, s32 *, 0x54) != M2C_FIELD(&D_008E8E80, u8 *, 1)) {
            M2C_FIELD(&D_008EBDD8, s32 *, 0x54) = (s32) M2C_FIELD(&D_008E8E80, u8 *, 1);
        }
        temp_3 = (s32) M2C_FIELD(&D_008EBDD8, u8 *, 0x40) + (s32) M2C_FIELD(&D_008EBDD8, u8 *, 0x44);
        if (temp_3 > 0) {
            var_17 = temp_3;
            var_16 = &D_008E8E84;
            do {
                temp_2 = M2C_FIELD(var_16, s16 *, 2);
                switch (temp_2) {                   /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    func_002E7F58(M2C_FIELD(var_16, s16 *, 4));
                    break;
                case 1:                             /* switch 1 */
                    func_002E7CE8(var_16);
                    break;
                case 2:                             /* switch 1 */
                    func_002E7E38(var_16);
                    break;
                }
                var_17 -= 1;
                var_16 += 0x10;
            } while (var_17 != 0);
        }
        if (M2C_FIELD(&D_008EBDD8, s64 *, 0x50) == 0) {
            goto loop_8;
        }
    }
loop_26:
    temp_17 = &D_008E8C80 + 0x200;
    if (M2C_FIELD(&D_008E8C80, u8 *, 0x200) == (s32) M2C_FIELD(&D_008EBDD8, s64 *, 0x50)) {
        if (M2C_FIELD(&D_008E8C80, u8 *, 0x201) == M2C_FIELD(&D_008EBDD8, s32 *, 0x54)) {

        } else {
            goto block_30;
        }
    } else {
block_30:
        func_002D8270(&D_008EBDD8, 1, 1, temp_17, 0x90, temp_17, 0x90, &func_002E9068, temp_17);
        WaitSema_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x28));
        if ((s32) M2C_FIELD(&D_008EBDD8, s64 *, 0x50) != M2C_FIELD(&D_008E8C80, u8 *, 0x200)) {
            M2C_FIELD(&D_008EBDD8, s64 *, 0x50) = (s32) M2C_FIELD(&D_008E8C80, u8 *, 0x200);
        }
        temp_7 = M2C_FIELD(temp_17, u8 *, 1);
        if (M2C_FIELD(&D_008EBDD8, s32 *, 0x54) != temp_7) {
            M2C_FIELD(&D_008EBDD8, s32 *, 0x54) = (s32) temp_7;
        }
        temp_2_2 = (s32) M2C_FIELD(&D_008EBDD8, u8 *, 0x40) + (s32) M2C_FIELD(&D_008EBDD8, u8 *, 0x44);
        if (temp_2_2 > 0) {
            var_16_2 = &D_008E8C80 + 0x204;
            var_17_2 = temp_2_2;
            do {
                temp_2_3 = M2C_FIELD(var_16_2, s16 *, 2);
                switch (temp_2_3) {                 /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    func_002E7F58(M2C_FIELD(var_16_2, s16 *, 4));
                    break;
                case 1:                             /* switch 2 */
                    func_002E7CE8(var_16_2);
                    break;
                case 2:                             /* switch 2 */
                    func_002E7E38(var_16_2);
                    break;
                }
                var_17_2 -= 1;
                var_16_2 += 0x10;
            } while (var_17_2 != 0);
        }
    }
    func_002D8270(&D_008EBDD8, 2, 1, &D_008E8C80, 0x1D0, &D_008E8C80, 0x1D0, &func_002E9068, &D_008E8C80);
    WaitSema_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x28));
    if (M2C_FIELD(&D_008EBDD8, s32 *, 0x3C) != 0) {
        if (func_002D8270(&D_008EBDD8, 4, 1, NULL, 0, NULL, 0, &func_002E9068, NULL) < 0) {
            M2C_FIELD(&D_008EBDD8, s32 *, 0x3C) = 0;
        } else {
            WaitSema_2(M2C_FIELD(&D_008EBDD8, s32 *, 0x28));
            M2C_FIELD(&D_008EBDD8, s32 *, 0x3C) = 0;
        }
        goto loop_26;
    }
    if ((s32) M2C_FIELD(&D_008EBDD8, s64 *, 0x50) != M2C_FIELD(&D_008E8C80, u8 *, 0)) {
        M2C_FIELD(&D_008EBDD8, s64 *, 0x50) = (s32) M2C_FIELD(&D_008E8C80, u8 *, 0);
    }
    if (M2C_FIELD(&D_008EBDD8, s32 *, 0x54) != M2C_FIELD(&D_008E8C80, u8 *, 1)) {
        M2C_FIELD(&D_008EBDD8, s32 *, 0x54) = (s32) M2C_FIELD(&D_008E8C80, u8 *, 1);
    }
    var_18 = 0;
    if (M2C_FIELD(&D_008E8C80, u8 *, 2) == 0) {
        goto loop_26;
    }
    var_16_3 = &D_008E8C80 + 4;
    do {
        temp_2_4 = M2C_FIELD(var_16_3, s16 *, 4);
        if (temp_2_4 == 1) {
            func_002E8490(var_16_3);
        } else if (temp_2_4 == 2) {
            func_002E86D8(var_16_3);
        }
        var_18 += 1;
        var_16_3 += 0x1C;
    } while (var_18 < (s32) M2C_FIELD(&D_008E8C80, u8 *, 2));
    goto loop_26;
}
