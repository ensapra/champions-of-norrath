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
M2C_UNK __wrap_free(s32);                           /* extern */
extern M2C_UNK D_011F3A90;

void ___10VIFlatFile(void *arg0, s32 arg1) {
    s32 temp_3;
    s32 temp_4;

    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_011F3A90;
    temp_3 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_3 != 0) {
        __wrap_free(temp_3);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_4 != 0) {
        __wrap_free(temp_4);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
