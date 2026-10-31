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

void setMin__FRUiN40(u32 *arg0, u32 *arg1, u32 *arg2, u32 *arg3, u32 *arg4) {
    u32 temp_3;
    u32 temp_3_2;
    u32 temp_3_3;
    u32 temp_3_4;
    u32 temp_9;
    u32 temp_9_2;
    u32 temp_9_3;
    u32 temp_9_4;

    temp_9 = *arg0;
    temp_3 = *arg1;
    if (temp_9 >= temp_3) {
        *arg0 = temp_3;
    } else {
        *arg1 = temp_9;
    }
    temp_9_2 = *arg0;
    temp_3_2 = *arg2;
    if (temp_9_2 >= temp_3_2) {
        *arg1 = temp_3_2;
        *arg0 = temp_3_2;
    } else {
        *arg2 = temp_9_2;
    }
    temp_9_3 = *arg0;
    temp_3_3 = *arg3;
    if (temp_9_3 >= temp_3_3) {
        *arg2 = temp_3_3;
        *arg1 = temp_3_3;
        *arg0 = temp_3_3;
    } else {
        *arg3 = temp_9_3;
    }
    temp_9_4 = *arg0;
    temp_3_4 = *arg4;
    if (temp_9_4 >= temp_3_4) {
        *arg3 = temp_3_4;
        *arg2 = temp_3_4;
        *arg1 = temp_3_4;
        *arg0 = temp_3_4;
        return;
    }
    *arg4 = temp_9_4;
}
