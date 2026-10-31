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

M2C_UNK __wrap_free(s32, M2C_UNK);                  /* extern */
s32 __wrap_memalign(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
s32 sceInetGetInterfaceList(void *, s32, void *, M2C_UNK); /* extern */
s32 sceLibnetInitialize(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_011D39C0;
extern M2C_UNK D_011D39C8;
extern M2C_UNK D_011D39D0;
extern M2C_UNK D_011D39D8;

s32 Initialize__15VINetworkStatus(void *arg0) {
    s32 temp_4;
    s32 var_2;

    printf(&D_011D39C0);
    var_2 = -1;
    if (sceLibnetInitialize(arg0, 0x800, 0x2000, 0x20) == 0) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0x3C);
        if (temp_4 != 0) {
            __wrap_free(temp_4, 0x800);
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = __wrap_memalign(0x40, 0x800);
        printf(&D_011D39C8);
        var_2 = -1;
        if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
            printf(&D_011D39D0);
            M2C_FIELD(arg0, s32 *, 0x68) = sceInetGetInterfaceList(arg0, M2C_FIELD(arg0, s32 *, 0x3C), arg0 + 0x40, 0xA);
            printf(&D_011D39D8);
            var_2 = 0;
            if (M2C_FIELD(arg0, s32 *, 0x68) < 0) {
                M2C_FIELD(arg0, s32 *, 0x68) = 0;
                var_2 = -1;
            }
        }
    }
    return var_2;
}
