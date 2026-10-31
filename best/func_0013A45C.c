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

s32 func_0011B940(s32, s32, s32);                   /* extern */

void func_0013A45C(void *arg0) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_6;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_2 = M2C_FIELD(arg0, s32 *, 4);
    temp_6 = temp_2 - (temp_3 * 2);
    if (((temp_2 - (temp_3 * 3)) >= M2C_FIELD(arg0, s32 *, 0xC)) && (temp_6 >= M2C_FIELD(arg0, s32 *, 8))) {
        M2C_FIELD(arg0, s32 *, 4) = temp_6;
        M2C_FIELD(arg0, s32 *, 0) = func_0011B940(M2C_FIELD(arg0, s32 *, 0), temp_6 * 0x14, temp_6);
    }
}
