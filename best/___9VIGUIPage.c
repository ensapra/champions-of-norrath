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
void **Erase__t6VIList1ZP11VIGUIObjecti(s32, void **); /* extern */
M2C_UNK InternalInit__9VIGUIPage(void *);           /* extern */
M2C_UNK ___t6VIList1ZP11VIGUIObject(s32, M2C_UNK);  /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __builtin_vec_delete(s32, s32, s32);        /* extern */
M2C_UNK printf(M2C_UNK *, void *);                  /* extern */
extern M2C_UNK D_011CA628;
extern M2C_UNK D_01200660;
extern M2C_UNK D_01200690;

void ___9VIGUIPage(void *arg0, s32 arg1) {
    s32 *var_2;
    s32 temp_16_2;
    s32 temp_20;
    s32 temp_3;
    s32 var_18;
    void **var_17;
    void *temp_16;
    void *temp_17;
    void *temp_2;
    void *temp_2_2;
    void *temp_6;

    temp_20 = arg0 + 0x40;
    M2C_FIELD(arg0, M2C_UNK **, 0x78) = &D_01200660;
    printf(&D_011CA628, arg0);
    var_17 = Begin__Ct6VIList1ZP11VIGUIObject(temp_20);
loop_3:
    if (var_17 != End__Ct6VIList1ZP11VIGUIObject(temp_20)) {
        temp_16 = *var_17;
        var_17 = Erase__t6VIList1ZP11VIGUIObjecti(temp_20, var_17);
        if (temp_16 != NULL) {
            temp_2 = M2C_FIELD(temp_16, void **, 0x94);
            M2C_FIELD((temp_2 + 8), M2C_UNK (**)(void *, M2C_UNK), 4)(temp_16 + M2C_FIELD(temp_2, s16 *, 8), 3);
        }
        goto loop_3;
    }
    temp_6 = M2C_FIELD(arg0, void **, 0x68);
    if (temp_6 != NULL) {
        temp_2_2 = M2C_FIELD(temp_6, void **, 0x94);
        M2C_FIELD((temp_2_2 + 8), M2C_UNK (**)(void *, M2C_UNK, void *), 4)(temp_6 + M2C_FIELD(temp_2_2, s16 *, 8), 3, temp_6);
        M2C_FIELD(arg0, void **, 0x68) = NULL;
    }
    temp_17 = arg0 + 0x4C;
    InternalInit__9VIGUIPage(arg0);
    M2C_FIELD(temp_17, M2C_UNK **, 0x14) = &D_01200690;
    if (M2C_FIELD(temp_17, s32 *, 0x10) != 0) {
        var_18 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x4C) > 0) {
            do {
                temp_16_2 = var_18 * 4;
                var_18 += 1;
                var_2 = temp_16_2 + M2C_FIELD(temp_17, s32 *, 0x10);
                temp_3 = *var_2;
                if (temp_3 != 0) {
                    __builtin_vec_delete(temp_3, M2C_FIELD(temp_17, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x4C));
                    var_2 = temp_16_2 + M2C_FIELD(temp_17, s32 *, 0x10);
                }
                *var_2 = 0;
            } while (var_18 < M2C_FIELD(arg0, s32 *, 0x4C));
        }
        if (M2C_FIELD(temp_17, s32 *, 0x10) != 0) {
            __builtin_vec_delete(M2C_FIELD(temp_17, s32 *, 0x10), M2C_FIELD(temp_17, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x4C));
        }
    }
    M2C_FIELD(temp_17, s32 *, 0x10) = 0;
    M2C_FIELD(temp_17, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 0x4C) = -1;
    M2C_FIELD(temp_17, s32 *, 8) = 0;
    M2C_FIELD(temp_17, s32 *, 0xC) = 0;
    ___t6VIList1ZP11VIGUIObject(temp_20, 2);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
