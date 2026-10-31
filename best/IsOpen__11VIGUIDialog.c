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

s32 IsOpen__C10VIUIWindow(s32);                     /* extern */
s32 IsOpening__C10VIUIWindow(s32);                  /* extern */

s32 IsOpen__11VIGUIDialog(s32 arg0) {
    s32 temp_16;
    s32 var_2;

    temp_16 = arg0 + 0x80;
    if ((IsOpening__C10VIUIWindow(temp_16) != 0) || (var_2 = 0, (IsOpen__C10VIUIWindow(temp_16) != 0))) {
        var_2 = 1;
    }
    return var_2;
}
