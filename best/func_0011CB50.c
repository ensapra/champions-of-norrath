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

M2C_UNK func_0014D328(s32, s32);                    /* extern */
extern M2C_UNK Decrement__12VIWndOptions;
extern M2C_UNK HUDRunFrame__Fv;

void func_0011CB50(void *arg1) {
    M2C_UNK (*temp_2_2)(s32);
    s32 temp_16;
    s32 temp_18;
    s32 temp_2;
    s32 temp_3;

    temp_2 = M2C_FIELD(arg1, s32 *, 0x1C);
    temp_3 = M2C_FIELD(arg1, s32 *, 0xC);
    temp_18 = 0x80 - ((s32) (temp_2 << 7) / temp_3);
    temp_16 = 0xFF - ((s32) ((0xFF - M2C_FIELD(arg1, s32 *, 0x88)) * temp_2) / temp_3);
    func_0014D328(temp_16, 0x80);
    temp_2_2 = M2C_FIELD(*(&HUDRunFrame__Fv + 0x60 + (M2C_FIELD(arg1, s32 *, 0x84) * 4)), M2C_UNK (**)(s32), 0xC);
    if (temp_2_2 != NULL) {
        temp_2_2(temp_16);
    }
    if (M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x1BC) != 0) {
        func_0014D328(M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x1BC), temp_18);
    }
    if (M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x1C0) != 0) {
        func_0014D328(M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x1C0), temp_18);
    }
}
