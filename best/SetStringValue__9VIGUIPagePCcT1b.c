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

void **Begin__Ct6VIList1ZP11VIGUIObject(s32);       /* extern */
s32 End__Ct6VIList1ZP11VIGUIObject(s32);            /* extern */
s32 GetGUIType__11VIGUIObject(void *);              /* extern */
s32 GetName__11VIGUIObject(void *);                 /* extern */
s32 GetStringDataModel__9VIGUIText(void *);         /* extern */
void **Next__Ct6VIList1ZP11VIGUIObjecti(s32, void **); /* extern */
M2C_UNK SetString__20VIGUIStringDataModelPCc(s32, s32); /* extern */
s32 strcmp(s32, s32);                               /* extern */

void SetStringValue__9VIGUIPagePCcT1b(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_18;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    void **var_2;
    void *temp_17;
    void *var_16;

    temp_18 = arg0 + 0x40;
    var_2 = Begin__Ct6VIList1ZP11VIGUIObject(temp_18);
loop_7:
    if (var_2 != End__Ct6VIList1ZP11VIGUIObject(temp_18)) {
        temp_17 = *var_2;
        if ((temp_17 != NULL) && (temp_2 = GetName__11VIGUIObject(temp_17), (temp_2 != 0))) {
            if (strcmp(arg1, temp_2) == 0) {
                var_16 = temp_17;
            } else {
                goto block_6;
            }
        } else {
block_6:
            var_2 = Next__Ct6VIList1ZP11VIGUIObjecti(temp_18, var_2);
            goto loop_7;
        }
    } else {
        var_16 = NULL;
    }
    if ((var_16 != NULL) && ((temp_2_2 = GetGUIType__11VIGUIObject(var_16), (temp_2_2 == 1)) || (temp_2_2 == 5) || (temp_2_2 == 4))) {
        temp_2_3 = GetStringDataModel__9VIGUIText(var_16);
        if (temp_2_3 != 0) {
            SetString__20VIGUIStringDataModelPCc(temp_2_3, arg2);
        }
        M2C_FIELD(var_16, s32 *, 0xFC) = arg3;
    }
}
