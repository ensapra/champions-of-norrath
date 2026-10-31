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

s32 ClearDMADoubleBuffer__8VIRaster();              /* extern */
s32 __builtin_vec_new(M2C_UNK);                     /* extern */

s32 InitDMADoubleBuffer__8VIRaster(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 var_2;

    if (ClearDMADoubleBuffer__8VIRaster() < 0) {
        return -1;
    }
    temp_2 = __builtin_vec_new(0x96000);
    var_2 = -1;
    M2C_FIELD(arg0, s32 *, 0x4C1C) = temp_2;
    if (temp_2 != 0) {
        temp_2_2 = __builtin_vec_new(0x96000);
        var_2 = -1;
        M2C_FIELD(arg0, s32 *, 0x4C20) = temp_2_2;
        if (temp_2_2 != 0) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x4C1C);
            var_2 = 0;
            M2C_FIELD(arg0, s32 *, 0x4C28) = temp_3;
            M2C_FIELD(arg0, s32 *, 0x4C24) = temp_3;
        }
    }
    return var_2;
}
