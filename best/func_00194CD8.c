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

extern void *D_00480488;

void func_00194CD8(void *arg0, void *arg1, s32 arg2) {
    s16 temp_19;
    s16 temp_2;

    temp_19 = M2C_FIELD(D_00480488, s16 (**)(M2C_UNK), 0xE8)(0xD);
    temp_2 = M2C_FIELD(D_00480488, s16 (**)(M2C_UNK), 0xE4)(0xD);
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - arg2);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - arg2);
    M2C_FIELD(arg1, s16 *, 0xC) = temp_19;
    M2C_FIELD(arg1, s16 *, 0xE) = temp_2;
    M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) (((M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, u16 *, 0xC)) - temp_19) + arg2);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 4) - arg2);
    M2C_FIELD(arg1, s16 *, 0x1C) = temp_19;
    M2C_FIELD(arg1, s16 *, 0x1E) = temp_2;
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0) - arg2);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) (((M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, u16 *, 0xE)) - temp_2) + arg2);
    M2C_FIELD(arg1, s16 *, 0x2C) = temp_19;
    M2C_FIELD(arg1, s16 *, 0x2E) = temp_2;
    M2C_FIELD(arg1, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0x30) = (s32) (((M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, u16 *, 0xC)) - temp_19) + arg2);
    M2C_FIELD(arg1, s32 *, 0x34) = (s32) (((M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, u16 *, 0xE)) - temp_2) + arg2);
    M2C_FIELD(arg1, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s16 *, 0x3C) = temp_19;
    M2C_FIELD(arg1, s16 *, 0x3E) = temp_2;
}
