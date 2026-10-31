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

extern M2C_UNK D_011E2660;
extern M2C_UNK D_011E2680;
extern M2C_UNK D_011E26B0;
extern M2C_UNK D_011E2790;
extern M2C_UNK D_011E27A8;

void __static_initialization_and_destruction_0_01006BD0(s32 arg0, s32 arg1) {
    M2C_UNK *var_2;
    s32 var_3;
    void *temp_10;
    void *temp_10_2;
    void *temp_24;
    void *temp_24_2;
    void *temp_24_3;
    void *temp_24_4;
    void *temp_24_5;
    void *temp_24_6;
    void *temp_24_7;
    void *temp_25;
    void *temp_25_2;
    void *temp_25_3;
    void *temp_25_4;
    void *temp_25_5;
    void *temp_25_6;
    void *temp_3;
    void *temp_3_2;

    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            var_2 = &D_011E2660;
            var_3 = 3;
            do {
                var_3 -= 1;
                M2C_FIELD(var_2, f32 *, 0) = 0.0f;
                M2C_FIELD(var_2, f32 *, 4) = 0.0f;
                var_2 += 8;
            } while (var_3 != -1);
        }
        if ((arg1 == 0xFFFF) && (arg0 == 1)) {
            temp_3 = &D_011E2680 + 0x10;
            M2C_FIELD(&D_011E2680, f32 *, 0) = 296.0f;
            M2C_FIELD(&D_011E2680, f32 *, 4) = 207.0f;
            M2C_FIELD(&D_011E2680, f32 *, 8) = -200.0f;
            M2C_FIELD(&D_011E2680, f32 *, 0xC) = 119.0f;
            M2C_FIELD(temp_3, f32 *, 0xC) = 119.0f;
            M2C_FIELD(&D_011E2680, f32 *, 0x10) = 296.0f;
            M2C_FIELD(temp_3, f32 *, 4) = 207.0f;
            M2C_FIELD(temp_3, f32 *, 8) = -200.0f;
            temp_3_2 = &D_011E2680 + 0x20;
            M2C_FIELD(temp_3_2, f32 *, 0xC) = 131.0f;
            M2C_FIELD(&D_011E2680, f32 *, 0x20) = 369.0f;
            M2C_FIELD(temp_3_2, f32 *, 4) = 167.0f;
            M2C_FIELD(temp_3_2, f32 *, 8) = -200.0f;
            if (arg0 == 1) {
                temp_24 = &D_011E26B0 + 0x10;
                M2C_FIELD(&D_011E26B0, s32 *, 0) = 0;
                M2C_FIELD(&D_011E26B0, s32 *, 4) = 0;
                M2C_FIELD(&D_011E26B0, s32 *, 8) = 0x11;
                M2C_FIELD(&D_011E26B0, s32 *, 0xC) = 0x1B;
                M2C_FIELD(temp_24, s32 *, 0xC) = 0x1B;
                M2C_FIELD(&D_011E26B0, s32 *, 0x10) = 0x13;
                M2C_FIELD(temp_24, s32 *, 4) = 0;
                M2C_FIELD(temp_24, s32 *, 8) = 0x11;
                temp_24_2 = &D_011E26B0 + 0x20;
                M2C_FIELD(&D_011E26B0, s32 *, 0x20) = 0x26;
                M2C_FIELD(temp_24_2, s32 *, 0xC) = 0x1B;
                temp_25 = &D_011E26B0 + 0x80;
                M2C_FIELD(temp_24_2, s32 *, 4) = 0;
                M2C_FIELD(temp_24_2, s32 *, 8) = 0x11;
                temp_24_3 = &D_011E26B0 + 0x30;
                M2C_FIELD(&D_011E26B0, s32 *, 0x30) = 0x39;
                M2C_FIELD(temp_24_3, s32 *, 0xC) = 0x1B;
                M2C_FIELD(temp_24_3, s32 *, 4) = 0;
                M2C_FIELD(temp_24_3, s32 *, 8) = 0x11;
                temp_24_4 = &D_011E26B0 + 0x40;
                M2C_FIELD(&D_011E26B0, s32 *, 0x40) = 0x4C;
                M2C_FIELD(temp_24_4, s32 *, 0xC) = 0x1B;
                M2C_FIELD(temp_24_4, s32 *, 4) = 0;
                M2C_FIELD(temp_24_4, s32 *, 8) = 0x11;
                temp_24_5 = &D_011E26B0 + 0x50;
                M2C_FIELD(&D_011E26B0, s32 *, 0x50) = 0x5F;
                M2C_FIELD(temp_24_5, s32 *, 0xC) = 0x1B;
                M2C_FIELD(temp_24_5, s32 *, 4) = 0;
                M2C_FIELD(temp_24_5, s32 *, 8) = 0x11;
                temp_24_6 = &D_011E26B0 + 0x60;
                M2C_FIELD(temp_24_6, s32 *, 0xC) = 0x1B;
                M2C_FIELD(temp_24_6, s32 *, 8) = 0x11;
                M2C_FIELD(&D_011E26B0, s32 *, 0x60) = 0;
                M2C_FIELD(temp_24_6, s32 *, 4) = 0x1D;
                temp_24_7 = &D_011E26B0 + 0x70;
                M2C_FIELD(&D_011E26B0, s32 *, 0x70) = 0x13;
                M2C_FIELD(temp_24_7, s32 *, 0xC) = 0xD;
                M2C_FIELD(temp_24_7, s32 *, 4) = 0x1D;
                M2C_FIELD(temp_24_7, s32 *, 8) = 8;
                M2C_FIELD(&D_011E26B0, s32 *, 0x80) = 0x1D;
                M2C_FIELD(temp_25, s32 *, 4) = 0x1D;
                M2C_FIELD(temp_25, s32 *, 0xC) = 0xD;
                M2C_FIELD(temp_25, s32 *, 8) = 8;
                temp_25_2 = &D_011E26B0 + 0x90;
                M2C_FIELD(&D_011E26B0, s32 *, 0x90) = 0x27;
                M2C_FIELD(temp_25_2, s32 *, 0xC) = 0xD;
                M2C_FIELD(temp_25_2, s32 *, 4) = 0x1D;
                M2C_FIELD(temp_25_2, s32 *, 8) = 8;
                temp_25_3 = &D_011E26B0 + 0xA0;
                M2C_FIELD(&D_011E26B0, s32 *, 0xA0) = 0x31;
                M2C_FIELD(temp_25_3, s32 *, 0xC) = 0xD;
                M2C_FIELD(temp_25_3, s32 *, 4) = 0x1D;
                M2C_FIELD(temp_25_3, s32 *, 8) = 8;
                temp_25_4 = &D_011E26B0 + 0xB0;
                M2C_FIELD(&D_011E26B0, s32 *, 0xB0) = 0x3B;
                M2C_FIELD(temp_25_4, s32 *, 0xC) = 0xD;
                M2C_FIELD(temp_25_4, s32 *, 4) = 0x1D;
                M2C_FIELD(temp_25_4, s32 *, 8) = 8;
                temp_25_5 = &D_011E26B0 + 0xC0;
                M2C_FIELD(&D_011E26B0, s32 *, 0xC0) = 0x45;
                M2C_FIELD(temp_25_5, s32 *, 0xC) = 0xD;
                M2C_FIELD(temp_25_5, s32 *, 4) = 0x1D;
                M2C_FIELD(temp_25_5, s32 *, 8) = 8;
                temp_25_6 = &D_011E26B0 + 0xD0;
                M2C_FIELD(temp_25_6, s32 *, 0xC) = 0xD;
                M2C_FIELD(&D_011E26B0, s32 *, 0xD0) = 0x4F;
                M2C_FIELD(temp_25_6, s32 *, 4) = 0x1D;
                M2C_FIELD(temp_25_6, s32 *, 8) = 8;
                if (arg0 == 1) {
                    M2C_FIELD(&D_011E2790, s32 *, 0) = 0x13;
                    M2C_FIELD(&D_011E2790, s32 *, 4) = 0x2C;
                    M2C_FIELD(&D_011E2790, s32 *, 8) = 0x30;
                    M2C_FIELD((&D_011E2790 + 8), s32 *, 4) = 0x2C;
                    M2C_FIELD((&D_011E2790 + 0x10), s32 *, 4) = 0x2C;
                    M2C_FIELD(&D_011E2790, s32 *, 0x10) = 0x4D;
                    if (arg0 == 1) {
                        temp_10 = &D_011E27A8 + 0x10;
                        M2C_FIELD(&D_011E27A8, s32 *, 8) = 0x27;
                        M2C_FIELD(&D_011E27A8, s32 *, 0) = 0;
                        M2C_FIELD(&D_011E27A8, s32 *, 4) = 0x49;
                        M2C_FIELD(&D_011E27A8, s32 *, 0xC) = 0x36;
                        M2C_FIELD(temp_10, s32 *, 0xC) = 0x35;
                        M2C_FIELD(&D_011E27A8, s32 *, 0x10) = 0x28;
                        M2C_FIELD(temp_10, s32 *, 8) = 0x2C;
                        M2C_FIELD(temp_10, s32 *, 4) = 0x49;
                        temp_10_2 = &D_011E27A8 + 0x20;
                        M2C_FIELD(temp_10_2, s32 *, 0xC) = 0x36;
                        M2C_FIELD(&D_011E27A8, s32 *, 0x20) = 0x54;
                        M2C_FIELD(temp_10_2, s32 *, 4) = 0x49;
                        M2C_FIELD(temp_10_2, s32 *, 8) = 0x2B;
                    }
                }
            }
        }
    }
}
