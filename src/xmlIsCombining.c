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

s32 xmlIsCombining(s32 arg0) {
    s32 var_3;

    var_3 = 0;
    if ((arg0 >= 0x300) && (((u32) (arg0 - 0x300) < 0x46U) || ((u32) (arg0 - 0x360) < 2U) || ((u32) (arg0 - 0x483) < 4U) || ((u32) (arg0 - 0x591) < 0x11U) || ((u32) (arg0 - 0x5A3) < 0x17U) || ((u32) (arg0 - 0x5BB) < 3U) || (arg0 == 0x5BF) || ((u32) (arg0 - 0x5C1) < 2U) || (arg0 == 0x5C4) || ((u32) (arg0 - 0x64B) < 8U) || (arg0 == 0x670) || ((u32) (arg0 - 0x6D6) < 7U) || ((u32) (arg0 - 0x6DD) < 3U) || ((u32) (arg0 - 0x6E0) < 5U) || ((u32) (arg0 - 0x6E7) < 2U) || ((u32) (arg0 - 0x6EA) < 4U) || ((arg0 >= 0x901) && (((u32) (arg0 - 0x901) < 3U) || (arg0 == 0x93C) || ((u32) (arg0 - 0x93E) < 0xFU) || (arg0 == 0x94D) || ((u32) (arg0 - 0x951) < 4U) || ((u32) (arg0 - 0x962) < 2U) || ((u32) (arg0 - 0x981) < 3U) || (arg0 == 0x9BC) || (arg0 == 0x9BE) || (arg0 == 0x9BF) || ((u32) (arg0 - 0x9C0) < 5U) || ((u32) (arg0 - 0x9C7) < 2U) || ((u32) (arg0 - 0x9CB) < 3U) || (arg0 == 0x9D7) || ((u32) (arg0 - 0x9E2) < 2U) || ((arg0 >= 0xA02) && ((arg0 == 0xA02) || (arg0 == 0xA3C) || (arg0 == 0xA3E) || (arg0 == 0xA3F) || ((u32) (arg0 - 0xA40) < 3U) || ((u32) (arg0 - 0xA47) < 2U) || ((u32) (arg0 - 0xA4B) < 3U) || ((u32) (arg0 - 0xA70) < 2U) || ((u32) (arg0 - 0xA81) < 3U) || (arg0 == 0xABC) || ((u32) (arg0 - 0xABE) < 8U) || ((u32) (arg0 - 0xAC7) < 3U) || ((u32) (arg0 - 0xACB) < 3U) || ((u32) (arg0 - 0xB01) < 3U) || (arg0 == 0xB3C) || ((u32) (arg0 - 0xB3E) < 6U) || ((u32) (arg0 - 0xB47) < 2U) || ((u32) (arg0 - 0xB4B) < 3U) || ((u32) (arg0 - 0xB56) < 2U) || ((u32) (arg0 - 0xB82) < 2U) || ((u32) (arg0 - 0xBBE) < 5U) || ((u32) (arg0 - 0xBC6) < 3U) || ((u32) (arg0 - 0xBCA) < 4U) || (arg0 == 0xBD7) || ((u32) (arg0 - 0xC01) < 3U) || ((u32) (arg0 - 0xC3E) < 7U) || ((u32) (arg0 - 0xC46) < 3U) || ((u32) (arg0 - 0xC4A) < 4U) || ((u32) (arg0 - 0xC55) < 2U) || ((u32) (arg0 - 0xC82) < 2U) || ((u32) (arg0 - 0xCBE) < 7U) || ((u32) (arg0 - 0xCC6) < 3U) || ((u32) (arg0 - 0xCCA) < 4U) || ((u32) (arg0 - 0xCD5) < 2U) || ((u32) (arg0 - 0xD02) < 2U) || ((u32) (arg0 - 0xD3E) < 6U) || ((u32) (arg0 - 0xD46) < 3U) || ((u32) (arg0 - 0xD4A) < 4U) || (arg0 == 0xD57) || ((arg0 >= 0xE31) && ((arg0 == 0xE31) || ((u32) (arg0 - 0xE34) < 7U) || ((u32) (arg0 - 0xE47) < 8U) || (arg0 == 0xEB1) || ((u32) (arg0 - 0xEB4) < 6U) || ((u32) (arg0 - 0xEBB) < 2U) || ((u32) (arg0 - 0xEC8) < 6U) || ((u32) (arg0 - 0xF18) < 2U) || (arg0 == 0xF35) || (arg0 == 0xF37) || (arg0 == 0xF39) || (arg0 == 0xF3E) || (arg0 == 0xF3F) || ((u32) (arg0 - 0xF71) < 0x14U) || ((u32) (arg0 - 0xF86) < 6U) || ((u32) (arg0 - 0xF90) < 6U) || (arg0 == 0xF97) || ((u32) (arg0 - 0xF99) < 0x15U) || ((u32) (arg0 - 0xFB1) < 7U) || (arg0 == 0xFB9) || ((u32) (arg0 - 0x20D0) < 0xDU) || (arg0 == 0x20E1) || ((u32) (arg0 - 0x302A) < 6U) || (arg0 == 0x3099) || (arg0 == 0x309A))))))))) {
        var_3 = 1;
    }
    return var_3;
}
