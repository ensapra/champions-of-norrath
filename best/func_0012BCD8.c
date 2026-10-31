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
M2C_UNK func_0013BBD0();                            /* extern */
extern M2C_UNK UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D;
extern M2C_UNK helpMessageFrame__Fv;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_0012BCD8(s64 arg1) {
    s32 temp_17;
    s64 temp_16;

    temp_16 = (s64) (arg1 << 0x20) >> 0x20;
    temp_17 = temp_16 * 4;
    M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = (s32) *(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D + 0x98 + temp_17);
    func_0013BBD0();
    if (temp_16 != M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x2DC)) {
        func_0010B378(*(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D + 0x90 + temp_17), &shopItemSetAttributes__FiiPcPQ24item11description + 0x1738);
    }
}
