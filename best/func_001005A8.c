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

void *func_00100258(void *);                        /* extern */
s32 func_001004A8();                                /* extern */
M2C_UNK func_00166BF8(M2C_UNK *, M2C_UNK *, s8 *, s32, s32); /* extern */
s32 func_00166D20(s32, M2C_UNK *, s32);             /* extern */
M2C_UNK func_00301FFC(void *, void *, s32);         /* extern */
extern M2C_UNK D_00454320;
extern s8 D_00483200;
extern s32 D_00483204;
extern s8 D_00483208;
extern s32 D_004844A8;
extern s8 D_00487080[];
extern u8 D_004D7080[];
extern u8 D_004D70FC[];
extern u8 D_004D7100[];
extern u8 D_004DA080[];

void func_001005A8(s32 arg0, M2C_UNK *arg1) {
    s32 sp0;
    s16 *sp4;
    M2C_UNK *var_5;
    s16 *var_19;
    s16 *var_4_2;
    s16 temp_3;
    s32 var_5_2;
    s32 **var_22;
    s32 *temp_3_2;
    s32 temp_30;
    s32 temp_6;
    s32 temp_6_2;
    s32 var_17;
    s32 var_18;
    s32 var_21;
    s32 var_2;
    s32 var_2_2;
    s32 var_4;
    s32 var_5_3;
    s32 var_6;
    s8 *var_3;
    s8 temp_2_2;
    u16 temp_17;
    u16 var_16;
    void *temp_18;
    void *temp_2;
    void *temp_2_3;
    void *temp_4;
    void *temp_5;
    void *var_16_2;
    void *var_20;

    var_4 = arg0;
    var_5 = arg1;
    if (D_00483200 != 0) {
        var_6 = D_00483204;
        sp0 = var_6;
        if (var_6 >= 0) {
            *(s32 *)(D_004D70FC + (var_6 * 0xC0)) = D_004844A8;
        }
        temp_30 = var_6 * 2;
        if (D_00483208 != 0) {
            temp_6 = var_6 * 0xC0;
            temp_18 = temp_6 + D_004D7100;
            { typedef struct __attribute__((packed)) { u64 q[8]; } DCopy64; *(DCopy64 *)temp_18 = *(DCopy64 *)D_004DA080; }
            var_22 = NULL;
            var_21 = 0;
            M2C_ERROR(/* unknown instruction: sdr $a4, 0x38($s2) */);
            var_16 = M2C_FIELD(temp_18, u16 *, 6);
            M2C_FIELD(temp_18, s32 *, -4) = (s32) D_004844A8;
            var_20 = M2C_FIELD(temp_18, s32 *, 0x10) + D_004DA080;
            if (var_16 != 0) {
                temp_2 = D_004D7100 - 0x80;
                sp4 = temp_6 + 0x40 + temp_2;
                var_19 = temp_6 + temp_2 + 0x40;
                var_2 = (s32) var_16 < 0x50;
loop_6:
                temp_17 = (var_2 != 0) ? var_16 : 0x4FU;
                var_16 -= temp_17;
                temp_2_2 = D_00487080;
loop_7:
                var_5_2 = 0;
                if (D_00487080[0] != 0) {
                    var_5_2 = 1;
                    var_3 = D_00487080 + 0x500;
                    while (var_5_2 < 0x100 && *var_3 != 0) {
                        var_5_2++;
                        var_3 += 0x500;
                    }
                }
                if (var_5_2 == 0x100) {
                    if (func_001004A8() == 0) {
                        if (var_21 > 0) {
                            var_5_3 = var_21;
                            var_4_2 = ((temp_30 + sp0) << 6) + D_004D7080 + 0x40;
                            do {
                                temp_3 = *var_4_2;
                                var_4_2 += 2;
                                var_5_3 -= 1;
                                *((temp_3 * 0x500) + D_00487080) = 0;
                            } while (var_5_3 != 0);
                        }
                        *sp4 = -1;
                    } else {
                        goto loop_7;
                    }
                } else {
                    *var_19 = var_5_2;
                    var_21 += 1;
                    temp_3_2 = (var_5_2 * 0x500) + D_00487080;
                    var_19 += 2;
                    if (var_22 != NULL) {
                        *var_22 = temp_3_2;
                    } else {
                        M2C_FIELD(temp_18, s32 **, 0x14) = temp_3_2;
                    }
                    if (var_16 != 0) {
                        var_2_2 = 0x20000000;
                    } else {
                        var_2_2 = 0x60000000;
                    }
                    *temp_3_2 = temp_17 | var_2_2;
                    temp_6_2 = temp_17 * 0x10;
                    temp_5 = var_20;
                    var_22 = temp_3_2 + 4;
                    var_20 += temp_6_2;
                    func_00301FFC(temp_3_2 + 0x10, temp_5, temp_6_2);
                    var_2 = (s32) var_16 < 0x50;
                    if (var_16 == 0) {
                        goto block_29;
                    }
                    goto loop_6;
                }
            } else {
block_29:
                var_5 = D_004D7080;
                var_4 = -1;
                var_6 = -0xF4240;
                M2C_FIELD((((((temp_30 + sp0) << 5) + var_21) * 2) + D_004D7080), s16 *, 0x40) = -1;
                M2C_FIELD(temp_18, s16 *, 0xA) = -0x5805;
                D_00483204 = -0xF4240;
                M2C_FIELD(temp_18, s32 *, 0x10) = 0;
                D_00483208 = 0;
                goto block_30;
            }
        } else {
block_30:
            if (func_00166D20(var_4, var_5, var_6) == 0) {
                D_00483200 = 0;
                var_18 = 0;
                var_16_2 = D_004D7080 + 0x40;
                var_17 = 0;
loop_32:
                temp_4 = var_17 + D_004D7080;
                var_17 += 0xC0;
                if ((M2C_FIELD(var_16_2, s8 *, -0x40) != 0) && (M2C_FIELD(var_16_2, s16 *, 0) == -1)) {
                    temp_2_3 = func_00100258(temp_4);
                    if (temp_2_3 != NULL) {
                        func_00166BF8(&D_00454320, D_004DA080, &D_00483208, M2C_FIELD(temp_2_3, u16 *, 4) << 0xB, M2C_FIELD(temp_2_3, u16 *, 2) << 0xB);
                        D_00483200 = 1;
                        D_00483204 = var_18;
                        M2C_FIELD(var_16_2, s32 *, 0x3C) = (s32) D_004844A8;
                    } else {
                        M2C_FIELD(var_16_2, s16 *, 0) = -2;
                        goto block_40;
                    }
                } else {
block_40:
                    var_18 += 1;
                    var_16_2 += 0xC0;
                    if (var_18 < 0x40) {
                        goto loop_32;
                    }
                }
            }
        }
    }
}
