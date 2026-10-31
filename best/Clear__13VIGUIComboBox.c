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
M2C_UNK Clear__t6VIList1ZPc(s32, s32 *);            /* extern */
s32 End__Ct6VIList1ZPc(s32);                        /* extern */
s32 *Erase__t6VIList1ZPci(s32, s32 *);              /* extern */
M2C_UNK __wrap_free(s32);                           /* extern */

void Clear__13VIGUIComboBox(void *arg0) {
    s32 *temp_17;
    s32 *var_16;
    s32 temp_16;
    s32 temp_18;

    temp_18 = arg0 + 0x104;
    var_16 = Begin__Ct6VIList1ZPc(temp_18);
loop_4:
    if (var_16 != End__Ct6VIList1ZPc(temp_18)) {
        temp_16 = *var_16;
        temp_17 = Erase__t6VIList1ZPci(temp_18, var_16);
        if (temp_16 != 0) {
            __wrap_free(temp_16);
        }
        var_16 = temp_17;
        goto loop_4;
    }
    Clear__t6VIList1ZPc(temp_18, var_16);
    M2C_FIELD(arg0, s32 *, 0x110) = -1;
}
