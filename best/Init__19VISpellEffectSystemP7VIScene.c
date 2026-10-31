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

M2C_UNK AddTail__7VILListP7VILNode(s32, void *);    /* extern */
M2C_UNK Init__7VILList(s32);                        /* extern */

s32 Init__19VISpellEffectSystemP7VIScene(void *arg0, s32 arg1) {
    s32 *var_2;
    s32 temp_19;
    s32 var_18;
    s32 var_18_2;
    void *var_16;
    void *var_5;

    var_18 = 0x17;
    temp_19 = arg0 + 0x70;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    Init__7VILList(arg0 + 0x64);
    Init__7VILList(temp_19);
    var_2 = arg0 + 0x60;
    do {
        var_18 -= 1;
        *var_2 = 0;
        var_2 -= 4;
    } while (var_18 >= 0);
    var_16 = arg0 + 0x80;
    var_18_2 = 0x17;
    var_5 = var_16;
    do {
        var_16 += 0x28;
        var_18_2 -= 1;
        AddTail__7VILListP7VILNode(temp_19, var_5);
        var_5 = var_16;
    } while (var_18_2 >= 0);
    M2C_FIELD(arg0, s32 *, 0x444) = 1;
    M2C_FIELD(arg0, s32 *, 0x440) = 0x16062;
    M2C_FIELD(arg0, s32 *, 0x454) = -1;
    M2C_FIELD(arg0, s32 *, 0x448) = 0;
    M2C_FIELD(arg0, s32 *, 0x44C) = 0;
    M2C_FIELD(arg0, s32 *, 0x450) = 0;
    return 0;
}
