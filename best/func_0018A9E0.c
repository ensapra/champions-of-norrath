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

s32 func_0018A9E0(s32 arg0) {
    s32 temp_4_2;
    u32 temp_3;
    u32 temp_4;

    temp_4 = arg0 & 0xFFFF;
    temp_3 = temp_4 & 0x7F;
    temp_4_2 = (temp_4 >> 8) & 0x7F;
    if (((u32) (temp_4_2 - 0x21) >= 0x5EU) || (temp_3 < 0x21U) || (temp_3 >= 0x7FU)) {
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return 0;
    }
    if (((temp_4 >> 0xF) == 0) || ((temp_4_2 != 0x22) && (temp_4_2 != 0x26) && (temp_4_2 != 0x27) && ((u32) (temp_4_2 - 0x29) >= 3U) && ((u32) (temp_4_2 - 0x30) >= 0x3EU))) {
        return 1;
    }
    return 0;
}
