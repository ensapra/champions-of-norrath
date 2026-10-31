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

M2C_UNK func_0015AC08(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0015AD5C(s32);                             /* extern */
s32 func_0015AD80(void *, s32);                     /* extern */

void func_0015AB48(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_18;

    temp_16 = arg1 - 1;
    temp_18 = arg1 + arg2;
    if ((temp_16 >= 0) && (func_0015AD5C(temp_16) != 0)) {
        func_0015AC08(arg0, temp_16, 0x20, 1, 0);
    }
    if ((temp_18 < M2C_FIELD(arg0, s32 *, 0xBF0)) && ((u32) temp_18 < (u32) M2C_FIELD(arg0, u32 *, 0xCA0)) && (func_0015AD80(arg0, temp_18) != 0)) {
        func_0015AC08(arg0, temp_18, 0x20, 1, 0);
    }
}
