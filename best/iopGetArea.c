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

void iopGetArea(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, void *arg4, s32 arg5) {
    s32 temp_10;
    s32 temp_11;
    s32 temp_2;
    s32 temp_3;
    s32 temp_hi;

    temp_3 = M2C_FIELD(arg4, s32 *, 0x48);
    temp_11 = M2C_FIELD(arg4, s32 *, 0x4C);
    temp_hi = (s32) (((arg5 + temp_3) - temp_11) - 0x400) % temp_3;
    if ((u32) (arg5 - temp_11) < 0x400U) {
        *arg0 = M2C_FIELD(arg4, s32 *, 0x44);
        *arg1 = 0;
        *arg2 = M2C_FIELD(arg4, s32 *, 0x44);
        *arg3 = 0;
        return;
    }
    temp_10 = ((s32) ((temp_hi < 0) ? (temp_hi + 0x3FF) : temp_hi) >> 0xA) << 0xA;
    temp_2 = M2C_FIELD(arg4, s32 *, 0x44);
    if ((temp_3 - temp_11) >= temp_10) {
        *arg0 = temp_2 + temp_11;
        *arg1 = temp_10;
        *arg2 = 0;
        *arg3 = 0;
        return;
    }
    *arg0 = temp_2 + temp_11;
    *arg1 = M2C_FIELD(arg4, s32 *, 0x48) - M2C_FIELD(arg4, s32 *, 0x4C);
    *arg2 = M2C_FIELD(arg4, s32 *, 0x44);
    *arg3 = temp_10 - (M2C_FIELD(arg4, s32 *, 0x48) - M2C_FIELD(arg4, s32 *, 0x4C));
}
