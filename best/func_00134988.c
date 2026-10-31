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

M2C_UNK func_0010B378(s32, void *);                 /* extern */
M2C_UNK func_0010C7E8(M2C_UNK, s32, s32, M2C_UNK);  /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E420(M2C_UNK, s32);                /* extern */
M2C_UNK func_0014D240(s32);                         /* extern */
M2C_UNK func_0014D270(s32);                         /* extern */
extern M2C_UNK drawNewestQuickSpellMenu__Fiiicl;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK message_duplicate__FPP9message_tP9message_t;
extern M2C_UNK runStats__Fii;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00134988(s32 arg0) {
    s32 *temp_19;
    s32 *var_17;
    s32 temp_16;
    s32 temp_4;
    s32 var_16;

    func_0011E420(0, M2C_FIELD(&message_duplicate__FPP9message_tP9message_t, s32 *, 0x40));
    func_0011CEF0(M2C_FIELD(&message_duplicate__FPP9message_tP9message_t, s32 *, 0x18), arg0, 4);
    if (arg0 >= 0) {
        if (arg0 < 7) {
            temp_19 = &message_duplicate__FPP9message_tP9message_t + 0x30;
            if (M2C_FIELD(&message_duplicate__FPP9message_tP9message_t, s32 *, 0x18) != 0) {
                func_0014D240(M2C_FIELD(&message_duplicate__FPP9message_tP9message_t, s32 *, 0x18));
            }
            var_17 = temp_19;
            var_16 = 1;
            do {
                temp_4 = *var_17;
                var_17 += 4;
                var_16 -= 1;
                func_0010B378(temp_4, &jtbl_004C006C + 0xAD04);
            } while (var_16 >= 0);
            if (M2C_FIELD(&runStats__Fii, s32 *, 0xC24) != 0) {
                M2C_FIELD(&drawNewestQuickSpellMenu__Fiiicl, s32 *, 0x2F4) = 1;
            } else {
                M2C_FIELD(&drawNewestQuickSpellMenu__Fiiicl, s32 *, 0x2F4) = 0;
            }
            func_0010B378(*((M2C_FIELD(&drawNewestQuickSpellMenu__Fiiicl, s32 *, 0x2F4) * 4) + temp_19), &shopItemSetAttributes__FiiPcPQ24item11description + 0x1748);
            temp_16 = func_0011BA18(2);
            func_0010C7E8(0, temp_16, func_0011BA18(3), 0);
            return;
        }
        if (arg0 < 0xE) {
            if (M2C_FIELD(&message_duplicate__FPP9message_tP9message_t, s32 *, 0x18) != 0) {
                func_0014D270(M2C_FIELD(&message_duplicate__FPP9message_tP9message_t, s32 *, 0x18));
            }
        }
    }
}
