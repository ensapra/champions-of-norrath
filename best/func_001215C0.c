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
M2C_UNK func_0013BBD0();                            /* extern */
extern M2C_UNK Final__Q24Base3MD5;
extern M2C_UNK hudFinishGold__Fv;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_001215C0(s64 arg1) {
    s32 temp_2;
    s64 temp_16;

    temp_16 = (s64) (arg1 << 0x20) >> 0x20;
    temp_2 = temp_16 * 4;
    if (M2C_FIELD(&hudFinishGold__Fv, s32 *, 0xC4) != 1) {
        M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = (s32) *(&Final__Q24Base3MD5 + 0x2E8 + temp_2);
        func_0010B378(*(&Final__Q24Base3MD5 + 0x2E0 + temp_2), &shopItemSetAttributes__FiiPcPQ24item11description + 0x1738);
        M2C_FIELD(&Final__Q24Base3MD5, s32 *, 0x328) = (s32) temp_16;
        func_0013BBD0();
    }
}
