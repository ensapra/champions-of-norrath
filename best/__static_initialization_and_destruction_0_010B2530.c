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

s32 VIHashRefID(M2C_UNK *);                         /* extern */
s32 VIHashResourceID(M2C_UNK *);                    /* extern */
extern s32 D_01192BD0;
extern s32 D_01192BD8;
extern s32 D_01192BE0;
extern s32 D_01192BE8;
extern s32 D_01192BF0;
extern s32 D_01192BF8;
extern s32 D_01192C00;
extern s32 D_01192C08;
extern s32 D_01192C10;
extern s32 D_01192C18;
extern s32 D_01192C20;
extern s32 D_01192C28;
extern s32 D_01192C30;
extern M2C_UNK D_01192C38;
extern M2C_UNK D_011D43B8;
extern M2C_UNK D_011D43C8;
extern M2C_UNK D_011D43E0;
extern M2C_UNK D_011D43F8;
extern M2C_UNK D_011D4408;
extern M2C_UNK D_011D4420;
extern M2C_UNK D_011D4438;
extern M2C_UNK D_011D4448;
extern M2C_UNK D_011D4458;
extern M2C_UNK D_011D4468;
extern M2C_UNK D_011D4478;
extern M2C_UNK D_011D4488;
extern M2C_UNK D_011D4498;

void __static_initialization_and_destruction_0_010B2530(s32 arg0, s32 arg1) {
    void *temp_11;
    void *temp_11_2;

    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            D_01192BD0 = VIHashRefID(&D_011D43B8);
            if (arg0 == 1) {
                D_01192BD8 = VIHashRefID(&D_011D43C8);
            }
        }
        if (arg0 == 1) {
            D_01192BE0 = VIHashRefID(&D_011D43E0);
        }
        if (arg0 == 1) {
            D_01192BE8 = VIHashRefID(&D_011D43F8);
        }
        if (arg0 == 1) {
            D_01192BF0 = VIHashRefID(&D_011D4408);
            if (arg0 == 1) {
                D_01192BF8 = VIHashRefID(&D_011D4420);
                if (arg0 == 1) {
                    D_01192C00 = VIHashRefID(&D_011D4438);
                    if (arg0 == 1) {
                        D_01192C08 = VIHashRefID(&D_011D4448);
                        if (arg0 == 1) {
                            D_01192C10 = VIHashRefID(&D_011D4458);
                            if (arg0 == 1) {
                                D_01192C18 = VIHashRefID(&D_011D4468);
                            }
                        }
                    }
                }
            }
        }
        if ((arg1 == 0xFFFF) && (arg0 == 1)) {
            D_01192C20 = VIHashRefID(&D_011D4478);
            if (arg0 == 1) {
                D_01192C28 = VIHashRefID(&D_011D4488);
                if (arg0 == 1) {
                    D_01192C30 = VIHashResourceID(&D_011D4498);
                    if (arg0 == 1) {
                        temp_11 = &D_01192C38 + 4;
                        M2C_FIELD(&D_01192C38, s8 *, 0) = -0x2C;
                        M2C_FIELD(&D_01192C38, s8 *, 1) = -0x40;
                        M2C_FIELD(&D_01192C38, s8 *, 2) = 0x6F;
                        M2C_FIELD(&D_01192C38, s8 *, 3) = -1;
                        M2C_FIELD(&D_01192C38, s8 *, 4) = 0x64;
                        M2C_FIELD(temp_11, s8 *, 1) = -0x51;
                        M2C_FIELD(temp_11, s8 *, 2) = -0x24;
                        M2C_FIELD(temp_11, s8 *, 3) = -1;
                        temp_11_2 = &D_01192C38 + 8;
                        M2C_FIELD(temp_11_2, s8 *, 3) = -1;
                        M2C_FIELD(&D_01192C38, s8 *, 8) = 0x5A;
                        M2C_FIELD(temp_11_2, s8 *, 2) = 0x50;
                        M2C_FIELD(temp_11_2, s8 *, 1) = -1;
                    }
                }
            }
        }
    }
}
