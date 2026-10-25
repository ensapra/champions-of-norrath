/* machine draft (m2c) for ee-gcc-2.96 -Os -G8, tried by autopilot */
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

s32 func_0019ACEC(s32 arg0) {
    s32 var_2;

    var_2 = 1;
    if (((u32) (arg0 + 0xFFFF7E53) >= 0xBU) && ((u32) (arg0 + 0xFFFF7E40) >= 8U) && ((u32) (arg0 + 0xFFFF7E31) >= 0xBU) && ((u32) (arg0 + 0xFFFF7E17) >= 7U) && ((u32) (arg0 + 0xFFFF7E08) >= 4U) && ((u32) (arg0 + 0xFFFF7E03) >= 3U) && ((u32) (arg0 + 0xFFFF7DC0) >= 0xFU) && ((u32) (arg0 + 0xFFFF7DA7) >= 7U) && ((u32) (arg0 + 0xFFFF7D86) >= 7U) && ((u32) (arg0 + 0xFFFF7D65) >= 4U) && ((u32) (arg0 + 0xFFFF7D0E) >= 0xEU) && ((u32) (arg0 + 0xFFFF7C69) >= 8U) && ((u32) (arg0 + 0xFFFF7C49) >= 8U) && ((u32) (arg0 + 0xFFFF7C29) >= 0x29U) && ((u32) (arg0 + 0xFFFF7B9F) >= 0xFU) && ((u32) (arg0 + 0xFFFF7B6E) >= 0xDU) && ((u32) (arg0 + 0xFFFF7B41) >= 0x241U) && (arg0 != 0x875E) && ((u32) (arg0 + 0xFFFF788A) >= 8U) && ((u32) (arg0 + 0xFFFF7880) >= 2U) && ((u32) (arg0 + 0xFFFF7870) >= 3U) && ((u32) (arg0 + 0xFFFF786C) >= 0xCU)) {
        var_2 = (u32) (arg0 + 0xFFFF7770) < 0xFU;
    }
    return var_2;
}
