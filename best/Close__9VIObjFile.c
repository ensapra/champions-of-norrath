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

M2C_UNK Close__6VIFile(void *);                     /* extern */
M2C_UNK Flush__9VIObjFile(void *);                  /* extern */
M2C_UNK WriteEnd__9VIObjFile(void *);               /* extern */

s32 Close__9VIObjFile(void *arg0) {
    s32 var_2;

    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x230) != 0) {
        if ((M2C_FIELD(arg0, s32 *, 0x23C) != 0) && (M2C_FIELD(arg0, s32 *, 0xE8) != -1)) {
            do {
                WriteEnd__9VIObjFile(arg0);
            } while (M2C_FIELD(arg0, s32 *, 0xE8) != -1);
        }
        Flush__9VIObjFile(arg0);
        Close__6VIFile(arg0);
        M2C_FIELD(arg0, s32 *, 0x230) = 0;
        M2C_FIELD(arg0, s32 *, 0x234) = 0;
        M2C_FIELD(arg0, s32 *, 0x238) = 0;
        M2C_FIELD(arg0, s32 *, 0x23C) = 0;
        M2C_FIELD(arg0, s32 *, 0x240) = 0;
        M2C_FIELD(arg0, s32 *, 0x244) = 0;
        M2C_FIELD(arg0, s32 *, 0x248) = 0;
        M2C_FIELD(arg0, s32 *, 0x24C) = 0;
        M2C_FIELD(arg0, s32 *, 0xE8) = -1;
        var_2 = 0;
    }
    return var_2;
}
