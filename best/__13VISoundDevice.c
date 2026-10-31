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
M2C_UNK __7VILList(s32);                            /* extern */
M2C_UNK __7VILNode(s32);                            /* extern */

void __13VISoundDevice(void *arg0) {
    s32 *var_2;
    s32 *var_2_2;
    s32 temp_19;
    s32 temp_20;
    s32 var_16;
    s32 var_16_2;
    s32 var_16_3;
    s32 var_16_4;
    s32 var_17;
    s32 var_17_2;
    s32 var_4;
    s32 var_5;

    temp_20 = arg0 + 8;
    var_16 = temp_20;
    var_17 = 0x2D;
    var_4 = var_16;
    do {
        var_16 += 0x38;
        var_17 -= 1;
        __7VILNode(var_4);
        var_4 = var_16;
    } while (var_17 != -1);
    temp_19 = arg0 + 0xCE0;
    __7VILList(arg0 + 0xCD4);
    __7VILList(temp_19);
    __7VILList(arg0 + 0xCF0);
    __7VILList(arg0 + 0xCFC);
    __7VILList(arg0 + 0xD0C);
    __7VILList(arg0 + 0xD18);
    var_2 = temp_20 + 0xC0C;
    var_16_2 = 0x7F;
    do {
        var_16_2 -= 1;
        *var_2 = 0;
        var_2 -= 4;
    } while (var_16_2 >= 0);
    var_16_3 = 0x2D;
    var_2_2 = arg0 + 0xCD0;
    do {
        var_16_3 -= 1;
        *var_2_2 = 0;
        var_2_2 -= 4;
    } while (var_16_3 >= 0);
    var_17_2 = arg0 + 8;
    Init__7VILList(temp_19);
    var_16_4 = 0x2D;
    var_5 = var_17_2;
    do {
        var_17_2 += 0x38;
        var_16_4 -= 1;
        AddTail__7VILListP7VILNode(temp_19, var_5);
        var_5 = var_17_2;
    } while (var_16_4 >= 0);
    M2C_FIELD(arg0, s32 *, 0xD54) = 1;
    M2C_FIELD(arg0, s32 *, 0xCEC) = 0x16062;
    M2C_FIELD(arg0, s32 *, 0xD5C) = 0;
    M2C_FIELD(arg0, s64 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC18) = 0;
    M2C_FIELD(arg0, s32 *, 0xD38) = 0;
    M2C_FIELD(arg0, s32 *, 0xD50) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1178) = 0;
    M2C_FIELD(arg0, s8 *, 0xF6C) = 0;
}
