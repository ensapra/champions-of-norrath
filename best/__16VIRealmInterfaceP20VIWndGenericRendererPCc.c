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

s64 GetTime__7VITimer();                            /* extern */
M2C_UNK __11VIUDPSocketi(void *, M2C_UNK);          /* extern */
M2C_UNK __Q212RealmService15RealmGatewayAPIUiPCcs(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
void *clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *); /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK printf(M2C_UNK *, M2C_UNK *);               /* extern */
extern M2C_UNK D_011D8DA8;
extern M2C_UNK D_011D8DC0;
extern M2C_UNK D_011F6CB8;
extern M2C_UNK D_01210298;

void __16VIRealmInterfaceP20VIWndGenericRendererPCc(void *arg0, s32 arg1, M2C_UNK *arg2) {
    void *sp0;
    void *sp4;
    void *sp8;
    void *spC;
    void *sp10;
    M2C_UNK *temp_21;
    M2C_UNK *var_6;
    s32 var_19;
    s32 var_19_2;
    void **var_17;
    void **var_17_2;
    void *temp_16;
    void *temp_17;
    void *temp_19;
    void *temp_22;
    void *temp_23;
    void *temp_2;
    void *temp_30;
    void *var_3;
    void *var_3_2;

    var_6 = arg2;
    temp_21 = var_6;
    if (temp_21 == NULL) {
        var_6 = &D_011D8DA8;
    }
    temp_23 = arg0 + 0xD30;
    sp0 = arg0 + 0x10;
    __Q212RealmService15RealmGatewayAPIUiPCcs(2, var_6, -0x609F);
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_01210298;
    temp_30 = arg0 + 0xD98;
    temp_22 = arg0 + 0xF2C;
    var_17 = arg0 + 0x10BC;
    var_19 = 0x63;
    memset(sp0, 0, 0x100);
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    temp_2 = arg0 + 0x114;
    sp4 = temp_2;
    sp8 = arg0 + 0x514;
    memset(temp_2, 0, 0x400);
    spC = arg0 + 0x918;
    memset(sp8, 0, 0x400);
    M2C_FIELD(arg0, s32 *, 0x914) = 0;
    sp10 = arg0 + 0x92C;
    memset(spC, 0, 0x14);
    memset(sp10, 0, 0x400);
    M2C_FIELD(arg0, s32 *, 0xD2C) = 0;
    memset(temp_23, 0, 0x14);
    __11VIUDPSocketi(arg0 + 0xD44, -1);
    M2C_FIELD(arg0, s32 *, 0xD8C) = 0;
    M2C_FIELD(arg0, s32 *, 0xD90) = 0;
    M2C_FIELD(arg0, s32 *, 0xD94) = 0;
    memset(temp_30, 0, 0x190);
    M2C_FIELD(arg0, s32 *, 0xF28) = 0;
    memset(temp_22, 0, 0x190);
    do {
        if (M2C_FIELD(&D_011F6CB8, s32 *, 0xC) == 0) {
            var_3 = &D_011F6CB8 + 0x10;
            M2C_FIELD(&D_011F6CB8, s32 *, 8) = (s32) (M2C_FIELD(&D_011F6CB8, s32 *, 8) + 1);
        } else {
            var_3 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(&D_011F6CB8);
        }
        var_19 -= 1;
        *var_17 = var_3;
        var_17 += 4;
    } while (var_19 != -1);
    var_17_2 = arg0 + 0x124C;
    var_19_2 = 0x63;
    do {
        if (M2C_FIELD(&D_011F6CB8, s32 *, 0xC) == 0) {
            var_3_2 = &D_011F6CB8 + 0x10;
            M2C_FIELD(&D_011F6CB8, s32 *, 8) = (s32) (M2C_FIELD(&D_011F6CB8, s32 *, 8) + 1);
        } else {
            var_3_2 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(&D_011F6CB8);
        }
        var_19_2 -= 1;
        *var_17_2 = var_3_2;
        var_17_2 += 4;
    } while (var_19_2 != -1);
    temp_19 = arg0 + 0x13E0;
    memset(temp_19, 0, 0x11E0);
    M2C_FIELD(arg0, s64 *, 0x25C0) = 0;
    temp_16 = arg0 + 0x25C8;
    temp_17 = arg0 + 0x25DC;
    memset(temp_16, 0, 0x14);
    memset(temp_17, 0, 0x18);
    if (temp_21 != NULL) {
        printf(&D_011D8DC0, temp_21);
    }
    memset(sp4, 0, 0x400);
    memset(sp8, 0, 0x400);
    memset(spC, 0, 0x14);
    memset(sp10, 0, 0x400);
    memset(temp_23, 0, 0x14);
    memset(sp0, 0, 0x100);
    memset(temp_30, 0, 0x190);
    memset(temp_22, 0, 0x190);
    memset(temp_19, 0, 0x11E0);
    memset(temp_16, 0, 0x14);
    memset(temp_17, 0, 0x18);
    M2C_FIELD(arg0, s64 *, 0x2600) = GetTime__7VITimer();
    memset(arg0 + 0x2608, 0, 0x100);
    memset(arg0 + 0x2708, 0, 0x6400);
    memset(arg0 + 0x8B08, 0, 0x14);
    memset(arg0 + 0x8B1C, 0, 0x960);
}
