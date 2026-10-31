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

M2C_UNK Close__8VIRaster();                         /* extern */
M2C_UNK ___10VIMatrix44(s32, M2C_UNK);              /* extern */
M2C_UNK ___t6VIList1Z10VIMaterial(s32, M2C_UNK);    /* extern */
M2C_UNK ___t6VIList1ZP12VIPrimBuffer(s32, M2C_UNK); /* extern */
M2C_UNK ___t6VIList1ZP9VISurface(s32, M2C_UNK);     /* extern */
M2C_UNK ___t6VIPool1Z19VIRasterMaterialLRU(s32, M2C_UNK); /* extern */
M2C_UNK ___t6VIPool1ZP12VIPrimBuffer(s32, M2C_UNK); /* extern */
M2C_UNK ___t6VIPool1ZP13VIColorBuffer(s32, M2C_UNK); /* extern */
M2C_UNK ___t6VIPool1ZP13VIMaterialPal(s32, M2C_UNK); /* extern */
M2C_UNK ___t6VIPool1ZP7VIRFont(s32, M2C_UNK);       /* extern */
M2C_UNK ___t6VIPool1ZP9VISurface(s32, M2C_UNK);     /* extern */
M2C_UNK __builtin_delete(s32);                      /* extern */

void ___8VIRaster(s32 arg0, s32 arg1) {
    Close__8VIRaster();
    ___t6VIPool1ZP7VIRFont(arg0 + 0x4C34, 2);
    ___t6VIPool1Z19VIRasterMaterialLRU(arg0 + 0x4BFC, 2);
    ___t6VIPool1ZP13VIMaterialPal(arg0 + 0x4BE4, 2);
    ___t6VIList1Z10VIMaterial(arg0 + 0x4BD8, 2);
    ___t6VIList1ZP9VISurface(arg0 + 0x4BCC, 2);
    ___t6VIPool1ZP9VISurface(arg0 + 0x4BB4, 2);
    ___t6VIPool1ZP13VIColorBuffer(arg0 + 0x4B9C, 2);
    ___t6VIList1ZP12VIPrimBuffer(arg0 + 0x4B90, 2);
    ___t6VIPool1ZP12VIPrimBuffer(arg0 + 0x4B78, 2);
    ___10VIMatrix44(arg0 + 0x44F0, 2);
    ___10VIMatrix44(arg0 + 0x44B0, 2);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
