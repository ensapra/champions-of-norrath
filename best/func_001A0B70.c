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

void *func_001A09B0(s32, u32);                      /* extern */
M2C_UNK func_001A0A08(void *);                      /* extern */
M2C_UNK func_001AD740(s32);                         /* extern */
M2C_UNK func_001AD760(s32);                         /* extern */
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK onLogin__16VIRealmInterfaceUiiPCUsPv;

void *func_001A0B70(u32 arg0) {
    s32 *temp_2_2;
    s32 *var_16_2;
    s32 temp_2_3;
    s32 var_2_2;
    s32 var_4;
    u32 temp_2;
    u32 temp_6;
    u32 temp_7;
    u32 var_8;
    u32 var_9;
    void *temp_5;
    void *var_16;
    void *var_17;
    void *var_2;

    func_001AD760(M2C_FIELD(&jtbl_004C006C, s32 *, 0x3F70));
    var_16 = M2C_FIELD(&onLogin__16VIRealmInterfaceUiiPCUsPv, void **, 0x720);
loop_1:
    if (var_16 != NULL) {
        temp_2 = M2C_FIELD(var_16, u32 *, 0);
        var_2_2 = arg0 < temp_2;
        if (temp_2 == 0) {
            func_001A0A08(var_16);
            var_2_2 = arg0 < (u32) M2C_FIELD(var_16, u32 *, 0);
        }
        if (var_2_2 != 0) {
            var_16 = M2C_FIELD(var_16, void **, 0x14);
            goto loop_1;
        }
        if (arg0 >= (u32) M2C_FIELD(var_16, u32 *, 4)) {
            var_16 = M2C_FIELD(var_16, void **, 0x14);
            goto loop_1;
        }
        temp_2_2 = M2C_FIELD(var_16, s32 **, 0xC);
        if ((temp_2_2 == NULL) || (temp_2_2 == M2C_FIELD(var_16, s32 *, 8))) {
            func_001A0A08(var_16);
        }
        if (M2C_FIELD(var_16, s32 **, 0xC) != NULL) {
            if (M2C_FIELD(var_16, s32 **, 0xC) != M2C_FIELD(var_16, s32 *, 8)) {
                func_001AD740(M2C_FIELD(&jtbl_004C006C, s32 *, 0x3F70));
                var_8 = M2C_FIELD(var_16, u32 *, 0x10);
                var_9 = 0;
                if (var_8 != 0) {
loop_20:
                    temp_6 = (u32) (var_9 + var_8) >> 1;
                    temp_5 = *((temp_6 * 4) + M2C_FIELD(var_16, s32 **, 0xC));
                    temp_7 = M2C_FIELD(temp_5, u32 *, 8);
                    var_2 = temp_5;
                    if (arg0 < temp_7) {
                        var_8 = temp_6;
                        goto block_23;
                    }
                    var_9 = temp_6 + 1;
                    if (arg0 >= (u32) (temp_7 + M2C_FIELD(temp_5, s32 *, 0xC))) {
block_23:
                        if (var_9 >= var_8) {
                            goto block_33;
                        }
                        goto loop_20;
                    }
                } else {
                    goto block_33;
                }
                /* Duplicate return node #34. Try simplifying control flow for better match */
                return var_2;
            }
            var_16_2 = M2C_FIELD(var_16, s32 **, 0xC);
            if (M2C_FIELD(var_16, s32 **, 0xC) != NULL) {
                var_4 = *var_16_2;
loop_27:
                var_17 = func_001A09B0(var_4, arg0);
                var_16_2 += 4;
                if (var_17 == NULL) {
                    temp_2_3 = *var_16_2;
                    var_4 = temp_2_3;
                    if (temp_2_3 == 0) {

                    } else {
                        goto loop_27;
                    }
                }
            } else {
                goto block_30;
            }
            goto block_31;
        }
block_30:
        var_17 = func_001A09B0(M2C_FIELD(var_16, s32 *, 8), arg0);
block_31:
        func_001AD740(M2C_FIELD(&jtbl_004C006C, s32 *, 0x3F70));
        return var_17;
    }
    func_001AD740(M2C_FIELD(&jtbl_004C006C, s32 *, 0x3F70));
block_33:
    var_2 = NULL;
    return var_2;
}
