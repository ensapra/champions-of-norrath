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

void func_0015AF4C(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;

    temp_2 = M2C_FIELD(((arg1 * 0x24) + M2C_FIELD(arg0, s32 *, 0xB80)), s32 *, 4) & 0x50;
    if (temp_2 != arg2) {
        if (temp_2 == 0) {
            if (arg2 != 0) {
                M2C_FIELD(arg0, s32 *, 0xD0C) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0C) + 1);
            }
        } else if (arg2 == 0) {
            M2C_FIELD(arg0, s32 *, 0xD0C) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0C) - 1);
        }
    }
}
