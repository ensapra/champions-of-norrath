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
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
M2C_UNK sceLibnetTerminate(void *);                 /* extern */
extern M2C_UNK D_011D39B0;
extern M2C_UNK D_011D39B8;

void ___15VINetworkStatus(void *arg0, s32 arg1) {
    s32 temp_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_2 != 0) {
        __wrap_free(temp_2);
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        printf(&D_011D39B0);
        sceLibnetTerminate(arg0);
        printf(&D_011D39B8);
    }
    memset(arg0, 0, 0x3C);
    memset(arg0 + 0x40, 0, 0x28);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
