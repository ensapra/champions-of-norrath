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

M2C_UNK Close__10VIUIWindowb(void *, M2C_UNK);      /* extern */
M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(void *, s32, s32 *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, s32 *); /* extern */
M2C_UNK Open__10VIUIWindowb(void *, M2C_UNK);       /* extern */
M2C_UNK SetTitle__10VIUIWindowPCc(void *, M2C_UNK *); /* extern */
M2C_UNK SoundPlay__4VIUI11VIUISoundId(s32, M2C_UNK); /* extern */
s32 VIGetFeatureFlags__Fv();                        /* extern */
extern s32 D_01192C70;
extern M2C_UNK D_011D5430;

s32 Select__12VIWndOptions(void *arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 sp60;
    s32 sp64;
    s32 sp70;
    s32 sp74;
    s32 spA0;
    s32 spA4;
    s32 spB0;
    s32 spB4;
    s32 spE0;
    s32 spE4;
    s32 spF0;
    s32 spF4;
    M2C_UNK var_9;
    s32 *var_11;
    s32 *var_6;
    s32 *var_7;
    s32 temp_4;
    s32 var_2;
    void *temp_2;
    void *var_16;
    void *var_4;

    if (M2C_FIELD(arg0, s32 *, 0x478) == -1) {
        SoundPlay__4VIUI11VIUISoundId(D_01192C70, 8);
        M2C_FIELD(arg0, s32 *, 0x47C) = 0;
        temp_4 = M2C_FIELD(arg0, s32 *, 0x49C);
        if (temp_4 != 1) {
            if (temp_4 < 2) {
                if (temp_4 != 0) {
                    return 0;
                }
                var_16 = arg0 + 0x198;
                M2C_FIELD(arg0, s32 *, 0x478) = 0;
                Close__10VIUIWindowb(var_16, 1);
                var_11 = &sp30;
                var_6 = &sp20;
                sp20 = 0;
                var_7 = var_11;
                sp24 = 0;
                *var_11 = M2C_FIELD(arg0, s32 *, 0x34);
                var_9 = 6;
                var_4 = var_16;
                sp34 = M2C_FIELD((arg0 + 0x34), s32 *, 4);
                goto block_14;
            }
            if (temp_4 != 2) {
                var_2 = 1;
                if (temp_4 != 3) {
                    goto block_17;
                }
            } else {
                var_16 = arg0 + 0x198;
                M2C_FIELD(arg0, s32 *, 0x478) = temp_4;
                Close__10VIUIWindowb(var_16, 1);
                var_11 = &spF0;
                var_6 = &spE0;
                spE0 = 0;
                var_7 = var_11;
                spE4 = 0;
                *var_11 = M2C_FIELD(arg0, s32 *, 0x34);
                var_9 = 7;
                var_4 = var_16;
                spF4 = M2C_FIELD((arg0 + 0x34), s32 *, 4);
                goto block_14;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return var_2;
        }
        M2C_FIELD(arg0, s32 *, 0x478) = temp_4;
        var_16 = arg0 + 0x198;
        Close__10VIUIWindowb(var_16, 1);
        temp_2 = arg0 + 0x34;
        if (VIGetFeatureFlags__Fv() & 0x200) {
            var_11 = &sp70;
            var_6 = &sp60;
            var_7 = var_11;
            sp60 = 0;
            var_4 = var_16;
            sp64 = 0;
            *var_11 = M2C_FIELD(arg0, s32 *, 0x34);
            var_9 = 8;
            sp74 = M2C_FIELD(temp_2, s32 *, 4);
block_14:
            Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(var_4, D_01192C70, var_6, var_7, 0x1B8, var_9, 0, var_11);
        } else {
            spA0 = 0;
            spA4 = 0;
            spB0 = M2C_FIELD(arg0, s32 *, 0x34);
            spB4 = M2C_FIELD(temp_2, s32 *, 4);
            Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(var_16, D_01192C70, &spA0, &spB0, 0x1B8, 7, 0, &spB0);
        }
        Open__10VIUIWindowb(var_16, 0);
        SetTitle__10VIUIWindowPCc(var_16, &D_011D5430);
        goto block_17;
    }
    SoundPlay__4VIUI11VIUISoundId(D_01192C70, 9);
block_17:
    var_2 = 0;
    return var_2;
}
