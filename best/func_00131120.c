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

M2C_UNK func_00138990(s32, void *);                 /* extern */
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK helpMessageFrame__Fv;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00131120(void) {
    s32 *var_3;
    s32 temp_3;
    void *temp_2;

    temp_2 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x370;
    var_3 = &helpMessageFrame__Fv + 0x384;
    if (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x370) == 0) {
        if (M2C_FIELD(temp_2, s32 *, 4) != 0) {
            M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x384) = 1;
        } else {
            var_3 = &helpMessageFrame__Fv + 0x384;
            if (M2C_FIELD(temp_2, s32 *, 8) != 0) {
                M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x384) = 2;
            } else {
                goto block_5;
            }
        }
    } else {
block_5:
        *var_3 = 0;
    }
    temp_3 = *(&Slerp__7VIQuatDRC7VIQuatDT1d + 0x38 + (*var_3 * 4));
    M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = temp_3;
    func_00138990(temp_3, &shopItemSetAttributes__FiiPcPQ24item11description + 0x16EC);
}
