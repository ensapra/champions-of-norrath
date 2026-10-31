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

M2C_UNK func_0010B378(s32, void *);                 /* extern */
M2C_UNK func_00114948(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_001167E0(s32);                             /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_00138990(s32);                         /* extern */
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK func_00131120;
extern M2C_UNK helpMessageFrame__Fv;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00131198(void) {
    s32 temp_4;
    s32 var_17;
    void *temp_2;
    void *temp_2_2;

    var_17 = -1;
    func_0010B378(*(&Slerp__7VIQuatDRC7VIQuatDT1d + 0x28 + (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x384) * 4)), &jtbl_004C006C + 0xA544);
    switch (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x384)) { /* irregular */
    case 0:
        temp_2 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x370;
        if (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x370) != 0) {
            var_17 = 0;
        } else if (M2C_FIELD(temp_2, s32 *, 4) != 0) {
            var_17 = 1;
        } else if (M2C_FIELD(temp_2, s32 *, 8) != 0) {
            var_17 = 2;
        }
        break;
    case 1:
        temp_2_2 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x370;
        if (M2C_FIELD(temp_2_2, s32 *, 4) == 0) {
            if (M2C_FIELD(temp_2_2, s32 *, 8) == 0) {
                if (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x370) != 0) {
                    var_17 = 0;
                }
            } else {
            case 2:
                var_17 = 2;
            }
        } else {
            var_17 = 1;
        }
        break;
    }
    if (var_17 != -1) {
        temp_4 = *(&Slerp__7VIQuatDRC7VIQuatDT1d + 0x38 + (var_17 * 4));
        M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = temp_4;
        M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x384) = var_17;
        if (func_001167E0(temp_4) != 2) {
            return;
        }
        func_0010B378(*((M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x384) * 4) + (&Slerp__7VIQuatDRC7VIQuatDT1d + 0x28)), &shopItemSetAttributes__FiiPcPQ24item11description + 0x1748);
        func_00138990(M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
        return;
    }
    func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x47), &func_00131120, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
}
