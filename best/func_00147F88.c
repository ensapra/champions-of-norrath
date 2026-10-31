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

M2C_UNK func_001050A8(M2C_UNK *, s32, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_00105190(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK Update__19VIRadialFloraSystemRC7VIVect3;
extern M2C_UNK func_00147CD0;
extern M2C_UNK func_00147F58;

void func_00147F88(s32 arg0) {
    M2C_UNK sp10;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    M2C_UNK *spBC;
    M2C_UNK *spC0;
    s32 *temp_19;
    s32 *temp_21;
    s32 *var_30;
    s32 temp_2;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_6;
    s32 temp_lo;
    s32 var_16;
    s32 var_17;
    s32 var_18;

    temp_2 = arg0 * 4;
    temp_19 = &Update__19VIRadialFloraSystemRC7VIVect3 + 0x418 + temp_2;
    var_18 = 0;
    temp_21 = &Update__19VIRadialFloraSystemRC7VIVect3 + 0x420 + temp_2;
    var_30 = &Update__19VIRadialFloraSystemRC7VIVect3 + 0x3F0;
    var_17 = 0 - arg0;
    do {
        temp_5 = *var_30;
        var_16 = var_17;
        if (var_17 < 0) {
            var_16 = -var_16;
        }
        var_30 += 4;
        func_001050A8(&sp10, temp_5, 0, var_16 * 4, 0x5A, 0xA, 0, 0, 0, 0);
        temp_5_2 = var_16 * 2;
        sp90 = var_18;
        var_18 += 1;
        temp_6 = 6 - temp_5_2;
        if (var_16 == 0) {
            sp94 = 0;
            sp98 = 8;
            *temp_19 += 0xC;
        } else {
            temp_lo = 8 / var_17;
            *temp_19 = (*temp_19 - temp_5_2) + 0xA;
            *temp_21 += temp_lo;
            sp94 = temp_lo;
            sp98 = temp_6;
        }
        spBC = &func_00147CD0;
        spC0 = &func_00147F58;
        func_00105190(&sp10, temp_5_2, temp_6);
        var_17 = var_18 - arg0;
    } while (var_18 < 2);
}
