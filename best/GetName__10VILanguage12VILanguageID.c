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

M2C_UNK _VIAssert(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK D_0118EE78;
extern M2C_UNK D_011CD5E0;
extern M2C_UNK D_011CD618;

s32 GetName__10VILanguage12VILanguageID(u32 arg0) {
    if (arg0 >= 8U) {
        _VIAssert(&D_011CD5E0, &D_011CD618, 0x3B);
    }
    return *(&D_0118EE78 + (arg0 * 4));
}
