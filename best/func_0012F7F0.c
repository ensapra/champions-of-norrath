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

M2C_UNK func_0011DA20(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0012F7B0();                            /* extern */
M2C_UNK func_00136E90(s32);                         /* extern */
M2C_UNK func_0013DA98(void *);                      /* extern */
M2C_UNK func_0013DBF0(void *);                      /* extern */
M2C_UNK func_0013DE28(void *);                      /* extern */
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK drawNewestQuickSpellMenu__Fiiicl;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_0012F7F0(void) {
    void *temp_2;

    if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16D8) != 1) {
        temp_2 = &drawNewestQuickSpellMenu__Fiiicl + 0x488;
        func_0013DA98(temp_2);
        func_0012F7B0();
        if ((M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0xCAC) & 6) == 6) {
            func_00136E90(M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x64));
        }
        switch (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x64)) { /* irregular */
        case 0:
            func_0013DBF0(temp_2);
            func_0013DE28(temp_2);
            func_0011DA20(0, 2);
            break;
        case 1:
        case 2:
            func_0011DA20(0, 0x14);
            break;
        case 3:
            func_0011DA20(0, 0x14);
            break;
        }
    }
}
