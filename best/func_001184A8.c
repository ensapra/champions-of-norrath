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

M2C_UNK func_001183C0(s32);                         /* extern */
extern M2C_UNK Decrement__12VIWndOptions;

void func_001184A8(s32 arg0) {
    M2C_UNK (*temp_2_2)(void *, s32, s32 *);
    s32 (*temp_2_3)(void *);
    s32 *temp_6;
    s32 temp_4;
    s32 temp_5;
    void *temp_16;
    void *temp_2;

    temp_5 = arg0 * 4;
    temp_6 = &Decrement__12VIWndOptions + 0x68 + temp_5;
    temp_2 = &Decrement__12VIWndOptions + 0x50 + (arg0 * 0x14);
    if (M2C_FIELD(temp_2, s32 *, 0xC) <= 0) {
        *(&Decrement__12VIWndOptions + 0x68 + temp_5) = -1;
    } else {
        temp_16 = M2C_FIELD(temp_2, void **, 0);
        temp_4 = M2C_FIELD(temp_16, s32 *, 0xC);
        M2C_FIELD(temp_16, s32 *, 0x10) = (s32) (M2C_FIELD(temp_16, s32 *, 0x10) + 1);
        if (temp_4 != *temp_6) {
            temp_2_2 = M2C_FIELD(temp_16, M2C_UNK (**)(void *, s32, s32 *), 0x14);
            *temp_6 = temp_4;
            if (temp_2_2 != NULL) {
                temp_2_2(temp_16, temp_5, temp_6);
            }
        }
        temp_2_3 = M2C_FIELD(temp_16, s32 (**)(void *), 0x18);
        if ((temp_2_3 != NULL) && (temp_2_3(temp_16) == 1)) {
            func_001183C0(arg0);
        }
    }
}
