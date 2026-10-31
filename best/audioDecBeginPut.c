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

void audioDecBeginPut(void *arg0, void **arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp_10;
    s32 temp_11;
    s32 temp_12;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_4;

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x3C);
        temp_10 = M2C_FIELD(arg0, s32 *, 0x34);
        temp_12 = temp_2 - temp_10;
        temp_11 = temp_2 - M2C_FIELD(arg0, s32 *, 0x38);
        temp_2_2 = M2C_FIELD(arg0, s32 *, 0x30);
        if (temp_12 >= temp_11) {
            *arg2 = temp_11;
            *arg4 = 0;
            *arg1 = temp_2_2 + temp_10;
            *arg3 = 0;
            return;
        }
        *arg2 = temp_12;
        *arg1 = temp_2_2 + temp_10;
        *arg3 = M2C_FIELD(arg0, s32 *, 0x30);
        *arg4 = temp_11 - (M2C_FIELD(arg0, s32 *, 0x3C) - M2C_FIELD(arg0, s32 *, 0x34));
        return;
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0x2C);
    *arg2 = 0x28 - temp_4;
    *arg1 = arg0 + temp_4 + 4;
    *arg4 = M2C_FIELD(arg0, s32 *, 0x3C);
    *arg3 = M2C_FIELD(arg0, s32 *, 0x30);
}
