/* machine draft (m2c), tried by autopilot */
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

M2C_UNK func_0013E928(f32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_00156CB0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001590C0(M2C_UNK *);                   /* extern */
M2C_UNK func_0016E860(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_00172708(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0017B4E8(f32 *, M2C_UNK *);            /* extern */
M2C_UNK func_001AC510();                            /* extern */
M2C_UNK func_001AC8A8(M2C_UNK);                     /* extern */
M2C_UNK func_001AD198(s32, M2C_UNK, void *, M2C_UNK); /* extern */
M2C_UNK func_001B1F08(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK D_00427288;
extern s32 D_004272BC;
extern s8 D_00483F45;
extern s32 D_00484820;
extern s32 D_00484830;
extern s32 D_004848E0;
extern s32 D_004848EC;
extern s32 D_004848F0;
extern s32 D_004848F4;
extern s32 D_00484F48;
extern M2C_UNK D_007CC5C8;

void func_001AD870(void) { volatile char pad[0x100];
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    M2C_UNK sp40;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    M2C_UNK sp80;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    M2C_UNK spC0;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    M2C_UNK sp100;

    if (D_00484820 == 0) {
        func_001AC510();
    } else if (D_00484830 > 0) {
        D_00484830 -= 1;
    } else {
        sp20 = -0.5f;
        sp24 = -0.5f;
        sp28 = 0.5f;
        func_0013E928(&sp20, 0x65, 0x6B, 0x4E, 0, 0x26, 0x28, 0x30, 0, 0x80);
        if (D_00484F48 == 1) {
            sp30 = 0.0f;
            sp34 = -108.0f;
            sp38 = 0.0f;
            func_001590C0(&sp40);
            func_00156CB0(&sp40, 0, 0x4000);
            func_00156CB0(&sp40, 2, 0);
            func_0017B4E8(&sp30, &sp40);
            func_001AD198(D_004272BC, 1, &D_007CC5C8 + (D_004272BC * 0x108), 0);
            func_00172708(D_004848E0, 0, 0, 0, 0x80808080);
            func_00172708(D_004848EC, 0, 0x69, 0, 0x80808080);
            func_00172708(D_004848F4, 0x13F, 0, 0, 0x80808080);
            func_001AC8A8(0);
        } else {
            if (M2C_FIELD(&D_00427288, s32 *, 0xC0) != 2) {
                func_001B1F08(M2C_FIELD(&D_00427288, s32 *, 0x34), 0, 0);
                func_001B1F08(M2C_FIELD(&D_00427288, s32 *, 0xA8), 1, 0);
                func_00172708(D_004848E0, 0x140, 0, 0, 0x80808080);
                func_00172708(D_004848EC, 0x140, 0x69, 0, 0x80808080);
            } else {
                sp70 = 0.0f;
                sp74 = -108.0f;
                sp78 = 0.0f;
                func_001590C0(&sp80);
                func_00156CB0(&sp80, 0, 0x4000);
                func_00156CB0(&sp80, 2, 0);
                func_0017B4E8(&sp70, &sp80);
                func_001B1F08(M2C_FIELD(&D_00427288, s32 *, 0x34), 0, 0);
                func_001AD198(M2C_FIELD(&D_00427288, s32 *, 0x34), 1, &D_007CC5C8 + (M2C_FIELD(&D_00427288, s32 *, 0x34) * 0x108), 0);
                func_00172708(D_004848F4, 0x13F, 0, 0, 0x80808080);
            }
            if (M2C_FIELD(&D_00427288, s32 *, 0x4C) == 2) {
                spB0 = 0.0f;
                spB4 = -108.0f;
                spB8 = 0.0f;
                func_001590C0(&spC0);
                func_00156CB0(&spC0, 0, 0x4000);
                func_00156CB0(&spC0, 2, 0);
                func_0017B4E8(&spB0, &spC0);
                func_001AD198(M2C_FIELD(&D_00427288, s32 *, 0xA8), 2, &D_007CC5C8 + (M2C_FIELD(&D_00427288, s32 *, 0xA8) * 0x108), 1);
                func_0016E860(D_004848F4, 0, 1, 0, 0x80808080, 0, 0, 0x280, 0x200, 1, 0);
            } else {
                func_00172708(D_004848E0, 0, 0, 0, 0x80808080);
                func_00172708(D_004848EC, 0, 0x69, 0, 0x80808080);
            }
            if ((M2C_FIELD(&D_00427288, s32 *, 0x4C) != 2) && (M2C_FIELD(&D_00427288, s32 *, 0xC0) != 2)) {
                func_00172708(D_004848F0, 0x13A, 0, 6, 0x80808080);
            }
            spF0 = 0.0f;
            spF4 = -108.0f;
            spF8 = 0.0f;
            func_001590C0(&sp100);
            func_00156CB0(&sp100, 0, 0x4000);
            func_00156CB0(&sp100, 2, 0);
            func_0017B4E8(&spF0, &sp100);
            func_001AC8A8(1);
            if (D_00483F45 != 0) {
                func_001AC8A8(0);
            }
        }
    }
}
