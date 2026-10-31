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

s32 Begin__Ct6VIList1ZP9VIGUIPage(s32);             /* extern */
s32 End__Ct6VIList1ZP9VIGUIPage(s32);               /* extern */
void **Erase__t6VIList1ZP9VIGUIPagei(s32, s32);     /* extern */
s32 Size__Ct6VIList1ZP9VIGUIPage(s32);              /* extern */

void GoBack__20VIWndGenericRenderer(void *arg0) {
    s32 temp_16;
    s32 temp_17;
    void **temp_16_2;
    void *temp_2;
    void *temp_6;

    temp_17 = arg0 + 0x28;
    if ((Size__Ct6VIList1ZP9VIGUIPage(temp_17) >= 2) && (M2C_FIELD(arg0, void **, 0x34) != NULL) && (temp_16 = Begin__Ct6VIList1ZP9VIGUIPage(temp_17), (temp_16 != End__Ct6VIList1ZP9VIGUIPage(temp_17)))) {
        temp_6 = M2C_FIELD(arg0, void **, 0x34);
        temp_16_2 = Erase__t6VIList1ZP9VIGUIPagei(temp_17, temp_16);
        if (temp_6 != NULL) {
            temp_2 = M2C_FIELD(temp_6, void **, 0x78);
            M2C_FIELD((temp_2 + 8), M2C_UNK (**)(void *, M2C_UNK, void *), 4)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
        }
        if (temp_16_2 != End__Ct6VIList1ZP9VIGUIPage(temp_17)) {
            M2C_FIELD(arg0, void **, 0x34) = (void *) *temp_16_2;
        } else {
            M2C_FIELD(arg0, void **, 0x34) = NULL;
        }
    }
}
