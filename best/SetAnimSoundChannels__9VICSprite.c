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

s32 SetAnimSoundChannels__9VICSprite(void *arg0) {
    s32 temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x194);
    if (temp_3 == 1) {
        M2C_FIELD(arg0, s32 *, 0x580) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x1D8) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x20C) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x240) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x274) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x2A8) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x2DC) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x310) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x344) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x378) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x3AC) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x3E0) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x414) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x448) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x47C) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x4B0) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x4E4) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x518) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x54C) = temp_3;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
        M2C_FIELD(arg0, s32 *, 0x20C) = 0;
        M2C_FIELD(arg0, s32 *, 0x240) = 0;
        M2C_FIELD(arg0, s32 *, 0x274) = 0;
        M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
        M2C_FIELD(arg0, s32 *, 0x2DC) = 0;
        M2C_FIELD(arg0, s32 *, 0x310) = 0;
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        M2C_FIELD(arg0, s32 *, 0x378) = 0;
        M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
        M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
        M2C_FIELD(arg0, s32 *, 0x414) = 0;
        M2C_FIELD(arg0, s32 *, 0x448) = 0;
        M2C_FIELD(arg0, s32 *, 0x47C) = 0;
        M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        M2C_FIELD(arg0, s32 *, 0x54C) = 0;
        M2C_FIELD(arg0, s32 *, 0x580) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x650) = 0;
    M2C_FIELD(arg0, s32 *, 0x684) = 0;
    M2C_FIELD(arg0, s32 *, 0x6B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x6EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x720) = 0;
    M2C_FIELD(arg0, s32 *, 0x754) = 0;
    M2C_FIELD(arg0, s32 *, 0x788) = 0;
    M2C_FIELD(arg0, s32 *, 0x7BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x7F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x824) = 0;
    M2C_FIELD(arg0, s32 *, 0x858) = 0;
    M2C_FIELD(arg0, s32 *, 0x88C) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x8F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x928) = 0;
    M2C_FIELD(arg0, s32 *, 0xED8) = 0;
    M2C_FIELD(arg0, s32 *, 0x95C) = 0;
    M2C_FIELD(arg0, s32 *, 0x990) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x9F8) = 0;
    M2C_FIELD(arg0, s32 *, 0xA2C) = 0;
    M2C_FIELD(arg0, s32 *, 0xA60) = 0;
    M2C_FIELD(arg0, s32 *, 0xA94) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAFC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB30) = 0;
    M2C_FIELD(arg0, s32 *, 0xC00) = 0;
    M2C_FIELD(arg0, s32 *, 0xC34) = 0;
    M2C_FIELD(arg0, s32 *, 0xC68) = 0;
    M2C_FIELD(arg0, s32 *, 0xC9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xD38) = 0;
    M2C_FIELD(arg0, s32 *, 0xD6C) = 0;
    M2C_FIELD(arg0, s32 *, 0xDD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE08) = 0;
    M2C_FIELD(arg0, s32 *, 0xE3C) = 0;
    M2C_FIELD(arg0, s32 *, 0xEA4) = 0;
    return 0;
}
