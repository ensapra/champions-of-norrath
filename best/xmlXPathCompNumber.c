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

M2C_UNK D_0118EDD4(s32, M2C_UNK *, M2C_UNK *);      /* extern */
s64 dpadd(s64, s64);                                /* extern */
s64 dpmul(s64, s64);                                /* extern */
s64 litodp(s32);                                    /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK xmlXPatherror(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern void *(*D_011B1E1C)(M2C_UNK);
extern s32 (*D_011B1E20)(s32, s32);
extern M2C_UNK D_011DC228;
extern M2C_UNK D_011DCBC8;
extern M2C_UNK D_011DCD70;
extern s64 D_011DD020;

void xmlXPathCompNumber(void *arg0) {
    M2C_UNK var_6;
    s32 temp_17_3;
    s32 temp_2;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_2_7;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_22;
    s64 temp_16;
    s64 var_20;
    s64 var_21;
    u8 *temp_2_2;
    u8 *temp_2_3;
    u8 *temp_3_2;
    u8 *var_18;
    u8 *var_18_2;
    u8 temp_16_2;
    u8 temp_17;
    u8 temp_3;
    void *temp_16_3;
    void *temp_17_2;
    void *temp_2_4;
    void *temp_3_3;
    void *temp_3_4;
    void *var_18_3;

    var_20 = 0;
    var_21 = 0xFFC0 << 0x2E;
    var_22 = 0;
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        var_18 = M2C_FIELD(arg0, u8 **, 0);
        temp_3 = *var_18;
        temp_2 = temp_3 + 0xD0;
        if (temp_3 != 0x2E) {
            var_22 = 1;
            if ((u32) (temp_2 & 0xFF) >= 0xAU) {
                var_6 = 0x1472;
                goto block_14;
            }
            goto loop_7;
        }
        if ((u32) (temp_2 & 0xFF) < 0xAU) {
            var_22 = 1;
            do {
loop_7:
                temp_17 = *var_18;
                temp_16 = dpmul(var_20, 0x8048 << 0x2F);
                var_20 = dpadd(temp_16, litodp(temp_17 - 0x30));
                temp_2_2 = var_18 + 1;
                if (temp_17 != 0) {
                    M2C_FIELD(arg0, u8 **, 0) = temp_2_2;
                    var_18 = temp_2_2;
                }
            } while ((u32) ((*var_18 + 0xD0) & 0xFF) < 0xAU);
        }
        if (M2C_FIELD(var_18, u8 *, 0) == 0x2E) {
            temp_3_2 = var_18 + 1;
            M2C_FIELD(arg0, u8 **, 0) = temp_3_2;
            var_18_2 = temp_3_2;
            if ((u32) ((M2C_FIELD(var_18, u8 *, 1) + 0xD0) & 0xFF) >= 0xAU) {
                if (var_22 == 0) {
                    var_6 = 0x147C;
block_14:
                    xmlXPatherror(arg0, &D_011DCD70, var_6, 1);
                    M2C_FIELD(arg0, s32 *, 8) = 1;
                    return;
                }
                goto block_19;
            }
            do {
                temp_16_2 = *var_18_2;
                var_21 = dpmul(var_21, D_011DD020);
                var_20 = dpadd(var_20, dpmul(litodp(temp_16_2 - 0x30), var_21));
                temp_2_3 = var_18_2 + 1;
                if (temp_16_2 != 0) {
                    M2C_FIELD(arg0, u8 **, 0) = temp_2_3;
                    var_18_2 = temp_2_3;
                }
            } while ((u32) ((*var_18_2 + 0xD0) & 0xFF) < 0xAU);
            goto block_19;
        }
block_19:
        temp_17_2 = M2C_FIELD(arg0, void **, 0x20);
        temp_2_4 = D_011B1E1C(0x30);
        if (temp_2_4 == NULL) {
            var_18_3 = NULL;
            D_0118EDD0(D_0118EDD4, &D_011DCBC8, D_0118EDD0);
        } else {
            var_18_3 = temp_2_4;
            memset(temp_2_4, 0, 0x30);
            M2C_FIELD(temp_2_4, s32 *, 0) = 3;
            M2C_FIELD(temp_2_4, s64 *, 0x10) = var_20;
        }
        temp_16_3 = M2C_FIELD(arg0, void **, 0x20);
        temp_5 = M2C_FIELD(temp_16_3, s32 *, 4);
        temp_17_3 = M2C_FIELD(temp_17_2, s32 *, 0xC);
        if (M2C_FIELD(temp_16_3, s32 *, 0) >= temp_5) {
            M2C_FIELD(temp_16_3, s32 *, 4) = (s32) (temp_5 * 2);
            temp_2_5 = D_011B1E20(M2C_FIELD(temp_16_3, s32 *, 8), temp_5 << 6);
            if (temp_2_5 != 0) {
                M2C_FIELD(temp_16_3, s32 *, 8) = temp_2_5;
                goto block_29;
            }
            temp_2_6 = M2C_FIELD(temp_16_3, s32 *, 4);
            M2C_FIELD(temp_16_3, s32 *, 4) = (s32) ((s32) (temp_2_6 + ((u32) temp_2_6 >> 0x1F)) >> 1);
            D_0118EDD0(D_0118EDD4, &D_011DC228, D_0118EDD4);
            return;
        }
block_29:
        temp_5_2 = M2C_FIELD(temp_16_3, s32 *, 8);
        M2C_FIELD(temp_16_3, s32 *, 0xC) = M2C_FIELD(temp_16_3, s32 *, 0);
        M2C_FIELD(((M2C_FIELD(temp_16_3, s32 *, 0) << 5) + temp_5_2), s32 *, 4) = temp_17_3;
        M2C_FIELD(((M2C_FIELD(temp_16_3, s32 *, 0) << 5) + temp_5_2), s32 *, 8) = -1;
        temp_3_3 = (M2C_FIELD(temp_16_3, s32 *, 0) << 5) + temp_5_2;
        M2C_FIELD(temp_3_3, s32 *, 0xC) = 3;
        M2C_FIELD(temp_3_3, s32 *, 0) = 0xC;
        M2C_FIELD(((M2C_FIELD(temp_16_3, s32 *, 0) << 5) + temp_5_2), s32 *, 0x10) = 0;
        M2C_FIELD(((M2C_FIELD(temp_16_3, s32 *, 0) << 5) + temp_5_2), s32 *, 0x14) = 0;
        temp_2_7 = M2C_FIELD(temp_16_3, s32 *, 0);
        temp_3_4 = (temp_2_7 << 5) + temp_5_2;
        M2C_FIELD(temp_16_3, s32 *, 0) = (s32) (temp_2_7 + 1);
        M2C_FIELD(temp_3_4, void **, 0x18) = var_18_3;
        M2C_FIELD(temp_3_4, s32 *, 0x1C) = 0;
    }
}
