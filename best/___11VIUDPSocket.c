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

M2C_UNK Close__11VIUDPSocket();                     /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __wrap_free(s32);                           /* extern */
M2C_UNK sceLibnetTerminate(void *);                 /* extern */

void ___11VIUDPSocket(void *arg0, s32 arg1) {
    register int temp_3;

    Close__11VIUDPSocket();
    temp_3 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_3) {
        __wrap_free(temp_3);
        M2C_FIELD(arg0, s32 *, 4) = 0;
        sceLibnetTerminate(arg0 + 8);
    }
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
