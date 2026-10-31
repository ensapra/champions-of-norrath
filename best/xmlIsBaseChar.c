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

extern M2C_UNK D_011AFB90;

s32 xmlIsBaseChar(s32 arg0) {
    s32 var_2;
    s32 var_3;

    if (arg0 >= 0x100) {
        var_3 = 0;
        if (((u32) (arg0 - 0x100) >= 0x32U) && ((u32) (arg0 - 0x134) >= 0xBU) && ((u32) (arg0 - 0x141) >= 8U) && ((u32) (arg0 - 0x14A) >= 0x35U) && ((u32) (arg0 - 0x180) >= 0x44U) && ((u32) (arg0 - 0x1CD) >= 0x24U) && ((u32) (arg0 - 0x1F4) >= 2U) && ((u32) (arg0 - 0x1FA) >= 0x1EU) && ((u32) (arg0 - 0x250) >= 0x59U) && ((u32) (arg0 - 0x2BB) >= 7U) && (arg0 != 0x386) && ((u32) (arg0 - 0x388) >= 3U) && (arg0 != 0x38C) && ((u32) (arg0 - 0x38E) >= 0x14U) && ((u32) (arg0 - 0x3A3) >= 0x2CU) && ((u32) (arg0 - 0x3D0) >= 7U) && (arg0 != 0x3DA) && (arg0 != 0x3DC) && (arg0 != 0x3DE) && (arg0 != 0x3E0) && ((u32) (arg0 - 0x3E2) >= 0x12U) && ((u32) (arg0 - 0x401) >= 0xCU) && ((u32) (arg0 - 0x40E) >= 0x42U) && ((u32) (arg0 - 0x451) >= 0xCU) && ((u32) (arg0 - 0x45E) >= 0x24U) && ((u32) (arg0 - 0x490) >= 0x35U) && ((u32) (arg0 - 0x4C7) >= 2U) && ((u32) (arg0 - 0x4CB) >= 2U) && ((u32) (arg0 - 0x4D0) >= 0x1CU) && ((u32) (arg0 - 0x4EE) >= 8U) && ((u32) (arg0 - 0x4F8) >= 2U) && ((u32) (arg0 - 0x531) >= 0x26U) && (arg0 != 0x559) && ((u32) (arg0 - 0x561) >= 0x26U) && ((u32) (arg0 - 0x5D0) >= 0x1BU) && ((u32) (arg0 - 0x5F0) >= 3U) && ((u32) (arg0 - 0x621) >= 0x1AU) && ((u32) (arg0 - 0x641) >= 0xAU) && ((u32) (arg0 - 0x671) >= 0x47U) && ((u32) (arg0 - 0x6BA) >= 5U) && ((u32) (arg0 - 0x6C0) >= 0xFU) && ((u32) (arg0 - 0x6D0) >= 4U) && (arg0 != 0x6D5) && ((u32) (arg0 - 0x6E5) >= 2U)) {
            var_2 = 0;
            if (arg0 >= 0x905) {
                if (((u32) (arg0 - 0x905) >= 0x35U) && (arg0 != 0x93D) && ((u32) (arg0 - 0x958) >= 0xAU) && ((u32) (arg0 - 0x985) >= 8U) && ((u32) (arg0 - 0x98F) >= 2U) && ((u32) (arg0 - 0x993) >= 0x16U) && ((u32) (arg0 - 0x9AA) >= 7U) && (arg0 != 0x9B2) && ((u32) (arg0 - 0x9B6) >= 4U) && ((u32) (arg0 - 0x9DC) >= 2U) && ((u32) (arg0 - 0x9DF) >= 3U) && ((u32) (arg0 - 0x9F0) >= 2U) && ((u32) (arg0 - 0xA05) >= 6U) && ((u32) (arg0 - 0xA0F) >= 2U) && ((u32) (arg0 - 0xA13) >= 0x16U) && ((u32) (arg0 - 0xA2A) >= 7U) && ((u32) (arg0 - 0xA32) >= 2U) && ((u32) (arg0 - 0xA35) >= 2U) && ((u32) (arg0 - 0xA38) >= 2U) && ((u32) (arg0 - 0xA59) >= 4U) && (arg0 != 0xA5E) && ((u32) (arg0 - 0xA72) >= 3U) && ((u32) (arg0 - 0xA85) >= 7U) && (arg0 != 0xA8D) && ((u32) (arg0 - 0xA8F) >= 3U) && ((u32) (arg0 - 0xA93) >= 0x16U) && ((u32) (arg0 - 0xAAA) >= 7U) && ((u32) (arg0 - 0xAB2) >= 2U) && ((u32) (arg0 - 0xAB5) >= 5U) && (arg0 != 0xABD) && (arg0 != 0xAE0) && ((u32) (arg0 - 0xB05) >= 8U) && ((u32) (arg0 - 0xB0F) >= 2U) && ((u32) (arg0 - 0xB13) >= 0x16U) && ((u32) (arg0 - 0xB2A) >= 7U) && ((u32) (arg0 - 0xB32) >= 2U) && ((u32) (arg0 - 0xB36) >= 4U) && (arg0 != 0xB3D) && ((u32) (arg0 - 0xB5C) >= 2U) && ((u32) (arg0 - 0xB5F) >= 3U) && ((u32) (arg0 - 0xB85) >= 6U) && ((u32) (arg0 - 0xB8E) >= 3U) && ((u32) (arg0 - 0xB92) >= 4U) && ((u32) (arg0 - 0xB99) >= 2U) && (arg0 != 0xB9C) && ((u32) (arg0 - 0xB9E) >= 2U) && ((u32) (arg0 - 0xBA3) >= 2U) && ((u32) (arg0 - 0xBA8) >= 3U) && ((u32) (arg0 - 0xBAE) >= 8U) && ((u32) (arg0 - 0xBB7) >= 3U) && ((u32) (arg0 - 0xC05) >= 8U) && ((u32) (arg0 - 0xC0E) >= 3U) && ((u32) (arg0 - 0xC12) >= 0x17U) && ((u32) (arg0 - 0xC2A) >= 0xAU) && ((u32) (arg0 - 0xC35) >= 5U) && ((u32) (arg0 - 0xC60) >= 2U) && ((u32) (arg0 - 0xC85) >= 8U) && ((u32) (arg0 - 0xC8E) >= 3U) && ((u32) (arg0 - 0xC92) >= 0x17U) && ((u32) (arg0 - 0xCAA) >= 0xAU) && ((u32) (arg0 - 0xCB5) >= 5U) && (arg0 != 0xCDE) && ((u32) (arg0 - 0xCE0) >= 2U) && ((u32) (arg0 - 0xD05) >= 8U) && ((u32) (arg0 - 0xD0E) >= 3U) && ((u32) (arg0 - 0xD12) >= 0x17U) && ((u32) (arg0 - 0xD2A) >= 0x10U) && ((u32) (arg0 - 0xD60) >= 2U) && ((u32) (arg0 - 0xE01) >= 0x2EU) && (arg0 != 0xE30) && ((u32) (arg0 - 0xE32) >= 2U) && ((u32) (arg0 - 0xE40) >= 6U) && ((u32) (arg0 - 0xE81) >= 2U) && (arg0 != 0xE84) && ((u32) (arg0 - 0xE87) >= 2U) && (arg0 != 0xE8A) && (arg0 != 0xE8D) && ((u32) (arg0 - 0xE94) >= 4U) && ((u32) (arg0 - 0xE99) >= 7U) && ((u32) (arg0 - 0xEA1) >= 3U) && (arg0 != 0xEA5) && (arg0 != 0xEA7) && ((u32) (arg0 - 0xEAA) >= 2U) && ((u32) (arg0 - 0xEAD) >= 2U) && (arg0 != 0xEB0) && ((u32) (arg0 - 0xEB2) >= 2U) && (arg0 != 0xEBD) && ((u32) (arg0 - 0xEC0) >= 5U) && ((u32) (arg0 - 0xF40) >= 8U) && ((u32) (arg0 - 0xF49) >= 0x21U)) {
                    var_2 = 0;
                    if (arg0 >= 0x10A0) {
                        if (((u32) (arg0 - 0x10A0) < 0x26U) || ((u32) (arg0 - 0x10D0) < 0x27U) || (arg0 == 0x1100) || ((u32) (arg0 - 0x1102) < 2U) || ((u32) (arg0 - 0x1105) < 3U) || (arg0 == 0x1109) || ((u32) (arg0 - 0x110B) < 2U) || ((u32) (arg0 - 0x110E) < 5U) || (arg0 == 0x113C) || (arg0 == 0x113E) || (arg0 == 0x1140) || (arg0 == 0x114C) || (arg0 == 0x114E) || (arg0 == 0x1150) || ((u32) (arg0 - 0x1154) < 2U) || (arg0 == 0x1159) || ((u32) (arg0 - 0x115F) < 3U) || (arg0 == 0x1163) || (arg0 == 0x1165) || (arg0 == 0x1167) || (arg0 == 0x1169) || ((u32) (arg0 - 0x116D) < 2U) || ((u32) (arg0 - 0x1172) < 2U) || (arg0 == 0x1175) || (arg0 == 0x119E) || (arg0 == 0x11A8) || (arg0 == 0x11AB) || ((u32) (arg0 - 0x11AE) < 2U) || ((u32) (arg0 - 0x11B7) < 2U) || (arg0 == 0x11BA) || ((u32) (arg0 - 0x11BC) < 7U) || (arg0 == 0x11EB) || (arg0 == 0x11F0) || (arg0 == 0x11F9) || ((u32) (arg0 - 0x1E00) < 0x9CU) || ((u32) (arg0 - 0x1EA0) < 0x5AU) || ((u32) (arg0 - 0x1F00) < 0x16U) || ((u32) (arg0 - 0x1F18) < 6U) || ((u32) (arg0 - 0x1F20) < 0x26U) || ((u32) (arg0 - 0x1F48) < 6U) || ((u32) (arg0 - 0x1F50) < 8U) || (arg0 == 0x1F59) || (arg0 == 0x1F5B) || (arg0 == 0x1F5D) || ((u32) (arg0 - 0x1F5F) < 0x1FU) || ((u32) (arg0 - 0x1F80) < 0x35U) || ((u32) (arg0 - 0x1FB6) < 7U) || (arg0 == 0x1FBE) || ((u32) (arg0 - 0x1FC2) < 3U) || ((u32) (arg0 - 0x1FC6) < 7U) || ((u32) (arg0 - 0x1FD0) < 4U) || ((u32) (arg0 - 0x1FD6) < 6U) || ((u32) (arg0 - 0x1FE0) < 0xDU) || ((u32) (arg0 - 0x1FF2) < 3U) || ((u32) (arg0 - 0x1FF6) < 7U) || (arg0 == 0x2126) || ((u32) (arg0 - 0x212A) < 2U) || (arg0 == 0x212E) || ((u32) (arg0 - 0x2180) < 3U) || ((u32) (arg0 - 0x3041) < 0x54U) || ((u32) (arg0 - 0x30A1) < 0x5AU) || ((u32) (arg0 - 0x3105) < 0x28U) || ((u32) (arg0 + 0xFFFF5400) < 0x2BA4U)) {
                            goto block_204;
                        }
                        goto block_205;
                    }
                } else {
                    goto block_204;
                }
            }
        } else {
block_204:
            var_3 = 1;
block_205:
            var_2 = var_3;
        }
        return var_2;
    }
    return *(&D_011AFB90 + (arg0 * 4));
}
