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

s32 AllocSpuMem__13VISoundDevicei(s32, s32, s32);   /* extern */
s32 __builtin_vec_new(s32);                         /* extern */

s32 Allocate__6VIWaveR13VISoundDevice(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_5;
    s32 temp_6;
    s32 var_2;

    temp_6 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_5 = (((s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x1B) / 28) + 1 + (M2C_FIELD(arg0, s32 *, 0x24) != 0)) * temp_6 * 0x10;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_5;
    temp_2 = AllocSpuMem__13VISoundDevicei(arg1, temp_5, temp_6);
    var_2 = -1;
    M2C_FIELD(arg0, s32 *, 0x3C) = temp_2;
    if (temp_2 != 0) {
        temp_2_2 = __builtin_vec_new(M2C_FIELD(arg0, s32 *, 0x38));
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x54) = 1;
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = temp_2_2;
        var_2 = 0;
    }
    return var_2;
}
