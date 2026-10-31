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

s64 dpadd(s64, s64);                                /* extern */
s64 dpmul(s64, s64);                                /* extern */
s64 dpsub(M2C_UNK, s64);                            /* extern */
s64 litodp(s32);                                    /* extern */
extern s64 D_011B1F50;
extern s64 D_011DD018;

s64 xmlXPathStringEvalNumber(u8 *arg0) {
    s32 temp_3;
    s32 var_19;
    s32 var_20;
    s32 var_2;
    s32 var_3;
    s64 temp_16;
    s64 var_16;
    s64 var_18;
    u8 *var_17;
    u8 temp_4;
    u8 temp_4_2;
    u8 var_4;

    var_16 = 0;
    var_17 = arg0;
    var_19 = 0;
    var_20 = 0;
    var_18 = 0xFFC0 << 0x2E;
loop_3:
    var_4 = *var_17;
    temp_3 = var_4 & 0xFF;
    if (temp_3 == 0x20) {
block_2:
        var_17 += 1;
        goto loop_3;
    }
    if (temp_3 == 9) {
        goto block_2;
    }
    if (temp_3 == 0xA) {
        goto block_2;
    }
    if (temp_3 == 0xD) {
        goto block_2;
    }
    if (temp_3 != 0x2E) {
        if ((u32) ((var_4 + 0xD0) & 0xFF) >= 0xAU) {
            if (temp_3 != 0x2D) {
                goto block_31;
            }
            goto block_13;
        }
        goto block_12;
    }
block_12:
    var_2 = var_4 + 0xD0;
    if (var_4 == 0x2D) {
block_13:
        var_17 += 1;
        var_20 = 1;
        var_4 = *var_17;
        var_2 = var_4 + 0xD0;
    }
    if ((u32) (var_2 & 0xFF) < 0xAU) {
        var_19 = 1;
        do {
            temp_4 = *var_17;
            temp_16 = dpmul(var_16, 0x8048 << 0x2F);
            var_17 += 1;
            var_4 = *var_17;
            var_16 = dpadd(temp_16, litodp(temp_4 - 0x30));
        } while ((u32) ((var_4 + 0xD0) & 0xFF) < 0xAU);
    }
    var_3 = var_4 & 0xFF;
    if (var_4 == 0x2E) {
        var_17 += 1;
        var_4 = *var_17;
        if ((u32) ((var_4 + 0xD0) & 0xFF) >= 0xAU) {
            if (var_19 == 0) {
                goto block_31;
            }
            goto block_22;
        }
        do {
            temp_4_2 = *var_17;
            var_18 = dpmul(var_18, D_011DD018);
            var_17 += 1;
            var_4 = *var_17;
            var_16 = dpadd(var_16, dpmul(litodp(temp_4_2 - 0x30), var_18));
        } while ((u32) ((var_4 + 0xD0) & 0xFF) < 0xAU);
block_22:
        var_3 = var_4 & 0xFF;
        goto block_23;
    }
block_23:
loop_26:
    if (var_3 == 0x20) {
block_25:
        var_17 += 1;
        var_4 = *var_17;
        var_3 = var_4 & 0xFF;
        goto loop_26;
    }
    if (var_3 == 9) {
        goto block_25;
    }
    if (var_3 == 0xA) {
        goto block_25;
    }
    if (var_3 == 0xD) {
        goto block_25;
    }
    if (var_4 != 0) {
block_31:
        return D_011B1F50;
    }
    if (var_20 != 0) {
        var_16 = dpsub(0, var_16);
    }
    return var_16;
}
