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

s32 func_001107E8(s32, void *, M2C_UNK, void *, void *); /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E420(s32, s32);                    /* extern */
extern M2C_UNK UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D;
extern M2C_UNK helpMessageFrame__Fv;

void func_0012BD58(void) {
    if ((M2C_FIELD(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D, s32 *, 0xAC) >= 0) && (M2C_FIELD(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D, s32 *, 0xAC) < 7)) {
        M2C_FIELD(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D, s32 *, 0x78) = func_001107E8(func_0011BA18(0xEB), &UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D + 0x80, 3, &UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D + 0xA0, &UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D + 0xA4);
        M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x2DC) = -1;
        M2C_FIELD(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D, s32 *, 0xA8) = 0;
    }
    func_0011E420(M2C_FIELD(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D, s32 *, 0xA0), M2C_FIELD(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D, s32 *, 0xA4));
    func_0011CEF0(M2C_FIELD(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D, s32 *, 0x78), M2C_FIELD(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D, s32 *, 0xAC), 0xA);
}
