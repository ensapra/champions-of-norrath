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

void func_00156CAC(void *arg0) {
    void *temp_3;
    void *temp_5;

    temp_5 = arg0 + 0x620;
    temp_3 = temp_5 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x130) + 0x10;
    M2C_FIELD(temp_3, u8 *, 0x60) = (u8) M2C_FIELD(temp_5, u8 *, 0x290);
    M2C_FIELD(temp_3, u8 *, 0x61) = (u8) M2C_FIELD(temp_5, u8 *, 0x291);
    M2C_FIELD(temp_3, u8 *, 0x62) = (u8) M2C_FIELD(temp_5, u8 *, 0x292);
    M2C_FIELD(temp_3, s8 *, 0x63) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_5, u8 *, 0x293)) / 255);
}
