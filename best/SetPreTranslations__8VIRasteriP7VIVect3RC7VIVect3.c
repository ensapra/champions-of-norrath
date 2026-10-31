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

M2C_UNK memcpy(void *, s32, s32, M2C_UNK);          /* extern */

s32 SetPreTranslations__8VIRasteriP7VIVect3RC7VIVect3(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    void *temp_3;

    temp_3 = arg0 + 0x49EC;
    M2C_FIELD(arg0, f32 *, 0x49EC) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x45E8) = 1;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg3, f32 *, 8);
    memcpy(arg0 + 0x49F8, arg2, arg1 * 0xC, 1);
    return 0;
}
