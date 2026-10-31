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

void vtree_init__FP7vtree_tiPFPCvPCv_ii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;

    temp_2 = arg0 + 0x14;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg3 - arg1);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = temp_2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = temp_2;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_2;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_2;
}
