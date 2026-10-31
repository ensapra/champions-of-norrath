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

M2C_UNK __wrap_free(void *);                        /* extern */
M2C_UNK debugmem_tag_error(void *);                 /* extern */
M2C_UNK memset(M2C_UNK, u32, M2C_UNK, u32);         /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32, M2C_UNK);
extern s32 D_0118EDD4;
extern s64 D_011B1DF8;
extern M2C_UNK D_011DC000;

void xmlMemFree(s32 arg0) {
    u32 temp_8;
    void *temp_16;

    temp_16 = arg0 - 0x20;
    if (M2C_FIELD(temp_16, s32 *, 0) == 0x5AA5) {
        temp_8 = M2C_FIELD(temp_16, u32 *, 0x10);
        M2C_FIELD(temp_16, s32 *, 0) = -0x5AA6;
        D_011B1DF8 -= temp_8;
        memset(-1, M2C_FIELD(temp_16, u32 *, 0x10), -0x5AA6, temp_8);
        __wrap_free(temp_16);
        return;
    }
    debugmem_tag_error(temp_16);
    D_0118EDD0(D_0118EDD4, &D_011DC000, arg0, D_0118EDD0);
}
