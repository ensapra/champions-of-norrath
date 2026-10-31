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

M2C_UNK Normalize__7VIVect3(void *);                /* extern */
s32 Update__8VICameraRC7VIVect3R7VIVect3N22R10VIMatrix44(void *, s32, void *, void *, void *, void *); /* extern */

s32 __cl__8VICameraR7VIVect3N31(void *arg0, s32 arg1, void *arg2, void *arg3, void *arg4) {
    void *temp_3;

    Normalize__7VIVect3(arg2);
    Normalize__7VIVect3(arg3);
    Normalize__7VIVect3(arg4);
    temp_3 = arg0 + 8;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg4, f32 *, 0);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg4, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg4, f32 *, 8);
    return (Update__8VICameraRC7VIVect3R7VIVect3N22R10VIMatrix44(arg0, arg1, arg2, arg3, arg4, arg0 + 0x70) >= 0) ? 0 : -1;
}
