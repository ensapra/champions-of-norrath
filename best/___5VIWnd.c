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

s32 Begin__Ct5VISet1ZP5VIWnd();                     /* extern */
s32 End__Ct5VISet1ZP5VIWnd(void *);                 /* extern */
s32 Next__Ct5VISet1ZP5VIWndi(void *, s32);          /* extern */
M2C_UNK RemoveChild__5VIWndP5VIWnd(void *, void *); /* extern */
M2C_UNK ___t5VISet1ZP5VIWnd(void *, M2C_UNK);       /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
extern M2C_UNK D_0120AB60;

void ___5VIWnd(void *arg0, s32 arg1) {
    s32 temp_3;
    s32 var_17;
    void *temp_16;
    void *temp_2;

    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_0120AB60;
    var_17 = Begin__Ct5VISet1ZP5VIWnd();
loop_3:
    if (var_17 != End__Ct5VISet1ZP5VIWnd(arg0)) {
        temp_3 = var_17 * 5;
        var_17 = Next__Ct5VISet1ZP5VIWndi(arg0, var_17);
        temp_16 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 8) + (temp_3 * 4)), void **, 0x10);
        RemoveChild__5VIWndP5VIWnd(arg0, temp_16);
        if (temp_16 != NULL) {
            temp_2 = M2C_FIELD(temp_16, void **, 0x20);
            M2C_FIELD((temp_2 + 8), M2C_UNK (**)(void *, M2C_UNK), 4)(temp_16 + M2C_FIELD(temp_2, s16 *, 8), 3);
        }
        goto loop_3;
    }
    ___t5VISet1ZP5VIWnd(arg0, 2);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
