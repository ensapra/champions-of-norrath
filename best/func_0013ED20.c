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

s32 func_00140020();                                /* extern */
M2C_UNK func_001403B8(s32, void *);                 /* extern */
s32 func_001404D0();                                /* extern */
M2C_UNK func_00140900(M2C_UNK, s32, s32);           /* extern */
extern M2C_UNK Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f;
extern M2C_UNK func_0013EDD8;
extern M2C_UNK hudShowMsg__FPUsN20iii;

s32 func_0013ED20(void *arg0) {
    s32 temp_2;
    s32 temp_4;

    if (func_00140020() != 0) {
        return 0;
    }
    temp_2 = func_001404D0();
    if (temp_2 != 0) {
        return 0;
    }
    temp_4 = M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0xC) - 1;
    if (M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0xC) > 0) {
        M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0xC) = temp_4;
        return temp_2;
    }
    func_001403B8(temp_4, &Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f + 0xC);
    func_00140900(1, M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0xA4) + (M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0x18) * 0x20C) + 0x10C, M2C_FIELD(&Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f, s32 *, 0x10));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_0013EDD8;
    return 0;
}
