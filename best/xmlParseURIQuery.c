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

s32 xmlURIUnescapeString(void *, s32, M2C_UNK);     /* extern */
extern M2C_UNK (*D_011B1E18)(s32, M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 xmlParseURIQuery(void *arg0, void **arg1) {
    s32 temp_2;
    s32 temp_4_2;
    s32 var_2;
    u8 temp_3;
    u8 temp_3_2;
    u8 temp_4;
    void *temp_6;
    void *var_16;
    void *phi_6;

    var_16 = *arg1;
    temp_6 = var_16;
    phi_6 = temp_6;
loop_3:
    temp_4 = M2C_FIELD(var_16, u8 *, 0);
    var_2 = temp_4 << 0x18;
    if ((u32) (temp_4 - 0x61) < 0x1AU) {
block_2:
        var_16 = (((var_2 >> 0x18) ^ 0x25) != 0) ? (var_16 + 1) : (var_16 + 3);
        goto loop_3;
    }
    var_2 = temp_4 << 0x18;
    if ((u32) (temp_4 - 0x41) < 0x1AU) {
        goto block_2;
    }
    var_2 = temp_4 << 0x18;
    if ((u32) (temp_4 - 0x30) < 0xAU) {
        goto block_2;
    }
    if ((s8) temp_4 == 0x2D) {
block_1:
        var_2 = temp_4 << 0x18;
        goto block_2;
    }
    if ((s8) temp_4 == 0x5F) {
        goto block_1;
    }
    if ((s8) temp_4 == 0x2E) {
        goto block_1;
    }
    if ((s8) temp_4 == 0x21) {
        goto block_1;
    }
    if ((s8) temp_4 == 0x7E) {
        goto block_1;
    }
    if ((s8) temp_4 == 0x2A) {
        goto block_1;
    }
    if ((s8) temp_4 == 0x27) {
        goto block_1;
    }
    if ((s8) temp_4 == 0x28) {
        goto block_1;
    }
    if ((s8) temp_4 == 0x29) {
        goto block_1;
    }
    var_2 = temp_4 << 0x18;
    if (((s8) temp_4 == 0x25) && ((temp_3 = M2C_FIELD(var_16, u8 *, 1), (((u32) (temp_3 - 0x30) < 0xAU) != 0)) || ((u32) (temp_3 - 0x61) < 6U) || (var_2 = temp_4 << 0x18, (((u32) (temp_3 - 0x41) < 6U) != 0))) && ((temp_3_2 = M2C_FIELD(var_16, u8 *, 2), var_2 = temp_4 << 0x18, (((u32) (temp_3_2 - 0x30) < 0xAU) != 0)) || (var_2 = temp_4 << 0x18, (((u32) (temp_3_2 - 0x61) < 6U) != 0)) || (var_2 = temp_4 << 0x18, (((u32) (temp_3_2 - 0x41) < 6U) != 0)))) {
        goto block_2;
    }
    temp_2 = var_2 >> 0x18;
    if (temp_2 == 0x3B) {
        goto block_1;
    }
    if (temp_2 == 0x2F) {
        goto block_1;
    }
    if (temp_2 == 0x3F) {
        goto block_1;
    }
    if (temp_2 == 0x3A) {
        goto block_1;
    }
    if (temp_2 == 0x40) {
        goto block_1;
    }
    if (temp_2 == 0x26) {
        goto block_1;
    }
    if (temp_2 == 0x3D) {
        goto block_1;
    }
    if (temp_2 == 0x2B) {
        goto block_1;
    }
    if (temp_2 == 0x24) {
        goto block_1;
    }
    if (temp_2 == 0x2C) {
        goto block_1;
    }
    if (arg0 != NULL) {
        temp_4_2 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_4_2 != 0) {
            D_011B1E18(temp_4_2, 0x25, temp_6, 0x2C, 0x24, 0x2B, 0x3D, 0x26);
            phi_6 = *arg1;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = xmlURIUnescapeString(phi_6, var_16 - phi_6, 0);
    }
    *arg1 = var_16;
    return 0;
}
