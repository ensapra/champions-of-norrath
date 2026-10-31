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

M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __builtin_vec_delete(s32, u32);             /* extern */

void returnBlock__14BlockAllocatorP10data_block(void *arg0, void *arg1) {
    s32 temp_2_2;
    u32 temp_2;
    u32 temp_5;

    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, s32 *, 4) = 0;
    temp_2 = M2C_FIELD(arg0, u32 *, 0xC);
    temp_5 = temp_2 + 1;
    if (temp_2 < (u32) M2C_FIELD(arg0, u32 *, 4)) {
        M2C_FIELD(arg1, void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, void **, 0) = arg1;
        M2C_FIELD(arg0, u32 *, 0xC) = temp_5;
        return;
    }
    temp_2_2 = M2C_FIELD(arg1, s32 *, 0xC);
    if (temp_2_2 != 0) {
        __builtin_vec_delete(temp_2_2, temp_5);
    }
    __builtin_delete(arg1);
}
