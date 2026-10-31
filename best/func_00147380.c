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

s32 func_00140020();                                /* extern */
M2C_UNK func_001403B8();                            /* extern */
s32 func_001404D0();                                /* extern */
s32 func_001404F0();                                /* extern */
M2C_UNK func_00140E68(void *, M2C_UNK, void *);     /* extern */
extern M2C_UNK Update__19VIRadialFloraSystemRC7VIVect3;
extern M2C_UNK drawNewestQuickSpellMenu__Fiiicl;
extern M2C_UNK hudShowMsg__FPUsN20iii;
extern M2C_UNK jtbl_004C006C;

s32 func_00147380(void) {
    switch (M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0x11C)) { /* irregular */
    case 0:
        if (func_00140020() == 0) {
            if (func_001404D0() == 0) {
                if (M2C_FIELD(&Update__19VIRadialFloraSystemRC7VIVect3, s32 *, 0x3E4) > 0) {
                    M2C_FIELD(&Update__19VIRadialFloraSystemRC7VIVect3, s32 *, 0x3E4) = (s32) (M2C_FIELD(&Update__19VIRadialFloraSystemRC7VIVect3, s32 *, 0x3E4) - 1);
                } else {
                    func_001403B8();
                    func_00140E68(&drawNewestQuickSpellMenu__Fiiicl + 0x488, 0, &jtbl_004C006C + 0xB0C4);
                    M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0x11C) = 1;
                }
            }
        } else {
block_12:
        }
        return 0;
    case 1:
        if (func_001404D0() == 0) {
            M2C_FIELD(&Update__19VIRadialFloraSystemRC7VIVect3, s32 *, 0x3E0) = func_001404F0();
            return 1;
        }
        goto block_12;
    default:
        return 0;
    }
}
