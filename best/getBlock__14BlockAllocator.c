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

M2C_UNK realloc__14BlockAllocator(void *);          /* extern */

void *getBlock__14BlockAllocator(void *arg0) {
    void *temp_5;

    temp_5 = M2C_FIELD(arg0, void **, 0);
    if (temp_5 == NULL) {
        realloc__14BlockAllocator(temp_5);
    }
    M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - 1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10) = NULL;
    return M2C_FIELD(arg0, void **, 0);
}
