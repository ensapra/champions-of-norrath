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

M2C_UNK func_0010A5E8(void *, M2C_UNK);             /* extern */
M2C_UNK func_001228C0();                            /* extern */
M2C_UNK func_00122A90();                            /* extern */
M2C_UNK func_001A42B8(void *, void *);              /* extern */
extern M2C_UNK Final__Q24Base3MD5;
extern M2C_UNK drawNewestQuickSpellMenu__Fiiicl;
extern M2C_UNK hudAssignSpellBookSpell__Fiiil;

void func_00122B58(s64 arg1, void *arg2) {
    s32 temp_3;
    s32 temp_3_3;
    u8 temp_3_2;
    void *temp_3_4;

    temp_3 = M2C_FIELD(arg2, s32 *, 0);
    switch (temp_3) {                               /* switch 1; irregular */
    case 19:                                        /* switch 1 */
        temp_3_2 = *M2C_FIELD(arg2, u8 **, 8);
        if ((u32) ((temp_3_2 + 0xD0) & 0xFF) >= 0xAU) {
            temp_3_3 = temp_3_2 & 0xFF;
            if ((temp_3_3 != 0x2D) && (temp_3_3 != 0x23) && (temp_3_3 != 0x2A) && (temp_3_3 != 0x2C)) {
                if (temp_3_3 != 9) {
                    M2C_FIELD(arg2, s32 *, 4) = 0;
                    return;
                }
                func_00122A90();
                M2C_FIELD(arg2, s32 *, 4) = 0;
                return;
            }
        }
        return;
    case 18:                                        /* switch 1 */
        temp_3_4 = &Final__Q24Base3MD5 + 0x388;
        func_0010A5E8((((s64) (arg1 << 0x20) >> 0x20) * 0x258) + temp_3_4, 0x258);
        switch (arg1) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            func_001A42B8(&drawNewestQuickSpellMenu__Fiiicl + 0xB88, temp_3_4);
            break;
        case 1:                                     /* switch 2 */
            func_001A42B8(&drawNewestQuickSpellMenu__Fiiicl + 0xC88, temp_3_4 + 0x258);
            break;
        case 2:                                     /* switch 2 */
            func_001A42B8(&hudAssignSpellBookSpell__Fiiil + 0x20, temp_3_4 + 0x4B0);
            break;
        }
        func_001228C0();
        return;
    }
}
