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

extern M2C_UNK Decrement__12VIWndOptions;
extern M2C_UNK HUDRunFrame__Fv;

void func_0011C4F8(void) {
    u32 var_2;
    u32 var_3;
    u32 var_3_2;
    u32 var_3_3;
    u32 var_3_4;
    void *temp_4;

    M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x24) = (s32) M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x20);
    if (M2C_FIELD(&Decrement__12VIWndOptions, M2C_UNK (**)(void *, M2C_UNK), 0x1A8) != NULL) {
        M2C_FIELD(&Decrement__12VIWndOptions, M2C_UNK (**)(void *, M2C_UNK), 0x1A8)(&HUDRunFrame__Fv + 0x20, M2C_FIELD(&Decrement__12VIWndOptions, M2C_UNK (**)(void *, M2C_UNK), 0x1A8));
    } else {
        M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x20) = 0;
    }
    temp_4 = &HUDRunFrame__Fv + 0x38;
    if (M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x20) & 0x1000) {
        var_3 = M2C_FIELD(&HUDRunFrame__Fv, u32 *, 0x38) + 1;
    } else {
        var_3 = 0;
    }
    M2C_FIELD(&HUDRunFrame__Fv, u32 *, 0x38) = var_3;
    if (M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x20) & 0x4000) {
        var_3_2 = M2C_FIELD(temp_4, u32 *, 4) + 1;
    } else {
        var_3_2 = 0;
    }
    M2C_FIELD(temp_4, u32 *, 4) = var_3_2;
    if (M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x20) & 0x8000) {
        var_3_3 = M2C_FIELD(temp_4, u32 *, 8) + 1;
    } else {
        var_3_3 = 0;
    }
    M2C_FIELD(temp_4, u32 *, 8) = var_3_3;
    if (M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x20) & 0x2000) {
        var_3_4 = M2C_FIELD(temp_4, u32 *, 0xC) + 1;
    } else {
        var_3_4 = 0;
    }
    M2C_FIELD(temp_4, u32 *, 0xC) = var_3_4;
    if (M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x20) & 0x20) {
        var_2 = M2C_FIELD(temp_4, u32 *, 0x10) + 1;
    } else {
        var_2 = 0;
    }
    M2C_FIELD(temp_4, u32 *, 0x10) = var_2;
    if ((u32) M2C_FIELD(&HUDRunFrame__Fv, u32 *, 0x38) < 0x14U) {
        if ((u32) M2C_FIELD(temp_4, u32 *, 4) < 0x14U) {
            if ((u32) M2C_FIELD(temp_4, u32 *, 8) < 0x14U) {
                if ((u32) M2C_FIELD(temp_4, u32 *, 0xC) < 0x14U) {
                    if ((u32) M2C_FIELD(temp_4, u32 *, 0x10) >= 0x14U) {
                        M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x28) = 0x20;
                        return;
                    }
                    M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x28) = 0;
                    return;
                }
                M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x28) = 0x2000;
                return;
            }
            M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x28) = 0x8000;
            return;
        }
        M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x28) = 0x4000;
        return;
    }
    M2C_FIELD(&HUDRunFrame__Fv, s32 *, 0x28) = 0x1000;
}
