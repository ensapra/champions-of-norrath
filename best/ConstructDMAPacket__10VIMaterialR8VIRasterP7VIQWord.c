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

M2C_UNK ConstructSolidFillPass__10VIMaterialiR8VIRasterP7VIQWord(void *, s32, void *, void *); /* extern */
M2C_UNK ConstructTextPass__10VIMaterialiR8VIRasterP7VIQWord(void *, s32, void *, void *); /* extern */
M2C_UNK ConstructWirePass__10VIMaterialiR8VIRasterP7VIQWord(void *, s32, void *, void *); /* extern */
s32 GetTime__8VIRaster(void *);                     /* extern */
M2C_UNK Process__10VIMateriall(void *, s32);        /* extern */

s32 ConstructDMAPacket__10VIMaterialR8VIRasterP7VIQWord(void *arg0, void *arg1, void *arg2) {
    s32 var_18;
    s32 var_21;
    s32 var_22;
    void *temp_16;
    void *var_16;
    void *var_17;

    var_21 = 1;
    if (M2C_FIELD(arg1, s32 *, 0x4598) != 0) {
        var_21 = M2C_FIELD(arg0, s32 *, 8);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) & 4) {
        Process__10VIMateriall(arg0, GetTime__8VIRaster(arg1));
    }
    M2C_FIELD(arg2, s32 *, 8) = 0x10000000;
    M2C_FIELD(arg2, s32 *, 0) = 0;
    M2C_FIELD(arg2, s32 *, 0xC) = (s32) ((((var_21 * 0x11) + 1) << 0x10) | 0x6C0001B3);
    var_22 = 2;
    M2C_FIELD(arg2, s32 *, 4) = 0;
    temp_16 = arg2 + 0x10;
    M2C_FIELD(arg2, s32 *, 0x10) = var_21;
    var_18 = 0;
    M2C_FIELD(temp_16, s32 *, 4) = 0;
    M2C_FIELD(temp_16, s32 *, 8) = 0;
    M2C_FIELD(temp_16, s32 *, 0xC) = 0;
    var_16 = temp_16 + 0x10;
    if (var_21 > 0) {
        var_17 = arg0 + 0x30;
        do {
            if (M2C_FIELD(var_17, s32 *, 4) & 0x20) {
                ConstructWirePass__10VIMaterialiR8VIRasterP7VIQWord(arg0, var_18, arg1, var_16);
            } else if (M2C_FIELD(var_17, s32 *, 0) != -1) {
                ConstructTextPass__10VIMaterialiR8VIRasterP7VIQWord(arg0, var_18, arg1, var_16);
            } else {
                ConstructSolidFillPass__10VIMaterialiR8VIRasterP7VIQWord(arg0, var_18, arg1, var_16);
            }
            var_18 += 1;
            var_16 += 0x110;
            var_22 += 0x11;
            var_17 += 0x90;
        } while (var_18 < var_21);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return var_22;
}
