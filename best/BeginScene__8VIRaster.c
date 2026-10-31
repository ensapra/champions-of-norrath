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

M2C_UNK SetGSScissoring__8VIRaster(void *);         /* extern */
M2C_UNK sceGsResetGraph(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK sceGsSwapDBuffDc(M2C_UNK *, s32);           /* extern */
M2C_UNK sceGsSyncV(M2C_UNK);                        /* extern */
extern s32 D_011EDA84;
extern M2C_UNK D_01227F80;

s32 BeginScene__8VIRaster(void *arg0) {
    s32 temp_3;
    s32 var_17;

    if (M2C_FIELD(arg0, u8 *, 0x4C50) != 0) {
        M2C_FIELD(arg0, u8 *, 0x4C50) = 0U;
        sceGsResetGraph(0, 1, 2, 0);
        var_17 = 2;
        do {
            var_17 -= 1;
            sceGsSyncV(0);
            temp_3 = M2C_FIELD(arg0, s32 *, 0x45D8);
            M2C_FIELD(arg0, s32 *, 0x45D8) = (s32) (temp_3 + 1);
            sceGsSwapDBuffDc(&D_01227F80, temp_3);
            *(s64 *)0x12000000 = 0x7F20;
        } while (var_17 >= 0);
    }
    D_011EDA84 = 0;
    SetGSScissoring__8VIRaster(arg0);
    return 0;
}
