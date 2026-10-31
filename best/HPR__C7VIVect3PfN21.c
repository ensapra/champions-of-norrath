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

f32 atan2f(f32, f32);                               /* extern */

void HPR__C7VIVect3PfN21(void *arg0, f32 *arg1, f32 *arg2, s32 *arg3) {
    f32 temp_f0;
    f32 temp_f13;

    *arg1 = atan2f(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 8));
    temp_f13 = M2C_FIELD(arg0, f32 *, 0);
    temp_f0 = M2C_FIELD(arg0, f32 *, 8);
    M2C_ERROR(/* unknown instruction: c1 0xd0344 */);
    *arg2 = -atan2f(M2C_FIELD(arg0, f32 *, 4), (temp_f13 * temp_f13) + (temp_f0 * temp_f0));
    *arg3 = 0;
}
