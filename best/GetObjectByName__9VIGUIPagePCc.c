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

s32 *Begin__Ct6VIList1ZP11VIGUIObject(s32);         /* extern */
s32 End__Ct6VIList1ZP11VIGUIObject(s32);            /* extern */
s32 GetName__11VIGUIObject(s32);                    /* extern */
s32 *Next__Ct6VIList1ZP11VIGUIObjecti(s32, s32 *);  /* extern */
s32 strcmp(s32, s32);                               /* extern */

s32 GetObjectByName__9VIGUIPagePCc(s32 arg0, s32 arg1) {
    s32 *var_2;
    s32 temp_17;
    s32 temp_18;
    s32 temp_2;

    temp_18 = arg0 + 0x40;
    var_2 = Begin__Ct6VIList1ZP11VIGUIObject(temp_18);
loop_8:
    if (var_2 != End__Ct6VIList1ZP11VIGUIObject(temp_18)) {
        temp_17 = *var_2;
        if (temp_17 != 0) {
            temp_2 = GetName__11VIGUIObject(temp_17);
            if (temp_2 != 0) {
                if (strcmp(arg1, temp_2) == 0) {
                    return temp_17;
                }
                goto block_7;
            }
        }
block_7:
        var_2 = Next__Ct6VIList1ZP11VIGUIObjecti(temp_18, var_2);
        goto loop_8;
    }
    return 0;
}
