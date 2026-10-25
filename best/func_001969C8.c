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
s32 func_001A2418(s32, s32, M2C_UNK);               /* extern */
extern M2C_UNK jtbl_004C006C;

void func_001969C8(void *arg0) {
    u32 sp0;
    s32 *temp_3_2;
    s32 temp_19;
    s32 temp_5;
    s32 var_18;
    s32 var_22;
    s32 var_4;
    u32 temp_30;
    u32 var_16;
    u32 var_16_2;
    u32 var_23;
    void *temp_17;
    void *temp_20;
    void *temp_3;
    void *temp_5_2;

    temp_20 = M2C_FIELD(arg0, void **, 4);
    temp_17 = M2C_FIELD(arg0, void **, 0);
    sp0 = M2C_FIELD(temp_20, u32 *, 0xC);
    temp_19 = M2C_FIELD(temp_17, u8 *, 0x52) & 0x7F;
    temp_30 = M2C_FIELD(temp_20, u32 *, 4);
    if (temp_17 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xEC4C, 0x78F, &jtbl_004C006C + 0xED04);
    }
    if (temp_20 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xEC4C, 0x790, &jtbl_004C006C + 0xED14);
    }
    var_23 = 0;
    if (M2C_FIELD(temp_17, u32 *, 0x68) != 0) {
        var_22 = 0;
        do {
            if (M2C_FIELD((var_22 + M2C_FIELD(temp_17, s32 *, 0x78) + (temp_19 * 0x30)), u16 *, 4) == 0) {
                var_16 = 0;
                if (sp0 != 0) {
                    var_18 = 0;
                    var_4 = temp_19 * 3;
loop_9:
                    temp_5 = M2C_FIELD(temp_20, s32 *, 8) + var_18;
                    var_18 += 0x28;
                    if (func_001A2418(var_22 + (var_4 * 0x10) + M2C_FIELD(temp_17, s32 *, 0x78) + 8, temp_5, 0xA) == 0) {
                        temp_3 = var_22 + M2C_FIELD(temp_17, s32 *, 0x78);
                        M2C_FIELD(temp_3, u8 *, 0x18C) = (u8) (M2C_FIELD(temp_3, u8 *, 0x18C) | 4);
                    } else {
                        var_16 += 1;
                        var_4 = temp_19 * 3;
                        if (var_16 >= sp0) {
                            goto block_12;
                        }
                        goto loop_9;
                    }
                } else {
block_12:
                    var_16_2 = 0;
                    if (temp_30 != 0) {
loop_13:
                        temp_5_2 = var_22 + M2C_FIELD(temp_17, s32 *, 0x78);
                        temp_3_2 = (var_16_2 * 4) + M2C_FIELD(temp_20, s32 *, 0);
                        var_16_2 += 1;
                        if (M2C_FIELD((temp_5_2 + (temp_19 * 0x30)), u16 *, 4) == *temp_3_2) {
                            M2C_FIELD(temp_5_2, u8 *, 0x18C) = (u8) (M2C_FIELD(temp_5_2, u8 *, 0x18C) | 4);
                        } else if (var_16_2 < temp_30) {
                            goto loop_13;
                        }
                    }
                }
            }
            var_23 += 1;
            var_22 += 0x198;
        } while (var_23 < (u32) M2C_FIELD(temp_17, u32 *, 0x68));
    }
}
