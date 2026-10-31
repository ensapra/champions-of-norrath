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

M2C_UNK sceGsSwapDBuffDc(M2C_UNK *, s32);           /* extern */
M2C_UNK sceGsSyncPath(M2C_UNK, M2C_UNK, s64, s64, M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK sceGsSyncV(M2C_UNK);                        /* extern */
extern M2C_UNK D_01227F80;

s32 Flip__8VIRaster(void *arg0) {
    s32 temp_10;
    s64 temp_3;
    s64 var_6;
    s64 var_7;

    sceGsSyncV(0);
    sceGsSwapDBuffDc(&D_01227F80, M2C_FIELD(arg0, s32 *, 0x45D8));
    temp_10 = ~M2C_FIELD(arg0, s32 *, 0x45D8) & 1;
    *(s64 *)0x12000000 = 0x7F23;
    var_7 = ((s64) ((M2C_FIELD(&D_01227F80, s64 *, 0x1D0) & 0x1FF) << 0x20) >> 0x20) | 0x51400;
    temp_3 = (s64) ((M2C_FIELD(&D_01227F80, s64 *, 0x60) & 0x1FF) << 0x20) >> 0x20;
    var_6 = var_7;
    if (temp_10 == 0) {
        var_6 = temp_3 | 0x51400;
    }
    *(s64 *)0x12000090 = var_6;
    *(s64 *)0x120000A0 = (((0x1BF9FF << 0x10) | 0x183) << 0x10) | 0x227C;
    if (temp_10 == 0) {
        var_7 = temp_3 | 0x51400;
    }
    *(s64 *)0x12000070 = var_7;
    *(s64 *)0x12000080 = (((0x1BF9FF << 0x10) | 0x183) << 0x10) | 0x327D;
    *(s64 *)0x120000D0 = 0;
    sceGsSyncPath(0, 0, var_6, var_7, 0x51400, 0x120000A0, temp_10, 0x12000080);
    M2C_FIELD(arg0, s32 *, 0x45D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x45D8) + 1);
    return 0;
}
