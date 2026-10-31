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

s32 func_0016FA70(s32);                             /* extern */

void func_001564C4(void *arg0) {
    s32 temp_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x92C);
    if (temp_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x920) = func_0016FA70(temp_2);
    } else {
        M2C_FIELD(arg0, s32 *, 0x920) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x92C) = 0;
}
