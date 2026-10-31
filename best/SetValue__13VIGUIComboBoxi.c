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

s32 *Begin__Ct6VIList1ZPc(s32);                     /* extern */
s32 End__Ct6VIList1ZPc(s32);                        /* extern */
s32 GetStringDataModel__9VIGUIText();               /* extern */
s32 *Next__Ct6VIList1ZPci(s32, s32 *);              /* extern */
M2C_UNK SetString__20VIGUIStringDataModelPCc(s32, s32); /* extern */

void SetValue__13VIGUIComboBoxi(void *arg0, s32 arg1) {
    s32 *var_2;
    s32 temp_17;
    s32 temp_2;
    s32 temp_5;
    s32 var_18;

    temp_2 = GetStringDataModel__9VIGUIText();
    temp_17 = arg0 + 0x104;
    if (temp_2 != 0) {
        var_18 = 0;
        var_2 = Begin__Ct6VIList1ZPc(temp_17);
loop_7:
        if (var_2 == End__Ct6VIList1ZPc(temp_17)) {

        } else if (var_18 == arg1) {
            temp_5 = *var_2;
            if (temp_5 != 0) {
                M2C_FIELD(arg0, s32 *, 0x110) = var_18;
                SetString__20VIGUIStringDataModelPCc(temp_2, temp_5);
            }
        } else {
            var_18 += 1;
            var_2 = Next__Ct6VIList1ZPci(temp_17, var_2);
            goto loop_7;
        }
    }
}
