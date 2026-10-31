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

s32 strcmp(s32, s32);                               /* extern */

void StopBgm__13VISoundDevicei(void *arg0, s32 arg1) {
    s32 temp_17;
    s32 temp_18;
    void *var_2;

    temp_17 = arg1 << 8;
    temp_18 = arg0 + 0xC;
    var_2 = temp_17 + temp_18;
    if (M2C_FIELD(var_2, s8 *, 0xD60) != 0) {
        var_2 = temp_17 + temp_18;
        if (strcmp(arg0 + 0xF6C, arg0 + temp_17 + 0xD6C) == 0) {
            M2C_FIELD(arg0, s32 *, 0x116C) = -1;
            var_2 = temp_17 + temp_18;
        }
    }
    M2C_FIELD(var_2, s8 *, 0xD60) = 0;
}
