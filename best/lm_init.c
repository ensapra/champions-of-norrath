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

M2C_UNK memset(s32, M2C_UNK, s32);                  /* extern */
extern M2C_UNK D_011CA978;

void lm_init(void *arg0) {
    s32 temp_4;
    s32 temp_6;
    void *temp_2;

    temp_6 = M2C_FIELD(arg0, s32 *, 0x54);
    temp_4 = M2C_FIELD(arg0, s32 *, 0x4C);
    M2C_FIELD((temp_4 + (temp_6 * 2)), s16 *, -2) = 0;
    M2C_FIELD(arg0, s64 *, 0x40) = (s64) ((s64) M2C_FIELD(arg0, u32 *, 0x2C) * 2);
    memset(temp_4, 0, (temp_6 - 1) * 2);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 2;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s64 *, 0x68) = 0;
    temp_2 = &D_011CA978 + (M2C_FIELD(arg0, s32 *, 0x94) * 0xC);
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(temp_2, u16 *, 2);
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(temp_2, u16 *, 0);
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(temp_2, u16 *, 4);
    M2C_FIELD(arg0, s32 *, 0x8C) = (s32) M2C_FIELD(temp_2, u16 *, 6);
    M2C_FIELD(arg0, s32 *, 0x88) = 2;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
}
