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
M2C_UNK __builtin_vec_delete(s32);                  /* extern */

void ___14BlockAllocator(void *arg0, s32 arg1) {
    s32 temp_3;

    if (M2C_FIELD(arg0, void **, 0) != NULL) {
        do {
            temp_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0xC);
            M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10);
            if (temp_3 != 0) {
                __builtin_vec_delete(temp_3);
            }
            __builtin_delete(M2C_FIELD(arg0, void **, 0));
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - 1);
        } while (M2C_FIELD(arg0, void **, 0) != NULL);
    }
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
