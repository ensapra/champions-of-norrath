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
M2C_UNK func_00136560();                            /* extern */
M2C_UNK func_0013BBA8();                            /* extern */
extern M2C_UNK drawNewestQuickSpellMenu__Fiiicl;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK message_get_refnum_offset__FPC9message_t;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00136280(s64 arg1) {
    s64 temp_18;

    temp_18 = (s64) (arg1 << 0x20) >> 0x20;
    func_0010B378(*((M2C_FIELD(&drawNewestQuickSpellMenu__Fiiicl, s32 *, 0x384) * 4) + &message_get_refnum_offset__FPC9message_t), &jtbl_004C006C + 0xAD54);
    func_0010B378(*((temp_18 * 4) + &message_get_refnum_offset__FPC9message_t), &shopItemSetAttributes__FiiPcPQ24item11description + 0x1748);
    M2C_FIELD(&drawNewestQuickSpellMenu__Fiiicl, s32 *, 0x384) = (s32) temp_18;
    func_0013BBA8();
    func_00136560();
}
