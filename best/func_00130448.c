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

M2C_UNK func_00130568(s32 *);                       /* extern */
s32 func_001A4174(s32, s32);                        /* extern */
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK hudShowMsg__FPUsN20iii;

void func_00130448(s32 arg0) {
    s32 *var_4;
    s32 temp_2;
    s32 temp_2_2;
    s32 var_16;
    s32 var_16_2;
    s32 var_3;
    s32 var_3_2;

    var_3 = 0;
    var_16 = 0;
loop_1:
    if (var_16 < M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0xB0)) {
        temp_2 = var_16 * 0x83;
        var_16 += 1;
        var_3 = 0;
        if (func_001A4174(M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0xA4) + (temp_2 * 4) + 0xC, arg0) == 0) {
            var_3 = 1;
        } else {
            goto loop_1;
        }
    }
    var_16_2 = 0;
    if (var_3 != 0) {
        var_3_2 = 0;
loop_6:
        if (var_16_2 < M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0xB4)) {
            temp_2_2 = var_16_2 * 0x83;
            var_16_2 += 1;
            var_3_2 = 0;
            if (func_001A4174(M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0xA8) + (temp_2_2 * 4) + 0xC, arg0 + 0x100) == 0) {
                var_3_2 = 1;
            } else {
                goto loop_6;
            }
        }
        var_4 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x3D0;
        if (var_3_2 == 0) {
            goto block_10;
        }
    } else {
block_10:
        var_4 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x3D0;
        *(&Slerp__7VIQuatDRC7VIQuatDT1d + 0x3D8 + (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x3D0) * 4)) = 1;
    }
    *var_4 += 1;
    func_00130568(var_4);
}
