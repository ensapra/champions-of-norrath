/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

s32 func_00198800(void *, void *, s8, void *, void *); /* extern */
M2C_UNK func_001A1568(void *, M2C_UNK, void *);     /* extern */
extern u8 D_00364290;
extern void *D_00480488;
extern s32 D_00480498;
extern s32 D_0048049C;
extern M2C_UNK func_01000000;
extern M2C_UNK jtbl_004C006C;

void func_0019763C(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_5;
    s8 temp_6;
    u32 temp_3_3;
    u32 temp_3_4;
    void *temp_16;
    void *temp_16_2;
    void *temp_18;

    if (arg0 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xEFD4, 0x20F, &jtbl_004C006C + 0xF02C);
    }
    if (arg1 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xEFD4, 0x210, &jtbl_004C006C + 0xF164);
    }
    if ((D_00364290 != 0) && (temp_3 = M2C_FIELD(arg0, s32 *, 0xE4), (temp_3 != 0)) && (temp_3 != 2) && (temp_3 != 3) && (M2C_FIELD(D_00480488, u16 *, 0) != 0) && (temp_18 = &func_01000000 + 0xF64A0, (M2C_FIELD(arg1, s8 *, 0) != 0))) {
        temp_6 = M2C_FIELD(arg1, s8 *, 3);
        temp_3_2 = M2C_FIELD(temp_18, s32 *, 0xAE8) + M2C_FIELD(arg1, s8 *, 2);
        temp_2 = M2C_FIELD(temp_18, s32 *, 0xAEC) + temp_6;
        M2C_FIELD(temp_18, s32 *, 0xAE8) = temp_3_2;
        M2C_FIELD(temp_18, s32 *, 0xAEC) = temp_2;
        temp_5 = M2C_FIELD(arg1, s8 *, 1) & 1;
        if (temp_3_2 < 0) {
            M2C_FIELD(temp_18, s32 *, 0xAE8) = 0;
        }
        if (temp_2 < 0) {
            M2C_FIELD(temp_18, s32 *, 0xAEC) = 0;
        }
        temp_3_3 = M2C_FIELD(D_00480488, u32 *, 0xD8);
        if (temp_3_3 < (u32) M2C_FIELD(temp_18, s32 *, 0xAE8)) {
            M2C_FIELD(temp_18, s32 *, 0xAE8) = (s32) temp_3_3;
        }
        temp_3_4 = M2C_FIELD(D_00480488, u32 *, 0xDC);
        if (temp_3_4 < (u32) M2C_FIELD(temp_18, s32 *, 0xAEC)) {
            M2C_FIELD(temp_18, s32 *, 0xAEC) = (s32) temp_3_4;
        }
        if (M2C_FIELD(D_00480488, u8 *, 1) != 0) {
            if (temp_5 != 0) {
                M2C_FIELD(D_00480488, u8 *, 1) = 0U;
                M2C_FIELD(D_00480488, M2C_UNK (**)(M2C_UNK, s32, s8, void *, void *), 0x24)(0, temp_5, temp_6, temp_18, D_00480488);
                M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK), 0x3C)(arg0, 1);
                return;
            }
            goto block_28;
        }
        temp_16 = temp_18 + 0xAE8;
        if (temp_5 != 0) {
            temp_2_2 = func_00198800(arg0, temp_16, temp_6, temp_18, D_00480488);
            if (temp_2_2 == 0xF) {
                M2C_FIELD(arg0, M2C_UNK (**)(void *, void *), 0x24)(arg0, temp_16);
            } else if (D_0048049C == 0) {
                D_00480498 = temp_2_2;
                D_0048049C = 0;
            } else {
                D_00480498 = ((D_00480498 ^ temp_2_2) != 0) ? 0xF : D_00480498;
            }
            M2C_FIELD(temp_18, s32 *, 0xAE0) = (s32) (M2C_FIELD(temp_18, s32 *, 0xAE0) | 1);
        } else {
block_28:
            temp_16_2 = temp_18 + 0xAE8;
            if (M2C_FIELD(temp_18, s32 *, 0xAE0) & 1) {
                temp_2_3 = func_00198800(arg0, temp_16_2, temp_6, temp_18, D_00480488);
                if (temp_2_3 == 0xF) {
                    M2C_FIELD(arg0, M2C_UNK (**)(void *, void *), 0x28)(arg0, temp_16_2);
                } else {
                    if (D_00480498 == temp_2_3) {
                        M2C_FIELD(D_00480488, M2C_UNK (**)(s8), 0x28)((s8) temp_2_3);
                    }
                    D_0048049C = 0;
                }
                M2C_FIELD(temp_18, s32 *, 0xAE0) = (s32) (M2C_FIELD(temp_18, s32 *, 0xAE0) & ~1);
            }
        }
        M2C_FIELD(arg0, M2C_UNK (**)(void *, void *), 0x20)(arg0, &func_01000000 + 0xF6F88);
    }
}
