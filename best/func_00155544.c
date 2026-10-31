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

void func_00155544(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp_2;
    s32 temp_2_2;

    *arg1 = M2C_FIELD(arg0, s32 *, 0x5A0) + M2C_FIELD(arg0, s32 *, 0x880) + (M2C_FIELD(arg0, s32 *, 0x878) + M2C_FIELD(arg0, s32 *, 0x5D4));
    *arg2 = M2C_FIELD(arg0, s32 *, 0x5A4) + M2C_FIELD(arg0, s32 *, 0x888) + (M2C_FIELD(arg0, s32 *, 0x87C) + M2C_FIELD(arg0, s32 *, 0x5D4));
    temp_2 = ((M2C_FIELD(arg0, s32 *, 0x5AC) - (M2C_FIELD(arg0, s32 *, 0x878) * 2)) - M2C_FIELD(arg0, s32 *, 0x880)) - M2C_FIELD(arg0, s32 *, 0x884);
    *arg3 = (temp_2 < 0) ? 0 : temp_2;
    temp_2_2 = ((M2C_FIELD(arg0, s32 *, 0x5B0) - (M2C_FIELD(arg0, s32 *, 0x87C) * 2)) - M2C_FIELD(arg0, s32 *, 0x888)) - M2C_FIELD(arg0, s32 *, 0x88C);
    *arg4 = (temp_2_2 < 0) ? 0 : temp_2_2;
}
