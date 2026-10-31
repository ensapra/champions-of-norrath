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

void **Begin__Ct6VIList1ZP9VIGUIPage(void *);       /* extern */
s32 End__Ct6VIList1ZP9VIGUIPage(void *);            /* extern */
M2C_UNK Erase__t6VIList1ZP9VIGUIPagei(void *, void **); /* extern */
void **Next__Ct6VIList1ZP9VIGUIPagei(void *, void **); /* extern */
M2C_UNK RemoveChild__5VIWndP5VIWnd(void *);         /* extern */
M2C_UNK ___16VIRealmInterface(void *, M2C_UNK);     /* extern */
M2C_UNK ___19VIFlatFileStructure(void *, M2C_UNK);  /* extern */
M2C_UNK ___5VIWnd(void *, M2C_UNK);                 /* extern */
M2C_UNK ___9VIWndEdit(void *, M2C_UNK);             /* extern */
M2C_UNK ___t6VIList1ZP9VIGUIPage(void *, M2C_UNK);  /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
extern M2C_UNK D_012094A8;

void ___20VIWndGenericRenderer(void *arg0, s32 arg1) {
    void **temp_16;
    void **var_17;
    void *temp_18;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_6;
    void *temp_6_2;
    void *temp_6_3;

    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_012094A8;
    temp_3 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_3 != NULL) {
        RemoveChild__5VIWndP5VIWnd(temp_3);
        temp_6 = M2C_FIELD(arg0, void **, 0x24);
        if (temp_6 != NULL) {
            temp_2 = M2C_FIELD(temp_6, void **, 0x20);
            M2C_FIELD((temp_2 + 8), M2C_UNK (**)(void *, M2C_UNK, void *), 4)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
        }
        M2C_FIELD(arg0, void **, 0x24) = NULL;
    }
    temp_18 = arg0 + 0x28;
    var_17 = Begin__Ct6VIList1ZP9VIGUIPage(temp_18);
loop_9:
    if (var_17 != End__Ct6VIList1ZP9VIGUIPage(temp_18)) {
        temp_6_2 = *var_17;
        if (temp_6_2 != NULL) {
            temp_2_2 = M2C_FIELD(temp_6_2, void **, 0x78);
            M2C_FIELD((temp_2_2 + 8), M2C_UNK (**)(void *, M2C_UNK, void *), 4)(temp_6_2 + M2C_FIELD(temp_2_2, s16 *, 8), 3, temp_6_2);
        }
        temp_16 = Next__Ct6VIList1ZP9VIGUIPagei(temp_18, var_17);
        Erase__t6VIList1ZP9VIGUIPagei(temp_18, var_17);
        var_17 = temp_16;
        goto loop_9;
    }
    temp_6_3 = M2C_FIELD(arg0, void **, 0x38);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    if (temp_6_3 != NULL) {
        temp_2_3 = M2C_FIELD(temp_6_3, void **, 0x78);
        M2C_FIELD((temp_2_3 + 8), M2C_UNK (**)(void *, M2C_UNK, void *), 4)(temp_6_3 + M2C_FIELD(temp_2_3, s16 *, 8), 3, temp_6_3);
        M2C_FIELD(arg0, void **, 0x38) = NULL;
    }
    ___16VIRealmInterface(arg0 + 0x758, 2);
    ___9VIWndEdit(arg0 + 0x590, 2);
    ___19VIFlatFileStructure(arg0 + 0x554, 2);
    ___t6VIList1ZP9VIGUIPage(temp_18, 2);
    ___5VIWnd(arg0, 0);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
