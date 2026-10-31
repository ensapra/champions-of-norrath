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

s64 dpadd(s64, s64);                                /* extern */

void Add__11VIMatrix44DRC11VIMatrix44DT1(void *arg0, void *arg1, void *arg2) {
    void *sp0;
    s64 *sp4;
    s64 *sp8;
    s64 *temp_2;
    s64 *temp_3;
    void *temp_19;
    void *temp_20;
    void *temp_21;
    void *temp_22;
    void *temp_23;
    void *temp_30;

    temp_19 = arg1 + 0x20;
    temp_20 = arg2 + 0x20;
    temp_21 = arg0 + 0x20;
    temp_22 = arg2 + 0x40;
    temp_23 = arg1 + 0x40;
    temp_30 = arg0 + 0x40;
    temp_3 = arg2 + 0x60;
    M2C_FIELD(arg0, s64 *, 0) = dpadd(M2C_FIELD(arg1, s64 *, 0), M2C_FIELD(arg2, s64 *, 0));
    temp_2 = arg1 + 0x60;
    sp4 = temp_2;
    sp8 = temp_3;
    sp0 = arg0 + 0x60;
    M2C_FIELD(arg0, s64 *, 8) = dpadd(M2C_FIELD(arg1, s64 *, 8), M2C_FIELD(arg2, s64 *, 8));
    M2C_FIELD(arg0, s64 *, 0x10) = dpadd(M2C_FIELD(arg1, s64 *, 0x10), M2C_FIELD(arg2, s64 *, 0x10));
    M2C_FIELD(arg0, s64 *, 0x18) = dpadd(M2C_FIELD(arg1, s64 *, 0x18), M2C_FIELD(arg2, s64 *, 0x18));
    M2C_FIELD(arg0, s64 *, 0x20) = dpadd(M2C_FIELD(arg1, s64 *, 0x20), M2C_FIELD(arg2, s64 *, 0x20));
    M2C_FIELD(temp_21, s64 *, 8) = dpadd(M2C_FIELD(temp_19, s64 *, 8), M2C_FIELD(temp_20, s64 *, 8));
    M2C_FIELD(temp_21, s64 *, 0x10) = dpadd(M2C_FIELD(temp_19, s64 *, 0x10), M2C_FIELD(temp_20, s64 *, 0x10));
    M2C_FIELD(temp_21, s64 *, 0x18) = dpadd(M2C_FIELD(temp_19, s64 *, 0x18), M2C_FIELD(temp_20, s64 *, 0x18));
    M2C_FIELD(arg0, s64 *, 0x40) = dpadd(M2C_FIELD(arg1, s64 *, 0x40), M2C_FIELD(arg2, s64 *, 0x40));
    M2C_FIELD(temp_30, s64 *, 8) = dpadd(M2C_FIELD(temp_23, s64 *, 8), M2C_FIELD(temp_22, s64 *, 8));
    M2C_FIELD(temp_30, s64 *, 0x10) = dpadd(M2C_FIELD(temp_23, s64 *, 0x10), M2C_FIELD(temp_22, s64 *, 0x10));
    M2C_FIELD(temp_30, s64 *, 0x18) = dpadd(M2C_FIELD(temp_23, s64 *, 0x18), M2C_FIELD(temp_22, s64 *, 0x18));
    M2C_FIELD(sp0, s64 *, 0) = dpadd(*sp4, *sp8);
    M2C_FIELD(sp0, s64 *, 8) = dpadd(M2C_FIELD(temp_2, s64 *, 8), M2C_FIELD(temp_3, s64 *, 8));
    M2C_FIELD(sp0, s64 *, 0x10) = dpadd(M2C_FIELD(temp_2, s64 *, 0x10), M2C_FIELD(temp_3, s64 *, 0x10));
    M2C_FIELD(sp0, s64 *, 0x18) = dpadd(M2C_FIELD(temp_2, s64 *, 0x18), M2C_FIELD(temp_3, s64 *, 0x18));
}
