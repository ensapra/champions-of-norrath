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

s32 xmlParseURIHierPart(s32 *, u8 **);              /* extern */
s32 xmlParseURIOpaquePart(s32 *, u8 **);            /* extern */
s32 xmlURIUnescapeString(u8 *, s32, M2C_UNK);       /* extern */
extern M2C_UNK (*D_011B1E18)(s32, s32, u8 *);

s32 xmlParseAbsoluteURI(s32 *arg0, u8 **arg1) {
    s32 temp_4;
    s32 temp_5_2;
    s32 var_2;
    s32 var_2_2;
    s32 var_3;
    u8 *temp_16;
    u8 *temp_5_3;
    u8 *var_16;
    u8 temp_3;
    u8 temp_3_2;
    u8 temp_5;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_2 = -1;
    if (arg1 == NULL) {
        goto block_27;
    }
    temp_16 = *arg1;
    temp_3 = M2C_FIELD(temp_16, u8 *, 0);
    if ((u32) (temp_3 - 0x61) < 0x1AU) {
        goto block_3;
    }
    var_3 = 2;
    if ((u32) (temp_3 - 0x41) >= 0x1AU) {
        goto block_20;
    }
block_3:
    var_16 = temp_16 + 1;
    temp_3_2 = M2C_FIELD(temp_16, u8 *, 1);
    if ((u32) (temp_3_2 - 0x61) < 0x1AU) {
        goto loop_8;
    }
    if ((u32) (temp_3_2 - 0x41) < 0x1AU) {
        goto loop_8;
    }
    if ((u32) (temp_3_2 - 0x30) < 0xAU) {
        goto loop_8;
    }
    var_2_2 = temp_3_2 << 0x18;
    goto block_12;
loop_8:
    var_16 += 1;
    temp_5 = *var_16;
    if ((u32) (temp_5 - 0x61) < 0x1AU) {
        goto loop_8;
    }
    if ((u32) (temp_5 - 0x41) < 0x1AU) {
        goto loop_8;
    }
    if ((u32) (temp_5 - 0x30) < 0xAU) {
        goto loop_8;
    }
    var_2_2 = temp_5 << 0x18;
block_12:
    temp_5_2 = var_2_2 >> 0x18;
    if (temp_5_2 == 0x2B) {
        goto loop_8;
    }
    if (temp_5_2 == 0x2D) {
        goto loop_8;
    }
    if (temp_5_2 == 0x2E) {
        goto loop_8;
    }
    if (arg0 == NULL) {
        goto block_19;
    }
    temp_4 = *arg0;
    if (temp_4 == 0) {
        goto block_18;
    }
    D_011B1E18(temp_4, temp_5_2, temp_16);
block_18:
    *arg0 = xmlURIUnescapeString(*arg1, var_16 - *arg1, 0);
block_19:
    *arg1 = var_16;
    var_3 = 0;
block_20:
    var_2 = var_3;
    if (var_3 != 0) {
        goto block_27;
    }
    temp_5_3 = *arg1;
    var_2 = 1;
    if ((s8) M2C_FIELD(temp_5_3, u8 *, 0) != 0x3A) {
        goto block_27;
    }
    *arg1 = temp_5_3 + 1;
    if ((s8) M2C_FIELD(temp_5_3, u8 *, 1) != 0x2F) {
        goto block_25;
    }
    return xmlParseURIHierPart(arg0, arg1);
block_25:
    return xmlParseURIOpaquePart(arg0, arg1);
block_27:
    return var_2;
}
