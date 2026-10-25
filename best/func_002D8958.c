/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G8, tried by autopilot */
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

M2C_UNK SleepThread_2(s32);                         /* extern */
s32 func_002D8738(s32);                             /* extern */
M2C_UNK func_002D8790(s32);                         /* extern */

void func_002D8958(s32 arg0) {
    s32 temp_2;

loop_3:
    temp_2 = func_002D8738(arg0);
    if (temp_2 != 0) {
        func_002D8790(temp_2);
        goto loop_3;
    }
    SleepThread_2(temp_2);
    goto loop_3;
}
