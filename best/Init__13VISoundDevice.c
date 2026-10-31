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

M2C_UNK AddTail__7VILListP7VILNode(s32, s32);       /* extern */
M2C_UNK Init__7VILList(s32);                        /* extern */

s32 Init__13VISoundDevice(void *arg0) {
    f32 *var_2_3;
    s32 *var_2;
    s32 *var_2_2;
    s32 temp_19;
    s32 var_17;
    s32 var_18;
    s32 var_18_2;
    s32 var_18_3;
    s32 var_18_4;
    s32 var_5;

    temp_19 = arg0 + 0xCE0;
    var_18 = 0x7F;
    Init__7VILList(arg0 + 0xCD4);
    Init__7VILList(temp_19);
    var_2 = arg0 + 0xC14;
    do {
        var_18 -= 1;
        *var_2 = 0;
        var_2 -= 4;
    } while (var_18 >= 0);
    var_18_2 = 0x2D;
    var_2_2 = arg0 + 0xCD0;
    do {
        var_18_2 -= 1;
        *var_2_2 = 0;
        var_2_2 -= 4;
    } while (var_18_2 >= 0);
    var_17 = arg0 + 8;
    var_18_3 = 0x2D;
    var_5 = var_17;
    do {
        var_17 += 0x38;
        var_18_3 -= 1;
        AddTail__7VILListP7VILNode(temp_19, var_5);
        var_5 = var_17;
    } while (var_18_3 >= 0);
    M2C_FIELD(arg0, s32 *, 0xD68) = 1;
    M2C_FIELD(arg0, s64 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC18) = 0;
    M2C_FIELD(arg0, s32 *, 0xD38) = 0;
    var_18_4 = 1;
    M2C_FIELD(arg0, s32 *, 0xD50) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4C) = 0;
    M2C_FIELD(arg0, s32 *, 0xD54) = 1;
    M2C_FIELD(arg0, s32 *, 0x1178) = 0;
    M2C_FIELD(arg0, s8 *, 0xD6C) = 0;
    M2C_FIELD(arg0, s8 *, 0xE6C) = 0;
    M2C_FIELD(arg0, s8 *, 0xF6C) = 0;
    M2C_FIELD(arg0, s8 *, 0x106C) = 0;
    M2C_FIELD(arg0, f32 *, 0x1174) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x116C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1170) = 0;
    M2C_FIELD(arg0, s32 *, 0xCEC) = 0x16062;
    var_2_3 = arg0 + 0xD64;
    do {
        var_18_4 -= 1;
        *var_2_3 = 1.0f;
        var_2_3 -= 4;
    } while (var_18_4 >= 0);
    M2C_FIELD(arg0, s32 *, 0xD5C) = 0;
    return 0;
}
