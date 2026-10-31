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

M2C_UNK func_0010A4D0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0010B378(s32, void *, void *);         /* extern */
M2C_UNK func_0010CBC8(M2C_UNK, s32, s32, s32);      /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_00136CC8(s64);                         /* extern */
M2C_UNK func_0013BBD0();                            /* extern */
extern M2C_UNK drawNewestQuickSpellMenu__Fiiicl;
extern M2C_UNK message_get_connection__FP9message_t;
extern M2C_UNK message_set_connection__FP9message_tP12connection_t;
extern M2C_UNK runStats__Fii;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00137020(s64 arg1) {
    s32 temp_16;
    s32 temp_17;
    s32 temp_3;
    s64 temp_18;

    temp_18 = (s64) (arg1 << 0x20) >> 0x20;
    if (M2C_FIELD(&drawNewestQuickSpellMenu__Fiiicl, s32 *, 0x3BC) != 0) {
        if (temp_18 != 0) {
            if (M2C_FIELD(&runStats__Fii, s32 *, 0xD50) != 0) {
                func_0010A4D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD50), 0, 0);
            }
        } else {
            temp_17 = func_0011BA18(2);
            temp_16 = func_0011BA18(3);
            func_0010CBC8(0, temp_17, temp_16, func_0011BA18(0xC));
        }
    }
    temp_3 = temp_18 * 4;
    M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = (s32) *(&message_set_connection__FP9message_tP12connection_t + 8 + temp_3);
    func_0010B378(*(&message_get_connection__FP9message_t + temp_3), &shopItemSetAttributes__FiiPcPQ24item11description + 0x1748, &shopItemSetAttributes__FiiPcPQ24item11description + 0x16EC);
    func_0013BBD0();
    if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16DC) != 0) {
        func_00136CC8(temp_18);
    }
}
