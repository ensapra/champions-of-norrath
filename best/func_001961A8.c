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

M2C_UNK func_001A1568(void *, M2C_UNK, void *);     /* extern */
extern M2C_UNK jtbl_004C006C;

void func_001961A8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_19;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_2;
    s32 var_2_2;
    s32 var_5;
    s32 var_5_2;
    s32 var_6;
    s32 var_6_2;
    s32 var_6_3;
    s32 var_6_4;
    s32 var_7;
    s32 var_7_2;
    s32 var_8;
    s32 var_8_2;

    temp_19 = M2C_FIELD(arg0, s32 *, 0x48);
    if (arg0 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xEC4C, 0x617, &jtbl_004C006C + 0xED04);
    }
    if ((arg1 != 0) || (arg2 != 0)) {
        if (arg2 != 0) {
            var_6 = arg2;
            if (arg2 > 0) {
                do {
                    var_6 -= 1;
                    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x48) * 0x198) + M2C_FIELD(arg0, s32 *, 0x78)), u16 *, 0x190);
                } while (var_6 != 0);
                var_8 = 1;
            } else {
                var_8 = 0;
                if (var_6 < 0) {
                    var_6_2 = -var_6;
                    do {
                        var_6_2 -= 1;
                        M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x48) * 0x198) + M2C_FIELD(arg0, s32 *, 0x78)), u16 *, 0x18E);
                    } while (var_6_2 != 0);
                    var_8 = 0;
                }
            }
            var_7 = M2C_FIELD(arg0, s32 *, 0x48);
            temp_5 = M2C_FIELD(arg0, s32 *, 0x78);
            var_6_3 = 0x20;
            if (!(M2C_FIELD(((var_7 * 0x198) + temp_5), s32 *, 0x18C) & 0x14)) {

            } else {
                var_2 = var_7 * 2;
loop_17:
                var_6_3 -= 1;
                var_7 = (s32) M2C_FIELD(((var_8 * 2) + (((var_2 + var_7) * 0x88) + temp_5)), u16 *, 0x18E);
                if (var_6_3 != 0) {
                    var_2 = var_7 * 2;
                    if (!(M2C_FIELD(((var_7 * 0x198) + temp_5), s32 *, 0x18C) & 0x14)) {
                        M2C_FIELD(arg0, s32 *, 0x48) = var_7;
                    } else {
                        goto loop_17;
                    }
                } else {
                    M2C_FIELD(arg0, s32 *, 0x48) = temp_19;
                }
            }
        }
        if (arg1 != 0) {
            if (arg1 > 0) {
                if (arg1 <= 0) {
                    var_8_2 = 3;
                } else {
                    var_5 = arg1;
                    do {
                        var_5 -= 1;
                        M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x48) * 0x198) + M2C_FIELD(arg0, s32 *, 0x78)), u16 *, 0x194);
                    } while (var_5 != 0);
                    var_8_2 = 3;
                }
            } else {
                var_8_2 = 2;
                if (arg1 < 0) {
                    var_5_2 = -arg1;
                    do {
                        var_5_2 -= 1;
                        M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x48) * 0x198) + M2C_FIELD(arg0, s32 *, 0x78)), u16 *, 0x192);
                    } while (var_5_2 != 0);
                    var_8_2 = 2;
                }
            }
            var_7_2 = M2C_FIELD(arg0, s32 *, 0x48);
            temp_5_2 = M2C_FIELD(arg0, s32 *, 0x78);
            var_6_4 = 0x20;
            if (!(M2C_FIELD(((var_7_2 * 0x198) + temp_5_2), s32 *, 0x18C) & 0x14)) {

            } else {
                var_2_2 = var_7_2 * 2;
loop_36:
                var_6_4 -= 1;
                var_7_2 = (s32) M2C_FIELD(((var_8_2 * 2) + (((var_2_2 + var_7_2) * 0x88) + temp_5_2)), u16 *, 0x18E);
                if (var_6_4 != 0) {
                    var_2_2 = var_7_2 * 2;
                    if (!(M2C_FIELD(((var_7_2 * 0x198) + temp_5_2), s32 *, 0x18C) & 0x14)) {
                        M2C_FIELD(arg0, s32 *, 0x48) = var_7_2;
                    } else {
                        goto loop_36;
                    }
                } else {
                    M2C_FIELD(arg0, s32 *, 0x48) = temp_19;
                }
            }
        }
    }
}
