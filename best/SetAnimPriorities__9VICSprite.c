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

s32 SetAnimPriorities__9VICSprite(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1B8) = 2;
    M2C_FIELD(arg0, s32 *, 0x1EC) = 2;
    M2C_FIELD(arg0, s32 *, 0x220) = 2;
    M2C_FIELD(arg0, s32 *, 0x254) = 2;
    M2C_FIELD(arg0, s32 *, 0x288) = 2;
    M2C_FIELD(arg0, s32 *, 0x2BC) = 2;
    M2C_FIELD(arg0, s32 *, 0x2F0) = 2;
    M2C_FIELD(arg0, s32 *, 0x324) = 3;
    M2C_FIELD(arg0, s32 *, 0x358) = 3;
    M2C_FIELD(arg0, s32 *, 0x38C) = 3;
    M2C_FIELD(arg0, s32 *, 0x3C0) = 2;
    M2C_FIELD(arg0, s32 *, 0x3F4) = 2;
    M2C_FIELD(arg0, s32 *, 0x428) = 2;
    M2C_FIELD(arg0, s32 *, 0x45C) = 2;
    M2C_FIELD(arg0, s32 *, 0x490) = 7;
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4F8) = 1;
    M2C_FIELD(arg0, s32 *, 0x52C) = 2;
    M2C_FIELD(arg0, s32 *, 0x560) = 6;
    M2C_FIELD(arg0, s32 *, 0x630) = 5;
    M2C_FIELD(arg0, s32 *, 0x664) = 5;
    M2C_FIELD(arg0, s32 *, 0x698) = 5;
    M2C_FIELD(arg0, s32 *, 0x6CC) = 5;
    M2C_FIELD(arg0, s32 *, 0x700) = 5;
    M2C_FIELD(arg0, s32 *, 0x734) = 5;
    M2C_FIELD(arg0, s32 *, 0x768) = 5;
    M2C_FIELD(arg0, s32 *, 0x79C) = 5;
    M2C_FIELD(arg0, s32 *, 0x7D0) = 5;
    M2C_FIELD(arg0, s32 *, 0x804) = 5;
    M2C_FIELD(arg0, s32 *, 0x838) = 5;
    M2C_FIELD(arg0, s32 *, 0x86C) = 5;
    M2C_FIELD(arg0, s32 *, 0x8A0) = 4;
    M2C_FIELD(arg0, s32 *, 0x8D4) = 5;
    M2C_FIELD(arg0, s32 *, 0x908) = 5;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 2;
    M2C_FIELD(arg0, s32 *, 0x390) = 3;
    M2C_FIELD(arg0, s32 *, 0x93C) = 5;
    M2C_FIELD(arg0, s32 *, 0x970) = 5;
    M2C_FIELD(arg0, s32 *, 0x9A4) = 5;
    M2C_FIELD(arg0, s32 *, 0x9D8) = 5;
    M2C_FIELD(arg0, s32 *, 0xA0C) = 5;
    M2C_FIELD(arg0, s32 *, 0xA40) = 5;
    M2C_FIELD(arg0, s32 *, 0xA74) = 5;
    M2C_FIELD(arg0, s32 *, 0xAA8) = 5;
    M2C_FIELD(arg0, s32 *, 0xADC) = 5;
    M2C_FIELD(arg0, s32 *, 0xB10) = 5;
    M2C_FIELD(arg0, s32 *, 0xBE0) = 5;
    M2C_FIELD(arg0, s32 *, 0xC14) = 5;
    M2C_FIELD(arg0, s32 *, 0xC48) = 5;
    M2C_FIELD(arg0, s32 *, 0xC7C) = 5;
    M2C_FIELD(arg0, s32 *, 0xD18) = 4;
    M2C_FIELD(arg0, s32 *, 0xD4C) = 4;
    M2C_FIELD(arg0, s32 *, 0xDB4) = 4;
    M2C_FIELD(arg0, s32 *, 0xDE8) = 4;
    M2C_FIELD(arg0, s32 *, 0xE1C) = 4;
    M2C_FIELD(arg0, s32 *, 0xE84) = 4;
    M2C_FIELD(arg0, s32 *, 0xEB8) = 4;
    M2C_FIELD(arg0, s32 *, 0xEEC) = 4;
    M2C_FIELD(arg0, s32 *, 0x1F0) = 6;
    M2C_FIELD(arg0, s32 *, 0x224) = 6;
    M2C_FIELD(arg0, s32 *, 0x258) = 6;
    M2C_FIELD(arg0, s32 *, 0x28C) = 6;
    M2C_FIELD(arg0, s32 *, 0x2C0) = 6;
    M2C_FIELD(arg0, s32 *, 0x2F4) = 6;
    M2C_FIELD(arg0, s32 *, 0x328) = 7;
    M2C_FIELD(arg0, s32 *, 0x35C) = 3;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 6;
    M2C_FIELD(arg0, s32 *, 0x3F8) = 6;
    M2C_FIELD(arg0, s32 *, 0x494) = 8;
    M2C_FIELD(arg0, s32 *, 0x530) = 1;
    M2C_FIELD(arg0, s32 *, 0xAAC) = 7;
    M2C_FIELD(arg0, s32 *, 0x42C) = 6;
    M2C_FIELD(arg0, s32 *, 0x460) = 6;
    M2C_FIELD(arg0, s32 *, 0x4C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4FC) = 1;
    M2C_FIELD(arg0, s32 *, 0x564) = 7;
    M2C_FIELD(arg0, s32 *, 0x634) = 5;
    M2C_FIELD(arg0, s32 *, 0x668) = 5;
    M2C_FIELD(arg0, s32 *, 0x69C) = 5;
    M2C_FIELD(arg0, s32 *, 0x6D0) = 5;
    M2C_FIELD(arg0, s32 *, 0x704) = 5;
    M2C_FIELD(arg0, s32 *, 0x738) = 5;
    M2C_FIELD(arg0, s32 *, 0x76C) = 5;
    M2C_FIELD(arg0, s32 *, 0x7A0) = 5;
    M2C_FIELD(arg0, s32 *, 0x7D4) = 5;
    M2C_FIELD(arg0, s32 *, 0x808) = 5;
    M2C_FIELD(arg0, s32 *, 0x83C) = 5;
    M2C_FIELD(arg0, s32 *, 0x870) = 5;
    M2C_FIELD(arg0, s32 *, 0x8A4) = 4;
    M2C_FIELD(arg0, s32 *, 0x8D8) = 5;
    M2C_FIELD(arg0, s32 *, 0x90C) = 5;
    M2C_FIELD(arg0, s32 *, 0x940) = 5;
    M2C_FIELD(arg0, s32 *, 0x974) = 5;
    M2C_FIELD(arg0, s32 *, 0x9A8) = 5;
    M2C_FIELD(arg0, s32 *, 0x9DC) = 5;
    M2C_FIELD(arg0, s32 *, 0xA10) = 5;
    M2C_FIELD(arg0, s32 *, 0xA44) = 5;
    M2C_FIELD(arg0, s32 *, 0xA78) = 7;
    M2C_FIELD(arg0, s32 *, 0xAE0) = 5;
    M2C_FIELD(arg0, s32 *, 0xB14) = 5;
    M2C_FIELD(arg0, s32 *, 0xBE4) = 5;
    M2C_FIELD(arg0, s32 *, 0xC18) = 5;
    M2C_FIELD(arg0, s32 *, 0xEF0) = 4;
    M2C_FIELD(arg0, s32 *, 0xC80) = 6;
    M2C_FIELD(arg0, s32 *, 0xC4C) = 6;
    M2C_FIELD(arg0, s32 *, 0xD1C) = 4;
    M2C_FIELD(arg0, s32 *, 0xD50) = 4;
    M2C_FIELD(arg0, s32 *, 0xDB8) = 4;
    M2C_FIELD(arg0, s32 *, 0xDEC) = 4;
    M2C_FIELD(arg0, s32 *, 0xE20) = 4;
    M2C_FIELD(arg0, s32 *, 0xE88) = 4;
    M2C_FIELD(arg0, s32 *, 0xEBC) = 4;
    return 0;
}
