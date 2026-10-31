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
extern s32 D_0118EE78;

s32 GetID__10VILanguagePCc(s32 arg0) {
    s32 *var_17;
    s32 temp_4;
    s32 var_16;

    var_16 = 0;
    var_17 = &D_0118EE78;
loop_1:
    temp_4 = *var_17;
    var_17 += 4;
    if (strcmp(temp_4, arg0) != 0) {
        var_16 += 1;
        if (var_16 >= 8) {
            return -1;
        }
        goto loop_1;
    }
    return var_16;
}
