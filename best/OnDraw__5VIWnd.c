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

s32 Begin__Ct5VISet1ZP5VIWnd(void *);               /* extern */
s32 End__Ct5VISet1ZP5VIWnd(void *);                 /* extern */
s32 Next__Ct5VISet1ZP5VIWndi(void *, s32);          /* extern */
M2C_UNK OnDrawSelf__10VIWndMcErr();                 /* extern */
extern M2C_UNK D_01190A20;

void OnDraw__5VIWnd(void *arg0) {
    s32 var_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_5;

    if (arg0 == &D_01190A20) {
        OnDrawSelf__10VIWndMcErr();
    } else {
        temp_2 = M2C_FIELD(arg0, void **, 0x20);
        M2C_FIELD((temp_2 + 0x18), M2C_UNK (**)(void *), 4)(arg0 + M2C_FIELD(temp_2, s16 *, 0x18));
    }
    var_2 = Begin__Ct5VISet1ZP5VIWnd(arg0);
loop_7:
    if (var_2 != End__Ct5VISet1ZP5VIWnd(arg0)) {
        temp_5 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 8) + (var_2 * 0x14)), void **, 0x10);
        if (M2C_FIELD(temp_5, s32 *, 0x1C) != 0) {
            temp_2_2 = M2C_FIELD(temp_5, void **, 0x20);
            M2C_FIELD((temp_2_2 + 0x10), M2C_UNK (**)(void *, void *), 4)(temp_5 + M2C_FIELD(temp_2_2, s16 *, 0x10), temp_5);
        }
        var_2 = Next__Ct5VISet1ZP5VIWndi(arg0, var_2);
        goto loop_7;
    }
}
