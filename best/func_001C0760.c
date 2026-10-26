/* machine draft (m2c), tried by autopilot */
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

s32 func_00165DC0(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_0016E860(s32, s32, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_001ABB48(s32, s64);                    /* extern */
M2C_UNK func_001AC260(s32, s64);                    /* extern */
M2C_UNK func_00303EB8(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK D_00408650;
extern M2C_UNK D_00468C80;
extern M2C_UNK D_00469E08;
extern M2C_UNK D_00469E20;
extern M2C_UNK D_00469E38;
extern M2C_UNK D_00469E50;
extern M2C_UNK D_00469E68;
extern M2C_UNK D_00469E80;
extern M2C_UNK D_00469E90;
extern M2C_UNK D_00469EA8;
extern M2C_UNK D_00469EC0;
extern M2C_UNK D_00469ED8;
extern M2C_UNK D_00469EF0;
extern M2C_UNK D_00469F08;
extern M2C_UNK D_00469F20;
extern M2C_UNK D_00469F40;
extern M2C_UNK D_00469F60;
extern M2C_UNK D_00469F78;
extern M2C_UNK D_00469F90;
extern M2C_UNK D_00469FA8;
extern M2C_UNK D_00469FC0;
extern M2C_UNK D_00469FD8;
extern M2C_UNK D_00469FF0;
extern M2C_UNK D_0046A008;
extern M2C_UNK D_0046A020;
extern M2C_UNK D_0046A038;
extern M2C_UNK D_0046A050;
extern M2C_UNK D_0046A070;
extern M2C_UNK D_0046A088;
extern M2C_UNK D_0046A0A8;
extern M2C_UNK D_0046A0C0;
extern M2C_UNK D_0046A0D8;
extern M2C_UNK D_0046A0F0;
extern M2C_UNK D_0046A110;
extern M2C_UNK D_0046A128;

void func_001C0760(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s64 arg6) {
    M2C_UNK sp20;
    volatile char pad[0x60];
    M2C_UNK *var_5_2;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_4;
    s32 temp_5_6;
    s32 var_11;
    s32 var_2;
    s32 var_4;
    s32 var_5;
    s32 var_6;
    s32 var_6_2;
    s32 var_9;
    u64 temp_5;
    u64 temp_5_2;
    u64 temp_5_3;
    u64 temp_5_4;
    u64 temp_5_5;

    if (arg2 < 0x1E) {
        func_00303EB8(&sp20, &D_00469E08);
    } else {
        func_00303EB8(&sp20, &D_00469E20);
    }
    if (arg5 == 0) {
        func_001ABB48(arg0, arg6);
    } else {
        func_001AC260(arg0, (s64) (arg6 << 0x20) >> 0x20);
    }
    temp_4 = *(&D_00408650 + (arg0 * 0x5DB0));
    temp_17 = arg3 - 5;
    switch (temp_4) {                               /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (arg5 != 0) {
            if ((arg6 == 0x26) || (arg6 == 0x23) || (arg6 == 0x33) || (arg6 == 9)) {
                func_00303EB8(&sp20, &D_00469E38);
            }
            temp_5 = arg6 - 2;
            if (temp_5 < 0x3CU) {
                switch ((s64) (temp_5 << 0x20) >> 0x20) { /* switch 2 */
                case 0x3A:                          /* switch 2 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469E50);
                    var_6 = 0xF5 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 0x3B:                          /* switch 2 */
                    var_2 = func_00165DC0(&D_00468C80, &D_00469E68);
                    var_5 = temp_17 + 0x9A;
                    var_6_2 = 0xF5;
                    goto block_164;
                case 0x0:                           /* switch 2 */
                    var_5 = temp_17 + 0x106;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469E80);
                    var_6 = 0x155 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x246;
                    goto block_165;
                case 0x2F:                          /* switch 2 */
                    var_2 = func_00165DC0(&D_00468C80, &D_00469E90);
                    var_5 = temp_17 + 0x9A;
                    var_6_2 = 0x1AD;
                    goto block_164;
                case 0x33:                          /* switch 2 */
                    var_5 = temp_17 + 0xCB;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469EA8);
                    var_6 = 0x1AD - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x20B;
                    goto block_165;
                case 0x27:                          /* switch 2 */
                    var_5 = temp_17 + 0x106;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469E80);
                    var_6 = 0x266 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x246;
                    goto block_165;
                }
            }
        } else {
            if (arg6 == 0x40000) {
                func_00303EB8(&sp20, &D_00469E38);
            }
            switch (arg6) {                         /* switch 3; irregular */
            case 0x20000:                           /* switch 3 */
                var_5 = temp_17 + 0x2C;
                var_4 = func_00165DC0(&D_00468C80, &D_00469E80);
                var_6 = 0x155 - arg4;
                var_9 = var_5;
                var_11 = temp_17 + 0x16C;
block_165:
                func_0016E860(var_4, var_5, var_6, 5, 0x60FFFFFF, var_9, 0x63, var_11, 0x200, 0, 0);
                break;
            case 0x10:                              /* switch 3 */
                var_2 = func_00165DC0(&D_00468C80, &D_00469E80);
                var_5 = temp_17 + 0x9A;
                var_6_2 = 0x155;
block_164:
                var_4 = var_2;
                var_6 = var_6_2 - arg4;
                var_9 = var_5;
                var_11 = temp_17 + 0x1DA;
                goto block_165;
            case 0x40:                              /* switch 3 */
                var_5 = temp_17 + 0x2C;
                var_4 = func_00165DC0(&D_00468C80, &D_00469EC0);
                var_6 = 0x1AD - arg4;
                var_9 = var_5;
                var_11 = temp_17 + 0x16C;
                goto block_165;
            }
        }
        break;
    case 1:                                         /* switch 1 */
        if (arg5 != 0) {
            if ((arg6 == 0x1F) || (arg6 == 0x27) || (arg6 == 0x16)) {
                func_00303EB8(&sp20, &D_00469E38);
            }
            temp_5_2 = arg6 - 0xA;
            if (temp_5_2 < 0x33U) {
                switch ((s64) (temp_5_2 << 0x20) >> 0x20) { /* switch 4 */
                case 50:                            /* switch 4 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469ED8);
                    var_6 = 0xF2 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 6:                             /* switch 4 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469EF0);
                    var_6 = 0x152 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 24:                            /* switch 4 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F08);
                    var_6 = 0x1B3 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 45:                            /* switch 4 */
                    var_2 = func_00165DC0(&D_00468C80, &D_00469E80);
                    var_5 = temp_17 + 0x9A;
                    var_6_2 = 0x1B3;
                    goto block_164;
                case 44:                            /* switch 4 */
                    var_5 = temp_17 + 0x106;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469E80);
                    var_6 = 0x1B3 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x246;
                    goto block_165;
                case 0:                             /* switch 4 */
                    var_2 = func_00165DC0(&D_00468C80, &D_00469E80);
                    var_5 = temp_17 + 0x9A;
                    var_6_2 = 0x20B;
                    goto block_164;
                case 5:                             /* switch 4 */
                    var_5 = temp_17 + 0x106;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469E80);
                    var_6 = 0x20B - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x246;
                    goto block_165;
                case 10:                            /* switch 4 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F20);
                    var_6 = 0x263 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 11:                            /* switch 4 */
                    var_5 = temp_17 + 0x106;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F40);
                    var_6 = 0x263 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x246;
                    goto block_165;
                }
            }
        } else if (arg6 == 0x40) {
            var_5_2 = &D_00469F60;
block_163:
            var_2 = func_00165DC0(&D_00468C80, var_5_2);
            var_5 = temp_17 + 0x9A;
            var_6_2 = 0x152;
            goto block_164;
        }
        break;
    case 3:                                         /* switch 1 */
        if (arg5 != 0) {
            if ((arg6 == 0x32) || (arg6 == 0x2D) || (arg6 == 0x2F) || (arg6 == 0x20)) {
                func_00303EB8(&sp20, &D_00469E38);
            }
            temp_5_3 = arg6 - 0x13;
            if (temp_5_3 < 0x2BU) {
                switch ((s64) (temp_5_3 << 0x20) >> 0x20) { /* switch 5 */
                case 41:                            /* switch 5 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F78);
                    var_6 = 0xF4 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 29:                            /* switch 5 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F90);
                    var_6 = 0xF4 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 42:                            /* switch 5 */
                    var_5 = temp_17 + 0x106;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469FA8);
                    var_6 = 0xF4 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x246;
                    goto block_165;
                case 14:                            /* switch 5 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469FC0);
                    var_6 = 0x155 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 13:                            /* switch 5 */
                    var_5 = temp_17 + 0x106;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F08);
                    var_6 = 0x20D - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x246;
                    goto block_165;
                case 27:                            /* switch 5 */
                    var_5 = temp_17 + 0x65;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469FD8);
                    var_6 = 0x155 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x1A5;
                    goto block_165;
                case 25:                            /* switch 5 */
                    var_5 = temp_17 + 0x65;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F08);
                    var_6 = 0x1B6 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x1A5;
                    goto block_165;
                case 24:                            /* switch 5 */
                    var_5 = temp_17 + 0xCD;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F08);
                    var_6 = 0x1B6 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x20D;
                    goto block_165;
                case 0:                             /* switch 5 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F08);
                    var_6 = 0x20D - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                }
            }
        } else {
            switch (arg6) {                         /* switch 6; irregular */
            case 0x40:                              /* switch 6 */
                var_5 = temp_17 + 0x106;
                var_4 = func_00165DC0(&D_00468C80, &D_00469FC0);
                var_6 = 0x155 - arg4;
                var_9 = var_5;
                var_11 = temp_17 + 0x246;
                goto block_165;
            case 0x40000:                           /* switch 6 */
                var_5 = temp_17 + 0x106;
                var_4 = func_00165DC0(&D_00468C80, &D_00469F08);
                var_6 = 0x20D - arg4;
                var_9 = var_5;
                var_11 = temp_17 + 0x246;
                goto block_165;
            }
        }
        break;
    case 2:                                         /* switch 1 */
        if (arg5 != 0) {
            if (arg6 == 0x2A) {
                func_00303EB8(&sp20, &D_00469E38);
            }
            temp_5_4 = arg6 - 4;
            if (temp_5_4 < 0x3AU) {
                switch ((s64) (temp_5_4 << 0x20) >> 0x20) { /* switch 7 */
                case 0x38:                          /* switch 7 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469FF0);
                    var_6 = 0xF4 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 0x39:                          /* switch 7 */
                    var_2 = func_00165DC0(&D_00468C80, &D_0046A008);
                    var_5 = temp_17 + 0x9A;
                    var_6_2 = 0xF4;
                    goto block_164;
                case 0x0:                           /* switch 7 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F40);
                    var_6 = 0x156 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 0x37:                          /* switch 7 */
                    var_2 = func_00165DC0(&D_00468C80, &D_0046A020);
                    var_5 = temp_17 + 0x9A;
                    var_6_2 = 0x156;
                    goto block_164;
                case 0x2:                           /* switch 7 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469E80);
                    var_6 = 0x1B7 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 0x20:                          /* switch 7 */
                    var_2 = func_00165DC0(&D_00468C80, &D_00469E80);
                    var_5 = temp_17 + 0x9A;
                    var_6_2 = 0x1B7;
                    goto block_164;
                case 0x1:                           /* switch 7 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469F40);
                    var_6 = 0x20F - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 0x5:                           /* switch 7 */
                    var_2 = func_00165DC0(&D_00468C80, &D_0046A038);
                    var_5 = temp_17 + 0x9A;
                    var_6_2 = 0x20F;
                    goto block_164;
                case 0x7:                           /* switch 7 */
                    var_5 = temp_17 + 0xCB;
                    var_4 = func_00165DC0(&D_00468C80, &D_0046A050);
                    var_6 = 0x20F - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x20B;
                    goto block_165;
                case 0x2D:                          /* switch 7 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_0046A070);
                    var_6 = 0x270 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 0x24:                          /* switch 7 */
                    var_5 = temp_17 + 0x5F;
                    var_4 = func_00165DC0(&D_00468C80, &D_0046A088);
                    var_6 = 0x270 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x19F;
                    goto block_165;
                }
            }
        } else if (arg6 != 0x10) {
            if (arg6 == 0x40) {
                var_5 = temp_17 + 0x106;
                var_4 = func_00165DC0(&D_00468C80, &D_00469E80);
                var_6 = 0x1B7 - arg4;
                var_9 = var_5;
                var_11 = temp_17 + 0x246;
                goto block_165;
            }
        } else {
            var_2 = func_00165DC0(&D_00468C80, &D_0046A0A8);
            var_5 = temp_17 + 0x9A;
            var_6_2 = 0x156;
            goto block_164;
        }
        break;
    case 4:                                         /* switch 1 */
        if (arg5 != 0) {
            if ((arg6 == 0x38) || (arg6 == 0xD) || (arg6 == 0x12) || (arg6 == 0x34) || (arg6 == 0x10)) {
                func_00303EB8(&sp20, &D_00469E38);
            }
            temp_5_5 = arg6 - 1;
            if (temp_5_5 < 0x3CU) {
                switch ((s64) (temp_5_5 << 0x20) >> 0x20) { /* switch 8 */
                case 0x3B:                          /* switch 8 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_0046A0C0);
                    var_6 = 0xF2 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 0x16:                          /* switch 8 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469E80);
                    var_6 = 0x152 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 0x24:                          /* switch 8 */
                    var_5 = temp_17 + 0x106;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469E80);
                    var_6 = 0x152 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x246;
                    goto block_165;
                case 0x39:                          /* switch 8 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_0046A0D8);
                    var_6 = 0x1AA - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 0x0:                           /* switch 8 */
                    var_2 = func_00165DC0(&D_00468C80, &D_0046A0F0);
                    var_5 = temp_17 + 0x9A;
                    var_6_2 = 0x1AA;
                    goto block_164;
                case 0xD:                           /* switch 8 */
                    var_5 = temp_17 + 0x2C;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469FC0);
                    var_6 = 0x25F - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x16C;
                    goto block_165;
                case 0x38:                          /* switch 8 */
                    var_5 = temp_17 + 0x68;
                    var_4 = func_00165DC0(&D_00468C80, &D_0046A110);
                    var_6 = 0x25F - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x1A8;
                    goto block_165;
                case 0xB:                           /* switch 8 */
                    var_5 = temp_17 + 0x106;
                    var_4 = func_00165DC0(&D_00468C80, &D_00469FC0);
                    var_6 = 0x25F - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x246;
                    goto block_165;
                case 0x7:                           /* switch 8 */
                    var_5 = temp_17 + 0x68;
                    var_4 = func_00165DC0(&D_00468C80, &D_0046A128);
                    var_6 = 0x2C0 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x1A8;
                    goto block_165;
                case 0x6:                           /* switch 8 */
                    var_5 = temp_17 + 0xCB;
                    var_4 = func_00165DC0(&D_00468C80, &D_0046A128);
                    var_6 = 0x2C0 - arg4;
                    var_9 = var_5;
                    var_11 = temp_17 + 0x20B;
                    goto block_165;
                }
            }
        } else if (arg6 != 0x40) {
            if (arg6 == 0x200) {
                var_5_2 = &D_00469E80;
                goto block_163;
            }
        } else {
            temp_5_6 = temp_17 + 0x98;
            func_0016E860(func_00165DC0(&D_00468C80, &D_00469E80), temp_5_6, 0x1AA - arg4, 5, 0x60FFFFFF, temp_5_6, 0x63, temp_17 + 0x1D8, 0x200, 0, 0);
        }
        break;
    }
    temp_17_2 = temp_17 + 5;
    func_0016E860(func_00165DC0(&D_00468C80, &sp20), (temp_17_2 + arg1) - 9, (arg2 - arg4) + 0x89, 4, 0x60FFFFFF, temp_17_2, 0x63, temp_17_2 + 0x140, 0x200, 0, 0);
}
