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

M2C_UNK func_00111380(void *);                      /* extern */
M2C_UNK func_0012D5E8(M2C_UNK, void *, s32);        /* extern */
M2C_UNK func_0012D988(M2C_UNK, void *, s32);        /* extern */
M2C_UNK func_0013FA70(s32);                         /* extern */
extern M2C_UNK UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D;
extern M2C_UNK hudShowMsg__FPUsN20iii;
extern M2C_UNK runStats__Fii;

void func_0012D9E8(s32 arg0) {
    void *temp_5;

    func_00111380(&runStats__Fii + 0xE10);
    temp_5 = &runStats__Fii + 0xE04;
    M2C_FIELD(&runStats__Fii, s32 *, 0xE04) = -1;
    M2C_FIELD(&runStats__Fii, s32 *, 0xE08) = 0;
    M2C_FIELD(&UnitRotate__C7VIQuatDRC8VIVect3DR8VIVect3D, s32 *, 0xCC) = 0;
    if (M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0xAC) > 0) {
        func_0012D988(-1, temp_5, M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0xAC));
    } else {
        func_0012D5E8(-1, temp_5, M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0xAC));
    }
    func_0013FA70(arg0);
}
