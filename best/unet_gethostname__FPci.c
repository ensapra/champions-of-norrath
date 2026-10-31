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

M2C_UNK strcpy(s32, M2C_UNK *);                     /* extern */
s32 strlen(M2C_UNK *);                              /* extern */
M2C_UNK unet_startup_thread__FPv(M2C_UNK);          /* extern */
extern s32 D_0118E6B8;
extern M2C_UNK D_0118E6C0;

s32 unet_gethostname__FPci(s32 arg0, u32 arg1) {
    s32 var_3;

    if (D_0118E6B8 == 0) {
        unet_startup_thread__FPv(0);
        D_0118E6B8 = 1;
    }
    var_3 = -1;
    if (arg1 >= (u32) (strlen(&D_0118E6C0) + 1)) {
        strcpy(arg0, &D_0118E6C0);
        var_3 = 0;
    }
    return var_3;
}
